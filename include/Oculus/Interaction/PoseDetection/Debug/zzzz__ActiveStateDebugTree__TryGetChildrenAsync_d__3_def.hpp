#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateDebugTree__TryGetChildrenAsync_d__3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveStateDebugTree__TryGetChildrenAsync_d__3)
namespace Oculus::Interaction {
class IActiveState;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ActiveStateDebugTree__TryGetChildrenAsync_d__3;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateDebugTree/<TryGetChildrenAsync>d__3");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PoseDetection.Debug.ActiveStateDebugTree/<TryGetChildrenAsync>d__3
struct CORDL_TYPE ActiveStateDebugTree__TryGetChildrenAsync_d__3 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa4aa648, size 0x3e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa4aaa28, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateDebugTree__TryGetChildrenAsync_d__3() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "node", ty: "::Oculus::Interaction::IActiveState*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>", modifiers: "", def_value: None, comment: None }]
constexpr ActiveStateDebugTree__TryGetChildrenAsync_d__3(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __t__builder, ::Oculus::Interaction::IActiveState*  node, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16177};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __t__builder;

/// @brief Field node, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  node;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3, node) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ActiveStateDebugTree__TryGetChildrenAsync_d__3) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
