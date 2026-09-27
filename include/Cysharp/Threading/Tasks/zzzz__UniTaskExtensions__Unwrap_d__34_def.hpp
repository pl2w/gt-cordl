#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__Unwrap_d__34.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__Unwrap_d__34)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskExtensions__Unwrap_d__34;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34, "Cysharp.Threading.Tasks", "UniTaskExtensions/<Unwrap>d__34");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__34
struct CORDL_TYPE UniTaskExtensions__Unwrap_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xae00c5c, size 0x484, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xae010e0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions__Unwrap_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Cysharp::Threading::Tasks::UniTask>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__Unwrap_d__34(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*  task, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Cysharp::Threading::Tasks::UniTask>  __u__1, ::GlobalNamespace::UniTask_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21859};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*  task;

/// @brief Field <>u__1, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Cysharp::Threading::Tasks::UniTask>  __u__1;

/// @brief Field <>u__2, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34, task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34, __u__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34, __u__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__34) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
