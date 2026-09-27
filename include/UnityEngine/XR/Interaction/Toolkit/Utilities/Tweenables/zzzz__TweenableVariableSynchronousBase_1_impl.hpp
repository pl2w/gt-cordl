#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableSynchronousBase_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableSynchronousBase_1_def.hpp"
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::ExecuteTween(T  startValue, T  targetValue, float_t  tweenAmount, bool  useCurve)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startValue, targetValue, tweenAmount, useCurve);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::Lerp(T  from, T  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, from, to, t);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::IsNearlyEqual(T  startValue, T  targetValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, startValue, targetValue);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableSynchronousBase_1<T>::TweenableVariableSynchronousBase_1()   {
}
