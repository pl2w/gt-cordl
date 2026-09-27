#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoon___GroundSlam_d__173.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GREnemyBossMoon___GroundSlam_d__173)
namespace GlobalNamespace {
class GREnemyBossMoon;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GREnemyBossMoon___GroundSlam_d__173;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, "", "GREnemyBossMoon/<_GroundSlam>d__173");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, UnityEngine.Awaitable::Awaiter, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GREnemyBossMoon/<_GroundSlam>d__173
struct CORDL_TYPE GREnemyBossMoon___GroundSlam_d__173 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x58850c8, size 0xc88, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5885d50, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr GREnemyBossMoon___GroundSlam_d__173() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "slamCenter", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::GREnemyBossMoon>", modifiers: "", def_value: None, comment: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitVelocity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_slamPosition_5__2", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timeHit_5__3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_playerHit_5__4", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_player_5__5", ty: "::UnityW<::GorillaLocomotion::GTPlayer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_upwardsAngleBoost_5__6", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::Awaitable_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr GREnemyBossMoon___GroundSlam_d__173(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::UnityEngine::Transform>  slamCenter, float_t  distance, ::UnityW<::GlobalNamespace::GREnemyBossMoon>  __4__this, float_t  duration, float_t  hitVelocity, ::UnityEngine::Vector3  _slamPosition_5__2, float_t  _timeHit_5__3, bool  _playerHit_5__4, ::UnityW<::GorillaLocomotion::GTPlayer>  _player_5__5, float_t  _upwardsAngleBoost_5__6, ::GlobalNamespace::Awaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field slamCenter, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  slamCenter;

/// @brief Field distance, offset: 0x30, size: 0x4, def value: None
 float_t  distance;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GREnemyBossMoon>  __4__this;

/// @brief Field duration, offset: 0x40, size: 0x4, def value: None
 float_t  duration;

/// @brief Field hitVelocity, offset: 0x44, size: 0x4, def value: None
 float_t  hitVelocity;

/// @brief Field <slamPosition>5__2, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  _slamPosition_5__2;

/// @brief Field <timeHit>5__3, offset: 0x54, size: 0x4, def value: None
 float_t  _timeHit_5__3;

/// @brief Field <playerHit>5__4, offset: 0x58, size: 0x1, def value: None
 bool  _playerHit_5__4;

/// @brief Field <player>5__5, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  _player_5__5;

/// @brief Field <upwardsAngleBoost>5__6, offset: 0x68, size: 0x4, def value: None
 float_t  _upwardsAngleBoost_5__6;

/// @brief Field <>u__1, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::Awaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, slamCenter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, distance) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, duration) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, hitVelocity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, _slamPosition_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, _timeHit_5__3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, _playerHit_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, _player_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, _upwardsAngleBoost_5__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173, __u__1) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GREnemyBossMoon___GroundSlam_d__173) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
