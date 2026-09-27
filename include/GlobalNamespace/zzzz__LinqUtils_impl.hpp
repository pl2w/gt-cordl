#pragma once
// IWYU pragma private; include "GlobalNamespace/LinqUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LinqUtils_def.hpp"
#include "GlobalNamespace/zzzz__LinqUtils_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource,typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* GlobalNamespace::LinqUtils::SelectManyNullSafe(::System::Collections::Generic::IEnumerable_1<TSource>*  sources, ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LinqUtils*>(),
                    {"SelectManyNullSafe", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*>(nullptr, ___internal_method, sources, selector);
}
template<typename TSource,typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* GlobalNamespace::LinqUtils::DistinctBy(::System::Collections::Generic::IEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TResult>*  selector)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LinqUtils*>(),
                    {"DistinctBy", {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TResult>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*>(nullptr, ___internal_method, source, selector);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::LinqUtils::ForEach(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Action_1<T>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LinqUtils*>(),
                    {"ForEach", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, source, action);
}
template<typename T>
inline ::ArrayW<T> GlobalNamespace::LinqUtils::AsArray(::System::Collections::Generic::IEnumerable_1<T>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LinqUtils*>(),
                    {"AsArray", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, source);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::LinqUtils::AsList(::System::Collections::Generic::IEnumerable_1<T>*  source)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LinqUtils*>(),
                    {"AsList", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, source);
}
template<typename T>
inline ::System::Collections::Generic::IList_1<T>* GlobalNamespace::LinqUtils::Transform(::System::Collections::Generic::IList_1<T>*  list, ::System::Func_2<T,T>*  action)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LinqUtils*>(),
                    {"Transform", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>(), ::i2c::type_of<::System::Func_2<T,T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<T>*>(nullptr, ___internal_method, list, action);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::LinqUtils::Self(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::LinqUtils*>(),
                    {"Self", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LinqUtils::LinqUtils()   {
}
template<typename T>
constexpr int32_t& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr T& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr T const& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_set___2__current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr T& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
constexpr T& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___3__value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__value;
}
template<typename T>
constexpr T const& GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_get___3__value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__value;
}
template<typename T>
constexpr void GlobalNamespace::LinqUtils__Self_d__6_1<T>::__cordl_internal_set___3__value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__value = value;
}
template<typename T>
inline void GlobalNamespace::LinqUtils__Self_d__6_1<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void GlobalNamespace::LinqUtils__Self_d__6_1<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::LinqUtils__Self_d__6_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline T GlobalNamespace::LinqUtils__Self_d__6_1<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {"System.Collections.Generic.IEnumerator<T>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::LinqUtils__Self_d__6_1<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* GlobalNamespace::LinqUtils__Self_d__6_1<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::LinqUtils__Self_d__6_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::LinqUtils__Self_d__6_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::GlobalNamespace::LinqUtils__Self_d__6_1<T>* GlobalNamespace::LinqUtils__Self_d__6_1<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LinqUtils__Self_d__6_1<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GlobalNamespace::LinqUtils__Self_d__6_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::LinqUtils__Self_d__6_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::LinqUtils__Self_d__6_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::LinqUtils__Self_d__6_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  GlobalNamespace::LinqUtils__Self_d__6_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::LinqUtils__Self_d__6_1<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  GlobalNamespace::LinqUtils__Self_d__6_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LinqUtils__Self_d__6_1<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  GlobalNamespace::LinqUtils__Self_d__6_1<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* GlobalNamespace::LinqUtils__Self_d__6_1<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::LinqUtils__Self_d__6_1<T>::LinqUtils__Self_d__6_1()   {
}
template<typename TSource,typename TResult>
constexpr int32_t& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TSource,typename TResult>
constexpr int32_t const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename TSource,typename TResult>
constexpr TResult& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TSource,typename TResult>
constexpr TResult const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set___2__current(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename TSource,typename TResult>
constexpr int32_t& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename TSource,typename TResult>
constexpr int32_t const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get_sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sources;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get_sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sources;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set_sources(::System::Collections::Generic::IEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sources = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___3__sources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__sources;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___3__sources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__sources;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set___3__sources(::System::Collections::Generic::IEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__sources = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>* const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set_selector(::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___3__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__selector;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>* const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___3__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__selector;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set___3__selector(::System::Func_2<TSource,::System::Collections::Generic::IEnumerable_1<TResult>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__selector = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>*& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* const& GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline bool GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"<>m__Finally2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline TResult GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::System_Collections_Generic_IEnumerator_TResult__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"System.Collections.Generic.IEnumerator<TResult>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::System::Object* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TResult>* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::System_Collections_Generic_IEnumerable_TResult__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::System::Collections::IEnumerator* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename TSource,typename TResult>
inline ::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TResult>"
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TResult>* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::i___System__Collections__Generic__IEnumerable_1_TResult_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TSource,typename TResult>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TResult>"
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::i___System__Collections__Generic__IEnumerator_1_TResult_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TSource,typename TResult>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TSource,typename TResult>
constexpr ::System::IDisposable* GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::GlobalNamespace::LinqUtils__SelectManyNullSafe_d__0_2<TSource,TResult>::LinqUtils__SelectManyNullSafe_d__0_2()   {
}
template<typename TSource,typename TResult>
constexpr int32_t& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TSource,typename TResult>
constexpr int32_t const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename TSource,typename TResult>
constexpr TSource& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TSource,typename TResult>
constexpr TSource const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set___2__current(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename TSource,typename TResult>
constexpr int32_t& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename TSource,typename TResult>
constexpr int32_t const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___3__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__source;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___3__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__source;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__source = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,TResult>*& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,TResult>* const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set_selector(::System::Func_2<TSource,TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,TResult>*& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___3__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__selector;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_2<TSource,TResult>* const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___3__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__selector;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set___3__selector(::System::Func_2<TSource,TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__selector = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::HashSet_1<TResult>*& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get__set_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____set_5__2;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::HashSet_1<TResult>* const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get__set_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____set_5__2;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set__set_5__2(::System::Collections::Generic::HashSet_1<TResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____set_5__2 = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___7__wrap2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* const& GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_get___7__wrap2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap2;
}
template<typename TSource,typename TResult>
constexpr void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap2 = value;
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline bool GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline TSource GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::System_Collections_Generic_IEnumerator_TSource__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"System.Collections.Generic.IEnumerator<TSource>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline void GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::System::Object* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::System::Collections::IEnumerator* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename TSource,typename TResult>
inline ::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TSource,typename TResult>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template<typename TSource,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TSource,typename TResult>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TSource,typename TResult>
constexpr  GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TSource,typename TResult>
constexpr ::System::IDisposable* GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::GlobalNamespace::LinqUtils__DistinctBy_d__1_2<TSource,TResult>::LinqUtils__DistinctBy_d__1_2()   {
}
