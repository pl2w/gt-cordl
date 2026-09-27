#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToUniTaskAsyncEnumerableObservable_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToUniTaskAsyncEnumerableObservable_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToUniTaskAsyncEnumerableObservable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::IObservable_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::System::IObservable_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::__cordl_internal_set_source(::System::IObservable_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::_ctor(::System::IObservable_1<T>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IObservable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::New_ctor(::System::IObservable_1<T>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1<T>::ToUniTaskAsyncEnumerableObservable_1()   {
}
template<typename T>
constexpr ::System::IObservable_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::System::IObservable_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_source(::System::IObservable_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_useCachedCurrent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCachedCurrent;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_useCachedCurrent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useCachedCurrent;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_useCachedCurrent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useCachedCurrent = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_subscribeCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribeCompleted;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_subscribeCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscribeCompleted;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_subscribeCompleted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscribeCompleted = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_queuedResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedResult;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_queuedResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedResult;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_queuedResult(::System::Collections::Generic::Queue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedResult = value;
}
template<typename T>
constexpr ::System::Exception*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
template<typename T>
constexpr ::System::Exception* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___error;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_error(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___error = value;
}
template<typename T>
constexpr ::System::IDisposable*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_subscription()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscription;
}
template<typename T>
constexpr ::System::IDisposable* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_subscription() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subscription;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_subscription(::System::IDisposable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subscription = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::setStaticF_OnCanceledDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "OnCanceledDelegate", ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::getStaticF_OnCanceledDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "OnCanceledDelegate", ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::_ctor(::System::IObservable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IObservable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::OnCanceled(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::New_ctor(::System::IObservable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IObserver_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::operator ::System::IObserver_1<T>*() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<T>"
template<typename T>
constexpr ::System::IObserver_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::i___System__IObserver_1_T_() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable<T>::ToUniTaskAsyncEnumerableObservable_1__ToUniTaskAsyncEnumerableObservable()   {
}
