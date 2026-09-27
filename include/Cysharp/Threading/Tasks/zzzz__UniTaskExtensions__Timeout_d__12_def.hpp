#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__Timeout_d__12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__DelayType_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__Timeout_d__12)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskExtensions__Timeout_d__12;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskExtensions__Timeout_d__12);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, "Cysharp.Threading.Tasks", "UniTaskExtensions/<Timeout>d__12");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.DelayType, Cysharp.Threading.Tasks.PlayerLoopTiming, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, System.TimeSpan, System.ValueTuple`3<T1, T2, T3>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<Timeout>d__12
struct CORDL_TYPE UniTaskExtensions__Timeout_d__12 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xadff874, size 0x6fc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xadfff70, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions__Timeout_d__12() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeout", ty: "::System::TimeSpan", modifiers: "", def_value: None, comment: None }, CppParam { name: "delayType", ty: "::Cysharp::Threading::Tasks::DelayType", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeoutCheckTiming", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None, comment: None }, CppParam { name: "taskCancellationTokenSource", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_delayCancellationTokenSource_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,bool,bool>>", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__Timeout_d__12(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::TimeSpan  timeout, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming, ::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource, ::System::Threading::CancellationTokenSource*  _delayCancellationTokenSource_5__2, ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,bool,bool>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21851};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field timeout, offset: 0x18, size: 0x8, def value: None
 ::System::TimeSpan  timeout;

/// @brief Field delayType, offset: 0x20, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::DelayType  delayType;

/// @brief Field timeoutCheckTiming, offset: 0x24, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming;

/// @brief Field task, offset: 0x28, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Field taskCancellationTokenSource, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource;

/// @brief Field <delayCancellationTokenSource>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _delayCancellationTokenSource_5__2;

/// [TupleElementNames(new[] { "winArgumentIndex", "result1", "result2" })]
/// @brief Field <>u__1, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<int32_t,bool,bool>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, timeout) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, delayType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, timeoutCheckTiming) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, task) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, taskCancellationTokenSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, _delayCancellationTokenSource_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTaskExtensions__Timeout_d__12) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
