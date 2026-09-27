#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FutureState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FutureState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_FutureState::OVRPlugin_FutureState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_FutureState::OVRPlugin_FutureState()   {
}
constexpr ::GlobalNamespace::OVRPlugin_FutureState  GlobalNamespace::OVRPlugin_FutureState::Pending{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_FutureState  GlobalNamespace::OVRPlugin_FutureState::Ready{static_cast<int32_t>(0x2)};
