#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Shared/ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13)
namespace Meta::XR::MultiplayerBlocks::Shared {
class ColocationSessionEventHandler___c__DisplayClass13_0;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13, "Meta.XR.MultiplayerBlocks.Shared", "ColocationSessionEventHandler/<RequestScenePermissionIfNeeded>d__13");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Shared.ColocationSessionEventHandler/<RequestScenePermissionIfNeeded>d__13
struct CORDL_TYPE ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f696a0, size 0x4f4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f69b94, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None, comment: None }]
constexpr ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder, ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30616};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>  __t__builder;

/// @brief Field <>8__1, offset: 0x20, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Shared::ColocationSessionEventHandler___c__DisplayClass13_0*  __8__1;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13, __8__1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColocationSessionEventHandler__RequestScenePermissionIfNeeded_d__13) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
