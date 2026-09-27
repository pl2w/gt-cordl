#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableAsyncBase_1.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableAsyncBase_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Jobs/zzzz__TweenJobData_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
template<typename T>
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_OutputInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OutputInitialized;
}
template<typename T>
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_OutputInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OutputInitialized;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_set_m_OutputInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OutputInitialized = value;
}
template<typename T>
constexpr ::Unity::Collections::NativeArray_1<T>& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_JobOutputStore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JobOutputStore;
}
template<typename T>
constexpr ::Unity::Collections::NativeArray_1<T> const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_JobOutputStore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JobOutputStore;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_set_m_JobOutputStore(::Unity::Collections::NativeArray_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JobOutputStore = value;
}
template<typename T>
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_CurveDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveDirty;
}
template<typename T>
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_CurveDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveDirty;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_set_m_CurveDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurveDirty = value;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_NativeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeCurve;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_NativeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NativeCurve;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_set_m_NativeCurve(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NativeCurve = value;
}
template<typename T>
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_HasJobPending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasJobPending;
}
template<typename T>
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_HasJobPending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasJobPending;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_set_m_HasJobPending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasJobPending = value;
}
template<typename T>
constexpr ::Unity::Jobs::JobHandle& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_LastJobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastJobHandle;
}
template<typename T>
constexpr ::Unity::Jobs::JobHandle const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_get_m_LastJobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastJobHandle;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::__cordl_internal_set_m_LastJobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastJobHandle = value;
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::GetNativeCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"GetNativeCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::RefreshCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"RefreshCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::PreprocessTween()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::ExecuteTween(T  startValue, T  targetValue, float_t  tweenAmount, bool  useCurve)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startValue, targetValue, tweenAmount, useCurve);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::UpdateStateFromCompletedJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"UpdateStateFromCompletedJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::Jobs::JobHandle UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::ScheduleTweenJob(::by_ref<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>>  jobData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, jobData);
}
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::GetJobOutputStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"GetJobOutputStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::OnAnimationCurveChanged(::UnityEngine::AnimationCurve*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::CompleteJob()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {"CompleteJob", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>::TweenableVariableAsyncBase_1()   {
}
