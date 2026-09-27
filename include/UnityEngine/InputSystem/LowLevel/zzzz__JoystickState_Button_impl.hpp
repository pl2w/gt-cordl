#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/JoystickState_Button.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__JoystickState_Button_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JoystickState_Button::JoystickState_Button(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoystickState_Button::JoystickState_Button()   {
}
constexpr ::GlobalNamespace::JoystickState_Button  GlobalNamespace::JoystickState_Button::HatSwitchUp{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JoystickState_Button  GlobalNamespace::JoystickState_Button::HatSwitchDown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::JoystickState_Button  GlobalNamespace::JoystickState_Button::HatSwitchLeft{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::JoystickState_Button  GlobalNamespace::JoystickState_Button::HatSwitchRight{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::JoystickState_Button  GlobalNamespace::JoystickState_Button::Trigger{static_cast<int32_t>(0x4)};
