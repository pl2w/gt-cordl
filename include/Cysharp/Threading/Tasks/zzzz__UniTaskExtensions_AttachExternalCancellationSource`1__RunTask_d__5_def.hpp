#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions_AttachExternalCancellationSource`1__RunTask_d__5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/CompilerServices/zzzz__AsyncUniTaskVoidMethodBuilder_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions_AttachExternalCancellationSource`1__RunTask_d__5)
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions_AttachExternalCancellationSource_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5, "Cysharp.Threading.Tasks", "UniTaskExtensions/AttachExternalCancellationSource`1/<RunTask>d__5");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder, Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource`1/<RunTask>d__5<T>
struct CORDL_TYPE AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::Cysharp::Threading::Tasks::UniTask_1<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::UniTask_1_Awaiter<T>", modifiers: "", def_value: None, comment: None }]
constexpr AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5(int32_t  __1__state, ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder, ::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource_1<T>*  __4__this, ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21831};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder  __t__builder;

/// @brief Field task, offset: 0x10, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource_1<T>*  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<T>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
