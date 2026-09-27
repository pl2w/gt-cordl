#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GtStreamButton_State.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtStreamButton_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GtStreamButton_State::GtStreamButton_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GtStreamButton_State::GtStreamButton_State()   {
}
constexpr ::GlobalNamespace::GtStreamButton_State  GlobalNamespace::GtStreamButton_State::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GtStreamButton_State  GlobalNamespace::GtStreamButton_State::WaitingForStreamingStart{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GtStreamButton_State  GlobalNamespace::GtStreamButton_State::Streaming{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GtStreamButton_State  GlobalNamespace::GtStreamButton_State::DoingStoppingAnimation{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GtStreamButton_State  GlobalNamespace::GtStreamButton_State::StoppingAnimationCompleted{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GtStreamButton_State  GlobalNamespace::GtStreamButton_State::WaitUntilTriggerExitOrDelay{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GtStreamButton_State  GlobalNamespace::GtStreamButton_State::Error{static_cast<int32_t>(0x6)};
