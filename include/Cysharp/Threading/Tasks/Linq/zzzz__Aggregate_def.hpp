#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Aggregate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Aggregate)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace GlobalNamespace {
template<typename TSource>
struct Aggregate__AggregateAsync_d__0_1;
}
namespace GlobalNamespace {
template<typename TSource,typename TAccumulate>
struct Aggregate__AggregateAsync_d__1_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TAccumulate,typename TResult>
struct Aggregate__AggregateAsync_d__2_3;
}
namespace GlobalNamespace {
template<typename TSource>
struct Aggregate__AggregateAwaitAsync_d__3_1;
}
namespace GlobalNamespace {
template<typename TSource,typename TAccumulate>
struct Aggregate__AggregateAwaitAsync_d__4_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TAccumulate,typename TResult>
struct Aggregate__AggregateAwaitAsync_d__5_3;
}
namespace GlobalNamespace {
template<typename TSource>
struct Aggregate__AggregateAwaitWithCancellationAsync_d__6_1;
}
namespace GlobalNamespace {
template<typename TSource,typename TAccumulate>
struct Aggregate__AggregateAwaitWithCancellationAsync_d__7_2;
}
namespace GlobalNamespace {
template<typename TSource,typename TAccumulate,typename TResult>
struct Aggregate__AggregateAwaitWithCancellationAsync_d__8_3;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Linq {
class Aggregate;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Linq::Aggregate*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Linq::Aggregate*, "Cysharp.Threading.Tasks.Linq", "Aggregate");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Linq {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Linq.Aggregate
class CORDL_TYPE Aggregate : public ::System::Object {
public:
// Declarations
template<typename TSource>
using _AggregateAsync_d__0_1 = ::GlobalNamespace::Aggregate__AggregateAsync_d__0_1<TSource>;

template<typename TSource,typename TAccumulate>
using _AggregateAsync_d__1_2 = ::GlobalNamespace::Aggregate__AggregateAsync_d__1_2<TSource, TAccumulate>;

template<typename TSource,typename TAccumulate,typename TResult>
using _AggregateAsync_d__2_3 = ::GlobalNamespace::Aggregate__AggregateAsync_d__2_3<TSource, TAccumulate, TResult>;

template<typename TSource>
using _AggregateAwaitAsync_d__3_1 = ::GlobalNamespace::Aggregate__AggregateAwaitAsync_d__3_1<TSource>;

template<typename TSource,typename TAccumulate>
using _AggregateAwaitAsync_d__4_2 = ::GlobalNamespace::Aggregate__AggregateAwaitAsync_d__4_2<TSource, TAccumulate>;

template<typename TSource,typename TAccumulate,typename TResult>
using _AggregateAwaitAsync_d__5_3 = ::GlobalNamespace::Aggregate__AggregateAwaitAsync_d__5_3<TSource, TAccumulate, TResult>;

template<typename TSource>
using _AggregateAwaitWithCancellationAsync_d__6_1 = ::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__6_1<TSource>;

template<typename TSource,typename TAccumulate>
using _AggregateAwaitWithCancellationAsync_d__7_2 = ::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__7_2<TSource, TAccumulate>;

template<typename TSource,typename TAccumulate,typename TResult>
using _AggregateAwaitWithCancellationAsync_d__8_3 = ::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__8_3<TSource, TAccumulate, TResult>;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAsync>d__1`2<TSource, TAccumulate>))]
/// @brief Method AggregateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TAccumulate>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,TAccumulate>*  accumulator, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAsync>d__2`3<TSource, TAccumulate, TResult>))]
/// @brief Method AggregateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TAccumulate,typename TResult>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,TAccumulate>*  accumulator, ::System::Func_2<TAccumulate,TResult>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAsync>d__0`1<TSource>))]
/// @brief Method AggregateAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> AggregateAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,TSource,TSource>*  accumulator, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAwaitAsync>d__4`2<TSource, TAccumulate>))]
/// @brief Method AggregateAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TAccumulate>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAwaitAsync>d__5`3<TSource, TAccumulate, TResult>))]
/// @brief Method AggregateAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TAccumulate,typename TResult>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_3<TAccumulate,TSource,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Func_2<TAccumulate,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAwaitAsync>d__3`1<TSource>))]
/// @brief Method AggregateAwaitAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> AggregateAwaitAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_3<TSource,TSource,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAwaitWithCancellationAsync>d__7`2<TSource, TAccumulate>))]
/// @brief Method AggregateAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TAccumulate>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TAccumulate> AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAwaitWithCancellationAsync>d__8`3<TSource, TAccumulate, TResult>))]
/// @brief Method AggregateAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource,typename TAccumulate,typename TResult>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TResult> AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, TAccumulate  seed, ::System::Func_4<TAccumulate,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TAccumulate>>*  accumulator, ::System::Func_3<TAccumulate,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.Linq.Aggregate::<AggregateAwaitWithCancellationAsync>d__6`1<TSource>))]
/// @brief Method AggregateAwaitWithCancellationAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TSource>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TSource> AggregateAwaitWithCancellationAsync(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Aggregate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Aggregate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Aggregate(Aggregate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Aggregate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Aggregate(Aggregate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Linq::Aggregate) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Linq
