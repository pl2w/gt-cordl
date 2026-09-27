#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/JointFreedom.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::JointFreedom::JointFreedom(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::JointFreedom::JointFreedom()   {
}
constexpr ::Oculus::Interaction::Input::JointFreedom  Oculus::Interaction::Input::JointFreedom::Free{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::JointFreedom  Oculus::Interaction::Input::JointFreedom::Constrained{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::JointFreedom  Oculus::Interaction::Input::JointFreedom::Locked{static_cast<int32_t>(0x2)};
