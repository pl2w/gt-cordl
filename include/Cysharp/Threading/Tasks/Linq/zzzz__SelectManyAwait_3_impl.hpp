#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SelectManyAwait_3.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SelectManyAwait_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SelectManyAwait_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SelectManyAwait`3__SelectManyAwait__DisposeAsync_d__32_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_selector1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector1;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_selector1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector1;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_set_selector1(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector1 = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_selector2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector2;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_selector2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector2;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_set_selector2(::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector2 = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::__cordl_internal_set_resultSelector(::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, selector, resultSelector);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, selector, resultSelector);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>*>(source, selector, resultSelector));
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>*>(source, selector, resultSelector));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TSource,typename TCollection,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3<TSource,TCollection,TResult>::SelectManyAwait_3()   {
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selector1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector1;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selector1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector1;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_selector1(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector1 = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selector2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector2;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selector2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector2;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_selector2(::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector2 = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_resultSelector(::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr TSource& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceCurrent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceCurrent;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceCurrent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceCurrent;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_sourceCurrent(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceCurrent = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceIndex;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceIndex;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_sourceIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceIndex = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceEnumerator;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceEnumerator;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_sourceEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceEnumerator = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>*& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selectedEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedEnumerator;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>* const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selectedEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedEnumerator;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_selectedEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TCollection>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedEnumerator = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_sourceAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_sourceAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceAwaiter = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selectedAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selectedAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_selectedAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedAwaiter = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_Awaiter& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selectedDisposeAsyncAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedDisposeAsyncAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_Awaiter const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_selectedDisposeAsyncAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selectedDisposeAsyncAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_selectedDisposeAsyncAwaiter(::GlobalNamespace::UniTask_Awaiter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selectedDisposeAsyncAwaiter = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_collectionSelectorAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionSelectorAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*> const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_collectionSelectorAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectionSelectorAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_collectionSelectorAwaiter(::GlobalNamespace::UniTask_1_Awaiter<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectionSelectorAwaiter = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult>& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_resultSelectorAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelectorAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult> const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get_resultSelectorAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelectorAwaiter;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set_resultSelectorAwaiter(::GlobalNamespace::UniTask_1_Awaiter<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelectorAwaiter = value;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr TResult& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr TResult const& Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TCollection,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::__cordl_internal_set__Current_k__BackingField(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::setStaticF_sourceMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "sourceMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TCollection,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::getStaticF_sourceMoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "sourceMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>();
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::setStaticF_selectedSourceMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "selectedSourceMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TCollection,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::getStaticF_selectedSourceMoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "selectedSourceMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>();
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::setStaticF_selectedEnumeratorDisposeAsyncCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "selectedEnumeratorDisposeAsyncCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TCollection,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::getStaticF_selectedEnumeratorDisposeAsyncCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "selectedEnumeratorDisposeAsyncCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>();
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::setStaticF_selectorAwaitCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "selectorAwaitCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TCollection,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::getStaticF_selectorAwaitCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "selectorAwaitCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>();
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::setStaticF_resultSelectorAwaitCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "resultSelectorAwaitCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TCollection,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::getStaticF_resultSelectorAwaitCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "resultSelectorAwaitCoreDelegate", ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>();
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector1, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector2, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*>(), ::i2c::type_of<::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, selector1, selector2, resultSelector, cancellationToken);
}
template<typename TSource,typename TCollection,typename TResult>
inline TResult Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::set_Current(TResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"set_Current", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::MoveNextSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"MoveNextSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::MoveNextSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"MoveNextSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::SourceMoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"SourceMoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::SeletedSourceMoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"SeletedSourceMoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::SelectedEnumeratorDisposeAsyncCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"SelectedEnumeratorDisposeAsyncCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::SelectorAwaitCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"SelectorAwaitCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TCollection,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::ResultSelectorAwaitCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"ResultSelectorAwaitCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource,typename TCollection,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector1, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TCollection>*>>*  selector2, ::System::Func_3<TSource,TCollection,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>*>(source, selector1, selector2, resultSelector, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TCollection,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TCollection,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TCollection,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::SelectManyAwait_3__SelectManyAwait<TSource,TCollection,TResult>::SelectManyAwait_3__SelectManyAwait()   {
}
