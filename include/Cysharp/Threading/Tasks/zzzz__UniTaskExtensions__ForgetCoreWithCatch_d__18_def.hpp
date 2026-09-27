#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__ForgetCoreWithCatch_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToMainThreadAwaitable_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__ForgetCoreWithCatch_d__18)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskExtensions__ForgetCoreWithCatch_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, "Cysharp.Threading.Tasks", "UniTaskExtensions/<ForgetCoreWithCatch>d__18");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.SwitchToMainThreadAwaitable::Awaiter, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<ForgetCoreWithCatch>d__18
struct CORDL_TYPE UniTaskExtensions__ForgetCoreWithCatch_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xadff20c, size 0x65c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xadff868, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions__ForgetCoreWithCatch_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None, comment: None }, CppParam { name: "handleExceptionOnMainThread", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "exceptionHandler", ty: "::System::Action_1<::System::Exception*>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ex_5__4", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__ForgetCoreWithCatch_d__18(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, bool  handleExceptionOnMainThread, ::System::Action_1<::System::Exception*>*  exceptionHandler, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::GlobalNamespace::UniTask_Awaiter  __u__1, ::System::Exception*  _ex_5__4, ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21849};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Field handleExceptionOnMainThread, offset: 0x20, size: 0x1, def value: None
 bool  handleExceptionOnMainThread;

/// @brief Field exceptionHandler, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  exceptionHandler;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x4, def value: None
 int32_t  __7__wrap2;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

/// @brief Field <ex>5__4, offset: 0x50, size: 0x8, def value: None
 ::System::Exception*  _ex_5__4;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::SwitchToMainThreadAwaitable_Awaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, handleExceptionOnMainThread) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, exceptionHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, _ex_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
