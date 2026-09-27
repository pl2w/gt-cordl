#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckRecordButton_State.hpp"
#include "Liv/Lck/Tablet/zzzz__LckRecordButton_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckRecordButton_State::LckRecordButton_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckRecordButton_State::LckRecordButton_State()   {
}
constexpr ::GlobalNamespace::LckRecordButton_State  GlobalNamespace::LckRecordButton_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckRecordButton_State  GlobalNamespace::LckRecordButton_State::Saving{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckRecordButton_State  GlobalNamespace::LckRecordButton_State::Paused{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckRecordButton_State  GlobalNamespace::LckRecordButton_State::Recording{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::LckRecordButton_State  GlobalNamespace::LckRecordButton_State::Error{static_cast<int32_t>(0x4)};
