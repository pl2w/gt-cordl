#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedReturn_BeepPhase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameEntityDelayedReturn_BeepPhase)
// Forward declare root types
namespace GlobalNamespace {
struct GameEntityDelayedReturn_BeepPhase;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameEntityDelayedReturn_BeepPhase);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityDelayedReturn_BeepPhase, "", "GameEntityDelayedReturn/BeepPhase");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameEntityDelayedReturn/BeepPhase
struct CORDL_TYPE GameEntityDelayedReturn_BeepPhase {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityDelayedReturn_BeepPhase() ;

// Ctor Parameters [CppParam { name: "timeRemaining", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "interval", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GameEntityDelayedReturn_BeepPhase(float_t  timeRemaining, float_t  interval) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1739};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Tooltip("Beeping starts when this many seconds remain.")]
/// @brief Field timeRemaining, offset: 0x0, size: 0x4, def value: None
 float_t  timeRemaining;

/// [Tooltip("Seconds between beeps during this phase.")]
/// @brief Field interval, offset: 0x4, size: 0x4, def value: None
 float_t  interval;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_BeepPhase, timeRemaining) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedReturn_BeepPhase, interval) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityDelayedReturn_BeepPhase) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
