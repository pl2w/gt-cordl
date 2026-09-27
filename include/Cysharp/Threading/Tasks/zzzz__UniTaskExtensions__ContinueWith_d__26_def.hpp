#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions__ContinueWith_d__26.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions__ContinueWith_d__26)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniTaskExtensions__ContinueWith_d__26;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26, "Cysharp.Threading.Tasks", "UniTaskExtensions/<ContinueWith>d__26");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder, Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<ContinueWith>d__26
struct CORDL_TYPE UniTaskExtensions__ContinueWith_d__26 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xadfe8a0, size 0x3ac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xadfec4c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions__ContinueWith_d__26() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask", modifiers: "", def_value: None, comment: None }, CppParam { name: "continuationFunction", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr UniTaskExtensions__ContinueWith_d__26(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask  task, ::System::Action*  continuationFunction, ::GlobalNamespace::UniTask_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21845};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Field continuationFunction, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  continuationFunction;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26, task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26, continuationFunction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
