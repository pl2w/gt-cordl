#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/GroupBy_3.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupBy_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupBy_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__GroupBy`3__GroupBy__CreateLookup_d__12_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TKey>*& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TKey>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TElement>*& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_elementSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TElement>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_elementSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_set_elementSelector(::System::Func_2<TSource,TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementSelector = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource,typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, elementSelector, comparer);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>* Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>*>(source, keySelector, elementSelector, comparer));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TSource,typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::GroupBy_3<TSource,TKey,TElement>::GroupBy_3()   {
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TKey>*& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TKey>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TElement>*& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_elementSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Func_2<TSource,TElement>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_elementSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementSelector;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_set_elementSelector(::System::Func_2<TSource,TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementSelector = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_groupEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupEnumerator;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get_groupEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupEnumerator;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_set_groupEnumerator(::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupEnumerator = value;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Linq::IGrouping_2<TKey,TElement>*& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TKey,typename TElement>
constexpr ::System::Linq::IGrouping_2<TKey,TElement>* const& Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TKey,typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::__cordl_internal_set__Current_k__BackingField(::System::Linq::IGrouping_2<TKey,TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource,typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::System::Linq::IGrouping_2<TKey,TElement>* Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::IGrouping_2<TKey,TElement>*>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::set_Current(::System::Linq::IGrouping_2<TKey,TElement>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(),
                        {"set_Current", {}, {::i2c::type_of<::System::Linq::IGrouping_2<TKey,TElement>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::CreateLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(),
                        {"CreateLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement>
inline void Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::SourceMoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(),
                        {"SourceMoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>* Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>*>(source, keySelector, elementSelector, comparer, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TSource,typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>* Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TKey,typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TKey,typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::GroupBy_3__GroupBy<TSource,TKey,TElement>::GroupBy_3__GroupBy()   {
}
