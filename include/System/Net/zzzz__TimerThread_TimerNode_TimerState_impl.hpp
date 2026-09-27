#pragma once
// IWYU pragma private; include "System/Net/TimerThread_TimerNode_TimerState.hpp"
#include "System/Net/zzzz__TimerThread_TimerNode_TimerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimerNode_TimerThread_TimerState::TimerNode_TimerThread_TimerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimerNode_TimerThread_TimerState::TimerNode_TimerThread_TimerState()   {
}
constexpr ::GlobalNamespace::TimerNode_TimerThread_TimerState  GlobalNamespace::TimerNode_TimerThread_TimerState::Ready{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimerNode_TimerThread_TimerState  GlobalNamespace::TimerNode_TimerThread_TimerState::Fired{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TimerNode_TimerThread_TimerState  GlobalNamespace::TimerNode_TimerThread_TimerState::Cancelled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TimerNode_TimerThread_TimerState  GlobalNamespace::TimerNode_TimerThread_TimerState::Sentinel{static_cast<int32_t>(0x3)};
