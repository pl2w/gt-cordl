#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__ShareAndLocalizeParams_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28)
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AutomaticColocationLauncher;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, "Meta.XR.MultiplayerBlocks.Colocation", "AutomaticColocationLauncher/<OnAnchorShareRequestReceived>d__28");
// [CompilerGenerated]
// Dependencies Meta.XR.MultiplayerBlocks.Colocation.ShareAndLocalizeParams, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher/<OnAnchorShareRequestReceived>d__28
struct CORDL_TYPE AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f75b34, size 0x4f0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f76134, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None, comment: None }, CppParam { name: "shareAndLocalizeParams", ty: "::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*  __4__this, ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30669};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*  __4__this;

/// @brief Field shareAndLocalizeParams, offset: 0x30, size: 0x28, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::ShareAndLocalizeParams  shareAndLocalizeParams;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, shareAndLocalizeParams) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutomaticColocationLauncher__OnAnchorShareRequestReceived_d__28) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
