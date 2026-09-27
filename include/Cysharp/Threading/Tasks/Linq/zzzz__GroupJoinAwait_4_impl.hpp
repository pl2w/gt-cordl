#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupJoinAwait_4.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupJoinAwait_4_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupJoinAwait_4_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupJoinAwait`4__GroupJoinAwait__CreateLookup_d__22_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Linq/zzzz__ILookup_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_set_outer(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outer = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_set_inner(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inner = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerKeySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerKeySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_set_outerKeySelector(::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outerKeySelector = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_innerKeySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_innerKeySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_set_innerKeySelector(::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerKeySelector = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_set_resultSelector(::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(this, ___internal_method, cancellationToken);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>*>(outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4<TOuter,TInner,TKey,TResult>::GroupJoinAwait_4()   {
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_outer(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outer = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_inner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_inner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inner;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_inner(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inner = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerKeySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerKeySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_outerKeySelector(::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outerKeySelector = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_innerKeySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_innerKeySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerKeySelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_innerKeySelector(::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerKeySelector = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_resultSelector(::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Linq::ILookup_2<TKey,TInner>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_lookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::System::Linq::ILookup_2<TKey,TInner>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_lookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookup;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_lookup(::System::Linq::ILookup_2<TKey,TInner>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookup = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>*& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>* const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TOuter>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr TOuter& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerValue;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr TOuter const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerValue;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_outerValue(TOuter  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outerValue = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TKey>& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerKeyAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerKeyAwaiter;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TKey> const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_outerKeyAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outerKeyAwaiter;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_outerKeyAwaiter(::GlobalNamespace::UniTask_1_Awaiter<TKey>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outerKeyAwaiter = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult>& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_resultAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAwaiter;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult> const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get_resultAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAwaiter;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set_resultAwaiter(::GlobalNamespace::UniTask_1_Awaiter<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAwaiter = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr TResult& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr TResult const& Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::__cordl_internal_set__Current_k__BackingField(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::getStaticF_MoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>();
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::setStaticF_ResultSelectCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "ResultSelectCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::getStaticF_ResultSelectCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "ResultSelectCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>();
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::setStaticF_OuterKeySelectCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "OuterKeySelectCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::getStaticF_OuterKeySelectCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "OuterKeySelectCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>();
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*>(), ::i2c::type_of<::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer, cancellationToken);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline TResult Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::set_Current(TResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"set_Current", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::CreateLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"CreateLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::SourceMoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"SourceMoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::MoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"MoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::OuterKeySelectCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"OuterKeySelectCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::ResultSelectCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"ResultSelectCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TOuter,typename TInner,typename TKey,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TOuter>*  outer, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TInner>*  inner, ::System::Func_2<TOuter,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  outerKeySelector, ::System::Func_2<TInner,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  innerKeySelector, ::System::Func_3<TOuter,::System::Collections::Generic::IEnumerable_1<TInner>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>*>(outer, inner, outerKeySelector, innerKeySelector, resultSelector, comparer, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TOuter,typename TInner,typename TKey,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::GroupJoinAwait_4__GroupJoinAwait<TOuter,TInner,TKey,TResult>::GroupJoinAwait_4__GroupJoinAwait()   {
}
