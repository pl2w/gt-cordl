#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterHoldable_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticCritterSpawner)
namespace GlobalNamespace {
class CosmeticCritter;
}
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterSpawner;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterSpawner*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterSpawner*, "", "CosmeticCritterSpawner");
// Dependencies CosmeticCritterHoldable
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterSpawner
class CORDL_TYPE CosmeticCritterSpawner : public ::GlobalNamespace::CosmeticCritterHoldable {
public:
// Declarations
/// @brief Field cachedCritter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedCritter, put=__cordl_internal_set_cachedCritter)) ::UnityW<::GlobalNamespace::CosmeticCritter>  cachedCritter;

/// @brief Field cachedType, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedType, put=__cordl_internal_set_cachedType)) ::System::Type*  cachedType;

/// @brief Field critterPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_critterPrefab, put=__cordl_internal_set_critterPrefab)) ::UnityW<::UnityEngine::GameObject>  critterPrefab;

/// @brief Field maxCritters, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCritters, put=__cordl_internal_set_maxCritters)) int32_t  maxCritters;

/// @brief Field nextLocalSpawnTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLocalSpawnTime, put=__cordl_internal_set_nextLocalSpawnTime)) float_t  nextLocalSpawnTime;

/// @brief Field numCritters, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_numCritters, put=__cordl_internal_set_numCritters)) int32_t  numCritters;

/// @brief Method GetCritter, addr 0x57ea630, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CosmeticCritter> GetCritter() ;

/// @brief Method GetCritterPrefab, addr 0x57ea628, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetCritterPrefab() ;

/// @brief Method GetCritterType, addr 0x57ea638, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* GetCritterType() ;

static inline ::GlobalNamespace::CosmeticCritterSpawner* New_ctor() ;

/// @brief Method OnDespawn, addr 0x57ea654, size 0x68, virtual true, abstract: false, final false
inline void OnDespawn(::GlobalNamespace::CosmeticCritter*  critter) ;

/// @brief Method OnDisable, addr 0x57ea790, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57ea6bc, size 0xd4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x57ea644, size 0x10, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::CosmeticCritter*  critter) ;

/// @brief Method SetRandomVariables, addr 0x57ea640, size 0x4, virtual true, abstract: false, final false
inline void SetRandomVariables(::GlobalNamespace::CosmeticCritter*  critter) ;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritter> const& __cordl_internal_get_cachedCritter() const;

constexpr ::UnityW<::GlobalNamespace::CosmeticCritter>& __cordl_internal_get_cachedCritter() ;

constexpr ::System::Type* const& __cordl_internal_get_cachedType() const;

constexpr ::System::Type*& __cordl_internal_get_cachedType() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_critterPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_critterPrefab() ;

constexpr int32_t const& __cordl_internal_get_maxCritters() const;

constexpr int32_t& __cordl_internal_get_maxCritters() ;

constexpr float_t const& __cordl_internal_get_nextLocalSpawnTime() const;

constexpr float_t& __cordl_internal_get_nextLocalSpawnTime() ;

constexpr int32_t const& __cordl_internal_get_numCritters() const;

constexpr int32_t& __cordl_internal_get_numCritters() ;

constexpr void __cordl_internal_set_cachedCritter(::UnityW<::GlobalNamespace::CosmeticCritter>  value) ;

constexpr void __cordl_internal_set_cachedType(::System::Type*  value) ;

constexpr void __cordl_internal_set_critterPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_maxCritters(int32_t  value) ;

constexpr void __cordl_internal_set_nextLocalSpawnTime(float_t  value) ;

constexpr void __cordl_internal_set_numCritters(int32_t  value) ;

/// @brief Method .ctor, addr 0x57ea794, size 0x288, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterSpawner(CosmeticCritterSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterSpawner(CosmeticCritterSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1669};

/// [Tooltip("The critter prefab to spawn.")]
/// [SerializeField]
/// @brief Field critterPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___critterPrefab;

/// [Tooltip("The maximum number of critters that this spawner can have active at once.")]
/// [SerializeField]
/// @brief Field maxCritters, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxCritters;

/// @brief Field cachedCritter, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CosmeticCritter>  ___cachedCritter;

/// @brief Field cachedType, offset: 0x50, size: 0x8, def value: None
 ::System::Type*  ___cachedType;

/// @brief Field numCritters, offset: 0x58, size: 0x4, def value: None
 int32_t  ___numCritters;

/// @brief Field nextLocalSpawnTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___nextLocalSpawnTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawner, ___critterPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawner, ___maxCritters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawner, ___cachedCritter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawner, ___cachedType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawner, ___numCritters) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawner, ___nextLocalSpawnTime) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterSpawner) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
