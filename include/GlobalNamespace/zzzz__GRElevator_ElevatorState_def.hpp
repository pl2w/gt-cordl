#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevator_ElevatorState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRElevator_ElevatorState)
// Forward declare root types
namespace GlobalNamespace {
struct GRElevator_ElevatorState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRElevator_ElevatorState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevator_ElevatorState, "", "GRElevator/ElevatorState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRElevator/ElevatorState
struct CORDL_TYPE GRElevator_ElevatorState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRElevator_ElevatorState_Unwrapped
enum struct __GRElevator_ElevatorState_Unwrapped : int32_t {
__E_DoorBeginClosing = static_cast<int32_t>(0x0),
__E_DoorMovingClosing = static_cast<int32_t>(0x1),
__E_DoorEndClosing = static_cast<int32_t>(0x2),
__E_DoorClosed = static_cast<int32_t>(0x3),
__E_DoorBeginOpening = static_cast<int32_t>(0x4),
__E_DoorMovingOpening = static_cast<int32_t>(0x5),
__E_DoorEndOpening = static_cast<int32_t>(0x6),
__E_DoorOpen = static_cast<int32_t>(0x7),
__E_None = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRElevator_ElevatorState_Unwrapped () const noexcept {
return static_cast<__GRElevator_ElevatorState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRElevator_ElevatorState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRElevator_ElevatorState(int32_t  value__) noexcept;

/// @brief Field DoorBeginClosing value: I32(0)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorBeginClosing;

/// @brief Field DoorBeginOpening value: I32(4)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorBeginOpening;

/// @brief Field DoorClosed value: I32(3)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorClosed;

/// @brief Field DoorEndClosing value: I32(2)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorEndClosing;

/// @brief Field DoorEndOpening value: I32(6)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorEndOpening;

/// @brief Field DoorMovingClosing value: I32(1)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorMovingClosing;

/// @brief Field DoorMovingOpening value: I32(5)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorMovingOpening;

/// @brief Field DoorOpen value: I32(7)
static ::GlobalNamespace::GRElevator_ElevatorState const DoorOpen;

/// @brief Field None value: I32(8)
static ::GlobalNamespace::GRElevator_ElevatorState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevator_ElevatorState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevator_ElevatorState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
