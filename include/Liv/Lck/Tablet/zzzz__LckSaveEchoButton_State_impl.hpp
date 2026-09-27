#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckSaveEchoButton_State.hpp"
#include "Liv/Lck/Tablet/zzzz__LckSaveEchoButton_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckSaveEchoButton_State::LckSaveEchoButton_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckSaveEchoButton_State::LckSaveEchoButton_State()   {
}
constexpr ::GlobalNamespace::LckSaveEchoButton_State  GlobalNamespace::LckSaveEchoButton_State::EchoStarting{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckSaveEchoButton_State  GlobalNamespace::LckSaveEchoButton_State::Ready{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckSaveEchoButton_State  GlobalNamespace::LckSaveEchoButton_State::LowStorage{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckSaveEchoButton_State  GlobalNamespace::LckSaveEchoButton_State::Error{static_cast<int32_t>(0x3)};
