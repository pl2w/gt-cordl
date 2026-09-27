#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerAxis1DUsage.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis1DUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage::ControllerAxis1DUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage::ControllerAxis1DUsage()   {
}
constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage  Oculus::Interaction::Input::ControllerAxis1DUsage::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage  Oculus::Interaction::Input::ControllerAxis1DUsage::Trigger{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage  Oculus::Interaction::Input::ControllerAxis1DUsage::Grip{static_cast<int32_t>(0x2)};
