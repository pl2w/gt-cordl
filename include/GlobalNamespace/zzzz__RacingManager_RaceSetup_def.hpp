#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager_RaceSetup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RacingManager_RaceSetup)
namespace UnityEngine {
class BoxCollider;
}
// Forward declare root types
namespace GlobalNamespace {
struct RacingManager_RaceSetup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RacingManager_RaceSetup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RacingManager_RaceSetup, "", "RacingManager/RaceSetup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RacingManager/RaceSetup
struct CORDL_TYPE RacingManager_RaceSetup {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RacingManager_RaceSetup() ;

// Ctor Parameters [CppParam { name: "startVolume", ty: "::UnityW<::UnityEngine::BoxCollider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "numCheckpoints", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dqBaseDuration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dqInterval", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr RacingManager_RaceSetup(::UnityW<::UnityEngine::BoxCollider>  startVolume, int32_t  numCheckpoints, float_t  dqBaseDuration, float_t  dqInterval) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{880};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field startVolume, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  startVolume;

/// @brief Field numCheckpoints, offset: 0x8, size: 0x4, def value: None
 int32_t  numCheckpoints;

/// @brief Field dqBaseDuration, offset: 0xc, size: 0x4, def value: None
 float_t  dqBaseDuration;

/// @brief Field dqInterval, offset: 0x10, size: 0x4, def value: None
 float_t  dqInterval;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RacingManager_RaceSetup, startVolume) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_RaceSetup, numCheckpoints) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_RaceSetup, dqBaseDuration) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_RaceSetup, dqInterval) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RacingManager_RaceSetup) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
