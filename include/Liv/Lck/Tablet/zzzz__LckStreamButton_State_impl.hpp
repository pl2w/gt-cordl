#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LckStreamButton_State.hpp"
#include "Liv/Lck/Tablet/zzzz__LckStreamButton_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckStreamButton_State::LckStreamButton_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckStreamButton_State::LckStreamButton_State()   {
}
constexpr ::GlobalNamespace::LckStreamButton_State  GlobalNamespace::LckStreamButton_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckStreamButton_State  GlobalNamespace::LckStreamButton_State::WaitingForStreamingStart{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckStreamButton_State  GlobalNamespace::LckStreamButton_State::Streaming{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckStreamButton_State  GlobalNamespace::LckStreamButton_State::DoingStoppingAnimation{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::LckStreamButton_State  GlobalNamespace::LckStreamButton_State::StoppingAnimationCompleted{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::LckStreamButton_State  GlobalNamespace::LckStreamButton_State::WaitUntilTriggerExitOrDelay{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::LckStreamButton_State  GlobalNamespace::LckStreamButton_State::Error{static_cast<int32_t>(0x6)};
