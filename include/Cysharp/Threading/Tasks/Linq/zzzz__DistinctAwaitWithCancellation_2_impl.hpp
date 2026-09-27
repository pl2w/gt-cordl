#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/DistinctAwaitWithCancellation_2.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorAwaitSelectorBase_3_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__DistinctAwaitWithCancellation_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__DistinctAwaitWithCancellation_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_set_keySelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>*>(source, keySelector, comparer));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource,typename TKey>
constexpr  Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2<TSource,TKey>::DistinctAwaitWithCancellation_2()   {
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::HashSet_1<TKey>*& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::__cordl_internal_get_set()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___set;
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::HashSet_1<TKey>* const& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::__cordl_internal_get_set() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___set;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::__cordl_internal_set_set(::System::Collections::Generic::HashSet_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___set = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::__cordl_internal_set_keySelector(::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<TKey> Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::TransformAsync(TSource  sourceCurrent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TKey>>(this, ___internal_method, sourceCurrent);
}
template<typename TSource,typename TKey>
inline bool Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::TrySetCurrentCore(TKey  awaitResult, ::by_ref<bool>  terminateIteration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, awaitResult, terminateIteration);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>* Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>*>(source, keySelector, comparer, cancellationToken));
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation<TSource,TKey>::DistinctAwaitWithCancellation_2__DistinctAwaitWithCancellation()   {
}
