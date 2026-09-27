#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioAnimator_AudioTarget.hpp"
#include "GlobalNamespace/zzzz__AudioAnimator_AudioTarget_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
// Ctor Parameters [CppParam { name: "audioSource", ty: "::UnityW<::UnityEngine::AudioSource>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pitchCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "volumeCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "baseVolume", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "riseSmoothing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lowerSmoothing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AudioAnimator_AudioTarget::AudioAnimator_AudioTarget(::UnityW<::UnityEngine::AudioSource>  audioSource, ::UnityEngine::AnimationCurve*  pitchCurve, ::UnityEngine::AnimationCurve*  volumeCurve, float_t  baseVolume, float_t  riseSmoothing, float_t  lowerSmoothing) noexcept  {
this->audioSource = audioSource;
this->pitchCurve = pitchCurve;
this->volumeCurve = volumeCurve;
this->baseVolume = baseVolume;
this->riseSmoothing = riseSmoothing;
this->lowerSmoothing = lowerSmoothing;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioAnimator_AudioTarget::AudioAnimator_AudioTarget()   {
}
