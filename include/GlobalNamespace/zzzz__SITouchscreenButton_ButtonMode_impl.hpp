#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreenButton_ButtonMode.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_ButtonMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode::SITouchscreenButton_ButtonMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode::SITouchscreenButton_ButtonMode()   {
}
constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode  GlobalNamespace::SITouchscreenButton_ButtonMode::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SITouchscreenButton_ButtonMode  GlobalNamespace::SITouchscreenButton_ButtonMode::Toggle{static_cast<int32_t>(0x1)};
