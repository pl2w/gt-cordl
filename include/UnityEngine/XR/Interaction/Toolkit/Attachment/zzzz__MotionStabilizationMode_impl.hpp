#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Attachment/MotionStabilizationMode.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__MotionStabilizationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode::MotionStabilizationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode::MotionStabilizationMode()   {
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode::Never{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode::WithPositionOffset{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode  UnityEngine::XR::Interaction::Toolkit::Attachment::MotionStabilizationMode::Always{static_cast<int32_t>(0x2)};
