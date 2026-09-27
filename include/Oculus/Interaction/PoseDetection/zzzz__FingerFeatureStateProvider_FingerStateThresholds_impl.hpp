#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateProvider_FingerStateThresholds.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateProvider_FingerStateThresholds_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateThresholds_def.hpp"
// Ctor Parameters [CppParam { name: "Finger", ty: "::Oculus::Interaction::Input::HandFinger", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StateThresholds", ty: "::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds::FingerFeatureStateProvider_FingerStateThresholds(::Oculus::Interaction::Input::HandFinger  Finger, ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds>  StateThresholds) noexcept  {
this->Finger = Finger;
this->StateThresholds = StateThresholds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds::FingerFeatureStateProvider_FingerStateThresholds()   {
}
