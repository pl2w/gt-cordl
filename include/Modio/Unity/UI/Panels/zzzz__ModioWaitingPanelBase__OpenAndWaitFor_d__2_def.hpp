#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioWaitingPanelBase__OpenAndWaitFor_d__2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioWaitingPanelBase__OpenAndWaitFor_d__2)
namespace Modio::Unity::UI::Panels {
class ModioWaitingPanelBase;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioWaitingPanelBase__OpenAndWaitFor_d__2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2, "Modio.Unity.UI.Panels", "ModioWaitingPanelBase/<OpenAndWaitFor>d__2");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Panels.ModioWaitingPanelBase/<OpenAndWaitFor>d__2
struct CORDL_TYPE ModioWaitingPanelBase__OpenAndWaitFor_d__2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fac000, size 0x22c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fac22c, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioWaitingPanelBase__OpenAndWaitFor_d__2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None, comment: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModioWaitingPanelBase__OpenAndWaitFor_d__2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>  __4__this, ::System::Threading::Tasks::Task*  task, ::System::Action*  action, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27081};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>  __4__this;

/// @brief Field task, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  task;

/// @brief Field action, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  action;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2, task) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2, action) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__2) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
