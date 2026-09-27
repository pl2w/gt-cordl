#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/TweenableVariableBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
template<typename T>
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_get_m_AnimationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimationCurve;
}
template<typename T>
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_get_m_AnimationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnimationCurve;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_set_m_AnimationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnimationCurve = value;
}
template<typename T>
constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_get_m_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
template<typename T>
constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_get_m_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_set_m_Target(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Target = value;
}
template<typename T>
constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_get__initialValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialValue_k__BackingField;
}
template<typename T>
constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_get__initialValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialValue_k__BackingField;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::__cordl_internal_set__initialValue_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialValue_k__BackingField = value;
}
template<typename T>
inline ::UnityEngine::AnimationCurve* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::get_animationCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"get_animationCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::set_animationCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"set_animationCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::set_target(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"set_target", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::get_initialValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"get_initialValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::set_initialValue(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"set_initialValue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::HandleTween(float_t  tweenTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"HandleTween", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweenTarget);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::ExecuteTween(T  startValue, T  targetValue, float_t  tweenAmount, bool  useCurve)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startValue, targetValue, tweenAmount, useCurve);
}
template<typename T>
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::StartAutoTween(float_t  deltaTimeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"StartAutoTween", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, deltaTimeMultiplier);
}
template<typename T>
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::PlaySequence(T  start, T  finish, float_t  duration, ::System::Action*  onComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {"PlaySequence", {}, {::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, start, finish, duration, onComplete);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::OnAnimationCurveChanged(::UnityEngine::AnimationCurve*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::OnTargetChanged(T  newTarget)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTarget);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::PreprocessTween()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>::TweenableVariableBase_1()   {
}
template<typename T>
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_set___4__this(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get_deltaTimeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTimeMultiplier;
}
template<typename T>
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_get_deltaTimeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTimeMultiplier;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::__cordl_internal_set_deltaTimeMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTimeMultiplier = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__StartAutoTween_d__15<T>::TweenableVariableBase_1__StartAutoTween_d__15()   {
}
template<typename T>
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set___4__this(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
template<typename T>
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
template<typename T>
constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
template<typename T>
constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set_start(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
template<typename T>
constexpr T& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_finish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finish;
}
template<typename T>
constexpr T const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_finish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finish;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set_finish(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finish = value;
}
template<typename T>
constexpr ::System::Action*& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_onComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
template<typename T>
constexpr ::System::Action* const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get_onComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onComplete;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set_onComplete(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onComplete = value;
}
template<typename T>
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get__timeElapsed_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeElapsed_5__2;
}
template<typename T>
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_get__timeElapsed_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeElapsed_5__2;
}
template<typename T>
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::__cordl_internal_set__timeElapsed_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeElapsed_5__2 = value;
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1__PlaySequence_d__16<T>::TweenableVariableBase_1__PlaySequence_d__16()   {
}
