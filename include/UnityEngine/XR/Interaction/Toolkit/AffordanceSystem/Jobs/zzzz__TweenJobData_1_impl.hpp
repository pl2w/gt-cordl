#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/TweenJobData_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
template<typename T>
inline float_t UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>::get_stateTransitionAmountFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>>(),
                        {"get_stateTransitionAmountFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "initialValue", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateOriginValue", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateTargetValue", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateTransitionIncrement", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nativeCurve", ty: "::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tweenStartValue", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tweenAmount", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outputData", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>::TweenJobData_1(T  initialValue, T  stateOriginValue, T  stateTargetValue, uint8_t  stateTransitionIncrement, ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve  nativeCurve, T  tweenStartValue, float_t  tweenAmount, ::Unity::Collections::NativeArray_1<T>  outputData) noexcept  {
this->initialValue = initialValue;
this->stateOriginValue = stateOriginValue;
this->stateTargetValue = stateTargetValue;
this->stateTransitionIncrement = stateTransitionIncrement;
this->nativeCurve = nativeCurve;
this->tweenStartValue = tweenStartValue;
this->tweenAmount = tweenAmount;
this->outputData = outputData;
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>::TweenJobData_1()   {
}
