#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtStreamButton_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GtStreamButton_State)
// Forward declare root types
namespace GlobalNamespace {
struct GtStreamButton_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GtStreamButton_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GtStreamButton_State, "Liv.Lck.GorillaTag", "GtStreamButton/State");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Liv.Lck.GorillaTag.GtStreamButton/State
struct CORDL_TYPE GtStreamButton_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GtStreamButton_State_Unwrapped
enum struct __GtStreamButton_State_Unwrapped : int32_t {
__E_Idle = static_cast<int32_t>(0x0),
__E_WaitingForStreamingStart = static_cast<int32_t>(0x1),
__E_Streaming = static_cast<int32_t>(0x2),
__E_DoingStoppingAnimation = static_cast<int32_t>(0x3),
__E_StoppingAnimationCompleted = static_cast<int32_t>(0x4),
__E_WaitUntilTriggerExitOrDelay = static_cast<int32_t>(0x5),
__E_Error = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GtStreamButton_State_Unwrapped () const noexcept {
return static_cast<__GtStreamButton_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GtStreamButton_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GtStreamButton_State(int32_t  value__) noexcept;

/// @brief Field DoingStoppingAnimation value: I32(3)
static ::GlobalNamespace::GtStreamButton_State const DoingStoppingAnimation;

/// @brief Field Error value: I32(6)
static ::GlobalNamespace::GtStreamButton_State const Error;

/// @brief Field Idle value: I32(0)
static ::GlobalNamespace::GtStreamButton_State const Idle;

/// @brief Field StoppingAnimationCompleted value: I32(4)
static ::GlobalNamespace::GtStreamButton_State const StoppingAnimationCompleted;

/// @brief Field Streaming value: I32(2)
static ::GlobalNamespace::GtStreamButton_State const Streaming;

/// @brief Field WaitUntilTriggerExitOrDelay value: I32(5)
static ::GlobalNamespace::GtStreamButton_State const WaitUntilTriggerExitOrDelay;

/// @brief Field WaitingForStreamingStart value: I32(1)
static ::GlobalNamespace::GtStreamButton_State const WaitingForStreamingStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29655};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GtStreamButton_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GtStreamButton_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
