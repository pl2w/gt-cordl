#pragma once
// IWYU pragma private; include "GorillaNetworking/GhostReactorProgression__GetStartingProgression_d__6.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorProgression__GetStartingProgression_d__6)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GorillaNetworking {
class GhostReactorProgression;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorProgression__GetStartingProgression_d__6;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6, "GorillaNetworking", "GhostReactorProgression/<GetStartingProgression>d__6");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaNetworking.GhostReactorProgression/<GetStartingProgression>d__6
struct CORDL_TYPE GhostReactorProgression__GetStartingProgression_d__6 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5c895f4, size 0x2dc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5c898d0, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorProgression__GetStartingProgression_d__6() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaNetworking::GhostReactorProgression>", modifiers: "", def_value: None, comment: None }, CppParam { name: "grPlayer", ty: "::UnityW<::GlobalNamespace::GRPlayer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorProgression__GetStartingProgression_d__6(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GorillaNetworking::GhostReactorProgression>  __4__this, ::UnityW<::GlobalNamespace::GRPlayer>  grPlayer, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4340};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::GhostReactorProgression>  __4__this;

/// @brief Field grPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  grPlayer;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6, grPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
