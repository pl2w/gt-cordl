#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController_DeviceFlags.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XInputController_DeviceFlags::XInputController_DeviceFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XInputController_DeviceFlags::XInputController_DeviceFlags()   {
}
constexpr ::GlobalNamespace::XInputController_DeviceFlags  GlobalNamespace::XInputController_DeviceFlags::ForceFeedbackSupported{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XInputController_DeviceFlags  GlobalNamespace::XInputController_DeviceFlags::Wireless{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XInputController_DeviceFlags  GlobalNamespace::XInputController_DeviceFlags::VoiceSupported{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::XInputController_DeviceFlags  GlobalNamespace::XInputController_DeviceFlags::PluginModulesSupported{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::XInputController_DeviceFlags  GlobalNamespace::XInputController_DeviceFlags::NoNavigation{static_cast<int32_t>(0x10)};
