#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__TimeoutWithoutException_d__15_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__TimeoutWithoutException_d__15_1)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__TimeoutWithoutException_d__15_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::UniTaskExtensions__TimeoutWithoutException_d__15_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::UniTaskExtensions__TimeoutWithoutException_d__15_1, "Cysharp.Threading.Tasks", "UniTaskExtensions/<TimeoutWithoutException>d__15`1");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>, Cysharp.Threading.Tasks.DelayType, Cysharp.Threading.Tasks.PlayerLoopTiming, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>, System.TimeSpan, System.ValueTuple`2<T1, T2>, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<TimeoutWithoutException>d__15`1<T>
struct CORDL_TYPE UniTaskExtensions__TimeoutWithoutException_d__15_1 {
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
constexpr UniTaskExtensions__TimeoutWithoutException_d__15_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,T>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeout", ty: "::System::TimeSpan", modifiers: "", def_value: None, comment: None }, CppParam { name: "delayType", ty: "::Cysharp::Threading::Tasks::DelayType", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeoutCheckTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "taskCancellationTokenSource", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_delayCancellationTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,::System::ValueTuple_2<bool,T>,bool>>", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__TimeoutWithoutException_d__15_1(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,T>>  __t__builder, ::System::TimeSpan  timeout, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource, ::System::Threading::CancellationTokenSource*  _delayCancellationTokenSource_5__2, ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,::System::ValueTuple_2<bool,T>,bool>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21854};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [TupleElementNames(new[] { "IsTimeout", "Result" })]
/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<bool,T>>  __t__builder;

/// @brief Field timeout, offset: 0x20, size: 0x8, def value: None
 ::System::TimeSpan  timeout;

/// @brief Field delayType, offset: 0x28, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::DelayType  delayType;

/// @brief Field timeoutCheckTiming, offset: 0x2c, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming;

/// @brief Field task, offset: 0x30, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Field taskCancellationTokenSource, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource;

/// @brief Field <delayCancellationTokenSource>5__2, offset: 0x50, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _delayCancellationTokenSource_5__2;

/// [TupleElementNames(new[] { "winArgumentIndex", "result1", "result2", "IsCanceled", "Result" })]
/// @brief Field <>u__1, offset: 0x58, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,::System::ValueTuple_2<bool,T>,bool>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
