#pragma once
// IWYU pragma private; include "GlobalNamespace/ATM_Manager__ProcessATMState_d__56.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATM_Manager__ProcessATMState_d__56)
namespace GlobalNamespace {
class ATM_Manager;
}
namespace GlobalNamespace {
class NexusManager_MemberCode;
}
namespace GorillaNetworking::Store {
class ATM_UI;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ATM_Manager__ProcessATMState_d__56;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56, "", "ATM_Manager/<ProcessATMState>d__56");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: ATM_Manager/<ProcessATMState>d__56
struct CORDL_TYPE ATM_Manager__ProcessATMState_d__56 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x577e0b8, size 0xb68, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x577ec20, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ATM_Manager__ProcessATMState_d__56() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::ATM_Manager>", modifiers: "", def_value: None, comment: None }, CppParam { name: "currencyButton", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "atm_ui", ty: "::UnityW<::GorillaNetworking::Store::ATM_UI>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>", modifiers: "", def_value: None, comment: None }]
constexpr ATM_Manager__ProcessATMState_d__56(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::ATM_Manager>  __4__this, ::StringW  currencyButton, ::UnityW<::GorillaNetworking::Store::ATM_UI>  atm_ui, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1392};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ATM_Manager>  __4__this;

/// @brief Field currencyButton, offset: 0x30, size: 0x8, def value: None
 ::StringW  currencyButton;

/// @brief Field atm_ui, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::Store::ATM_UI>  atm_ui;

/// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::NexusManager_MemberCode*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56, currencyButton) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56, atm_ui) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ATM_Manager__ProcessATMState_d__56) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
