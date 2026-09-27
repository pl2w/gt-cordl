#pragma once
// IWYU pragma private; include "UnityEngine/TouchScreenKeyboard_Status.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TouchScreenKeyboard_Status::TouchScreenKeyboard_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TouchScreenKeyboard_Status::TouchScreenKeyboard_Status()   {
}
constexpr ::GlobalNamespace::TouchScreenKeyboard_Status  GlobalNamespace::TouchScreenKeyboard_Status::Visible{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TouchScreenKeyboard_Status  GlobalNamespace::TouchScreenKeyboard_Status::Done{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TouchScreenKeyboard_Status  GlobalNamespace::TouchScreenKeyboard_Status::Canceled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TouchScreenKeyboard_Status  GlobalNamespace::TouchScreenKeyboard_Status::LostFocus{static_cast<int32_t>(0x3)};
