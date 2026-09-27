#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_PlayerGameState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScienceExperimentManager_PlayerGameState)
// Forward declare root types
namespace GlobalNamespace {
struct ScienceExperimentManager_PlayerGameState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScienceExperimentManager_PlayerGameState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScienceExperimentManager_PlayerGameState, "GorillaTag", "ScienceExperimentManager/PlayerGameState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.ScienceExperimentManager/PlayerGameState
struct CORDL_TYPE ScienceExperimentManager_PlayerGameState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ScienceExperimentManager_PlayerGameState() ;

// Ctor Parameters [CppParam { name: "playerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "touchedLiquid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "touchedLiquidAtProgress", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ScienceExperimentManager_PlayerGameState(int32_t  playerId, bool  touchedLiquid, float_t  touchedLiquidAtProgress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4637};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field playerId, offset: 0x0, size: 0x4, def value: None
 int32_t  playerId;

/// @brief Field touchedLiquid, offset: 0x4, size: 0x1, def value: None
 bool  touchedLiquid;

/// @brief Field touchedLiquidAtProgress, offset: 0x8, size: 0x4, def value: None
 float_t  touchedLiquidAtProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_PlayerGameState, playerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_PlayerGameState, touchedLiquid) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ScienceExperimentManager_PlayerGameState, touchedLiquidAtProgress) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScienceExperimentManager_PlayerGameState) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
