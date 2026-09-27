#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorManager_ElevatorSystemState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRElevatorManager_ElevatorSystemState)
// Forward declare root types
namespace GlobalNamespace {
struct GRElevatorManager_ElevatorSystemState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRElevatorManager_ElevatorSystemState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRElevatorManager_ElevatorSystemState, "", "GRElevatorManager/ElevatorSystemState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRElevatorManager/ElevatorSystemState
struct CORDL_TYPE GRElevatorManager_ElevatorSystemState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GRElevatorManager_ElevatorSystemState_Unwrapped
enum struct __GRElevatorManager_ElevatorSystemState_Unwrapped : int32_t {
__E_Dormant = static_cast<int32_t>(0x0),
__E_InLocation = static_cast<int32_t>(0x1),
__E_DestinationPressed = static_cast<int32_t>(0x2),
__E_WaitingToTeleport = static_cast<int32_t>(0x3),
__E_Teleporting = static_cast<int32_t>(0x4),
__E_None = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GRElevatorManager_ElevatorSystemState_Unwrapped () const noexcept {
return static_cast<__GRElevatorManager_ElevatorSystemState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GRElevatorManager_ElevatorSystemState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRElevatorManager_ElevatorSystemState(int32_t  value__) noexcept;

/// @brief Field DestinationPressed value: I32(2)
static ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const DestinationPressed;

/// @brief Field Dormant value: I32(0)
static ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const Dormant;

/// @brief Field InLocation value: I32(1)
static ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const InLocation;

/// @brief Field None value: I32(5)
static ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const None;

/// @brief Field Teleporting value: I32(4)
static ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const Teleporting;

/// @brief Field WaitingToTeleport value: I32(3)
static ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const WaitingToTeleport;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1919};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRElevatorManager_ElevatorSystemState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRElevatorManager_ElevatorSystemState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
