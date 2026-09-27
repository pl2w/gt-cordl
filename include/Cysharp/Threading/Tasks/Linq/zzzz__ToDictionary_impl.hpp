#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToDictionary.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary__ToDictionaryAsync_d__0_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary__ToDictionaryAsync_d__1_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary__ToDictionaryAwaitAsync_d__2_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary__ToDictionaryAwaitAsync_d__3_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary__ToDictionaryAwaitWithCancellationAsync_d__4_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToDictionary__ToDictionaryAwaitWithCancellationAsync_d__5_3_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::ToDictionary::ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToDictionary*>(),
                    {"ToDictionaryAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToDictionary::ToDictionaryAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Func_2<TSource,TElement>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToDictionary*>(),
                    {"ToDictionaryAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Func_2<TSource,TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::ToDictionary::ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToDictionary*>(),
                    {"ToDictionaryAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToDictionary::ToDictionaryAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToDictionary*>(),
                    {"ToDictionaryAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*> Cysharp::Threading::Tasks::Linq::ToDictionary::ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToDictionary*>(),
                    {"ToDictionaryAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TSource>*>>(nullptr, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey,typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*> Cysharp::Threading::Tasks::Linq::ToDictionary::ToDictionaryAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*  elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToDictionary*>(),
                    {"ToDictionaryAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TElement>>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TKey>(), ::i2c::class_of<TElement>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::System::Collections::Generic::Dictionary_2<TKey,TElement>*>>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::ToDictionary::ToDictionary()   {
}
