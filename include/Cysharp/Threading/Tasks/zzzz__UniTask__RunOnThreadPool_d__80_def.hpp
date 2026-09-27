#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask__RunOnThreadPool_d__80.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToThreadPoolAwaitable_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTask__RunOnThreadPool_d__80)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTask__RunOnThreadPool_d__80;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTask__RunOnThreadPool_d__80);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, "Cysharp.Threading.Tasks", "UniTask/<RunOnThreadPool>d__80");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.SwitchToThreadPoolAwaitable::Awaiter, Cysharp.Threading.Tasks.UniTask::Awaiter, Cysharp.Threading.Tasks.YieldAwaitable::Awaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTask/<RunOnThreadPool>d__80
struct CORDL_TYPE UniTask__RunOnThreadPool_d__80 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xadf6948, size 0x8f4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xadf723c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTask__RunOnThreadPool_d__80() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "configureAwait", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "action", ty: "::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__3", ty: "::GlobalNamespace::YieldAwaitable_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr UniTask__RunOnThreadPool_d__80(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::System::Threading::CancellationToken  cancellationToken, bool  configureAwait, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  action, ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter  __u__1, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::GlobalNamespace::UniTask_Awaiter  __u__2, ::GlobalNamespace::YieldAwaitable_Awaiter  __u__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21786};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field configureAwait, offset: 0x20, size: 0x1, def value: None
 bool  configureAwait;

/// @brief Field action, offset: 0x28, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  action;

/// @brief Field <>u__1, offset: 0x30, size: 0x1, def value: None
 ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter  __u__1;

/// @brief Field <>7__wrap1, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x4, def value: None
 int32_t  __7__wrap2;

/// @brief Field <>u__2, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__2;

/// @brief Field <>u__3, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::YieldAwaitable_Awaiter  __u__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, cancellationToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, configureAwait) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, action) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, __7__wrap1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, __7__wrap2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, __u__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80, __u__3) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTask__RunOnThreadPool_d__80) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
