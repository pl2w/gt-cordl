#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboard_KeyboardPosition.hpp"
#include "GlobalNamespace/zzzz__OVRVirtualKeyboard_KeyboardPosition_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::OVRVirtualKeyboard_KeyboardPosition(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::OVRVirtualKeyboard_KeyboardPosition()   {
}
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Far{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Near{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Direct{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition  GlobalNamespace::OVRVirtualKeyboard_KeyboardPosition::Custom{static_cast<int32_t>(0x2)};
