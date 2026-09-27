#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionState.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState::LocomotionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState::LocomotionState()   {
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState::Idle{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState::Preparing{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState::Moving{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState::Ended{static_cast<int32_t>(0x3)};
