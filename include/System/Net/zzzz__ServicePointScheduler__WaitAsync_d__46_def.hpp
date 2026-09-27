#pragma once
// IWYU pragma private; include "System/Net/ServicePointScheduler__WaitAsync_d__46.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServicePointScheduler__WaitAsync_d__46)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct ServicePointScheduler__WaitAsync_d__46;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, "System.Net", "ServicePointScheduler/<WaitAsync>d__46");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.ServicePointScheduler/<WaitAsync>d__46
struct CORDL_TYPE ServicePointScheduler__WaitAsync_d__46 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacb4ec8, size 0x53c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacb5404, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ServicePointScheduler__WaitAsync_d__46() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "millisecondTimeout", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "workerTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_cts_5__2", ty: "::System::Threading::CancellationTokenSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timeoutTask_5__3", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>", modifiers: "", def_value: None, comment: None }]
constexpr ServicePointScheduler__WaitAsync_d__46(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, int32_t  millisecondTimeout, ::System::Threading::Tasks::Task*  workerTask, ::System::Threading::CancellationTokenSource*  _cts_5__2, ::System::Threading::Tasks::Task*  _timeoutTask_5__3, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10724};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field millisecondTimeout, offset: 0x20, size: 0x4, def value: None
 int32_t  millisecondTimeout;

/// @brief Field workerTask, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  workerTask;

/// @brief Field <cts>5__2, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  _cts_5__2;

/// @brief Field <timeoutTask>5__3, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  _timeoutTask_5__3;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Threading::Tasks::Task*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, millisecondTimeout) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, workerTask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, _cts_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, _timeoutTask_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ServicePointScheduler__WaitAsync_d__46) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
