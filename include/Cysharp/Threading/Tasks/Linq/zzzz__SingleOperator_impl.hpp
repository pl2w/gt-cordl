#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SingleOperator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SingleOperator_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SingleOperator__SingleAsync_d__0_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SingleOperator__SingleAsync_d__1_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SingleOperator__SingleAwaitAsync_d__2_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SingleOperator__SingleAwaitWithCancellationAsync_d__3_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::SingleOperator::SingleAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SingleOperator*>(),
                    {"SingleAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, cancellationToken, defaultIfEmpty);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::SingleOperator::SingleAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,bool>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SingleOperator*>(),
                    {"SingleAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,bool>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken, defaultIfEmpty);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::SingleOperator::SingleAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SingleOperator*>(),
                    {"SingleAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken, defaultIfEmpty);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::SingleOperator::SingleAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SingleOperator*>(),
                    {"SingleAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, predicate, cancellationToken, defaultIfEmpty);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::SingleOperator::SingleOperator()   {
}
