#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrabGlow_GrabState.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GrabState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandGrabGlow_GrabState::HandGrabGlow_GrabState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandGrabGlow_GrabState::HandGrabGlow_GrabState()   {
}
constexpr ::GlobalNamespace::HandGrabGlow_GrabState  GlobalNamespace::HandGrabGlow_GrabState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandGrabGlow_GrabState  GlobalNamespace::HandGrabGlow_GrabState::Pinch{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandGrabGlow_GrabState  GlobalNamespace::HandGrabGlow_GrabState::Palm{static_cast<int32_t>(0x2)};
