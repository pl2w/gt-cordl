#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtTopButton_TopButtonState.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtTopButton_TopButtonState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GtTopButton_TopButtonState::GtTopButton_TopButtonState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtTopButton_TopButtonState::GtTopButton_TopButtonState()   {
}
constexpr ::GlobalNamespace::GtTopButton_TopButtonState  GlobalNamespace::GtTopButton_TopButtonState::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GtTopButton_TopButtonState  GlobalNamespace::GtTopButton_TopButtonState::Selected{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GtTopButton_TopButtonState  GlobalNamespace::GtTopButton_TopButtonState::Disabled{static_cast<int32_t>(0x2)};
