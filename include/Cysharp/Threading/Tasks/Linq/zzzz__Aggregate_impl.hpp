#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Aggregate.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAsync_d__0_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAsync_d__1_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAsync_d__2_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAwaitAsync_d__3_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAwaitAsync_d__4_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAwaitAsync_d__5_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAwaitWithCancellationAsync_d__6_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAwaitWithCancellationAsync_d__7_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Aggregate__AggregateAwaitWithCancellationAsync_d__8_3_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,TSource,TSource>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,TSource,TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate>
inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,TAccumulate>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,TAccumulate>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>(nullptr, ___internal_method, source, seed, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,TAccumulate>*  accumulator, ::System::Func_2<TAccumulate,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,TAccumulate>*>(), ::i2c::type_of<::System::Func_2<TAccumulate,TResult>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, seed, accumulator, resultSelector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate>
inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>(nullptr, ___internal_method, source, seed, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Func_2<TAccumulate,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAwaitAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Func_2<TAccumulate,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, seed, accumulator, resultSelector, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate>
inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>(nullptr, ___internal_method, source, seed, accumulator, cancellationToken);
}
template<typename TSource,typename TAccumulate,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> Cysharp::Threading::Tasks::Linq::Aggregate::AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Func_3<TAccumulate,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Aggregate*>(),
                    {"AggregateAwaitWithCancellationAsync", {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<TAccumulate>(), ::i2c::type_of<::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*>(), ::i2c::type_of<::System::Func_3<TAccumulate,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>(), ::i2c::class_of<TAccumulate>(), ::i2c::class_of<TResult>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TResult>>(nullptr, ___internal_method, source, seed, accumulator, resultSelector, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::Aggregate::Aggregate()   {
}
