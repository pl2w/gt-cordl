#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/Bindings/Variables/BindableVariableBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableBase_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariableBase_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__IEventBinding_def.hpp"
template<typename T>
constexpr ::System::Action_1<T>*& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_valueUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueUpdated;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_valueUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueUpdated;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_set_valueUpdated(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueUpdated = value;
}
template<typename T>
constexpr T& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_InternalValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalValue;
}
template<typename T>
constexpr T const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_InternalValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalValue;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_set_m_InternalValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalValue = value;
}
template<typename T>
constexpr bool& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_CheckEquality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CheckEquality;
}
template<typename T>
constexpr bool const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_CheckEquality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CheckEquality;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_set_m_CheckEquality(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CheckEquality = value;
}
template<typename T>
constexpr bool& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_IsInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsInitialized;
}
template<typename T>
constexpr bool const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_IsInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsInitialized;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_set_m_IsInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsInitialized = value;
}
template<typename T>
constexpr ::System::Func_3<T,T,bool>*& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_EqualityMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EqualityMethod;
}
template<typename T>
constexpr ::System::Func_3<T,T,bool>* const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_EqualityMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EqualityMethod;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_set_m_EqualityMethod(::System::Func_3<T,T,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EqualityMethod = value;
}
template<typename T>
constexpr int32_t& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_BindingCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingCount;
}
template<typename T>
constexpr int32_t const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_get_m_BindingCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingCount;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::__cordl_internal_set_m_BindingCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingCount = value;
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::add_valueUpdated(::System::Action_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"add_valueUpdated", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::remove_valueUpdated(::System::Action_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"remove_valueUpdated", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline T Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::set_Value(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"set_Value", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline int32_t Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::get_BindingCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"get_BindingCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::SetValueWithoutNotify(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"SetValueWithoutNotify", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::Subscribe(::System::Action_1<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"Subscribe", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(this, ___internal_method, callback);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::SubscribeAndUpdate(::System::Action_1<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"SubscribeAndUpdate", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::IEventBinding*>(this, ___internal_method, callback);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::Unsubscribe(::System::Action_1<T>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::IncrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"IncrementReferenceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::DecrementReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"DecrementReferenceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::_ctor(T  initialValue, bool  checkEquality, ::System::Func_3<T,T,bool>*  equalityMethod, bool  startInitialized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Func_3<T,T,bool>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialValue, checkEquality, equalityMethod, startInitialized);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::BroadcastValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"BroadcastValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::Task(::System::Func_2<T,bool>*  awaitPredicate, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"Task", {}, {::i2c::type_of<::System::Func_2<T,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, awaitPredicate, token);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::Task(T  awaitState, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(),
                        {"Task", {}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method, awaitState, token);
}
template<typename T>
inline bool Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::ValueEquals(T  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::New_ctor(T  initialValue, bool  checkEquality, ::System::Func_3<T,T,bool>*  equalityMethod, bool  startInitialized)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*>(initialValue, checkEquality, equalityMethod, startInitialized));
}
/// @brief Convert operator to "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>"
template<typename T>
constexpr  Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::operator ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*() noexcept {
return static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>"
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::i___Unity__XR__CoreUtils__Bindings__Variables__IReadOnlyBindableVariable_1_T_() noexcept {
return static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>::BindableVariableBase_1()   {
}
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>* const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::__cordl_internal_set___4__this(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::__cordl_internal_get_callbackReference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackReference;
}
template<typename T>
constexpr ::System::Action_1<T>* const& Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::__cordl_internal_get_callbackReference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbackReference;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::__cordl_internal_set_callbackReference(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbackReference = value;
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::_Subscribe_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>*>(),
                        {"<Subscribe>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::_Subscribe_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>*>(),
                        {"<Subscribe>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>* Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1___c__DisplayClass14_0<T>::BindableVariableBase_1___c__DisplayClass14_0()   {
}
