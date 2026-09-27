#pragma once
// IWYU pragma private; include "GlobalNamespace/TimedUnityEventDispatcher_ReadyState.hpp"
#include "GlobalNamespace/zzzz__TimedUnityEventDispatcher_ReadyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState::TimedUnityEventDispatcher_ReadyState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState::TimedUnityEventDispatcher_ReadyState()   {
}
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  GlobalNamespace::TimedUnityEventDispatcher_ReadyState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  GlobalNamespace::TimedUnityEventDispatcher_ReadyState::Initializing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  GlobalNamespace::TimedUnityEventDispatcher_ReadyState::Ready{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TimedUnityEventDispatcher_ReadyState  GlobalNamespace::TimedUnityEventDispatcher_ReadyState::Crashed{static_cast<int32_t>(0x3)};
