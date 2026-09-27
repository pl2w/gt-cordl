#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/EaseState.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Comfort/zzzz__EaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState::EaseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState::EaseState()   {
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState::NotEasing{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState::EasingIn{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState::EasingInHoldBeforeEasingOut{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState::EasingOutDelay{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState  UnityEngine::XR::Interaction::Toolkit::Locomotion::Comfort::EaseState::EasingOut{static_cast<int32_t>(0x4)};
