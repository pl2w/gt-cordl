#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions_ToCoroutineEnumerator__RunTask_d__6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions_ToCoroutineEnumerator__RunTask_d__6)
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions_ToCoroutineEnumerator;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6, "Cysharp.Threading.Tasks", "UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator/<RunTask>d__6
struct CORDL_TYPE ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xadfdc74, size 0x4b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xadfe124, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, ::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator*  __4__this, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21833};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator*  __4__this;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6, task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
