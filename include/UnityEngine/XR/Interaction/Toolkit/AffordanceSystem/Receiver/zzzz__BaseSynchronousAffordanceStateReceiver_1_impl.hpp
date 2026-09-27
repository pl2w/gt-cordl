#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/BaseSynchronousAffordanceStateReceiver_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAffordanceStateReceiver_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseSynchronousAffordanceStateReceiver_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__IAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__ISynchronousAffordanceStateReceiver_def.hpp"
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::HandleTween(float_t  tweenTarget)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweenTarget);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::Interpolate(T  startValue, T  targetValue, float_t  interpolationAmount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, startValue, targetValue, interpolationAmount);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver"
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__ISynchronousAffordanceStateReceiver() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseSynchronousAffordanceStateReceiver_1<T>::BaseSynchronousAffordanceStateReceiver_1()   {
}
