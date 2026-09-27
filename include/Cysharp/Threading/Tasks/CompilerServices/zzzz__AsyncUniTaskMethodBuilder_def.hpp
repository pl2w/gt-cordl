#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AsyncUniTaskMethodBuilder)
namespace Cysharp::Threading::Tasks::CompilerServices {
class IStateMachineRunnerPromise;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::CompilerServices {
struct AsyncUniTaskMethodBuilder;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder, "Cysharp.Threading.Tasks.CompilerServices", "AsyncUniTaskMethodBuilder");
// Dependencies System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.ICriticalNotifyCompletion, System.Runtime.CompilerServices.INotifyCompletion
namespace Cysharp::Threading::Tasks::CompilerServices {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct CORDL_TYPE AsyncUniTaskMethodBuilder {
public:
// Declarations
 __declspec(property(get=get_Task)) ::Cysharp::Threading::Tasks::UniTask  Task;

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
/// @brief Method Create, addr 0xae4ba34, size 0xc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder Create() ;

/// [DebuggerHidden]
/// @brief Method SetException, addr 0xae4bb38, size 0xc0, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// [DebuggerHidden]
/// @brief Method SetResult, addr 0xae4bbf8, size 0xac, virtual false, abstract: false, final false
inline void SetResult() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xae31c70, size 0x4, virtual false, abstract: false, final false
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// [DebuggerHidden]
/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TStateMachine>
requires(::cordl_internals::type_constraint<TStateMachine, ::System::Runtime::CompilerServices::IAsyncStateMachine*>)
inline void Start(::by_ref<TStateMachine>  stateMachine) ;

/// [DebuggerHidden]
/// @brief Method get_Task, addr 0xae4ba40, size 0xf8, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask get_Task() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncUniTaskMethodBuilder() ;

// Ctor Parameters [CppParam { name: "runnerPromise", ty: "::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*", modifiers: "", def_value: None, comment: None }, CppParam { name: "ex", ty: "::System::Exception*", modifiers: "", def_value: None, comment: None }]
constexpr AsyncUniTaskMethodBuilder(::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*  runnerPromise, ::System::Exception*  ex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22116};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field runnerPromise, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise*  runnerPromise;

/// @brief Field ex, offset: 0x8, size: 0x8, def value: None
 ::System::Exception*  ex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder, runnerPromise) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder, ex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::CompilerServices
