#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__Unwrap_d__39.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__Unwrap_d__39)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskExtensions__Unwrap_d__39;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39, "Cysharp.Threading.Tasks", "UniTaskExtensions/<Unwrap>d__39");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__39
struct CORDL_TYPE UniTaskExtensions__Unwrap_d__39 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xae01a20, size 0x48c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xae01eac, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions__Unwrap_d__39() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "continueOnCapturedContext", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__Unwrap_d__39(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>  task, bool  continueOnCapturedContext, ::GlobalNamespace::UniTask_1_Awaiter<::System::Threading::Tasks::Task*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21864};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x18, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>  task;

/// @brief Field continueOnCapturedContext, offset: 0x30, size: 0x1, def value: None
 bool  continueOnCapturedContext;

/// @brief Field <>u__1, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<::System::Threading::Tasks::Task*>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39, task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39, continueOnCapturedContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTaskExtensions__Unwrap_d__39) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
