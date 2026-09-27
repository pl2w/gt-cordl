#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleKeyboardButton_ButtonFunction.hpp"
#include "GlobalNamespace/zzzz__SimpleKeyboardButton_ButtonFunction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction::SimpleKeyboardButton_ButtonFunction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction::SimpleKeyboardButton_ButtonFunction()   {
}
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  GlobalNamespace::SimpleKeyboardButton_ButtonFunction::NONE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  GlobalNamespace::SimpleKeyboardButton_ButtonFunction::CURSOR_BACK{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  GlobalNamespace::SimpleKeyboardButton_ButtonFunction::CURSOR_FWD{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SimpleKeyboardButton_ButtonFunction  GlobalNamespace::SimpleKeyboardButton_ButtonFunction::DELETE{static_cast<int32_t>(0x3)};
