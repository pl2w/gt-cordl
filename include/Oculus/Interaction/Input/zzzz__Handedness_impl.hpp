#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Handedness.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::Handedness::Handedness(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Handedness::Handedness()   {
}
constexpr ::Oculus::Interaction::Input::Handedness  Oculus::Interaction::Input::Handedness::Left{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::Handedness  Oculus::Interaction::Input::Handedness::Right{static_cast<int32_t>(0x1)};
