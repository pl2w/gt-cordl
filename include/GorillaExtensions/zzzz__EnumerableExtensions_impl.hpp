#pragma once
// IWYU pragma private; include "GorillaExtensions/EnumerableExtensions.hpp"
#include "System/zzzz__IComparable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaExtensions/zzzz__EnumerableExtensions_def.hpp"
#include "GorillaExtensions/zzzz__EnumerableExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TValue,typename TKey>
requires(::cordl_internals::type_constraint<TKey, ::System::IComparable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey>)
inline TValue GorillaExtensions::EnumerableExtensions::MinBy(::System::Collections::Generic::IEnumerable_1<TValue>*  ts, ::System::Func_2<TValue,TKey>*  keyGetter)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::EnumerableExtensions*>(),
                    {"MinBy", {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TValue>*>(), ::i2c::type_of<::System::Func_2<TValue,TKey>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<TValue>(nullptr, ___internal_method, ts, keyGetter);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GorillaExtensions::EnumerableExtensions::Peek(::System::Collections::Generic::IEnumerable_1<T>*  ts, ::System::Action_1<T>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GorillaExtensions::EnumerableExtensions*>(),
                    {"Peek", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, ts, action);
}
// Ctor Parameters []
constexpr ::GorillaExtensions::EnumerableExtensions::EnumerableExtensions()   {
}
template<typename T>
constexpr int32_t& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr T& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr T const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set___2__current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get_ts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get_ts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set_ts(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ts = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>*& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___3__ts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__ts;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___3__ts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__ts;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set___3__ts(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__ts = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr ::System::Action_1<T>* const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set_action(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T>
constexpr ::System::Action_1<T>*& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___3__action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__action;
}
template<typename T>
constexpr ::System::Action_1<T>* const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___3__action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__action;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set___3__action(::System::Action_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__action = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename T>
constexpr void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
template<typename T>
inline void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"System.Collections.Generic.IEnumerator<T>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaExtensions::EnumerableExtensions__Peek_d__1_1<T>::EnumerableExtensions__Peek_d__1_1()   {
}
