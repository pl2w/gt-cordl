#pragma once
// IWYU pragma private; include "Critters/Scripts/CrittersActorSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CrittersActor_CrittersActorType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersActorSpawner)
namespace GlobalNamespace {
class CrittersActorSpawnerPoint;
}
namespace GlobalNamespace {
class CrittersActor;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace Critters::Scripts {
class CrittersActorSpawner;
}
// Write type traits
MARK_REF_T(::Critters::Scripts::CrittersActorSpawner*);
DEFINE_IL2CPP_CLASS(::Critters::Scripts::CrittersActorSpawner*, "Critters.Scripts", "CrittersActorSpawner");
// Dependencies CrittersActor::CrittersActorType, UnityEngine.MonoBehaviour
namespace Critters::Scripts {
// Is value type: false
// CS Name: Critters.Scripts.CrittersActorSpawner
class CORDL_TYPE CrittersActorSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field actorType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_actorType, put=__cordl_internal_set_actorType)) ::GlobalNamespace::CrittersActor_CrittersActorType  actorType;

/// @brief Field applyImpulseOnSpawn, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyImpulseOnSpawn, put=__cordl_internal_set_applyImpulseOnSpawn)) bool  applyImpulseOnSpawn;

/// @brief Field attachSpawnedObjectToSpawnLocation, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get_attachSpawnedObjectToSpawnLocation, put=__cordl_internal_set_attachSpawnedObjectToSpawnLocation)) bool  attachSpawnedObjectToSpawnLocation;

/// @brief Field currentSpawnedObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSpawnedObject, put=__cordl_internal_set_currentSpawnedObject)) ::UnityW<::GlobalNamespace::CrittersActor>  currentSpawnedObject;

/// @brief Field insideSpawnerCheck, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_insideSpawnerCheck, put=__cordl_internal_set_insideSpawnerCheck)) ::UnityW<::UnityEngine::Collider>  insideSpawnerCheck;

/// @brief Field nextSpawnTime, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSpawnTime, put=__cordl_internal_set_nextSpawnTime)) double_t  nextSpawnTime;

/// @brief Field spawnDelay, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnDelay, put=__cordl_internal_set_spawnDelay)) int32_t  spawnDelay;

/// @brief Field spawnPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPoint, put=__cordl_internal_set_spawnPoint)) ::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint>  spawnPoint;

/// @brief Field subActorIndex, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_subActorIndex, put=__cordl_internal_set_subActorIndex)) int32_t  subActorIndex;

/// @brief Method Awake, addr 0x5ddd10c, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoReset, addr 0x5ddd8e8, size 0xc, virtual false, abstract: false, final false
inline void DoReset() ;

/// @brief Method HandleSpawnedActor, addr 0x5ddd8f4, size 0x8, virtual false, abstract: false, final false
inline void HandleSpawnedActor(::GlobalNamespace::CrittersActor*  spawnedActor) ;

static inline ::Critters::Scripts::CrittersActorSpawner* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ddd2b8, size 0xc8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ddd19c, size 0x11c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessLocal, addr 0x5ddd380, size 0x218, virtual false, abstract: false, final false
inline void ProcessLocal() ;

/// @brief Method SpawnActor, addr 0x5ddd598, size 0x234, virtual false, abstract: false, final false
inline void SpawnActor() ;

/// @brief Method VerifySpawnAttached, addr 0x5ddd7cc, size 0x11c, virtual false, abstract: false, final false
inline bool VerifySpawnAttached() ;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType const& __cordl_internal_get_actorType() const;

constexpr ::GlobalNamespace::CrittersActor_CrittersActorType& __cordl_internal_get_actorType() ;

constexpr bool const& __cordl_internal_get_applyImpulseOnSpawn() const;

constexpr bool& __cordl_internal_get_applyImpulseOnSpawn() ;

constexpr bool const& __cordl_internal_get_attachSpawnedObjectToSpawnLocation() const;

constexpr bool& __cordl_internal_get_attachSpawnedObjectToSpawnLocation() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_currentSpawnedObject() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_currentSpawnedObject() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_insideSpawnerCheck() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_insideSpawnerCheck() ;

constexpr double_t const& __cordl_internal_get_nextSpawnTime() const;

constexpr double_t& __cordl_internal_get_nextSpawnTime() ;

constexpr int32_t const& __cordl_internal_get_spawnDelay() const;

constexpr int32_t& __cordl_internal_get_spawnDelay() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint> const& __cordl_internal_get_spawnPoint() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint>& __cordl_internal_get_spawnPoint() ;

constexpr int32_t const& __cordl_internal_get_subActorIndex() const;

constexpr int32_t& __cordl_internal_get_subActorIndex() ;

constexpr void __cordl_internal_set_actorType(::GlobalNamespace::CrittersActor_CrittersActorType  value) ;

constexpr void __cordl_internal_set_applyImpulseOnSpawn(bool  value) ;

constexpr void __cordl_internal_set_attachSpawnedObjectToSpawnLocation(bool  value) ;

constexpr void __cordl_internal_set_currentSpawnedObject(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_insideSpawnerCheck(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_nextSpawnTime(double_t  value) ;

constexpr void __cordl_internal_set_spawnDelay(int32_t  value) ;

constexpr void __cordl_internal_set_spawnPoint(::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint>  value) ;

constexpr void __cordl_internal_set_subActorIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ddd8fc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersActorSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActorSpawner(CrittersActorSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActorSpawner(CrittersActorSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5112};

/// @brief Field spawnPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActorSpawnerPoint>  ___spawnPoint;

/// @brief Field currentSpawnedObject, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___currentSpawnedObject;

/// @brief Field actorType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CrittersActor_CrittersActorType  ___actorType;

/// @brief Field subActorIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  ___subActorIndex;

/// @brief Field insideSpawnerCheck, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___insideSpawnerCheck;

/// @brief Field spawnDelay, offset: 0x40, size: 0x4, def value: None
 int32_t  ___spawnDelay;

/// @brief Field applyImpulseOnSpawn, offset: 0x44, size: 0x1, def value: None
 bool  ___applyImpulseOnSpawn;

/// @brief Field attachSpawnedObjectToSpawnLocation, offset: 0x45, size: 0x1, def value: None
 bool  ___attachSpawnedObjectToSpawnLocation;

/// @brief Field nextSpawnTime, offset: 0x48, size: 0x8, def value: None
 double_t  ___nextSpawnTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___spawnPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___currentSpawnedObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___actorType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___subActorIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___insideSpawnerCheck) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___spawnDelay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___applyImpulseOnSpawn) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___attachSpawnedObjectToSpawnLocation) == 0x45, "Offset mismatch!");

static_assert(offsetof(::Critters::Scripts::CrittersActorSpawner, ___nextSpawnTime) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Critters::Scripts::CrittersActorSpawner) == 0x50, "Size mismatch!");

} // namespace end def Critters::Scripts
