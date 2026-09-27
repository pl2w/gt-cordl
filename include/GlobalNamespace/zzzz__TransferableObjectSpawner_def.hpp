#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferableObjectSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_SpawnMode_def.hpp"
#include "GlobalNamespace/zzzz__TransferableObjectSpawner_SpawnTrigger_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransferableObjectSpawner)
namespace GlobalNamespace {
struct TransferableObjectSpawner_SpawnMode;
}
namespace GlobalNamespace {
struct TransferableObjectSpawner_SpawnTrigger;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferableObjectSpawner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferableObjectSpawner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferableObjectSpawner*, "", "TransferableObjectSpawner");
// Dependencies TransferableObjectSpawner::SpawnMode, TransferableObjectSpawner::SpawnTrigger, UnityEngine.GameObject, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferableObjectSpawner
class CORDL_TYPE TransferableObjectSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpawnMode = ::GlobalNamespace::TransferableObjectSpawner_SpawnMode;

using SpawnTrigger = ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger;

/// @brief Field SpawnDelay, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpawnDelay, put=__cordl_internal_set_SpawnDelay)) double_t  SpawnDelay;

/// @brief Field TransferrableObjectsToSpawn, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_TransferrableObjectsToSpawn, put=__cordl_internal_set_TransferrableObjectsToSpawn)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  TransferrableObjectsToSpawn;

/// @brief Field groundRaycastMask, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundRaycastMask, put=__cordl_internal_set_groundRaycastMask)) ::UnityEngine::LayerMask  groundRaycastMask;

/// @brief Field lastSpawnTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSpawnTime, put=__cordl_internal_set_lastSpawnTime)) double_t  lastSpawnTime;

/// @brief Field objectsToSpawn, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectsToSpawn, put=__cordl_internal_set_objectsToSpawn)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  objectsToSpawn;

/// @brief Field spawnMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnMode, put=__cordl_internal_set_spawnMode)) ::GlobalNamespace::TransferableObjectSpawner_SpawnMode  spawnMode;

/// @brief Field spawnPosition, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_spawnPosition, put=__cordl_internal_set_spawnPosition)) ::UnityEngine::Vector3  spawnPosition;

/// @brief Field spawnRadius, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnRadius, put=__cordl_internal_set_spawnRadius)) float_t  spawnRadius;

/// @brief Field spawnRotation, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_spawnRotation, put=__cordl_internal_set_spawnRotation)) ::UnityEngine::Quaternion  spawnRotation;

/// @brief Field spawnTrigger, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnTrigger, put=__cordl_internal_set_spawnTrigger)) ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger  spawnTrigger;

/// @brief Method Awake, addr 0x59614c8, size 0x1f8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::TransferableObjectSpawner* New_ctor() ;

/// @brief Method OnValidate, addr 0x59616c0, size 0x41c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SpawnAtCurrentLocation, addr 0x5962188, size 0x50, virtual false, abstract: false, final false
inline void SpawnAtCurrentLocation() ;

/// @brief Method SpawnOnGround, addr 0x5961ed4, size 0x2b4, virtual false, abstract: false, final false
inline bool SpawnOnGround() ;

/// @brief Method SpawnTransferrableObject, addr 0x5961ba8, size 0x32c, virtual false, abstract: false, final false
inline void SpawnTransferrableObject() ;

/// @brief Method Update, addr 0x5961adc, size 0xcc, virtual false, abstract: false, final false
inline void Update() ;

constexpr double_t const& __cordl_internal_get_SpawnDelay() const;

constexpr double_t& __cordl_internal_get_SpawnDelay() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_TransferrableObjectsToSpawn() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_TransferrableObjectsToSpawn() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_groundRaycastMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_groundRaycastMask() ;

constexpr double_t const& __cordl_internal_get_lastSpawnTime() const;

constexpr double_t& __cordl_internal_get_lastSpawnTime() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>* const& __cordl_internal_get_objectsToSpawn() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*& __cordl_internal_get_objectsToSpawn() ;

constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode const& __cordl_internal_get_spawnMode() const;

constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnMode& __cordl_internal_get_spawnMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawnPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawnPosition() ;

constexpr float_t const& __cordl_internal_get_spawnRadius() const;

constexpr float_t& __cordl_internal_get_spawnRadius() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_spawnRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_spawnRotation() ;

constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger const& __cordl_internal_get_spawnTrigger() const;

constexpr ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger& __cordl_internal_get_spawnTrigger() ;

constexpr void __cordl_internal_set_SpawnDelay(double_t  value) ;

constexpr void __cordl_internal_set_TransferrableObjectsToSpawn(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_groundRaycastMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_lastSpawnTime(double_t  value) ;

constexpr void __cordl_internal_set_objectsToSpawn(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  value) ;

constexpr void __cordl_internal_set_spawnMode(::GlobalNamespace::TransferableObjectSpawner_SpawnMode  value) ;

constexpr void __cordl_internal_set_spawnPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_spawnRadius(float_t  value) ;

constexpr void __cordl_internal_set_spawnRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_spawnTrigger(::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger  value) ;

/// @brief Method .ctor, addr 0x59621d8, size 0x138, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferableObjectSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferableObjectSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferableObjectSpawner(TransferableObjectSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferableObjectSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferableObjectSpawner(TransferableObjectSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2360};

/// @brief Field spawnPosition, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spawnPosition;

/// @brief Field spawnRotation, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___spawnRotation;

/// [SerializeField]
/// @brief Field TransferrableObjectsToSpawn, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___TransferrableObjectsToSpawn;

/// @brief Field objectsToSpawn, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TransferrableObject>>*  ___objectsToSpawn;

/// [SerializeField]
/// @brief Field spawnMode, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::TransferableObjectSpawner_SpawnMode  ___spawnMode;

/// [SerializeField]
/// @brief Field spawnTrigger, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::TransferableObjectSpawner_SpawnTrigger  ___spawnTrigger;

/// [SerializeField]
/// @brief Field SpawnDelay, offset: 0x58, size: 0x8, def value: None
 double_t  ___SpawnDelay;

/// @brief Field lastSpawnTime, offset: 0x60, size: 0x8, def value: None
 double_t  ___lastSpawnTime;

/// [SerializeField]
/// @brief Field groundRaycastMask, offset: 0x68, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___groundRaycastMask;

/// [SerializeField]
/// @brief Field spawnRadius, offset: 0x6c, size: 0x4, def value: None
 float_t  ___spawnRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___spawnPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___spawnRotation) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___TransferrableObjectsToSpawn) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___objectsToSpawn) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___spawnMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___spawnTrigger) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___SpawnDelay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___lastSpawnTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___groundRaycastMask) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferableObjectSpawner, ___spawnRadius) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferableObjectSpawner) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
