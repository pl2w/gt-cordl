#pragma once
// IWYU pragma private; include "GlobalNamespace/AnimationPauser__OnStateEnter_d__4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__AnimatorStateInfo_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnimationPauser__OnStateEnter_d__4)
namespace GlobalNamespace {
class AnimationPauser;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
struct AnimationPauser__OnStateEnter_d__4;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, "", "AnimationPauser/<OnStateEnter>d__4");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, UnityEngine.AnimatorStateInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnimationPauser/<OnStateEnter>d__4
struct CORDL_TYPE AnimationPauser__OnStateEnter_d__4 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5a448f8, size 0x270, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5a44b68, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AnimationPauser__OnStateEnter_d__4() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AnimationPauser>", modifiers: "", def_value: None, comment: None }, CppParam { name: "animator", ty: "::UnityW<::UnityEngine::Animator>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stateInfo", ty: "::UnityEngine::AnimatorStateInfo", modifiers: "", def_value: None, comment: None }, CppParam { name: "layerIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr AnimationPauser__OnStateEnter_d__4(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::AnimationPauser>  __4__this, ::UnityW<::UnityEngine::Animator>  animator, ::UnityEngine::AnimatorStateInfo  stateInfo, int32_t  layerIndex, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2975};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AnimationPauser>  __4__this;

/// @brief Field animator, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field stateInfo, offset: 0x38, size: 0x24, def value: None
 ::UnityEngine::AnimatorStateInfo  stateInfo;

/// @brief Field layerIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  layerIndex;

/// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, animator) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, stateInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, layerIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4, __u__1) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnimationPauser__OnStateEnter_d__4) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
