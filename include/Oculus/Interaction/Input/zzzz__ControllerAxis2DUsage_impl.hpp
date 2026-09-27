#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerAxis2DUsage.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis2DUsage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage::ControllerAxis2DUsage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage::ControllerAxis2DUsage()   {
}
constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage  Oculus::Interaction::Input::ControllerAxis2DUsage::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage  Oculus::Interaction::Input::ControllerAxis2DUsage::Primary2DAxis{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage  Oculus::Interaction::Input::ControllerAxis2DUsage::Secondary2DAxis{static_cast<int32_t>(0x2)};
