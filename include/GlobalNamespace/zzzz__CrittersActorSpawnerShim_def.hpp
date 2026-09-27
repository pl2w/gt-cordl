#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorSpawnerShim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersActorSpawnerShim)
namespace Critters::Scripts {
class CrittersActorSpawner;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CrittersActorSpawnerShim;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersActorSpawnerShim*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActorSpawnerShim*, "", "CrittersActorSpawnerShim");
// Dependencies CrittersActor::CrittersActorType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersActorSpawnerShim
class CORDL_TYPE CrittersActorSpawnerShim : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field actorType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorType, put=__cordl_internal_set_actorType)) ::GlobalNamespace::CrittersActor_CrittersActorType  actorType;

/// @brief Field applyImpulseOnSpawn, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyImpulseOnSpawn, put=__cordl_internal_set_applyImpulseOnSpawn)) bool  applyImpulseOnSpawn;

/// @brief Field attachSpawnedObjectToSpawnLocation, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachSpawnedObjectToSpawnLocation, put=__cordl_internal_set_attachSpawnedObjectToSpawnLocation)) bool  attachSpawnedObjectToSpawnLocation;

/// @brief Field colliderTrigger, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderTrigger, put=__cordl_internal_set_colliderTrigger)) ::UnityW<::UnityEngine::BoxCollider>  colliderTrigger;

/// @brief Field insideSpawnerBounds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_insideSpawnerBounds, put=__cordl_internal_set_insideSpawnerBounds)) ::UnityW<::UnityEngine::BoxCollider>  insideSpawnerBounds;

/// @brief Field spawnDelay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnDelay, put=__cordl_internal_set_spawnDelay)) int32_t  spawnDelay;

/// @brief Field spawnerPointTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnerPointTransform, put=__cordl_internal_set_spawnerPointTransform)) ::UnityW<::UnityEngine::Transform>  spawnerPointTransform;

/// @brief Field subActorIndex, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_subActorIndex, put=__cordl_internal_set_subActorIndex)) int32_t  subActorIndex;

/// [ContextMenu("Copy Spawner Data To Shim")]
/// @brief Method CopySpawnerDataInPrefab, addr 0x55fb2b4, size 0x16c, virtual false, abstract: false, final false
inline ::UnityW<::Critters::Scripts::CrittersActorSpawner> CopySpawnerDataInPrefab() ;

static inline ::GlobalNamespace::CrittersActorSpawnerShim* New_ctor() ;

/// [ContextMenu("Replace Spawner With Shim")]
/// @brief Method ReplaceSpawnerWithShim, addr 0x55fb420, size 0x108, virtual false, abstract: false, final false
inline void ReplaceSpawnerWithShim() ;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& __cordl_internal_get_actorType() const;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& __cordl_internal_get_actorType() ;

constexpr bool const& __cordl_internal_get_applyImpulseOnSpawn() const;

constexpr bool& __cordl_internal_get_applyImpulseOnSpawn() ;

constexpr bool const& __cordl_internal_get_attachSpawnedObjectToSpawnLocation() const;

constexpr bool& __cordl_internal_get_attachSpawnedObjectToSpawnLocation() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_colliderTrigger() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_colliderTrigger() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_insideSpawnerBounds() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_insideSpawnerBounds() ;

constexpr int32_t const& __cordl_internal_get_spawnDelay() const;

constexpr int32_t& __cordl_internal_get_spawnDelay() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnerPointTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnerPointTransform() ;

constexpr int32_t const& __cordl_internal_get_subActorIndex() const;

constexpr int32_t& __cordl_internal_get_subActorIndex() ;

constexpr void __cordl_internal_set_actorType(::GlobalNamespace::CrittersActor_CrittersActorType  value) ;

constexpr void __cordl_internal_set_applyImpulseOnSpawn(bool  value) ;

constexpr void __cordl_internal_set_attachSpawnedObjectToSpawnLocation(bool  value) ;

constexpr void __cordl_internal_set_colliderTrigger(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_insideSpawnerBounds(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_spawnDelay(int32_t  value) ;

constexpr void __cordl_internal_set_spawnerPointTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_subActorIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x55fb528, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersActorSpawnerShim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSpawnerShim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActorSpawnerShim(CrittersActorSpawnerShim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSpawnerShim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActorSpawnerShim(CrittersActorSpawnerShim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{81};

/// @brief Field spawnerPointTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnerPointTransform;

/// @brief Field actorType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  ___actorType;

/// @brief Field subActorIndex, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___subActorIndex;

/// @brief Field insideSpawnerBounds, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___insideSpawnerBounds;

/// @brief Field spawnDelay, offset: 0x38, size: 0x4, def value: None
 int32_t  ___spawnDelay;

/// @brief Field applyImpulseOnSpawn, offset: 0x3c, size: 0x1, def value: None
 bool  ___applyImpulseOnSpawn;

/// @brief Field attachSpawnedObjectToSpawnLocation, offset: 0x3d, size: 0x1, def value: None
 bool  ___attachSpawnedObjectToSpawnLocation;

/// @brief Field colliderTrigger, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___colliderTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___spawnerPointTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___actorType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___subActorIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___insideSpawnerBounds) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___spawnDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___applyImpulseOnSpawn) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___attachSpawnedObjectToSpawnLocation) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorSpawnerShim, ___colliderTrigger) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActorSpawnerShim) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
