#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToUniTaskAsyncEnumerableTask_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToUniTaskAsyncEnumerableTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToUniTaskAsyncEnumerableTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToUniTaskAsyncEnumerableTask`1__ToUniTaskAsyncEnumerableTask__MoveNextAsync_d__7_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename T>
constexpr ::System::Threading::Tasks::Task_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::System::Threading::Tasks::Task_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::__cordl_internal_set_source(::System::Threading::Tasks::Task_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::_ctor(::System::Threading::Tasks::Task_1<T>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::New_ctor(::System::Threading::Tasks::Task_1<T>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1<T>::ToUniTaskAsyncEnumerableTask_1()   {
}
template<typename T>
constexpr ::System::Threading::Tasks::Task_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::System::Threading::Tasks::Task_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_set_source(::System::Threading::Tasks::Task_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_set_current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_called()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_get_called() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::__cordl_internal_set_called(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___called = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::_ctor(::System::Threading::Tasks::Task_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::New_ctor(::System::Threading::Tasks::Task_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask<T>::ToUniTaskAsyncEnumerableTask_1__ToUniTaskAsyncEnumerableTask()   {
}
