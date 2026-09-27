#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioWaitingPanelBase__OpenAndWaitFor_d__0_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioWaitingPanelBase__OpenAndWaitFor_d__0_1)
namespace Modio::Unity::UI::Panels {
class ModioWaitingPanelBase;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct ModioWaitingPanelBase__OpenAndWaitFor_d__0_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ModioWaitingPanelBase__OpenAndWaitFor_d__0_1, "Modio.Unity.UI.Panels", "ModioWaitingPanelBase/<OpenAndWaitFor>d__0`1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Modio.Unity.UI.Panels.ModioWaitingPanelBase/<OpenAndWaitFor>d__0`1<T>
struct CORDL_TYPE ModioWaitingPanelBase__OpenAndWaitFor_d__0_1 {
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
constexpr ModioWaitingPanelBase__OpenAndWaitFor_d__0_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>", modifiers: "", def_value: None, comment: None }, CppParam { name: "task", ty: "::System::Threading::Tasks::Task_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "action", ty: "::System::Action_1<T>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>", modifiers: "", def_value: None, comment: None }]
constexpr ModioWaitingPanelBase__OpenAndWaitFor_d__0_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>  __4__this, ::System::Threading::Tasks::Task_1<T>*  task, ::System::Action_1<T>*  action, ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27080};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelBase>  __4__this;

/// @brief Field task, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::Task_1<T>*  task;

/// @brief Field action, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<T>*  action;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<T>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
