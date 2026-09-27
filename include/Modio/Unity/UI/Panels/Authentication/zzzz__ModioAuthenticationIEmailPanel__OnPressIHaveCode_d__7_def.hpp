#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/Authentication/ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7)
namespace Modio::Unity::UI::Panels::Authentication {
class ModioAuthenticationIEmailPanel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7, "Modio.Unity.UI.Panels.Authentication", "ModioAuthenticationIEmailPanel/<OnPressIHaveCode>d__7");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Unity.UI.Panels.Authentication.ModioAuthenticationIEmailPanel/<OnPressIHaveCode>d__7
struct CORDL_TYPE ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9fae590, size 0x1f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9fae780, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Panels::Authentication::ModioAuthenticationIEmailPanel>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModioAuthenticationIEmailPanel__OnPressIHaveCode_d__7) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
