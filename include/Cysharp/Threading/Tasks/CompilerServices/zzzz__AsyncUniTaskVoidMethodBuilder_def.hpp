#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncUniTaskVoidMethodBuilder)
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunner;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
struct AsyncUniTaskVoidMethodBuilder;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskVoidMethodBuilder");
// Dependencies System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.ICriticalNotifyCompletion, System.Runtime.CompilerServices.INotifyCompletion
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct CORDL_TYPE AsyncUniTaskVoidMethodBuilder {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTaskVoid  Task;

/// [DebuggerHidden]
/// @brief Method AwaitOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
requires(::cordl_internals::type_constraint<TAwaiter, ::System::Runtime::CompilerServices::INotifyCompletion*> && ::cordl_internals::type_constraint<TStateMachine, ::System::Runtime::CompilerServices::IAsyncStateMachine*>)
inline void AwaitOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// [DebuggerHidden]
/// @brief Method AwaitUnsafeOnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TAwaiter,typename TStateMachine>
requires(::cordl_internals::type_constraint<TAwaiter, ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*> && ::cordl_internals::type_constraint<TStateMachine, ::System::Runtime::CompilerServices::IAsyncStateMachine*>)
inline void AwaitUnsafeOnCompleted(::by_ref<TAwaiter>  awaiter, ::by_ref<TStateMachine>  stateMachine) ;

/// [DebuggerHidden]
/// @brief Method Create, addr 0xae4bca4, size 0x8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder Create() ;

/// [DebuggerHidden]
/// @brief Method SetException, addr 0xae4bcb4, size 0x128, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// [DebuggerHidden]
/// @brief Method SetResult, addr 0xae4bddc, size 0xf8, virtual false, abstract: false, final false
inline void SetResult() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xae33710, size 0x4, virtual false, abstract: false, final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// [DebuggerHidden]
/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStateMachine>
requires(::cordl_internals::type_constraint<TStateMachine, ::System::Runtime::CompilerServices::IAsyncStateMachine*>)
inline void Start(::by_ref<TStateMachine>  stateMachine) ;

/// [DebuggerHidden]
/// @brief Method get_Task, addr 0xae4bcac, size 0x8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid get_Task() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTaskVoidMethodBuilder() ;

// Ctor Parameters [CppParam { name: "runner", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*", modifiers: "", def_value: None, comment: None }]
constexpr AsyncUniTaskVoidMethodBuilder(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*  runner) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22118};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field runner, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunner*  runner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder, runner) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder) == 0x8, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::CompilerServices
