#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InputHelpers_Button.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputHelpers_Button)
// Forward declare root types
namespace GlobalNamespace {
struct InputHelpers_Button;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputHelpers_Button);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputHelpers_Button, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button");
// [Obsolete("Button has been deprecated in version 3.0.0. Use XRInputDeviceButtonReader or XRInputDeviceValueReader instead.")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.InputHelpers/Button
struct CORDL_TYPE InputHelpers_Button {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputHelpers_Button_Unwrapped
enum struct __InputHelpers_Button_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_MenuButton = static_cast<int32_t>(0x1),
__E_Trigger = static_cast<int32_t>(0x2),
__E_Grip = static_cast<int32_t>(0x3),
__E_TriggerButton = static_cast<int32_t>(0x4),
__E_GripButton = static_cast<int32_t>(0x5),
__E_PrimaryButton = static_cast<int32_t>(0x6),
__E_PrimaryTouch = static_cast<int32_t>(0x7),
__E_SecondaryButton = static_cast<int32_t>(0x8),
__E_SecondaryTouch = static_cast<int32_t>(0x9),
__E_Primary2DAxisTouch = static_cast<int32_t>(0xa),
__E_Primary2DAxisClick = static_cast<int32_t>(0xb),
__E_Secondary2DAxisTouch = static_cast<int32_t>(0xc),
__E_Secondary2DAxisClick = static_cast<int32_t>(0xd),
__E_PrimaryAxis2DUp = static_cast<int32_t>(0xe),
__E_PrimaryAxis2DDown = static_cast<int32_t>(0xf),
__E_PrimaryAxis2DLeft = static_cast<int32_t>(0x10),
__E_PrimaryAxis2DRight = static_cast<int32_t>(0x11),
__E_SecondaryAxis2DUp = static_cast<int32_t>(0x12),
__E_SecondaryAxis2DDown = static_cast<int32_t>(0x13),
__E_SecondaryAxis2DLeft = static_cast<int32_t>(0x14),
__E_SecondaryAxis2DRight = static_cast<int32_t>(0x15),
__E_TriggerPressed = static_cast<int32_t>(0x4),
__E_GripPressed = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputHelpers_Button_Unwrapped () const noexcept {
return static_cast<__InputHelpers_Button_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputHelpers_Button() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputHelpers_Button(int32_t  value__) noexcept;

/// @brief Field Grip value: I32(3)
static ::GlobalNamespace::InputHelpers_Button const Grip;

/// @brief Field GripButton value: I32(5)
static ::GlobalNamespace::InputHelpers_Button const GripButton;

/// @brief Field GripPressed value: I32(5)
static ::GlobalNamespace::InputHelpers_Button const GripPressed;

/// @brief Field MenuButton value: I32(1)
static ::GlobalNamespace::InputHelpers_Button const MenuButton;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::InputHelpers_Button const None;

/// @brief Field Primary2DAxisClick value: I32(11)
static ::GlobalNamespace::InputHelpers_Button const Primary2DAxisClick;

/// @brief Field Primary2DAxisTouch value: I32(10)
static ::GlobalNamespace::InputHelpers_Button const Primary2DAxisTouch;

/// @brief Field PrimaryAxis2DDown value: I32(15)
static ::GlobalNamespace::InputHelpers_Button const PrimaryAxis2DDown;

/// @brief Field PrimaryAxis2DLeft value: I32(16)
static ::GlobalNamespace::InputHelpers_Button const PrimaryAxis2DLeft;

/// @brief Field PrimaryAxis2DRight value: I32(17)
static ::GlobalNamespace::InputHelpers_Button const PrimaryAxis2DRight;

/// @brief Field PrimaryAxis2DUp value: I32(14)
static ::GlobalNamespace::InputHelpers_Button const PrimaryAxis2DUp;

/// @brief Field PrimaryButton value: I32(6)
static ::GlobalNamespace::InputHelpers_Button const PrimaryButton;

/// @brief Field PrimaryTouch value: I32(7)
static ::GlobalNamespace::InputHelpers_Button const PrimaryTouch;

/// @brief Field Secondary2DAxisClick value: I32(13)
static ::GlobalNamespace::InputHelpers_Button const Secondary2DAxisClick;

/// @brief Field Secondary2DAxisTouch value: I32(12)
static ::GlobalNamespace::InputHelpers_Button const Secondary2DAxisTouch;

/// @brief Field SecondaryAxis2DDown value: I32(19)
static ::GlobalNamespace::InputHelpers_Button const SecondaryAxis2DDown;

/// @brief Field SecondaryAxis2DLeft value: I32(20)
static ::GlobalNamespace::InputHelpers_Button const SecondaryAxis2DLeft;

/// @brief Field SecondaryAxis2DRight value: I32(21)
static ::GlobalNamespace::InputHelpers_Button const SecondaryAxis2DRight;

/// @brief Field SecondaryAxis2DUp value: I32(18)
static ::GlobalNamespace::InputHelpers_Button const SecondaryAxis2DUp;

/// @brief Field SecondaryButton value: I32(8)
static ::GlobalNamespace::InputHelpers_Button const SecondaryButton;

/// @brief Field SecondaryTouch value: I32(9)
static ::GlobalNamespace::InputHelpers_Button const SecondaryTouch;

/// @brief Field Trigger value: I32(2)
static ::GlobalNamespace::InputHelpers_Button const Trigger;

/// @brief Field TriggerButton value: I32(4)
static ::GlobalNamespace::InputHelpers_Button const TriggerButton;

/// @brief Field TriggerPressed value: I32(4)
static ::GlobalNamespace::InputHelpers_Button const TriggerPressed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11129};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputHelpers_Button, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputHelpers_Button) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
