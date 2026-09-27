#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StylePropertyAnimationSystem_Values`1_TimingData.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyAnimationSystem_Values`1_TimingData_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "startTimeMs", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "durationMs", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "easingCurve", ty: "::System::Func_2<float_t,float_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "easedProgress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "reversingShorteningFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "delayMs", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::Values_1_StylePropertyAnimationSystem_TimingData<T>::Values_1_StylePropertyAnimationSystem_TimingData(int64_t  startTimeMs, int32_t  durationMs, ::System::Func_2<float_t,float_t>*  easingCurve, float_t  easedProgress, float_t  reversingShorteningFactor, bool  isStarted, int32_t  delayMs) noexcept  {
this->startTimeMs = startTimeMs;
this->durationMs = durationMs;
this->easingCurve = easingCurve;
this->easedProgress = easedProgress;
this->reversingShorteningFactor = reversingShorteningFactor;
this->isStarted = isStarted;
this->delayMs = delayMs;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Values_1_StylePropertyAnimationSystem_TimingData<T>::Values_1_StylePropertyAnimationSystem_TimingData()   {
}
