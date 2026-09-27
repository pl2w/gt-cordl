#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_Button.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HID_Button::HID_Button(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HID_Button::HID_Button()   {
}
constexpr ::GlobalNamespace::HID_Button  GlobalNamespace::HID_Button::Undefined{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HID_Button  GlobalNamespace::HID_Button::Primary{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HID_Button  GlobalNamespace::HID_Button::Secondary{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HID_Button  GlobalNamespace::HID_Button::Tertiary{static_cast<int32_t>(0x3)};
