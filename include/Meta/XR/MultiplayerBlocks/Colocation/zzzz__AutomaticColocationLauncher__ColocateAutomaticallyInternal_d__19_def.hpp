#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__Anchor_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19)
namespace Meta::XR::MultiplayerBlocks::Colocation {
class AutomaticColocationLauncher;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, "Meta.XR.MultiplayerBlocks.Colocation", "AutomaticColocationLauncher/<ColocateAutomaticallyInternal>d__19");
// [CompilerGenerated]
// Dependencies Meta.XR.MultiplayerBlocks.Colocation.Anchor, System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.AutomaticColocationLauncher/<ColocateAutomaticallyInternal>d__19
struct CORDL_TYPE AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f745d4, size 0x588, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f74b68, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_successfullyAlignedToAnchor_5__2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_anchor_5__4", ty: "::Meta::XR::MultiplayerBlocks::Colocation::Anchor", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*  __4__this, bool  _successfullyAlignedToAnchor_5__2, ::GlobalNamespace::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>  __7__wrap2, ::Meta::XR::MultiplayerBlocks::Colocation::Anchor  _anchor_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30665};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::AutomaticColocationLauncher*  __4__this;

/// @brief Field <successfullyAlignedToAnchor>5__2, offset: 0x30, size: 0x1, def value: None
 bool  _successfullyAlignedToAnchor_5__2;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::Meta::XR::MultiplayerBlocks::Colocation::Anchor>  __7__wrap2;

/// @brief Field <anchor>5__4, offset: 0x50, size: 0x28, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::Anchor  _anchor_5__4;

/// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

/// @brief Size padding 0xa0 - 0x80 = 0x20, packed as 0x20
 uint8_t  _cordl_size_padding[0x20];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, _successfullyAlignedToAnchor_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, _anchor_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19, __u__1) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AutomaticColocationLauncher__ColocateAutomaticallyInternal_d__19) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
