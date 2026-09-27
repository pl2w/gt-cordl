#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_HandState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTPlayer_HandState)
namespace GlobalNamespace {
class GorillaSurfaceOverride;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTPlayer_HandState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTPlayer_HandState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTPlayer_HandState, "GorillaLocomotion", "GTPlayer/HandState");
// Dependencies UnityEngine.Quaternion, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.GTPlayer/HandState
struct CORDL_TYPE GTPlayer_HandState {
public:
// Declarations
/// @brief Method FinalizeHandPosition, addr 0x5cda518, size 0x32c, virtual false, abstract: false, final false
inline void FinalizeHandPosition() ;

/// @brief Method FirstIteration, addr 0x5cd96f4, size 0xbb4, virtual false, abstract: false, final false
inline void FirstIteration(::by_ref<::UnityEngine::Vector3>  totalMove, ::by_ref<int32_t>  divisor, float_t  paddleBoostFactor) ;

/// @brief Method GetCurrentHandPosition, addr 0x5cda2a8, size 0x270, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetCurrentHandPosition() ;

/// @brief Method GetHandTapData, addr 0x5cda9fc, size 0x8c, virtual false, abstract: false, final false
inline void GetHandTapData(::by_ref<bool>  wasHandTouching, ::by_ref<bool>  wasSliding, ::by_ref<int32_t>  handMatIndex, ::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>  surfaceOverride, ::by_ref<::UnityEngine::RaycastHit>  handHitInfo, ::by_ref<::UnityEngine::Vector3>  handPosition, ::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>  handVelocityTracker) ;

/// @brief Method GetLastPosition, addr 0x5cd968c, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetLastPosition() ;

/// @brief Method Init, addr 0x5cd947c, size 0x128, virtual false, abstract: false, final false
inline void Init(::GorillaLocomotion::GTPlayer*  gtPlayer, bool  isLeftHand, float_t  maxArmLength) ;

/// @brief Method IsSlipOverriddenToMax, addr 0x5cda844, size 0x20, virtual false, abstract: false, final false
inline bool IsSlipOverriddenToMax() ;

/// @brief Method OnEndOfFrame, addr 0x5cda8a4, size 0xd0, virtual false, abstract: false, final false
inline void OnEndOfFrame() ;

/// @brief Method OnTeleport, addr 0x5cd95a4, size 0xe8, virtual false, abstract: false, final false
inline void OnTeleport() ;

/// @brief Method PositionHandFollower, addr 0x5cda864, size 0x40, virtual false, abstract: false, final false
inline void PositionHandFollower() ;

/// @brief Method SlipOverriddenToMax, addr 0x5cd96d4, size 0x20, virtual false, abstract: false, final false
inline bool SlipOverriddenToMax() ;

/// @brief Method TempFreezeHand, addr 0x5cda974, size 0x88, virtual false, abstract: false, final false
inline void TempFreezeHand(float_t  freezeDuration) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTPlayer_HandState() ;

// Ctor Parameters [CppParam { name: "lastPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "wasColliding", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isColliding", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "wasSliding", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isSliding", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isHolding", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "slideNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "slipPercentage", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "boostVectorThisFrame", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "finalPositionThisFrame", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "slipSetToMaxFrameIdx", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialTouchIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "surfaceOverride", ty: "::UnityW<::GlobalNamespace::GorillaSurfaceOverride>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastHitInfo", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: None, comment: None }, CppParam { name: "gtPlayer", ty: "::UnityW<::GorillaLocomotion::GTPlayer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "handFollower", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "controllerTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocityTracker", ty: "::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>", modifiers: "", def_value: None, comment: None }, CppParam { name: "interactPointVelocityTracker", ty: "::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>", modifiers: "", def_value: None, comment: None }, CppParam { name: "handOffset", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "handRotOffset", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "tempFreezeUntilTimestamp", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "canTag", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "canStun", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxArmLength", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "customBoostFactor", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasCustomBoost", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GTPlayer_HandState(::UnityEngine::Vector3  lastPosition, ::UnityEngine::Quaternion  lastRotation, bool  isLeftHand, bool  wasColliding, bool  isColliding, bool  wasSliding, bool  isSliding, bool  isHolding, ::UnityEngine::Vector3  slideNormal, float_t  slipPercentage, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  boostVectorThisFrame, ::UnityEngine::Vector3  finalPositionThisFrame, int32_t  slipSetToMaxFrameIdx, int32_t  materialTouchIndex, ::UnityW<::GlobalNamespace::GorillaSurfaceOverride>  surfaceOverride, ::UnityEngine::RaycastHit  hitInfo, ::UnityEngine::RaycastHit  lastHitInfo, ::UnityW<::GorillaLocomotion::GTPlayer>  gtPlayer, ::UnityW<::UnityEngine::Transform>  handFollower, ::UnityW<::UnityEngine::Transform>  controllerTransform, ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker, ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  interactPointVelocityTracker, ::UnityEngine::Vector3  handOffset, ::UnityEngine::Quaternion  handRotOffset, float_t  tempFreezeUntilTimestamp, bool  canTag, bool  canStun, float_t  maxArmLength, bool  isActive, float_t  customBoostFactor, bool  hasCustomBoost) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x120};

/// @brief Field lastPosition, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastRotation, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  lastRotation;

/// @brief Field isLeftHand, offset: 0x1c, size: 0x1, def value: None
 bool  isLeftHand;

/// @brief Field wasColliding, offset: 0x1d, size: 0x1, def value: None
 bool  wasColliding;

/// @brief Field isColliding, offset: 0x1e, size: 0x1, def value: None
 bool  isColliding;

/// @brief Field wasSliding, offset: 0x1f, size: 0x1, def value: None
 bool  wasSliding;

/// @brief Field isSliding, offset: 0x20, size: 0x1, def value: None
 bool  isSliding;

/// @brief Field isHolding, offset: 0x21, size: 0x1, def value: None
 bool  isHolding;

/// @brief Field slideNormal, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  slideNormal;

/// @brief Field slipPercentage, offset: 0x30, size: 0x4, def value: None
 float_t  slipPercentage;

/// @brief Field hitPoint, offset: 0x34, size: 0xc, def value: None
 ::UnityEngine::Vector3  hitPoint;

/// @brief Field boostVectorThisFrame, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  boostVectorThisFrame;

/// @brief Field finalPositionThisFrame, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  finalPositionThisFrame;

/// @brief Field slipSetToMaxFrameIdx, offset: 0x58, size: 0x4, def value: None
 int32_t  slipSetToMaxFrameIdx;

/// @brief Field materialTouchIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  materialTouchIndex;

/// @brief Field surfaceOverride, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSurfaceOverride>  surfaceOverride;

/// @brief Field hitInfo, offset: 0x68, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  hitInfo;

/// @brief Field lastHitInfo, offset: 0x94, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  lastHitInfo;

/// @brief Field gtPlayer, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  gtPlayer;

/// [SerializeField]
/// @brief Field handFollower, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  handFollower;

/// [SerializeField]
/// @brief Field controllerTransform, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  controllerTransform;

/// [SerializeField]
/// @brief Field velocityTracker, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker;

/// [SerializeField]
/// @brief Field interactPointVelocityTracker, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  interactPointVelocityTracker;

/// [SerializeField]
/// @brief Field handOffset, offset: 0xe8, size: 0xc, def value: None
 ::UnityEngine::Vector3  handOffset;

/// [SerializeField]
/// @brief Field handRotOffset, offset: 0xf4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  handRotOffset;

/// @brief Field tempFreezeUntilTimestamp, offset: 0x104, size: 0x4, def value: None
 float_t  tempFreezeUntilTimestamp;

/// @brief Field canTag, offset: 0x108, size: 0x1, def value: None
 bool  canTag;

/// @brief Field canStun, offset: 0x109, size: 0x1, def value: None
 bool  canStun;

/// @brief Field maxArmLength, offset: 0x10c, size: 0x4, def value: None
 float_t  maxArmLength;

/// @brief Field isActive, offset: 0x110, size: 0x1, def value: None
 bool  isActive;

/// @brief Field customBoostFactor, offset: 0x114, size: 0x4, def value: None
 float_t  customBoostFactor;

/// @brief Field hasCustomBoost, offset: 0x118, size: 0x1, def value: None
 bool  hasCustomBoost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, lastPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, lastRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, isLeftHand) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, wasColliding) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, isColliding) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, wasSliding) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, isSliding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, isHolding) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, slideNormal) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, slipPercentage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, hitPoint) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, boostVectorThisFrame) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, finalPositionThisFrame) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, slipSetToMaxFrameIdx) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, materialTouchIndex) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, surfaceOverride) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, hitInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, lastHitInfo) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, gtPlayer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, handFollower) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, controllerTransform) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, velocityTracker) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, interactPointVelocityTracker) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, handOffset) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, handRotOffset) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, tempFreezeUntilTimestamp) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, canTag) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, canStun) == 0x109, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, maxArmLength) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, isActive) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, customBoostFactor) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTPlayer_HandState, hasCustomBoost) == 0x118, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTPlayer_HandState) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace
