#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskObservableExtensions__Fire_d__4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskObservableExtensions__Fire_d__4)
namespace Cysharp::Threading::Tasks::Internal {
template<typename T>
class AsyncSubject_1;
}
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskObservableExtensions__Fire_d__4;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4, "Cysharp.Threading.Tasks", "UniTaskObservableExtensions/<Fire>d__4");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskObservableExtensions/<Fire>d__4
struct CORDL_TYPE UniTaskObservableExtensions__Fire_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xae022b0, size 0x45c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xae0270c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskObservableExtensions__Fire_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None, comment: None }, CppParam { name: "subject", ty: "::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskObservableExtensions__Fire_d__4(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*  subject, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Field subject, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::AsyncSubject_1<::Cysharp::Threading::Tasks::AsyncUnit>*  subject;

/// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4, task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4, subject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTaskObservableExtensions__Fire_d__4) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
