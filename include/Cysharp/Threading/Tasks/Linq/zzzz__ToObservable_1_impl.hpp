#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToObservable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToObservable_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToObservable_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToObservable`1__RunAsync_d__3_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*& Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* const& Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToObservable_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename T>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::Subscribe(::System::IObserver_1<T>*  observer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToObservable_1<T>*>(),
                        {"Subscribe", {}, {::i2c::type_of<::System::IObserver_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::RunAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  src, ::System::IObserver_1<T>*  observer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToObservable_1<T>*>(),
                        {"RunAsync", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::IObserver_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, src, observer, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToObservable_1<T>* Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToObservable_1<T>*>(source));
}
/// @brief Convert operator to "::System::IObservable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::operator ::System::IObservable_1<T>*() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<T>"
template<typename T>
constexpr ::System::IObservable_1<T>* Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::i___System__IObservable_1_T_() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToObservable_1<T>::ToObservable_1()   {
}
template<typename T>
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::__cordl_internal_get_cts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::__cordl_internal_get_cts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cts;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::__cordl_internal_set_cts(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cts = value;
}
template<typename T>
inline ::System::Threading::CancellationToken Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationToken>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>* Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToObservable_1_CancellationTokenDisposable<T>::ToObservable_1_CancellationTokenDisposable()   {
}
