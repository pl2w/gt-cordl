#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ElementAt.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ElementAt_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ElementAt__ElementAtAsync_d__0_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> Cysharp::Threading::Tasks::Linq::ElementAt::ElementAtAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, int32_t  index, ::System::Threading::CancellationToken  cancellationToken, bool  defaultIfEmpty)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ElementAt*>(),
                    {"ElementAtAsync", {::i2c::class_of<TSource>()}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TSource>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TSource>>(nullptr, ___internal_method, source, index, cancellationToken, defaultIfEmpty);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::Linq::ElementAt::ElementAt()   {
}
