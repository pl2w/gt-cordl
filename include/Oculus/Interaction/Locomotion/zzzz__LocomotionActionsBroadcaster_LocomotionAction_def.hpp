#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionActionsBroadcaster_LocomotionAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocomotionActionsBroadcaster_LocomotionAction)
// Forward declare root types
namespace GlobalNamespace {
struct LocomotionActionsBroadcaster_LocomotionAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction, "Oculus.Interaction.Locomotion", "LocomotionActionsBroadcaster/LocomotionAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Locomotion.LocomotionActionsBroadcaster/LocomotionAction
struct CORDL_TYPE LocomotionActionsBroadcaster_LocomotionAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LocomotionActionsBroadcaster_LocomotionAction_Unwrapped
enum struct __LocomotionActionsBroadcaster_LocomotionAction_Unwrapped : int32_t {
__E_Crouch = static_cast<int32_t>(0x0),
__E_StandUp = static_cast<int32_t>(0x1),
__E_ToggleCrouch = static_cast<int32_t>(0x2),
__E_Run = static_cast<int32_t>(0x3),
__E_Walk = static_cast<int32_t>(0x4),
__E_ToggleRun = static_cast<int32_t>(0x5),
__E_Jump = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LocomotionActionsBroadcaster_LocomotionAction_Unwrapped () const noexcept {
return static_cast<__LocomotionActionsBroadcaster_LocomotionAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LocomotionActionsBroadcaster_LocomotionAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LocomotionActionsBroadcaster_LocomotionAction(int32_t  value__) noexcept;

/// @brief Field Crouch value: I32(0)
static ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction const Crouch;

/// @brief Field Jump value: I32(6)
static ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction const Jump;

/// @brief Field Run value: I32(3)
static ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction const Run;

/// @brief Field StandUp value: I32(1)
static ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction const StandUp;

/// @brief Field ToggleCrouch value: I32(2)
static ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction const ToggleCrouch;

/// @brief Field ToggleRun value: I32(5)
static ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction const ToggleRun;

/// @brief Field Walk value: I32(4)
static ::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction const Walk;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocomotionActionsBroadcaster_LocomotionAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
