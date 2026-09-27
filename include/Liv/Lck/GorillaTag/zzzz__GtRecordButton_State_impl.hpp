#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtRecordButton_State.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtRecordButton_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GtRecordButton_State::GtRecordButton_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtRecordButton_State::GtRecordButton_State()   {
}
constexpr ::GlobalNamespace::GtRecordButton_State  GlobalNamespace::GtRecordButton_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GtRecordButton_State  GlobalNamespace::GtRecordButton_State::Recording{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GtRecordButton_State  GlobalNamespace::GtRecordButton_State::Saving{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GtRecordButton_State  GlobalNamespace::GtRecordButton_State::Error{static_cast<int32_t>(0x3)};
