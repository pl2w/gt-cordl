#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Aggregate__AggregateAwaitWithCancellationAsync_d__6_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Aggregate__AggregateAwaitWithCancellationAsync_d__6_1)
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TSource>
struct Aggregate__AggregateAwaitWithCancellationAsync_d__6_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__6_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::Aggregate__AggregateAwaitWithCancellationAsync_d__6_1, "Cysharp.Threading.Tasks.Linq", "Aggregate/<AggregateAwaitWithCancellationAsync>d__6`1");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.Threading.CancellationToken
namespace GlobalNamespace {
// cpp template
template<typename TSource>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.Linq.Aggregate/<AggregateAwaitWithCancellationAsync>d__6`1<TSource>
struct CORDL_TYPE Aggregate__AggregateAwaitWithCancellationAsync_d__6_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr Aggregate__AggregateAwaitWithCancellationAsync_d__6_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TSource>", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "accumulator", ty: "::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_e_5__2", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap4", ty: "TSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "_value_5__6", ty: "TSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_1_Awaiter<TSource>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr Aggregate__AggregateAwaitWithCancellationAsync_d__6_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TSource>  __t__builder, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken, ::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__2, ::System::Object*  __7__wrap2, int32_t  __7__wrap3, TSource  __7__wrap4, TSource  _value_5__6, ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1, ::GlobalNamespace::UniTask_1_Awaiter<TSource>  __u__2, ::GlobalNamespace::UniTask_Awaiter  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20386};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TSource>  __t__builder;

/// @brief Field source, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field accumulator, offset: 0x30, size: 0x8, def value: None
 ::System::Func_4<TSource,TSource,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TSource>>*  accumulator;

/// @brief Field <e>5__2, offset: 0x38, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  _e_5__2;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::System::Object*  __7__wrap2;

/// @brief Field <>7__wrap3, offset: 0x48, size: 0x4, def value: None
 int32_t  __7__wrap3;

/// @brief Field <>7__wrap4, offset: 0x50, size: 0x8, def value: None
 TSource  __7__wrap4;

/// @brief Field <value>5__6, offset: 0x58, size: 0x8, def value: None
 TSource  _value_5__6;

/// @brief Field <>u__1, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<bool>  __u__1;

/// @brief Field <>u__2, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<TSource>  __u__2;

/// @brief Field <>u__3, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
