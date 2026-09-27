#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandFinger.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::HandFinger::HandFinger(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandFinger::HandFinger()   {
}
constexpr ::Oculus::Interaction::Input::HandFinger  Oculus::Interaction::Input::HandFinger::Invalid{static_cast<int32_t>(0xffffffff)};
constexpr ::Oculus::Interaction::Input::HandFinger  Oculus::Interaction::Input::HandFinger::Thumb{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::HandFinger  Oculus::Interaction::Input::HandFinger::Index{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::HandFinger  Oculus::Interaction::Input::HandFinger::Middle{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::Input::HandFinger  Oculus::Interaction::Input::HandFinger::Ring{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Interaction::Input::HandFinger  Oculus::Interaction::Input::HandFinger::Pinky{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Interaction::Input::HandFinger  Oculus::Interaction::Input::HandFinger::Max{static_cast<int32_t>(0x4)};
