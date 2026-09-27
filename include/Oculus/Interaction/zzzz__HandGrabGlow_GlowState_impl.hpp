#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrabGlow_GlowState.hpp"
#include "Oculus/Interaction/zzzz__HandGrabGlow_GlowState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandGrabGlow_GlowState::HandGrabGlow_GlowState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandGrabGlow_GlowState::HandGrabGlow_GlowState()   {
}
constexpr ::GlobalNamespace::HandGrabGlow_GlowState  GlobalNamespace::HandGrabGlow_GlowState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HandGrabGlow_GlowState  GlobalNamespace::HandGrabGlow_GlowState::Hover{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HandGrabGlow_GlowState  GlobalNamespace::HandGrabGlow_GlowState::Selected{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HandGrabGlow_GlowState  GlobalNamespace::HandGrabGlow_GlowState::SelectedGlowOut{static_cast<int32_t>(0x3)};
