#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardLocationType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardLocationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType::OVRPlugin_VirtualKeyboardLocationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType::OVRPlugin_VirtualKeyboardLocationType()   {
}
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType  GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType::Custom{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType  GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType::Far{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType  GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType::Direct{static_cast<int32_t>(0x2)};
