#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole_GameState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WhackAMole_GameState)
// Forward declare root types
namespace GlobalNamespace {
struct WhackAMole_GameState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WhackAMole_GameState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WhackAMole_GameState, "GorillaTagScripts", "WhackAMole/GameState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.WhackAMole/GameState
struct CORDL_TYPE WhackAMole_GameState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WhackAMole_GameState_Unwrapped
enum struct __WhackAMole_GameState_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_ContinuePressed = static_cast<int32_t>(0x1),
__E_Ongoing = static_cast<int32_t>(0x2),
__E_PickMoles = static_cast<int32_t>(0x3),
__E_TimesUp = static_cast<int32_t>(0x4),
__E_LevelStarted = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WhackAMole_GameState_Unwrapped () const noexcept {
return static_cast<__WhackAMole_GameState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WhackAMole_GameState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WhackAMole_GameState(int32_t  value__) noexcept;

/// @brief Field ContinuePressed value: I32(1)
static ::GlobalNamespace::WhackAMole_GameState const ContinuePressed;

/// @brief Field LevelStarted value: I32(5)
static ::GlobalNamespace::WhackAMole_GameState const LevelStarted;

/// @brief Field Off value: I32(0)
static ::GlobalNamespace::WhackAMole_GameState const Off;

/// @brief Field Ongoing value: I32(2)
static ::GlobalNamespace::WhackAMole_GameState const Ongoing;

/// @brief Field PickMoles value: I32(3)
static ::GlobalNamespace::WhackAMole_GameState const PickMoles;

/// @brief Field TimesUp value: I32(4)
static ::GlobalNamespace::WhackAMole_GameState const TimesUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WhackAMole_GameState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WhackAMole_GameState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
