#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerButtonUsage.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage::ControllerButtonUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage::ControllerButtonUsage()   {
}
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::PrimaryButton{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::PrimaryTouch{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::SecondaryButton{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::SecondaryTouch{static_cast<int32_t>(0x8)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::GripButton{static_cast<int32_t>(0x10)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::TriggerButton{static_cast<int32_t>(0x20)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::MenuButton{static_cast<int32_t>(0x40)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::Primary2DAxisClick{static_cast<int32_t>(0x80)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::Primary2DAxisTouch{static_cast<int32_t>(0x100)};
constexpr ::Oculus::Interaction::Input::ControllerButtonUsage  Oculus::Interaction::Input::ControllerButtonUsage::Thumbrest{static_cast<int32_t>(0x200)};
