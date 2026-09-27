#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/ShapeRecognizerActiveState_FingerFeatureStateUsage.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizerActiveState_FingerFeatureStateUsage_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ShapeRecognizer_def.hpp"
// Ctor Parameters [CppParam { name: "handFinger", ty: "::Oculus::Interaction::Input::HandFinger", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "config", ty: "::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage::ShapeRecognizerActiveState_FingerFeatureStateUsage(::Oculus::Interaction::Input::HandFinger  handFinger, ::Oculus::Interaction::PoseDetection::ShapeRecognizer_FingerFeatureConfig*  config) noexcept  {
this->handFinger = handFinger;
this->config = config;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShapeRecognizerActiveState_FingerFeatureStateUsage::ShapeRecognizerActiveState_FingerFeatureStateUsage()   {
}
