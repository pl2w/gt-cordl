#pragma once
// IWYU pragma private; include "Drawing/GeometryBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GeometryBuilder)
namespace Drawing {
class DrawingData;
}
namespace GlobalNamespace {
struct DrawingData_MeshWithType;
}
namespace GlobalNamespace {
struct GeometryBuilder_CameraInfo;
}
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_MeshBuffers;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeAppendBuffer;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace Drawing {
class GeometryBuilder;
}
// Write type traits
MARK_REF_T(::Drawing::GeometryBuilder*);
DEFINE_IL2CPP_CLASS(::Drawing::GeometryBuilder*, "Drawing", "GeometryBuilder");
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.GeometryBuilder
class CORDL_TYPE GeometryBuilder : public ::System::Object {
public:
// Declarations
using CameraInfo = ::GlobalNamespace::GeometryBuilder_CameraInfo;

/// @brief Method AssignMeshData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename VertexType>
requires(::cordl_internals::value_type_constraint<VertexType> && ::cordl_internals::default_constructor_constraint<VertexType>)
static inline ::UnityW<::UnityEngine::Mesh> AssignMeshData(::Drawing::DrawingData*  gizmos, ::UnityEngine::Bounds  bounds, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  vertices, ::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  triangles, ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  layout) ;

/// @brief Method Build, addr 0x55cf05c, size 0x258, virtual false, abstract: false, final false
static inline ::Unity::Jobs::JobHandle Build(::Drawing::DrawingData*  gizmos, ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*  buffers, ::by_ref<::GlobalNamespace::GeometryBuilder_CameraInfo>  cameraInfo, ::Unity::Jobs::JobHandle  dependency) ;

/// @brief Method BuildMesh, addr 0x55cf584, size 0x3f0, virtual false, abstract: false, final false
static inline void BuildMesh(::Drawing::DrawingData*  gizmos, ::System::Collections::Generic::List_1<::GlobalNamespace::DrawingData_MeshWithType>*  meshes, ::GlobalNamespace::ProcessedBuilderData_DrawingData_MeshBuffers*  inputBuffers) ;

/// @brief Method CameraDepthToPixelSize, addr 0x55d50d0, size 0x9c, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::float2 CameraDepthToPixelSize(::UnityEngine::Camera*  camera) ;

/// @brief Method ConvertExistingDataToNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::Unity::Collections::NativeArray_1<T> ConvertExistingDataToNativeArray(::Unity::Collections::LowLevel::Unsafe::UnsafeAppendBuffer  data) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeometryBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeometryBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeometryBuilder(GeometryBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeometryBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeometryBuilder(GeometryBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::GeometryBuilder) == 0x10, "Size mismatch!");

} // namespace end def Drawing
