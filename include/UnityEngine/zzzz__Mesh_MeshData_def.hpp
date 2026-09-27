#pragma once
// IWYU pragma private; include "UnityEngine/Mesh_MeshData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Mesh_MeshData)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct Mesh_MeshData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Mesh_MeshData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Mesh_MeshData, "UnityEngine", "Mesh/MeshData");
// [StaticAccessor("MeshDataBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [NativeHeader("Runtime/Graphics/Mesh/MeshScriptBindings.h")]
// Dependencies System.IntPtr
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Mesh/MeshData
struct CORDL_TYPE Mesh_MeshData {
public:
// Declarations
 __declspec(property(get=get_indexFormat)) ::UnityEngine::Rendering::IndexFormat  indexFormat;

 __declspec(property(get=get_lodCount)) int32_t  lodCount;

 __declspec(property(get=get_subMeshCount, put=set_subMeshCount)) int32_t  subMeshCount;

 __declspec(property(get=get_vertexBufferCount)) int32_t  vertexBufferCount;

 __declspec(property(get=get_vertexCount)) int32_t  vertexCount;

/// @brief Method CopyAttributeInto, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void CopyAttributeInto(::Unity::Collections::NativeArray_1<T>  buffer, ::UnityEngine::Rendering::VertexAttribute  channel, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method CopyAttributeIntoPtr, addr 0xb5aff04, size 0x6c, virtual false, abstract: false, final false
static inline void CopyAttributeIntoPtr(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr, ::UnityEngine::Rendering::VertexAttributeFormat  format, int32_t  dim, ::System::IntPtr  dst) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method CopyIndicesIntoPtr, addr 0xb5aff70, size 0x74, virtual false, abstract: false, final false
static inline void CopyIndicesIntoPtr(::System::IntPtr  self, int32_t  submesh, int32_t  meshLod, bool  applyBaseVertex, int32_t  dstStride, ::System::IntPtr  dst) ;

/// @brief Method GetColors, addr 0xb5b0718, size 0x6c, virtual false, abstract: false, final false
inline void GetColors(::Unity::Collections::NativeArray_1<::UnityEngine::Color>  outColors) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetIndexCount, addr 0xb5b0020, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetIndexCount(::System::IntPtr  self, int32_t  submesh, int32_t  meshlod) ;

/// @brief Method GetIndexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetIndexData() ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetIndexDataPtr, addr 0xb5b0074, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetIndexDataPtr(::System::IntPtr  self) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetIndexDataSize, addr 0xb5b00b0, size 0x3c, virtual false, abstract: false, final false
static inline uint64_t GetIndexDataSize(::System::IntPtr  self) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetIndexFormat, addr 0xb5affe4, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::IndexFormat GetIndexFormat(::System::IntPtr  self) ;

/// @brief Method GetIndices, addr 0xb5b0d18, size 0xc, virtual false, abstract: false, final false
inline void GetIndices(::Unity::Collections::NativeArray_1<int32_t>  outIndices, int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// @brief Method GetIndices, addr 0xb5b0d24, size 0x2c8, virtual false, abstract: false, final false
inline void GetIndices(::Unity::Collections::NativeArray_1<int32_t>  outIndices, int32_t  submesh, int32_t  meshlod, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// @brief Method GetIndices, addr 0xb5b09cc, size 0xc, virtual false, abstract: false, final false
inline void GetIndices(::Unity::Collections::NativeArray_1<uint16_t>  outIndices, int32_t  submesh, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// @brief Method GetIndices, addr 0xb5b09d8, size 0x2c8, virtual false, abstract: false, final false
inline void GetIndices(::Unity::Collections::NativeArray_1<uint16_t>  outIndices, int32_t  submesh, int32_t  meshlod, /* [DefaultValue("true")] */ bool  applyBaseVertex) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetLodCount, addr 0xb5b0128, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetLodCount(::System::IntPtr  self) ;

/// @brief Method GetNormals, addr 0xb5b0640, size 0x6c, virtual false, abstract: false, final false
inline void GetNormals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  outNormals) ;

/// @brief Method GetSubMesh, addr 0xb5b1030, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t  index) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method GetSubMesh, addr 0xb5b0164, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(::System::IntPtr  self, int32_t  index) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetSubMeshCount, addr 0xb5b00ec, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetSubMeshCount(::System::IntPtr  self) ;

/// @brief Method GetSubMesh_Injected, addr 0xb5b01e0, size 0x54, virtual false, abstract: false, final false
static inline void GetSubMesh_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  ret) ;

/// @brief Method GetTangents, addr 0xb5b06ac, size 0x6c, virtual false, abstract: false, final false
inline void GetTangents(::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>  outTangents) ;

/// @brief Method GetUVs, addr 0xb5b0784, size 0x104, virtual false, abstract: false, final false
inline void GetUVs(int32_t  channel, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  outUVs) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetVertexBufferCount, addr 0xb5afe40, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetVertexBufferCount(::System::IntPtr  self) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetVertexCount, addr 0xb5afe04, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetVertexCount(::System::IntPtr  self) ;

/// @brief Method GetVertexData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline ::Unity::Collections::NativeArray_1<T> GetVertexData(/* [DefaultValue("0")] */ int32_t  stream) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetVertexDataPtr, addr 0xb5afe7c, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetVertexDataPtr(::System::IntPtr  self, int32_t  stream) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method GetVertexDataSize, addr 0xb5afec0, size 0x44, virtual false, abstract: false, final false
static inline uint64_t GetVertexDataSize(::System::IntPtr  self, int32_t  stream) ;

/// @brief Method GetVertices, addr 0xb5b05d4, size 0x6c, virtual false, abstract: false, final false
inline void GetVertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  outVertices) ;

/// @brief Method HasVertexAttribute, addr 0xb5b0590, size 0x44, virtual false, abstract: false, final false
inline bool HasVertexAttribute(::UnityEngine::Rendering::VertexAttribute  attr) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method HasVertexAttribute, addr 0xb5afdc0, size 0x44, virtual false, abstract: false, final false
static inline bool HasVertexAttribute(::System::IntPtr  self, ::UnityEngine::Rendering::VertexAttribute  attr) ;

/// @brief Method SetIndexBufferParams, addr 0xb5b093c, size 0x54, virtual false, abstract: false, final false
inline void SetIndexBufferParams(int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  format) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method SetIndexBufferParamsImpl, addr 0xb5b03c8, size 0x54, virtual false, abstract: false, final false
static inline void SetIndexBufferParamsImpl(::System::IntPtr  self, int32_t  indexCount, ::UnityEngine::Rendering::IndexFormat  indexFormat) ;

/// @brief Method SetSubMesh, addr 0xb5b10bc, size 0x74, virtual false, abstract: false, final false
inline void SetSubMesh(int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method SetSubMeshCount, addr 0xb5b041c, size 0x44, virtual false, abstract: false, final false
static inline void SetSubMeshCount(::System::IntPtr  self, int32_t  count) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method SetSubMeshImpl, addr 0xb5b0460, size 0x5c, virtual false, abstract: false, final false
static inline void SetSubMeshImpl(::System::IntPtr  self, int32_t  index, ::UnityEngine::Rendering::SubMeshDescriptor  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetSubMeshImpl_Injected, addr 0xb5b04bc, size 0x5c, virtual false, abstract: false, final false
static inline void SetSubMeshImpl_Injected(::System::IntPtr  self, int32_t  index, ::by_ref<::UnityEngine::Rendering::SubMeshDescriptor>  desc, ::UnityEngine::Rendering::MeshUpdateFlags  flags) ;

/// @brief Method SetVertexBufferParams, addr 0xb5b0888, size 0x8, virtual false, abstract: false, final false
inline void SetVertexBufferParams(int32_t  vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method SetVertexBufferParams, addr 0xb5b0890, size 0xac, virtual false, abstract: false, final false
inline void SetVertexBufferParams(int32_t  vertexCount, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method SetVertexBufferParamsFromArray, addr 0xb5b0290, size 0xe4, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromArray(::System::IntPtr  self, int32_t  vertexCount, /* [ParamArray] */ ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  attributes) ;

/// @brief Method SetVertexBufferParamsFromArray_Injected, addr 0xb5b0374, size 0x54, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromArray_Injected(::System::IntPtr  self, int32_t  vertexCount, /* [ParamArray] */ ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attributes) ;

/// [NativeMethod(IsThreadSafe = true, ThrowsException = true)]
/// @brief Method SetVertexBufferParamsFromPtr, addr 0xb5b0234, size 0x5c, virtual false, abstract: false, final false
static inline void SetVertexBufferParamsFromPtr(::System::IntPtr  self, int32_t  vertexCount, ::System::IntPtr  attributesPtr, int32_t  attributesCount) ;

/// @brief Method get_indexFormat, addr 0xb5b0990, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::IndexFormat get_indexFormat() ;

/// @brief Method get_lodCount, addr 0xb5b0cdc, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_lodCount() ;

/// @brief Method get_subMeshCount, addr 0xb5b0ca0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_subMeshCount() ;

/// @brief Method get_vertexBufferCount, addr 0xb5b0554, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_vertexBufferCount() ;

/// @brief Method get_vertexCount, addr 0xb5b0518, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_vertexCount() ;

/// @brief Method set_subMeshCount, addr 0xb5b0fec, size 0x44, virtual false, abstract: false, final false
inline void set_subMeshCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Mesh_MeshData() ;

// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }]
constexpr Mesh_MeshData(::System::IntPtr  m_Ptr) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [NativeDisableUnsafePtrRestriction]
/// @brief Field m_Ptr, offset: 0x0, size: 0x8, def value: None
 ::System::IntPtr  m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Mesh_MeshData, m_Ptr) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Mesh_MeshData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
