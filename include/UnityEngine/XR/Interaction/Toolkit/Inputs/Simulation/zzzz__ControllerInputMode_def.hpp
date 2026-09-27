#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/ControllerInputMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerInputMode)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct ControllerInputMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "ControllerInputMode");
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerInputMode
struct CORDL_TYPE ControllerInputMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ControllerInputMode_Unwrapped
enum struct __ControllerInputMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Trigger = static_cast<int32_t>(0x1),
__E_Grip = static_cast<int32_t>(0x2),
__E_PrimaryButton = static_cast<int32_t>(0x3),
__E_SecondaryButton = static_cast<int32_t>(0x4),
__E_Menu = static_cast<int32_t>(0x5),
__E_Primary2DAxisClick = static_cast<int32_t>(0x6),
__E_Secondary2DAxisClick = static_cast<int32_t>(0x7),
__E_Primary2DAxisTouch = static_cast<int32_t>(0x8),
__E_Secondary2DAxisTouch = static_cast<int32_t>(0x9),
__E_PrimaryTouch = static_cast<int32_t>(0xa),
__E_SecondaryTouch = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ControllerInputMode_Unwrapped () const noexcept {
return static_cast<__ControllerInputMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ControllerInputMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ControllerInputMode(int32_t  value__) noexcept;

/// @brief Field Grip value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const Grip;

/// @brief Field Menu value: I32(5)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const Menu;

/// @brief Field None value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const None;

/// @brief Field Primary2DAxisClick value: I32(6)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const Primary2DAxisClick;

/// @brief Field Primary2DAxisTouch value: I32(8)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const Primary2DAxisTouch;

/// @brief Field PrimaryButton value: I32(3)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const PrimaryButton;

/// @brief Field PrimaryTouch value: I32(10)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const PrimaryTouch;

/// @brief Field Secondary2DAxisClick value: I32(7)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const Secondary2DAxisClick;

/// @brief Field Secondary2DAxisTouch value: I32(9)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const Secondary2DAxisTouch;

/// @brief Field SecondaryButton value: I32(4)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const SecondaryButton;

/// @brief Field SecondaryTouch value: I32(11)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const SecondaryTouch;

/// @brief Field Trigger value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const Trigger;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11636};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
