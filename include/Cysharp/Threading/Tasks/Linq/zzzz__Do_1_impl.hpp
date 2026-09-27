#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Do_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Do_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Do_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Action_1<TSource>*& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_onNext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNext;
}
template<typename TSource>
constexpr ::System::Action_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_onNext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNext;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_set_onNext(::System::Action_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onNext = value;
}
template<typename TSource>
constexpr ::System::Action_1<::System::Exception*>*& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
template<typename TSource>
constexpr ::System::Action_1<::System::Exception*>* const& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_set_onError(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onError = value;
}
template<typename TSource>
constexpr ::System::Action*& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_onCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleted;
}
template<typename TSource>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_get_onCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleted;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1<TSource>::__cordl_internal_set_onCompleted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCompleted = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Do_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, onNext, onError, onCompleted);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::Do_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Do_1<TSource>* Cysharp::Threading::Tasks::Linq::Do_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Do_1<TSource>*>(source, onNext, onError, onCompleted));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Do_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::Do_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Do_1<TSource>::Do_1()   {
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Action_1<TSource>*& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_onNext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNext;
}
template<typename TSource>
constexpr ::System::Action_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_onNext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNext;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set_onNext(::System::Action_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onNext = value;
}
template<typename TSource>
constexpr ::System::Action_1<::System::Exception*>*& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_onError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
template<typename TSource>
constexpr ::System::Action_1<::System::Exception*>* const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_onError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onError;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set_onError(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onError = value;
}
template<typename TSource>
constexpr ::System::Action*& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_onCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleted;
}
template<typename TSource>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_onCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCompleted;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set_onCompleted(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCompleted = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TSource>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename TSource>
constexpr TSource& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::__cordl_internal_set__Current_k__BackingField(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::getStaticF_MoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>();
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Action_1<::System::Exception*>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, onNext, onError, onCompleted, cancellationToken);
}
template<typename TSource>
inline TSource Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::set_Current(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                        {"set_Current", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::CallTrySetExceptionAfterNotification(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                        {"CallTrySetExceptionAfterNotification", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
template<typename TSource>
template<typename T>
inline bool Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::TryGetResultWithNotification(::GlobalNamespace::UniTask_1_Awaiter<T>  awaiter, ::by_ref<T>  result)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                    {"TryGetResultWithNotification", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::UniTask_1_Awaiter<T>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, awaiter, result);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::MoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                        {"MoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>* Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  onNext, ::System::Action_1<::System::Exception*>*  onError, ::System::Action*  onCompleted, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>*>(source, onNext, onError, onCompleted, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Do_1__Do<TSource>::Do_1__Do()   {
}
