#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterSpawnerTimed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerIndependent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticCritterSpawnerTimed)
namespace GlobalNamespace {
class CallLimiter;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCritterSpawnerTimed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCritterSpawnerTimed*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCritterSpawnerTimed*, "", "CosmeticCritterSpawnerTimed");
// Dependencies CosmeticCritterSpawnerIndependent, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCritterSpawnerTimed
class CORDL_TYPE CosmeticCritterSpawnerTimed : public ::GlobalNamespace::CosmeticCritterSpawnerIndependent {
public:
// Declarations
/// @brief Field spawnChance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnChance, put=__cordl_internal_set_spawnChance)) float_t  spawnChance;

/// @brief Field spawnIntervalMinMax, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnIntervalMinMax, put=__cordl_internal_set_spawnIntervalMinMax)) ::UnityEngine::Vector2  spawnIntervalMinMax;

/// @brief Method CanSpawnLocal, addr 0x58010c0, size 0x68, virtual true, abstract: false, final false
inline bool CanSpawnLocal() ;

/// @brief Method CanSpawnRemote, addr 0x5801128, size 0x4, virtual true, abstract: false, final false
inline bool CanSpawnRemote(double_t  serverTime) ;

/// @brief Method CreateCallLimiter, addr 0x5801050, size 0x70, virtual true, abstract: false, final false
inline ::GlobalNamespace::CallLimiter* CreateCallLimiter() ;

static inline ::GlobalNamespace::CosmeticCritterSpawnerTimed* New_ctor() ;

/// @brief Method OnDisable, addr 0x580117c, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x580112c, size 0x50, virtual true, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_spawnChance() const;

constexpr float_t& __cordl_internal_get_spawnChance() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_spawnIntervalMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_spawnIntervalMinMax() ;

constexpr void __cordl_internal_set_spawnChance(float_t  value) ;

constexpr void __cordl_internal_set_spawnIntervalMinMax(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x5801180, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCritterSpawnerTimed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerTimed", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCritterSpawnerTimed(CosmeticCritterSpawnerTimed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCritterSpawnerTimed", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCritterSpawnerTimed(CosmeticCritterSpawnerTimed const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1671};

/// [Tooltip("The minimum and maximum time to wait between spawn attempts.")]
/// [SerializeField]
/// @brief Field spawnIntervalMinMax, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___spawnIntervalMinMax;

/// [Tooltip("Currently does nothing.")]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field spawnChance, offset: 0x68, size: 0x4, def value: None
 float_t  ___spawnChance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawnerTimed, ___spawnIntervalMinMax) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCritterSpawnerTimed, ___spawnChance) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCritterSpawnerTimed) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
