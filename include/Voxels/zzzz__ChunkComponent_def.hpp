#pragma once
// IWYU pragma private; include "Voxels/ChunkComponent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ChunkComponent)
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class ChunkComponent;
}
// Write type traits
MARK_REF_T(::Voxels::ChunkComponent*);
DEFINE_IL2CPP_CLASS(::Voxels::ChunkComponent*, "Voxels", "ChunkComponent");
// [RequireComponent(typeof(UnityEngine.MeshFilter))]
// [RequireComponent(typeof(UnityEngine.MeshRenderer))]
// [RequireComponent(typeof(UnityEngine.MeshCollider))]
// Dependencies UnityEngine.MonoBehaviour
namespace Voxels {
// Is value type: false
// CS Name: Voxels.ChunkComponent
class CORDL_TYPE ChunkComponent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_World, put=set_World)) ::UnityW<::Voxels::VoxelWorld>  World;

/// @brief Field <World>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__World_k__BackingField, put=__cordl_internal_set__World_k__BackingField)) ::UnityW<::Voxels::VoxelWorld>  _World_k__BackingField;

/// @brief Field meshCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshCollider, put=__cordl_internal_set_meshCollider)) ::UnityW<::UnityEngine::MeshCollider>  meshCollider;

/// @brief Field meshFilter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshFilter, put=__cordl_internal_set_meshFilter)) ::UnityW<::UnityEngine::MeshFilter>  meshFilter;

/// @brief Field meshRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshRenderer, put=__cordl_internal_set_meshRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  meshRenderer;

static inline ::Voxels::ChunkComponent* New_ctor() ;

/// @brief Method Reset, addr 0x5dac268, size 0xc0, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::UnityW<::Voxels::VoxelWorld> const& __cordl_internal_get__World_k__BackingField() const;

constexpr ::UnityW<::Voxels::VoxelWorld>& __cordl_internal_get__World_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_meshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_meshCollider() ;

constexpr ::UnityW<::UnityEngine::MeshFilter> const& __cordl_internal_get_meshFilter() const;

constexpr ::UnityW<::UnityEngine::MeshFilter>& __cordl_internal_get_meshFilter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_meshRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_meshRenderer() ;

constexpr void __cordl_internal_set__World_k__BackingField(::UnityW<::Voxels::VoxelWorld>  value) ;

constexpr void __cordl_internal_set_meshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_meshFilter(::UnityW<::UnityEngine::MeshFilter>  value) ;

constexpr void __cordl_internal_set_meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x5dac328, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_World, addr 0x5dac258, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Voxels::VoxelWorld> get_World() ;

/// [CompilerGenerated]
/// @brief Method set_World, addr 0x5dac260, size 0x8, virtual false, abstract: false, final false
inline void set_World(::Voxels::VoxelWorld*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChunkComponent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChunkComponent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChunkComponent(ChunkComponent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChunkComponent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChunkComponent(ChunkComponent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5003};

/// @brief Field meshFilter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshFilter>  ___meshFilter;

/// @brief Field meshRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___meshRenderer;

/// @brief Field meshCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___meshCollider;

/// [CompilerGenerated]
/// @brief Field <World>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelWorld>  ____World_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::ChunkComponent, ___meshFilter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkComponent, ___meshRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkComponent, ___meshCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::ChunkComponent, ____World_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Voxels::ChunkComponent) == 0x40, "Size mismatch!");

} // namespace end def Voxels
