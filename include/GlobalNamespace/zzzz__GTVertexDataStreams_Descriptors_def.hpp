#pragma once
// IWYU pragma private; include "GlobalNamespace/GTVertexDataStreams_Descriptors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GTVertexDataStreams_Descriptors)
namespace GlobalNamespace {
struct Mesh_MeshData;
}
// Forward declare root types
namespace GlobalNamespace {
class GTVertexDataStreams_Descriptors;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTVertexDataStreams_Descriptors*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTVertexDataStreams_Descriptors*, "", "GTVertexDataStreams_Descriptors");
// Dependencies System.Object, UnityEngine.Rendering.VertexAttributeDescriptor
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTVertexDataStreams_Descriptors
class CORDL_TYPE GTVertexDataStreams_Descriptors : public ::System::Object {
public:
// Declarations
/// @brief Field color, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_color, put=setStaticF_color)) ::UnityEngine::Rendering::VertexAttributeDescriptor  color;

/// @brief Field lightmapUv, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_lightmapUv, put=setStaticF_lightmapUv)) ::UnityEngine::Rendering::VertexAttributeDescriptor  lightmapUv;

/// @brief Field normal, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_normal, put=setStaticF_normal)) ::UnityEngine::Rendering::VertexAttributeDescriptor  normal;

/// @brief Field position, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_position, put=setStaticF_position)) ::UnityEngine::Rendering::VertexAttributeDescriptor  position;

/// @brief Field tangent, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_tangent, put=setStaticF_tangent)) ::UnityEngine::Rendering::VertexAttributeDescriptor  tangent;

/// @brief Field uv1, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_uv1, put=setStaticF_uv1)) ::UnityEngine::Rendering::VertexAttributeDescriptor  uv1;

/// @brief Method DoSetVertexBufferParams, addr 0x569b6c4, size 0x140, virtual false, abstract: false, final false
static inline void DoSetVertexBufferParams(::by_ref<::GlobalNamespace::Mesh_MeshData>  writeData, int32_t  totalVertexCount) ;

static inline ::UnityEngine::Rendering::VertexAttributeDescriptor getStaticF_color() ;

static inline ::UnityEngine::Rendering::VertexAttributeDescriptor getStaticF_lightmapUv() ;

static inline ::UnityEngine::Rendering::VertexAttributeDescriptor getStaticF_normal() ;

static inline ::UnityEngine::Rendering::VertexAttributeDescriptor getStaticF_position() ;

static inline ::UnityEngine::Rendering::VertexAttributeDescriptor getStaticF_tangent() ;

static inline ::UnityEngine::Rendering::VertexAttributeDescriptor getStaticF_uv1() ;

static inline void setStaticF_color(::UnityEngine::Rendering::VertexAttributeDescriptor  value) ;

static inline void setStaticF_lightmapUv(::UnityEngine::Rendering::VertexAttributeDescriptor  value) ;

static inline void setStaticF_normal(::UnityEngine::Rendering::VertexAttributeDescriptor  value) ;

static inline void setStaticF_position(::UnityEngine::Rendering::VertexAttributeDescriptor  value) ;

static inline void setStaticF_tangent(::UnityEngine::Rendering::VertexAttributeDescriptor  value) ;

static inline void setStaticF_uv1(::UnityEngine::Rendering::VertexAttributeDescriptor  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTVertexDataStreams_Descriptors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTVertexDataStreams_Descriptors", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTVertexDataStreams_Descriptors(GTVertexDataStreams_Descriptors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTVertexDataStreams_Descriptors", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTVertexDataStreams_Descriptors(GTVertexDataStreams_Descriptors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{912};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTVertexDataStreams_Descriptors) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
