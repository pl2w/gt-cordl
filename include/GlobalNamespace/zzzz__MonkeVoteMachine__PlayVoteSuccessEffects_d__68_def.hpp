#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeVoteMachine__PlayVoteSuccessEffects_d__68.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeVoteMachine__PlayVoteSuccessEffects_d__68)
namespace GlobalNamespace {
class MonkeVoteMachine;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MonkeVoteMachine__PlayVoteSuccessEffects_d__68;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68, "", "MonkeVoteMachine/<PlayVoteSuccessEffects>d__68");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: MonkeVoteMachine/<PlayVoteSuccessEffects>d__68
struct CORDL_TYPE MonkeVoteMachine__PlayVoteSuccessEffects_d__68 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5622d08, size 0x254, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5622f5c, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MonkeVoteMachine__PlayVoteSuccessEffects_d__68() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MonkeVoteMachine>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr MonkeVoteMachine__PlayVoteSuccessEffects_d__68(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::MonkeVoteMachine>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeVoteMachine>  __4__this;

/// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeVoteMachine__PlayVoteSuccessEffects_d__68) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
