#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupByAwait_4.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupByAwait_4_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupByAwait_4_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupByAwait`4__GroupByAwait__CreateLookup_d__15_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_set_keySelector(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_elementSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_elementSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_set_elementSelector(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementSelector = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_set_resultSelector(::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, elementSelector, resultSelector, comparer);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>* Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>*>(source, keySelector, elementSelector, resultSelector, comparer));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::GroupByAwait_4<TSource,TKey,TElement,TResult>::GroupByAwait_4()   {
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_keySelector(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_elementSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_elementSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_elementSelector(::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementSelector = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_resultSelector(::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_groupEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupEnumerator;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_groupEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupEnumerator;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_groupEnumerator(::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupEnumerator = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult>& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult> const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr TResult& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr TResult const& Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::__cordl_internal_set__Current_k__BackingField(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::setStaticF_ResultSelectCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "ResultSelectCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::getStaticF_ResultSelectCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "ResultSelectCoreDelegate", ::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>();
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, elementSelector, resultSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline TResult Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::set_Current(TResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {"set_Current", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::CreateLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {"CreateLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::SourceMoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {"SourceMoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::ResultSelectCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {"ResultSelectCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>* Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Func_3<TKey,::System::Collections::Generic::IEnumerable_1<TElement>*,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>*>(source, keySelector, elementSelector, resultSelector, comparer, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TElement,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::GroupByAwait_4__GroupByAwait<TSource,TKey,TElement,TResult>::GroupByAwait_4__GroupByAwait()   {
}
