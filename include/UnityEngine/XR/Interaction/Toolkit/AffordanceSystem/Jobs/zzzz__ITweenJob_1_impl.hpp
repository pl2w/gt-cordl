#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/ITweenJob_1.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__ITweenJob_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::get_jobData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::set_jobData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::Lerp(T  from, T  to, float_t  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, from, to, t);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::IsNearlyEqual(T  from, T  to)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::operator ::Unity::Jobs::IJob*() noexcept {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Jobs::IJob"
template<typename T>
constexpr ::Unity::Jobs::IJob* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::ITweenJob_1<T>::i___Unity__Jobs__IJob() noexcept {
return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(this));
}
