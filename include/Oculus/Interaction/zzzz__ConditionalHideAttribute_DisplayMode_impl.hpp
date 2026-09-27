#pragma once
// IWYU pragma private; include "Oculus/Interaction/ConditionalHideAttribute_DisplayMode.hpp"
#include "Oculus/Interaction/zzzz__ConditionalHideAttribute_DisplayMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode::ConditionalHideAttribute_DisplayMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode::ConditionalHideAttribute_DisplayMode()   {
}
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  GlobalNamespace::ConditionalHideAttribute_DisplayMode::Always{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  GlobalNamespace::ConditionalHideAttribute_DisplayMode::Never{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  GlobalNamespace::ConditionalHideAttribute_DisplayMode::ShowIfTrue{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ConditionalHideAttribute_DisplayMode  GlobalNamespace::ConditionalHideAttribute_DisplayMode::HideIfTrue{static_cast<int32_t>(0x3)};
