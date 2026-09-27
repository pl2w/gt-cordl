#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandFinger.hpp"
#include "Oculus/Interaction/Input/Compatibility/OVR/zzzz__HandFinger_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger::HandFinger(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger::HandFinger()   {
}
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  Oculus::Interaction::Input::Compatibility::OVR::HandFinger::Invalid{static_cast<int32_t>(0xffffffff)};
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  Oculus::Interaction::Input::Compatibility::OVR::HandFinger::Thumb{static_cast<int32_t>(0x0)};
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  Oculus::Interaction::Input::Compatibility::OVR::HandFinger::Index{static_cast<int32_t>(0x1)};
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  Oculus::Interaction::Input::Compatibility::OVR::HandFinger::Middle{static_cast<int32_t>(0x2)};
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  Oculus::Interaction::Input::Compatibility::OVR::HandFinger::Ring{static_cast<int32_t>(0x3)};
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  Oculus::Interaction::Input::Compatibility::OVR::HandFinger::Pinky{static_cast<int32_t>(0x4)};
constexpr ::Oculus::Interaction::Input::Compatibility::OVR::HandFinger  Oculus::Interaction::Input::Compatibility::OVR::HandFinger::Max{static_cast<int32_t>(0x4)};
