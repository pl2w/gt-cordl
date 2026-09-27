#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBug_AudioState.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_AudioState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ThrowableBug_AudioState::ThrowableBug_AudioState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ThrowableBug_AudioState::ThrowableBug_AudioState()   {
}
constexpr ::GlobalNamespace::ThrowableBug_AudioState  GlobalNamespace::ThrowableBug_AudioState::JustGrabbed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ThrowableBug_AudioState  GlobalNamespace::ThrowableBug_AudioState::ContinuallyGrabbed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ThrowableBug_AudioState  GlobalNamespace::ThrowableBug_AudioState::JustReleased{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ThrowableBug_AudioState  GlobalNamespace::ThrowableBug_AudioState::NotHeld{static_cast<int32_t>(0x3)};
