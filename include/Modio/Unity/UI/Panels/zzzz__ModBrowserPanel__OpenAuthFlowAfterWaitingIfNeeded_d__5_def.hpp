#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5)
namespace Modio::Unity::UI::Panels {
class ModioWaitingPanelGeneric;
}
namespace Modio {
class Error;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5, "Modio.Unity.UI.Panels", "ModBrowserPanel/<OpenAuthFlowAfterWaitingIfNeeded>d__5");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Panels.ModBrowserPanel/<OpenAuthFlowAfterWaitingIfNeeded>d__5
struct CORDL_TYPE ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fa4548, size 0x6ec, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fa53c0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "_waitingPanel_5__2", ty: "::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelGeneric>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelGeneric>  _waitingPanel_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27047};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <waitingPanel>5__2, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::ModioWaitingPanelGeneric>  _waitingPanel_5__2;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::Modio::Error*>  __u__1;

/// @brief Field <>u__2, offset: 0x30, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5, _waitingPanel_5__2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5, __u__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModBrowserPanel__OpenAuthFlowAfterWaitingIfNeeded_d__5) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
