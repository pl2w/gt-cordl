#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_ConfirmScreen__ShowErrorScreen_d__19.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_ConfirmScreen__ShowErrorScreen_d__19)
namespace GlobalNamespace {
class KIDUI_ConfirmScreen;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct KIDUI_ConfirmScreen__ShowErrorScreen_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19, "", "KIDUI_ConfirmScreen/<ShowErrorScreen>d__19");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: KIDUI_ConfirmScreen/<ShowErrorScreen>d__19
struct CORDL_TYPE KIDUI_ConfirmScreen__ShowErrorScreen_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a5314c, size 0x2f4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a534cc, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_ConfirmScreen__ShowErrorScreen_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>", modifiers: "", def_value: None, comment: None }, CppParam { name: "errorMessage", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr KIDUI_ConfirmScreen__ShowErrorScreen_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  __4__this, ::StringW  errorMessage, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3019};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_ConfirmScreen>  __4__this;

/// @brief Field errorMessage, offset: 0x30, size: 0x8, def value: None
 ::StringW  errorMessage;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19, errorMessage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
