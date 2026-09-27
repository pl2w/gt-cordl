#pragma once
// IWYU pragma private; include "System/Net/TimerThread_TimerThreadState.hpp"
#include "System/Net/zzzz__TimerThread_TimerThreadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimerThread_TimerThreadState::TimerThread_TimerThreadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimerThread_TimerThreadState::TimerThread_TimerThreadState()   {
}
constexpr ::GlobalNamespace::TimerThread_TimerThreadState  GlobalNamespace::TimerThread_TimerThreadState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimerThread_TimerThreadState  GlobalNamespace::TimerThread_TimerThreadState::Running{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TimerThread_TimerThreadState  GlobalNamespace::TimerThread_TimerThreadState::Stopped{static_cast<int32_t>(0x2)};
