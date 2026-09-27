#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDoor_DoorState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTDoor_DoorState)
// Forward declare root types
namespace GlobalNamespace {
struct GTDoor_DoorState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTDoor_DoorState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTDoor_DoorState, "", "GTDoor/DoorState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTDoor/DoorState
struct CORDL_TYPE GTDoor_DoorState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTDoor_DoorState_Unwrapped
enum struct __GTDoor_DoorState_Unwrapped : int32_t {
__E_Closed = static_cast<int32_t>(0x0),
__E_ClosingWaitingOnRPC = static_cast<int32_t>(0x1),
__E_Closing = static_cast<int32_t>(0x2),
__E_Open = static_cast<int32_t>(0x3),
__E_OpeningWaitingOnRPC = static_cast<int32_t>(0x4),
__E_Opening = static_cast<int32_t>(0x5),
__E_HeldOpen = static_cast<int32_t>(0x6),
__E_HeldOpenLocally = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTDoor_DoorState_Unwrapped () const noexcept {
return static_cast<__GTDoor_DoorState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTDoor_DoorState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTDoor_DoorState(int32_t  value__) noexcept;

/// @brief Field Closed value: I32(0)
static ::GlobalNamespace::GTDoor_DoorState const Closed;

/// @brief Field Closing value: I32(2)
static ::GlobalNamespace::GTDoor_DoorState const Closing;

/// @brief Field ClosingWaitingOnRPC value: I32(1)
static ::GlobalNamespace::GTDoor_DoorState const ClosingWaitingOnRPC;

/// @brief Field HeldOpen value: I32(6)
static ::GlobalNamespace::GTDoor_DoorState const HeldOpen;

/// @brief Field HeldOpenLocally value: I32(7)
static ::GlobalNamespace::GTDoor_DoorState const HeldOpenLocally;

/// @brief Field Open value: I32(3)
static ::GlobalNamespace::GTDoor_DoorState const Open;

/// @brief Field Opening value: I32(5)
static ::GlobalNamespace::GTDoor_DoorState const Opening;

/// @brief Field OpeningWaitingOnRPC value: I32(4)
static ::GlobalNamespace::GTDoor_DoorState const OpeningWaitingOnRPC;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{843};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTDoor_DoorState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTDoor_DoorState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
