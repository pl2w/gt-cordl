#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskObservableExtensions.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskObservableExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__AsyncSubject_1_def.hpp"
#include "Cysharp/Threading/Tasks/Internal/zzzz__SingleAssignmentDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskObservableExtensions__Fire_d__3_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskObservableExtensions__Fire_d__4_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskObservableExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskObservableExtensions.ToObservable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IObservable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::Cysharp::Threading::Tasks::UniTask)>(&::Cysharp::Threading::Tasks::UniTaskObservableExtensions::ToObservable)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xae01eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions*>(),
                        {"ToObservable", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UniTaskObservableExtensions.Fire
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskVoid (*)(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*, ::Cysharp::Threading::Tasks::UniTask)>(&::Cysharp::Threading::Tasks::UniTaskObservableExtensions::Fire)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xae021fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions*>(),
                        {"Fire", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::UniTaskObservableExtensions::ToUniTask(::System::IObservable_1<T>*  source, bool  useFirstValue, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions*>(),
                    {"ToUniTask", {::i2c::class_of<T>()}, {::i2c::type_of<::System::IObservable_1<T>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(nullptr, ___internal_method, source, useFirstValue, cancellationToken);
}
template<typename T>
inline ::System::IObservable_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions::ToObservable(::Cysharp::Threading::Tasks::UniTask_1<T>  task)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions*>(),
                    {"ToObservable", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<T>*>(nullptr, ___internal_method, task);
}
inline ::System::IObservable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UniTaskObservableExtensions::ToObservable(::Cysharp::Threading::Tasks::UniTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions*>(),
                        {"ToObservable", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, task);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::UniTaskObservableExtensions::Fire(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*  subject, ::Cysharp::Threading::Tasks::UniTask_1<T>  task)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions*>(),
                    {"Fire", {::i2c::class_of<T>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<T>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, subject, task);
}
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::UniTaskObservableExtensions::Fire(::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*  subject, ::Cysharp::Threading::Tasks::UniTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions*>(),
                        {"Fire", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, subject, task);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UniTaskObservableExtensions::UniTaskObservableExtensions()   {
}
template<typename T>
constexpr ::System::Exception*& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr ::System::Exception* const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::__cordl_internal_set_value(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::_ctor(::System::Exception*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::IDisposable* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::Subscribe(::System::IObserver_1<T>*  observer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>*>(),
                        {"Subscribe", {}, {::i2c::type_of<::System::IObserver_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::New_ctor(::System::Exception*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>*>(value));
}
/// @brief Convert operator to "::System::IObservable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::operator ::System::IObservable_1<T>*() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<T>"
template<typename T>
constexpr ::System::IObservable_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::i___System__IObservable_1_T_() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ThrowObservable_1<T>::UniTaskObservableExtensions_ThrowObservable_1()   {
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::_ctor(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::System::IDisposable* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::Subscribe(::System::IObserver_1<T>*  observer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>*>(),
                        {"Subscribe", {}, {::i2c::type_of<::System::IObserver_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::New_ctor(T  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>*>(value));
}
/// @brief Convert operator to "::System::IObservable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::operator ::System::IObservable_1<T>*() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<T>"
template<typename T>
constexpr ::System::IObservable_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::i___System__IObservable_1_T_() noexcept {
return static_cast<::System::IObservable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ReturnObservable_1<T>::UniTaskObservableExtensions_ReturnObservable_1()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_set_promise(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promise = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_disposable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposable;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_disposable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposable;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_set_disposable(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposable = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_registration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_registration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registration = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_hasValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasValue;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_get_hasValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::__cordl_internal_set_hasValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasValue = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::setStaticF_callback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "callback", ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::getStaticF_callback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "callback", ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::_ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promise, disposable, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::OnCanceled(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::New_ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>*>(promise, disposable, cancellationToken));
}
/// @brief Convert operator to "::System::IObserver_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::operator ::System::IObserver_1<T>*() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<T>"
template<typename T>
constexpr ::System::IObserver_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::i___System__IObserver_1_T_() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1<T>::UniTaskObservableExtensions_FirstValueToUniTaskObserver_1()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_promise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>* const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_promise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promise;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_set_promise(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promise = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_disposable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposable;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_disposable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposable;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_set_disposable(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposable = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_registration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_registration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___registration;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_set_registration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___registration = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_hasValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasValue;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_hasValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_set_hasValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasValue = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_latestValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestValue;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_get_latestValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latestValue;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::__cordl_internal_set_latestValue(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latestValue = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::setStaticF_callback(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "callback", ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename T>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::getStaticF_callback()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "callback", ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::_ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promise, disposable, cancellationToken);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::OnCanceled(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::OnNext(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>(),
                        {"OnNext", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::OnError(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::New_ctor(::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<T>*  promise, ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*  disposable, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>*>(promise, disposable, cancellationToken));
}
/// @brief Convert operator to "::System::IObserver_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::operator ::System::IObserver_1<T>*() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<T>"
template<typename T>
constexpr ::System::IObserver_1<T>* Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::i___System__IObserver_1_T_() noexcept {
return static_cast<::System::IObserver_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskObservableExtensions_ToUniTaskObserver_1<T>::UniTaskObservableExtensions_ToUniTaskObserver_1()   {
}
