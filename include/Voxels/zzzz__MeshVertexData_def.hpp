#pragma once
// IWYU pragma private; include "Voxels/MeshVertexData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MeshVertexData)
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::Mathematics {
struct float4;
}
// Forward declare root types
namespace Voxels {
struct MeshVertexData;
}
// Write type traits
MARK_VAL_T(::Voxels::MeshVertexData);
DEFINE_IL2CPP_CLASS(::Voxels::MeshVertexData, "Voxels", "MeshVertexData");
// Dependencies Unity.Mathematics.float3, Unity.Mathematics.float4, UnityEngine.Rendering.VertexAttributeDescriptor
namespace Voxels {
// Is value type: true
// CS Name: Voxels.MeshVertexData
struct CORDL_TYPE MeshVertexData {
public:
// Declarations
/// @brief Field VertexBufferMemoryLayout, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexBufferMemoryLayout, put=setStaticF_VertexBufferMemoryLayout)) ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  VertexBufferMemoryLayout;

/// @brief Method ToString, addr 0x5dafb50, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5dafb24, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float4  tangent, ::Unity::Mathematics::float4  materials, ::Unity::Mathematics::float4  blend) ;

static inline ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> getStaticF_VertexBufferMemoryLayout() ;

static inline void setStaticF_VertexBufferMemoryLayout(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr MeshVertexData() ;

// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "normal", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangent", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "materials", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "blend", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
constexpr MeshVertexData(::Unity::Mathematics::float3  position, ::Unity::Mathematics::float3  normal, ::Unity::Mathematics::float4  tangent, ::Unity::Mathematics::float4  materials, ::Unity::Mathematics::float4  blend) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5013};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field position, offset: 0x0, size: 0xc, def value: None
 ::Unity::Mathematics::float3  position;

/// @brief Field normal, offset: 0xc, size: 0xc, def value: None
 ::Unity::Mathematics::float3  normal;

/// @brief Field tangent, offset: 0x18, size: 0x10, def value: None
 ::Unity::Mathematics::float4  tangent;

/// @brief Field materials, offset: 0x28, size: 0x10, def value: None
 ::Unity::Mathematics::float4  materials;

/// @brief Field blend, offset: 0x38, size: 0x10, def value: None
 ::Unity::Mathematics::float4  blend;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Voxels::MeshVertexData, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Voxels::MeshVertexData, normal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Voxels::MeshVertexData, tangent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Voxels::MeshVertexData, materials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::MeshVertexData, blend) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Voxels::MeshVertexData) == 0x48, "Size mismatch!");

} // namespace end def Voxels
