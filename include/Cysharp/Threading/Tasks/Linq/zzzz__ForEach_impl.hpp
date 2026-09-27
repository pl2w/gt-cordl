#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ForEach.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ForEach_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ForEach__ForEachAsync_d__0_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ForEach__ForEachAsync_d__1_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ForEach__ForEachAwaitAsync_d__2_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ForEach__ForEachAwaitAsync_d__3_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ForEach__ForEachAwaitWithCancellationAsync_d__4_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ForEach__ForEachAwaitWithCancellationAsync_d__5_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ForEach::ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_1<TSource>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ForEach*>(),
                    {"ForEachAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ForEach::ForEachAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Action_2<TSource,int32_t>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ForEach*>(),
                    {"ForEachAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Action_2<TSource,int32_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ForEach::ForEachAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ForEach*>(),
                    {"ForEachAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ForEach::ForEachAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ForEach*>(),
                    {"ForEachAwaitAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,int32_t,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ForEach::ForEachAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ForEach*>(),
                    {"ForEachAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_3<TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ForEach::ForEachAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ForEach*>(),
                    {"ForEachAwaitWithCancellationAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, source, action, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::ForEach::ForEach()   {
}
