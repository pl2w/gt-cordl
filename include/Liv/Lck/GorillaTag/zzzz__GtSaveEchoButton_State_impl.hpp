#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtSaveEchoButton_State.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtSaveEchoButton_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GtSaveEchoButton_State::GtSaveEchoButton_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtSaveEchoButton_State::GtSaveEchoButton_State()   {
}
constexpr ::GlobalNamespace::GtSaveEchoButton_State  GlobalNamespace::GtSaveEchoButton_State::EchoStarting{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GtSaveEchoButton_State  GlobalNamespace::GtSaveEchoButton_State::Ready{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GtSaveEchoButton_State  GlobalNamespace::GtSaveEchoButton_State::LowStorage{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GtSaveEchoButton_State  GlobalNamespace::GtSaveEchoButton_State::Error{static_cast<int32_t>(0x3)};
