#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandFingerFlags.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::HandFingerFlags::HandFingerFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandFingerFlags::HandFingerFlags()   {
}
constexpr ::Oculus::Interaction::Input::HandFingerFlags  Oculus::Interaction::Input::HandFingerFlags::None{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::HandFingerFlags  Oculus::Interaction::Input::HandFingerFlags::Thumb{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::HandFingerFlags  Oculus::Interaction::Input::HandFingerFlags::Index{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::Input::HandFingerFlags  Oculus::Interaction::Input::HandFingerFlags::Middle{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Interaction::Input::HandFingerFlags  Oculus::Interaction::Input::HandFingerFlags::Ring{static_cast<int32_t>(0x8)};
constexpr ::Oculus::Interaction::Input::HandFingerFlags  Oculus::Interaction::Input::HandFingerFlags::Pinky{static_cast<int32_t>(0x10)};
constexpr ::Oculus::Interaction::Input::HandFingerFlags  Oculus::Interaction::Input::HandFingerFlags::All{static_cast<int32_t>(0x1f)};
