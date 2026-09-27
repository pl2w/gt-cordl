#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/BaseAsyncAffordanceStateReceiver_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAffordanceStateReceiver_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__IAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__IAsyncAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Theme/zzzz__BaseAffordanceTheme_1_def.hpp"
template<typename T>
constexpr ::Unity::Collections::NativeArray_1<T>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_JobOutputStore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JobOutputStore;
}
template<typename T>
constexpr ::Unity::Collections::NativeArray_1<T> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_JobOutputStore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JobOutputStore;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_set_m_JobOutputStore(::Unity::Collections::NativeArray_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JobOutputStore = value;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_NativeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeCurve;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_NativeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeCurve;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_set_m_NativeCurve(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativeCurve = value;
}
template<typename T>
constexpr ::Unity::Jobs::JobHandle& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_LastJobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastJobHandle;
}
template<typename T>
constexpr ::Unity::Jobs::JobHandle const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_LastJobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastJobHandle;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_set_m_LastJobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastJobHandle = value;
}
template<typename T>
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_OutputInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OutputInitialized;
}
template<typename T>
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_get_m_OutputInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OutputInitialized;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::__cordl_internal_set_m_OutputInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OutputInitialized = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::HandleTween(float_t  tweenTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>(),
                        {"HandleTween", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, tweenTarget);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::UpdateStateFromCompletedJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>(),
                        {"UpdateStateFromCompletedJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>>  jobData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, jobData);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::OnAffordanceThemeChanged(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*  newValue)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::GetJobOutputStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>(),
                        {"GetJobOutputStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver"
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAsyncAffordanceStateReceiver() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<T>::BaseAsyncAffordanceStateReceiver_1()   {
}
