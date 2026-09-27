#pragma once
// IWYU pragma private; include "System/Threading/SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
class SemaphoreSlim_TaskNode;
}
namespace System::Threading {
class SemaphoreSlim;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, "System.Threading", "SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__32");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Threading.SemaphoreSlim/<WaitUntilCountOrTimeoutAsync>d__32
struct CORDL_TYPE SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa3498c8, size 0x8c4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa34a18c, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "asyncWaiter", ty: "::System::Threading::SemaphoreSlim_TaskNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "millisecondsTimeout", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::SemaphoreSlim_TaskNode*  asyncWaiter, int32_t  millisecondsTimeout, ::System::Threading::SemaphoreSlim*  __4__this, ::System::Threading::CancellationTokenSource*  _cts_5__2, ::System::Object*  __7__wrap2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5825};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field asyncWaiter, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim_TaskNode*  asyncWaiter;

/// @brief Field millisecondsTimeout, offset: 0x30, size: 0x4, def value: None
 int32_t  millisecondsTimeout;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim*  __4__this;

/// @brief Field <cts>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _cts_5__2;

/// @brief Field <>7__wrap2, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  __7__wrap2;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1;

/// @brief Field <>u__2, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, asyncWaiter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, millisecondsTimeout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, _cts_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __7__wrap2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32, __u__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
