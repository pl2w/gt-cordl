#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_MainScreen__OnAskForPermission_d__52.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_MainScreen__OnAskForPermission_d__52)
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDUI_MainScreen__OnAskForPermission_d__52;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52, "", "KIDUI_MainScreen/<OnAskForPermission>d__52");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDUI_MainScreen/<OnAskForPermission>d__52
struct CORDL_TYPE KIDUI_MainScreen__OnAskForPermission_d__52 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a59dd8, size 0x6b0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a5a57c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_MainScreen__OnAskForPermission_d__52() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::KIDUI_MainScreen>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_missingPermissionsPostUpdate_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr KIDUI_MainScreen__OnAskForPermission_d__52(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  __4__this, bool  _missingPermissionsPostUpdate_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3032};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  __4__this;

/// @brief Field <missingPermissionsPostUpdate>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _missingPermissionsPostUpdate_5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52, _missingPermissionsPostUpdate_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52, __u__1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52, __u__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_MainScreen__OnAskForPermission_d__52) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
