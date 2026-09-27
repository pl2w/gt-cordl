#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SelectAwaitWithCancellation_2.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SelectAwaitWithCancellation_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SelectAwaitWithCancellation_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::__cordl_internal_set_selector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, selector);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>* Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>*>(source, selector));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TSource,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2<TSource,TResult>::SelectAwaitWithCancellation_2()   {
}
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_selector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TResult>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource,typename TResult>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
template<typename TSource,typename TResult>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TSource,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename TSource,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult>& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_awaiter2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter2;
}
template<typename TSource,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult> const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_awaiter2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter2;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_awaiter2(::GlobalNamespace::UniTask_1_Awaiter<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter2 = value;
}
template<typename TSource,typename TResult>
constexpr ::System::Action*& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_moveNextAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveNextAction;
}
template<typename TSource,typename TResult>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get_moveNextAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveNextAction;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set_moveNextAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveNextAction = value;
}
template<typename TSource,typename TResult>
constexpr TResult& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TResult>
constexpr TResult const& Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::__cordl_internal_set__Current_k__BackingField(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, selector, cancellationToken);
}
template<typename TSource,typename TResult>
inline TResult Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::set_Current(TResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>*>(),
                        {"set_Current", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>* Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  selector, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>*>(source, selector, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation<TSource,TResult>::SelectAwaitWithCancellation_2__SelectAwaitWithCancellation()   {
}
