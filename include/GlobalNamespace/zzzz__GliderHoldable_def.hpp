#pragma once
// IWYU pragma private; include "GlobalNamespace/GliderHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GliderHoldable_CosmeticMaterialOverride_def.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_GliderState_def.hpp"
#include "GlobalNamespace/zzzz__GliderHoldable_SyncedState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkHoldableObject_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GliderHoldable)
namespace GlobalNamespace {
class AverageVector3;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
struct GliderHoldable_CosmeticMaterialOverride;
}
namespace GlobalNamespace {
struct GliderHoldable_GliderState;
}
namespace GlobalNamespace {
class GliderHoldable_HoldingHand;
}
namespace GlobalNamespace {
struct GliderHoldable_SyncedState;
}
namespace GlobalNamespace {
class GliderHoldable__ReenableOwnershipRequest_d__178;
}
namespace GlobalNamespace {
class IRequestableOwnershipGuardCallbacks;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class RequestableOwnershipGuard;
}
namespace GlobalNamespace {
class VRRig;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GliderHoldable;
}
namespace GlobalNamespace {
class GliderHoldable_HoldingHand;
}
namespace GlobalNamespace {
class GliderHoldable__ReenableOwnershipRequest_d__178;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GliderHoldable*);
MARK_REF_T(::GlobalNamespace::GliderHoldable_HoldingHand*);
MARK_REF_T(::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GliderHoldable*, "", "GliderHoldable");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GliderHoldable_HoldingHand*, "", "GliderHoldable/HoldingHand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178*, "", "GliderHoldable/<ReenableOwnershipRequest>d__178");
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [NetworkBehaviourWeaved(11)]
// Dependencies GliderHoldable::CosmeticMaterialOverride, GliderHoldable::GliderState, GliderHoldable::SyncedState, NetworkHoldableObject, System.Nullable`1<T>, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GliderHoldable
class CORDL_TYPE GliderHoldable : public ::GlobalNamespace::NetworkHoldableObject {
public:
// Declarations
using CosmeticMaterialOverride = ::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride;

using GliderState = ::GlobalNamespace::GliderHoldable_GliderState;

using HoldingHand = ::GlobalNamespace::GliderHoldable_HoldingHand;

using SyncedState = ::GlobalNamespace::GliderHoldable_SyncedState;

using _ReenableOwnershipRequest_d__178 = ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178;

/// [Networked]
/// @brief [NetworkedWeaved(0, 11)]
 __declspec(property(get=get_Data, put=set_Data)) ::GlobalNamespace::GliderHoldable_SyncedState  Data;

 __declspec(property(get=get_OutOfBounds)) bool  OutOfBounds;

 __declspec(property(get=get_TwoHanded)) bool  TwoHanded;

/// @brief Field _Data, offset 0x41c, size 0x2c 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::GlobalNamespace::GliderHoldable_SyncedState  _Data;

/// @brief Field accelSmoothingFollowRate, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_accelSmoothingFollowRate, put=__cordl_internal_set_accelSmoothingFollowRate)) float_t  accelSmoothingFollowRate;

/// @brief Field accelSmoothingFollowRateExp, offset 0x328, size 0x4 
 __declspec(property(get=__cordl_internal_get_accelSmoothingFollowRateExp, put=__cordl_internal_set_accelSmoothingFollowRateExp)) float_t  accelSmoothingFollowRateExp;

/// @brief Field accelerationAverage, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_accelerationAverage, put=__cordl_internal_set_accelerationAverage)) ::GlobalNamespace::AverageVector3*  accelerationAverage;

/// @brief Field accelerationSmoothed, offset 0x320, size 0x4 
 __declspec(property(get=__cordl_internal_get_accelerationSmoothed, put=__cordl_internal_set_accelerationSmoothed)) float_t  accelerationSmoothed;

/// @brief Field activeAudio, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeAudio, put=__cordl_internal_set_activeAudio)) ::UnityW<::UnityEngine::AudioSource>  activeAudio;

/// @brief Field attackDragFactor, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_attackDragFactor, put=__cordl_internal_set_attackDragFactor)) float_t  attackDragFactor;

/// @brief Field audioLevel, offset 0x404, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioLevel, put=__cordl_internal_set_audioLevel)) float_t  audioLevel;

/// @brief Field audioVolumeMultiplier, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioVolumeMultiplier, put=__cordl_internal_set_audioVolumeMultiplier)) float_t  audioVolumeMultiplier;

/// @brief Field baseLeafMaterial, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseLeafMaterial, put=__cordl_internal_set_baseLeafMaterial)) ::UnityW<::UnityEngine::Material>  baseLeafMaterial;

/// @brief Field cachedRig, offset 0x410, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedRig, put=__cordl_internal_set_cachedRig)) ::UnityW<::GlobalNamespace::VRRig>  cachedRig;

/// @brief Field calmAudio, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_calmAudio, put=__cordl_internal_set_calmAudio)) ::UnityW<::UnityEngine::AudioSource>  calmAudio;

/// @brief Field cosmeticMaterialOverrides, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticMaterialOverrides, put=__cordl_internal_set_cosmeticMaterialOverrides)) ::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>  cosmeticMaterialOverrides;

/// @brief Field currentVelocity, offset 0x2dc, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentVelocity, put=__cordl_internal_set_currentVelocity)) ::UnityEngine::Vector3  currentVelocity;

/// @brief Field debugDrawTagRange, offset 0x1c8, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawTagRange, put=__cordl_internal_set_debugDrawTagRange)) bool  debugDrawTagRange;

/// @brief Field defaultMaxDistanceBeforeRespawn, offset 0x26c, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultMaxDistanceBeforeRespawn, put=__cordl_internal_set_defaultMaxDistanceBeforeRespawn)) float_t  defaultMaxDistanceBeforeRespawn;

/// @brief Field dragVsAttack, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dragVsAttack, put=__cordl_internal_set_dragVsAttack)) ::UnityEngine::AnimationCurve*  dragVsAttack;

/// @brief Field dragVsSpeed, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dragVsSpeed, put=__cordl_internal_set_dragVsSpeed)) ::UnityEngine::AnimationCurve*  dragVsSpeed;

/// @brief Field dragVsSpeedDragFactor, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_dragVsSpeedDragFactor, put=__cordl_internal_set_dragVsSpeedDragFactor)) float_t  dragVsSpeedDragFactor;

/// @brief Field dragVsSpeedMaxSpeed, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_dragVsSpeedMaxSpeed, put=__cordl_internal_set_dragVsSpeedMaxSpeed)) float_t  dragVsSpeedMaxSpeed;

/// @brief Field extendTagRangeInFlight, offset 0x1b4, size 0x1 
 __declspec(property(get=__cordl_internal_get_extendTagRangeInFlight, put=__cordl_internal_set_extendTagRangeInFlight)) bool  extendTagRangeInFlight;

/// @brief Field fallingGravityReduction, offset 0x218, size 0x4 
 __declspec(property(get=__cordl_internal_get_fallingGravityReduction, put=__cordl_internal_set_fallingGravityReduction)) float_t  fallingGravityReduction;

/// @brief Field frozenLeafMaterial, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_frozenLeafMaterial, put=__cordl_internal_set_frozenLeafMaterial)) ::UnityW<::UnityEngine::Material>  frozenLeafMaterial;

/// @brief Field gliderState, offset 0x400, size 0x4 
 __declspec(property(get=__cordl_internal_get_gliderState, put=__cordl_internal_set_gliderState)) ::GlobalNamespace::GliderHoldable_GliderState  gliderState;

/// @brief Field gravityCompensation, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityCompensation, put=__cordl_internal_set_gravityCompensation)) float_t  gravityCompensation;

/// @brief Field gravityUprightTorqueMultiplier, offset 0x214, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityUprightTorqueMultiplier, put=__cordl_internal_set_gravityUprightTorqueMultiplier)) float_t  gravityUprightTorqueMultiplier;

/// @brief Field handle, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::UnityW<::GlobalNamespace::InteractionPoint>  handle;

/// @brief Field hapticAccelInputRange, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_hapticAccelInputRange, put=__cordl_internal_set_hapticAccelInputRange)) ::UnityEngine::Vector2  hapticAccelInputRange;

/// @brief Field hapticAccelOutputMax, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticAccelOutputMax, put=__cordl_internal_set_hapticAccelOutputMax)) float_t  hapticAccelOutputMax;

/// @brief Field hapticMaxSpeedInputRange, offset 0x17c, size 0x8 
 __declspec(property(get=__cordl_internal_get_hapticMaxSpeedInputRange, put=__cordl_internal_set_hapticMaxSpeedInputRange)) ::UnityEngine::Vector2  hapticMaxSpeedInputRange;

/// @brief Field hapticSpeedInputRange, offset 0x184, size 0x8 
 __declspec(property(get=__cordl_internal_get_hapticSpeedInputRange, put=__cordl_internal_set_hapticSpeedInputRange)) ::UnityEngine::Vector2  hapticSpeedInputRange;

/// @brief Field hapticSpeedOutputMax, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticSpeedOutputMax, put=__cordl_internal_set_hapticSpeedOutputMax)) float_t  hapticSpeedOutputMax;

/// @brief Field holdingTwoGliders, offset 0x3fc, size 0x1 
 __declspec(property(get=__cordl_internal_get_holdingTwoGliders, put=__cordl_internal_set_holdingTwoGliders)) bool  holdingTwoGliders;

/// @brief Field infectedAudioVolumeMultiplier, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_infectedAudioVolumeMultiplier, put=__cordl_internal_set_infectedAudioVolumeMultiplier)) float_t  infectedAudioVolumeMultiplier;

/// @brief Field infectedLeafMaterial, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_infectedLeafMaterial, put=__cordl_internal_set_infectedLeafMaterial)) ::UnityW<::UnityEngine::Material>  infectedLeafMaterial;

/// @brief Field infectedSpeedIncrease, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_infectedSpeedIncrease, put=__cordl_internal_set_infectedSpeedIncrease)) float_t  infectedSpeedIncrease;

/// @brief Field infectedState, offset 0x418, size 0x1 
 __declspec(property(get=__cordl_internal_get_infectedState, put=__cordl_internal_set_infectedState)) bool  infectedState;

/// @brief Field lastHeldTime, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHeldTime, put=__cordl_internal_set_lastHeldTime)) float_t  lastHeldTime;

/// @brief Field leafMesh, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leafMesh, put=__cordl_internal_set_leafMesh)) ::UnityW<::UnityEngine::MeshRenderer>  leafMesh;

/// @brief Field leftHold, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHold, put=__cordl_internal_set_leftHold)) ::GlobalNamespace::GliderHoldable_HoldingHand*  leftHold;

/// @brief Field leftHoldPositionLocal, offset 0x3a0, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftHoldPositionLocal, put=__cordl_internal_set_leftHoldPositionLocal)) ::System::Nullable_1<::UnityEngine::Vector3>  leftHoldPositionLocal;

/// @brief Field leftWhooshAudio, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftWhooshAudio, put=__cordl_internal_set_leftWhooshAudio)) ::UnityW<::UnityEngine::AudioSource>  leftWhooshAudio;

/// @brief Field leftWhooshHitPoint, offset 0x3cc, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftWhooshHitPoint, put=__cordl_internal_set_leftWhooshHitPoint)) ::UnityEngine::Vector3  leftWhooshHitPoint;

/// @brief Field leftWhooshStartTime, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftWhooshStartTime, put=__cordl_internal_set_leftWhooshStartTime)) float_t  leftWhooshStartTime;

/// @brief Field liftIncreaseVsRoll, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_liftIncreaseVsRoll, put=__cordl_internal_set_liftIncreaseVsRoll)) ::UnityEngine::AnimationCurve*  liftIncreaseVsRoll;

/// @brief Field liftIncreaseVsRollMaxAngle, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_liftIncreaseVsRollMaxAngle, put=__cordl_internal_set_liftIncreaseVsRollMaxAngle)) float_t  liftIncreaseVsRollMaxAngle;

/// @brief Field liftVsAttack, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_liftVsAttack, put=__cordl_internal_set_liftVsAttack)) ::UnityEngine::AnimationCurve*  liftVsAttack;

/// @brief Field maxDistanceBeforeRespawn, offset 0x208, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceBeforeRespawn, put=__cordl_internal_set_maxDistanceBeforeRespawn)) float_t  maxDistanceBeforeRespawn;

/// @brief Field maxDistanceRespawnOrigin, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxDistanceRespawnOrigin, put=__cordl_internal_set_maxDistanceRespawnOrigin)) ::UnityW<::UnityEngine::Transform>  maxDistanceRespawnOrigin;

/// @brief Field maxDroppedTimeToRespawn, offset 0x20c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDroppedTimeToRespawn, put=__cordl_internal_set_maxDroppedTimeToRespawn)) float_t  maxDroppedTimeToRespawn;

/// @brief Field maxSlipOverrideSpeedThreshold, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSlipOverrideSpeedThreshold, put=__cordl_internal_set_maxSlipOverrideSpeedThreshold)) float_t  maxSlipOverrideSpeedThreshold;

/// @brief Field networkSyncFollowRate, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_networkSyncFollowRate, put=__cordl_internal_set_networkSyncFollowRate)) float_t  networkSyncFollowRate;

/// @brief Field networkSyncFollowRateExp, offset 0x32c, size 0x4 
 __declspec(property(get=__cordl_internal_get_networkSyncFollowRateExp, put=__cordl_internal_set_networkSyncFollowRateExp)) float_t  networkSyncFollowRateExp;

/// @brief Field oneHandHoldRotationRate, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_oneHandHoldRotationRate, put=__cordl_internal_set_oneHandHoldRotationRate)) float_t  oneHandHoldRotationRate;

/// @brief Field oneHandPitchMultiplier, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_oneHandPitchMultiplier, put=__cordl_internal_set_oneHandPitchMultiplier)) float_t  oneHandPitchMultiplier;

/// @brief Field oneHandRotationRateExp, offset 0x300, size 0x4 
 __declspec(property(get=__cordl_internal_get_oneHandRotationRateExp, put=__cordl_internal_set_oneHandRotationRateExp)) float_t  oneHandRotationRateExp;

/// @brief Field oneHandSimulatedHoldOffset, offset 0x128, size 0xc 
 __declspec(property(get=__cordl_internal_get_oneHandSimulatedHoldOffset, put=__cordl_internal_set_oneHandSimulatedHoldOffset)) ::UnityEngine::Vector3  oneHandSimulatedHoldOffset;

/// @brief Field ownershipGuard, offset 0x250, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownershipGuard, put=__cordl_internal_set_ownershipGuard)) ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ownershipGuard;

/// @brief Field pendingOwnershipRequest, offset 0x330, size 0x1 
 __declspec(property(get=__cordl_internal_get_pendingOwnershipRequest, put=__cordl_internal_set_pendingOwnershipRequest)) bool  pendingOwnershipRequest;

/// @brief Field pitch, offset 0x2e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitch, put=__cordl_internal_set_pitch)) float_t  pitch;

/// @brief Field pitchHalfLife, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchHalfLife, put=__cordl_internal_set_pitchHalfLife)) float_t  pitchHalfLife;

/// @brief Field pitchMinMax, offset 0x9c, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchMinMax, put=__cordl_internal_set_pitchMinMax)) ::UnityEngine::Vector2  pitchMinMax;

/// @brief Field pitchVel, offset 0x2f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchVel, put=__cordl_internal_set_pitchVel)) float_t  pitchVel;

/// @brief Field pitchVelocityFollowRateAngle, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchVelocityFollowRateAngle, put=__cordl_internal_set_pitchVelocityFollowRateAngle)) float_t  pitchVelocityFollowRateAngle;

/// @brief Field pitchVelocityFollowRateMagnitude, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_pitchVelocityFollowRateMagnitude, put=__cordl_internal_set_pitchVelocityFollowRateMagnitude)) float_t  pitchVelocityFollowRateMagnitude;

/// @brief Field pitchVelocityRampTimeMinMax, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchVelocityRampTimeMinMax, put=__cordl_internal_set_pitchVelocityRampTimeMinMax)) ::UnityEngine::Vector2  pitchVelocityRampTimeMinMax;

/// @brief Field pitchVelocityTargetMinMax, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pitchVelocityTargetMinMax, put=__cordl_internal_set_pitchVelocityTargetMinMax)) ::UnityEngine::Vector2  pitchVelocityTargetMinMax;

/// @brief Field playerFacingRotationOffset, offset 0x308, size 0x10 
 __declspec(property(get=__cordl_internal_get_playerFacingRotationOffset, put=__cordl_internal_set_playerFacingRotationOffset)) ::UnityEngine::Quaternion  playerFacingRotationOffset;

/// @brief Field positionLocalToVRRig, offset 0x334, size 0xc 
 __declspec(property(get=__cordl_internal_get_positionLocalToVRRig, put=__cordl_internal_set_positionLocalToVRRig)) ::UnityEngine::Vector3  positionLocalToVRRig;

/// @brief Field previousVelocity, offset 0x2d0, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousVelocity, put=__cordl_internal_set_previousVelocity)) ::UnityEngine::Vector3  previousVelocity;

/// @brief Field pullUpLiftActivationAcceleration, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullUpLiftActivationAcceleration, put=__cordl_internal_set_pullUpLiftActivationAcceleration)) float_t  pullUpLiftActivationAcceleration;

/// @brief Field pullUpLiftActivationVelocity, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullUpLiftActivationVelocity, put=__cordl_internal_set_pullUpLiftActivationVelocity)) float_t  pullUpLiftActivationVelocity;

/// @brief Field pullUpLiftBonus, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_pullUpLiftBonus, put=__cordl_internal_set_pullUpLiftBonus)) float_t  pullUpLiftBonus;

/// @brief Field rb, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field reenableOwnershipRequestCoroutine, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_reenableOwnershipRequestCoroutine, put=__cordl_internal_set_reenableOwnershipRequestCoroutine)) ::UnityEngine::Coroutine*  reenableOwnershipRequestCoroutine;

/// @brief Field riderId, offset 0x408, size 0x4 
 __declspec(property(get=__cordl_internal_get_riderId, put=__cordl_internal_set_riderId)) int32_t  riderId;

/// @brief Field riderPosDirectPitchMax, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_riderPosDirectPitchMax, put=__cordl_internal_set_riderPosDirectPitchMax)) float_t  riderPosDirectPitchMax;

/// @brief Field riderPosRange, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_riderPosRange, put=__cordl_internal_set_riderPosRange)) ::UnityEngine::Vector2  riderPosRange;

/// @brief Field riderPosRangeNormalizedDeadzone, offset 0x11c, size 0x8 
 __declspec(property(get=__cordl_internal_get_riderPosRangeNormalizedDeadzone, put=__cordl_internal_set_riderPosRangeNormalizedDeadzone)) ::UnityEngine::Vector2  riderPosRangeNormalizedDeadzone;

/// @brief Field riderPosRangeOffset, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_riderPosRangeOffset, put=__cordl_internal_set_riderPosRangeOffset)) float_t  riderPosRangeOffset;

/// @brief Field riderPosition, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_riderPosition, put=__cordl_internal_set_riderPosition)) ::UnityEngine::Vector2  riderPosition;

/// @brief Field ridersMaterialOverideIndex, offset 0x3f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ridersMaterialOverideIndex, put=__cordl_internal_set_ridersMaterialOverideIndex)) int32_t  ridersMaterialOverideIndex;

/// @brief Field rightHold, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHold, put=__cordl_internal_set_rightHold)) ::GlobalNamespace::GliderHoldable_HoldingHand*  rightHold;

/// @brief Field rightHoldPositionLocal, offset 0x3b0, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightHoldPositionLocal, put=__cordl_internal_set_rightHoldPositionLocal)) ::System::Nullable_1<::UnityEngine::Vector3>  rightHoldPositionLocal;

/// @brief Field rightWhooshAudio, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightWhooshAudio, put=__cordl_internal_set_rightWhooshAudio)) ::UnityW<::UnityEngine::AudioSource>  rightWhooshAudio;

/// @brief Field rightWhooshHitPoint, offset 0x3e8, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightWhooshHitPoint, put=__cordl_internal_set_rightWhooshHitPoint)) ::UnityEngine::Vector3  rightWhooshHitPoint;

/// @brief Field rightWhooshStartTime, offset 0x3e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightWhooshStartTime, put=__cordl_internal_set_rightWhooshStartTime)) float_t  rightWhooshStartTime;

/// @brief Field roll, offset 0x2f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_roll, put=__cordl_internal_set_roll)) float_t  roll;

/// @brief Field rollMinMax, offset 0xa4, size 0x8 
 __declspec(property(get=__cordl_internal_get_rollMinMax, put=__cordl_internal_set_rollMinMax)) ::UnityEngine::Vector2  rollMinMax;

/// @brief Field rollVel, offset 0x2fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_rollVel, put=__cordl_internal_set_rollVel)) float_t  rollVel;

/// @brief Field rotationLocalToVRRig, offset 0x340, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotationLocalToVRRig, put=__cordl_internal_set_rotationLocalToVRRig)) ::UnityEngine::Quaternion  rotationLocalToVRRig;

/// @brief Field setMaxHandSlipDuringFlight, offset 0x13d, size 0x1 
 __declspec(property(get=__cordl_internal_get_setMaxHandSlipDuringFlight, put=__cordl_internal_set_setMaxHandSlipDuringFlight)) bool  setMaxHandSlipDuringFlight;

/// @brief Field skyJungleRespawnOrigin, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_skyJungleRespawnOrigin, put=__cordl_internal_set_skyJungleRespawnOrigin)) ::UnityW<::UnityEngine::Transform>  skyJungleRespawnOrigin;

/// @brief Field skyJungleSpawnPostion, offset 0x374, size 0xc 
 __declspec(property(get=__cordl_internal_get_skyJungleSpawnPostion, put=__cordl_internal_set_skyJungleSpawnPostion)) ::UnityEngine::Vector3  skyJungleSpawnPostion;

/// @brief Field skyJungleSpawnRotation, offset 0x380, size 0x10 
 __declspec(property(get=__cordl_internal_get_skyJungleSpawnRotation, put=__cordl_internal_set_skyJungleSpawnRotation)) ::UnityEngine::Quaternion  skyJungleSpawnRotation;

/// @brief Field spawnPosition, offset 0x358, size 0xc 
 __declspec(property(get=__cordl_internal_get_spawnPosition, put=__cordl_internal_set_spawnPosition)) ::UnityEngine::Vector3  spawnPosition;

/// @brief Field spawnRotation, offset 0x364, size 0x10 
 __declspec(property(get=__cordl_internal_get_spawnRotation, put=__cordl_internal_set_spawnRotation)) ::UnityEngine::Quaternion  spawnRotation;

/// @brief Field subtlePlayerPitch, offset 0x25c, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerPitch, put=__cordl_internal_set_subtlePlayerPitch)) float_t  subtlePlayerPitch;

/// @brief Field subtlePlayerPitchAccelMinMax, offset 0x164, size 0x8 
 __declspec(property(get=__cordl_internal_get_subtlePlayerPitchAccelMinMax, put=__cordl_internal_set_subtlePlayerPitchAccelMinMax)) ::UnityEngine::Vector2  subtlePlayerPitchAccelMinMax;

/// @brief Field subtlePlayerPitchActive, offset 0x258, size 0x1 
 __declspec(property(get=__cordl_internal_get_subtlePlayerPitchActive, put=__cordl_internal_set_subtlePlayerPitchActive)) bool  subtlePlayerPitchActive;

/// @brief Field subtlePlayerPitchFactor, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerPitchFactor, put=__cordl_internal_set_subtlePlayerPitchFactor)) float_t  subtlePlayerPitchFactor;

/// @brief Field subtlePlayerPitchRate, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerPitchRate, put=__cordl_internal_set_subtlePlayerPitchRate)) float_t  subtlePlayerPitchRate;

/// @brief Field subtlePlayerPitchRateExp, offset 0x264, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerPitchRateExp, put=__cordl_internal_set_subtlePlayerPitchRateExp)) float_t  subtlePlayerPitchRateExp;

/// @brief Field subtlePlayerRoll, offset 0x260, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerRoll, put=__cordl_internal_set_subtlePlayerRoll)) float_t  subtlePlayerRoll;

/// @brief Field subtlePlayerRollAccelMinMax, offset 0x15c, size 0x8 
 __declspec(property(get=__cordl_internal_get_subtlePlayerRollAccelMinMax, put=__cordl_internal_set_subtlePlayerRollAccelMinMax)) ::UnityEngine::Vector2  subtlePlayerRollAccelMinMax;

/// @brief Field subtlePlayerRollActive, offset 0x259, size 0x1 
 __declspec(property(get=__cordl_internal_get_subtlePlayerRollActive, put=__cordl_internal_set_subtlePlayerRollActive)) bool  subtlePlayerRollActive;

/// @brief Field subtlePlayerRollFactor, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerRollFactor, put=__cordl_internal_set_subtlePlayerRollFactor)) float_t  subtlePlayerRollFactor;

/// @brief Field subtlePlayerRollRate, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerRollRate, put=__cordl_internal_set_subtlePlayerRollRate)) float_t  subtlePlayerRollRate;

/// @brief Field subtlePlayerRollRateExp, offset 0x268, size 0x4 
 __declspec(property(get=__cordl_internal_get_subtlePlayerRollRateExp, put=__cordl_internal_set_subtlePlayerRollRateExp)) float_t  subtlePlayerRollRateExp;

/// @brief Field subtlePlayerRotationSpeedRampMinMax, offset 0x154, size 0x8 
 __declspec(property(get=__cordl_internal_get_subtlePlayerRotationSpeedRampMinMax, put=__cordl_internal_set_subtlePlayerRotationSpeedRampMinMax)) ::UnityEngine::Vector2  subtlePlayerRotationSpeedRampMinMax;

/// @brief Field syncedState, offset 0x280, size 0x2c 
 __declspec(property(get=__cordl_internal_get_syncedState, put=__cordl_internal_set_syncedState)) ::GlobalNamespace::GliderHoldable_SyncedState  syncedState;

/// @brief Field tagRangeOutput, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagRangeOutput, put=__cordl_internal_set_tagRangeOutput)) ::UnityEngine::Vector2  tagRangeOutput;

/// @brief Field tagRangeSpeedInput, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagRangeSpeedInput, put=__cordl_internal_set_tagRangeSpeedInput)) ::UnityEngine::Vector2  tagRangeSpeedInput;

/// @brief Field turnAccelerationSmoothed, offset 0x324, size 0x4 
 __declspec(property(get=__cordl_internal_get_turnAccelerationSmoothed, put=__cordl_internal_set_turnAccelerationSmoothed)) float_t  turnAccelerationSmoothed;

/// @brief Field twoHandGliderInversionOnYawInsteadOfRoll, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get_twoHandGliderInversionOnYawInsteadOfRoll, put=__cordl_internal_set_twoHandGliderInversionOnYawInsteadOfRoll)) bool  twoHandGliderInversionOnYawInsteadOfRoll;

/// @brief Field twoHandHoldRotationRate, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_twoHandHoldRotationRate, put=__cordl_internal_set_twoHandHoldRotationRate)) float_t  twoHandHoldRotationRate;

/// @brief Field twoHandRotationOffsetAngle, offset 0x2b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_twoHandRotationOffsetAngle, put=__cordl_internal_set_twoHandRotationOffsetAngle)) float_t  twoHandRotationOffsetAngle;

/// @brief Field twoHandRotationOffsetAxis, offset 0x2ac, size 0xc 
 __declspec(property(get=__cordl_internal_get_twoHandRotationOffsetAxis, put=__cordl_internal_set_twoHandRotationOffsetAxis)) ::UnityEngine::Vector3  twoHandRotationOffsetAxis;

/// @brief Field twoHandRotationRateExp, offset 0x304, size 0x4 
 __declspec(property(get=__cordl_internal_get_twoHandRotationRateExp, put=__cordl_internal_set_twoHandRotationRateExp)) float_t  twoHandRotationRateExp;

/// @brief Field whistlingAudio, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_whistlingAudio, put=__cordl_internal_set_whistlingAudio)) ::UnityW<::UnityEngine::AudioSource>  whistlingAudio;

/// @brief Field whistlingAudioSpeedInputRange, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_whistlingAudioSpeedInputRange, put=__cordl_internal_set_whistlingAudioSpeedInputRange)) ::UnityEngine::Vector2  whistlingAudioSpeedInputRange;

/// @brief Field whooshAudioPositionOffset, offset 0x3d8, size 0xc 
 __declspec(property(get=__cordl_internal_get_whooshAudioPositionOffset, put=__cordl_internal_set_whooshAudioPositionOffset)) ::UnityEngine::Vector3  whooshAudioPositionOffset;

/// @brief Field whooshCheckDistance, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_whooshCheckDistance, put=__cordl_internal_set_whooshCheckDistance)) float_t  whooshCheckDistance;

/// @brief Field whooshSoundDuration, offset 0x3c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_whooshSoundDuration, put=__cordl_internal_set_whooshSoundDuration)) float_t  whooshSoundDuration;

/// @brief Field whooshSoundRetriggerThreshold, offset 0x3c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_whooshSoundRetriggerThreshold, put=__cordl_internal_set_whooshSoundRetriggerThreshold)) float_t  whooshSoundRetriggerThreshold;

/// @brief Field whooshSpeedThresholdInput, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_whooshSpeedThresholdInput, put=__cordl_internal_set_whooshSpeedThresholdInput)) ::UnityEngine::Vector2  whooshSpeedThresholdInput;

/// @brief Field whooshVolumeOutput, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_whooshVolumeOutput, put=__cordl_internal_set_whooshVolumeOutput)) ::UnityEngine::Vector2  whooshVolumeOutput;

/// @brief Field windUprightTorqueMultiplier, offset 0x210, size 0x4 
 __declspec(property(get=__cordl_internal_get_windUprightTorqueMultiplier, put=__cordl_internal_set_windUprightTorqueMultiplier)) float_t  windUprightTorqueMultiplier;

/// @brief Field windVolumeForceAppliedFrame, offset 0x3f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_windVolumeForceAppliedFrame, put=__cordl_internal_set_windVolumeForceAppliedFrame)) int32_t  windVolumeForceAppliedFrame;

/// @brief Field yaw, offset 0x2ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_yaw, put=__cordl_internal_set_yaw)) float_t  yaw;

/// @brief Field yawVel, offset 0x2f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_yawVel, put=__cordl_internal_set_yawVel)) float_t  yawVel;

/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr operator  ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept;

/// @brief Method AuthorityUpdate, addr 0x5ab6500, size 0xbc, virtual false, abstract: false, final false
inline void AuthorityUpdate(float_t  dt) ;

/// @brief Method AuthorityUpdateHeld, addr 0x5ab6d38, size 0x2930, virtual false, abstract: false, final false
inline void AuthorityUpdateHeld(float_t  dt) ;

/// @brief Method AuthorityUpdateUnheld, addr 0x5ab6bb8, size 0x180, virtual false, abstract: false, final false
inline void AuthorityUpdateUnheld(float_t  dt) ;

/// @brief Method Awake, addr 0x5ab3374, size 0x21c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestPointInHandle, addr 0x5ab4a38, size 0x314, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointInHandle(::UnityEngine::Vector3  startingPoint, ::GlobalNamespace::InteractionPoint*  interactionPoint) ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5abb648, size 0x68, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5abb6b0, size 0x6c, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// @brief Method CustomMapLoad, addr 0x5ab3ab8, size 0x78, virtual false, abstract: false, final false
inline void CustomMapLoad(::UnityEngine::Transform*  placeholderTransform, float_t  respawnDistance) ;

/// @brief Method CustomMapUnload, addr 0x5ab3b30, size 0x4c, virtual false, abstract: false, final false
inline void CustomMapUnload() ;

/// @brief Method DropItemCleanup, addr 0x5ab55dc, size 0x4, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method FixedUpdate, addr 0x5ab55e0, size 0x9d0, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetHandsOrientationVectors, addr 0x5ab9980, size 0x988, virtual false, abstract: false, final false
inline void GetHandsOrientationVectors(::UnityEngine::Vector3  leftHandPos, ::UnityEngine::Vector3  rightHandPos, ::UnityEngine::Transform*  head, bool  flipBasedOnFacingDir, ::by_ref<::UnityEngine::Vector3>  handsVector, ::by_ref<::UnityEngine::Vector3>  handsUpVector) ;

/// @brief Method GetHandsVector, addr 0x5ab4edc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHandsVector(::UnityEngine::Vector3  leftHandPos, ::UnityEngine::Vector3  rightHandPos, ::UnityEngine::Vector3  headPos, bool  flipBasedOnFacingDir) ;

/// @brief Method GetInfectedMaterial, addr 0x5ab50a0, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetInfectedMaterial() ;

/// @brief Method GetMaterialFromIndex, addr 0x5ab511c, size 0x50, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Material> GetMaterialFromIndex(uint8_t  materialIndex) ;

/// @brief Method GetRollAngle180Wrapping, addr 0x5ab5fb0, size 0x350, virtual false, abstract: false, final false
inline float_t GetRollAngle180Wrapping() ;

/// @brief Method LateUpdate, addr 0x5ab643c, size 0xc4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GliderHoldable* New_ctor() ;

/// @brief Method NormalizeAngle180, addr 0x5ab6300, size 0x48, virtual false, abstract: false, final false
inline float_t NormalizeAngle180(float_t  angle) ;

/// @brief Method OnDestroy, addr 0x5ab35b4, size 0x124, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5ab37ac, size 0xdc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ab36d8, size 0xd4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5ab3d34, size 0x1b8, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnGrabAuthority, addr 0x5ab3eec, size 0x9c0, virtual false, abstract: false, final false
inline void OnGrabAuthority(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5ab3b84, size 0x144, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnMasterClientAssistedTakeoverRequest, addr 0x5abb174, size 0x8, virtual true, abstract: false, final true
inline bool OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnMyCreatorLeft, addr 0x5abb17c, size 0x4, virtual true, abstract: false, final true
inline void OnMyCreatorLeft() ;

/// @brief Method OnMyOwnerLeft, addr 0x5abb170, size 0x4, virtual true, abstract: false, final true
inline void OnMyOwnerLeft() ;

/// @brief Method OnOwnershipRequest, addr 0x5abb0bc, size 0xb4, virtual true, abstract: false, final true
inline bool OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnOwnershipTransferred, addr 0x5abaf88, size 0x134, virtual true, abstract: false, final true
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer) ;

/// @brief Method OnRelease, addr 0x5ab516c, size 0x3bc, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnTriggerStay, addr 0x5aba440, size 0x324, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

/// @brief Method ReadDataFusion, addr 0x5aba904, size 0xac, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5abaa00, size 0x3b8, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [IteratorStateMachine(typeof(GliderHoldable::<ReenableOwnershipRequest>d__178))]
/// @brief Method ReenableOwnershipRequest, addr 0x5ab3cc8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ReenableOwnershipRequest() ;

/// @brief Method RemoteSyncUpdate, addr 0x5ab65bc, size 0x5fc, virtual false, abstract: false, final false
inline void RemoteSyncUpdate(float_t  dt) ;

/// @brief Method Respawn, addr 0x5ab3888, size 0x230, virtual false, abstract: false, final false
inline void Respawn() ;

/// @brief Method SignedAngleInPlane, addr 0x5aba308, size 0x138, virtual false, abstract: false, final false
inline float_t SignedAngleInPlane(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::UnityEngine::Vector3  normal) ;

/// @brief Method UpdateAudioSource, addr 0x5ab98d0, size 0xb0, virtual false, abstract: false, final false
inline void UpdateAudioSource(::UnityEngine::AudioSource*  source, float_t  level) ;

/// @brief Method UpdateGliderPosition, addr 0x5ab9668, size 0x268, virtual false, abstract: false, final false
inline void UpdateGliderPosition() ;

/// @brief Method WindResistanceForceOffset, addr 0x5ab6348, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 WindResistanceForceOffset(::UnityEngine::Vector3  upDir, ::UnityEngine::Vector3  windDir) ;

/// @brief Method WriteDataFusion, addr 0x5aba9b0, size 0x50, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5abadb8, size 0x1a8, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [CompilerGenerated]
/// @brief Method <OnGrab>b__140_0, addr 0x5abb640, size 0x8, virtual false, abstract: false, final false
inline void _OnGrab_b__140_0() ;

/// [CompilerGenerated]
/// @brief Method <OnHover>b__139_0, addr 0x5abb638, size 0x8, virtual false, abstract: false, final false
inline void _OnHover_b__139_0() ;

constexpr ::GlobalNamespace::GliderHoldable_SyncedState const& __cordl_internal_get__Data() const;

constexpr ::GlobalNamespace::GliderHoldable_SyncedState& __cordl_internal_get__Data() ;

constexpr float_t const& __cordl_internal_get_accelSmoothingFollowRate() const;

constexpr float_t& __cordl_internal_get_accelSmoothingFollowRate() ;

constexpr float_t const& __cordl_internal_get_accelSmoothingFollowRateExp() const;

constexpr float_t& __cordl_internal_get_accelSmoothingFollowRateExp() ;

constexpr ::GlobalNamespace::AverageVector3* const& __cordl_internal_get_accelerationAverage() const;

constexpr ::GlobalNamespace::AverageVector3*& __cordl_internal_get_accelerationAverage() ;

constexpr float_t const& __cordl_internal_get_accelerationSmoothed() const;

constexpr float_t& __cordl_internal_get_accelerationSmoothed() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_activeAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_activeAudio() ;

constexpr float_t const& __cordl_internal_get_attackDragFactor() const;

constexpr float_t& __cordl_internal_get_attackDragFactor() ;

constexpr float_t const& __cordl_internal_get_audioLevel() const;

constexpr float_t& __cordl_internal_get_audioLevel() ;

constexpr float_t const& __cordl_internal_get_audioVolumeMultiplier() const;

constexpr float_t& __cordl_internal_get_audioVolumeMultiplier() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_baseLeafMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_baseLeafMaterial() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_cachedRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_cachedRig() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_calmAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_calmAudio() ;

constexpr ::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride> const& __cordl_internal_get_cosmeticMaterialOverrides() const;

constexpr ::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>& __cordl_internal_get_cosmeticMaterialOverrides() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentVelocity() ;

constexpr bool const& __cordl_internal_get_debugDrawTagRange() const;

constexpr bool& __cordl_internal_get_debugDrawTagRange() ;

constexpr float_t const& __cordl_internal_get_defaultMaxDistanceBeforeRespawn() const;

constexpr float_t& __cordl_internal_get_defaultMaxDistanceBeforeRespawn() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_dragVsAttack() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_dragVsAttack() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_dragVsSpeed() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_dragVsSpeed() ;

constexpr float_t const& __cordl_internal_get_dragVsSpeedDragFactor() const;

constexpr float_t& __cordl_internal_get_dragVsSpeedDragFactor() ;

constexpr float_t const& __cordl_internal_get_dragVsSpeedMaxSpeed() const;

constexpr float_t& __cordl_internal_get_dragVsSpeedMaxSpeed() ;

constexpr bool const& __cordl_internal_get_extendTagRangeInFlight() const;

constexpr bool& __cordl_internal_get_extendTagRangeInFlight() ;

constexpr float_t const& __cordl_internal_get_fallingGravityReduction() const;

constexpr float_t& __cordl_internal_get_fallingGravityReduction() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_frozenLeafMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_frozenLeafMaterial() ;

constexpr ::GlobalNamespace::GliderHoldable_GliderState const& __cordl_internal_get_gliderState() const;

constexpr ::GlobalNamespace::GliderHoldable_GliderState& __cordl_internal_get_gliderState() ;

constexpr float_t const& __cordl_internal_get_gravityCompensation() const;

constexpr float_t& __cordl_internal_get_gravityCompensation() ;

constexpr float_t const& __cordl_internal_get_gravityUprightTorqueMultiplier() const;

constexpr float_t& __cordl_internal_get_gravityUprightTorqueMultiplier() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_handle() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_handle() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hapticAccelInputRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hapticAccelInputRange() ;

constexpr float_t const& __cordl_internal_get_hapticAccelOutputMax() const;

constexpr float_t& __cordl_internal_get_hapticAccelOutputMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hapticMaxSpeedInputRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hapticMaxSpeedInputRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hapticSpeedInputRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hapticSpeedInputRange() ;

constexpr float_t const& __cordl_internal_get_hapticSpeedOutputMax() const;

constexpr float_t& __cordl_internal_get_hapticSpeedOutputMax() ;

constexpr bool const& __cordl_internal_get_holdingTwoGliders() const;

constexpr bool& __cordl_internal_get_holdingTwoGliders() ;

constexpr float_t const& __cordl_internal_get_infectedAudioVolumeMultiplier() const;

constexpr float_t& __cordl_internal_get_infectedAudioVolumeMultiplier() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_infectedLeafMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_infectedLeafMaterial() ;

constexpr float_t const& __cordl_internal_get_infectedSpeedIncrease() const;

constexpr float_t& __cordl_internal_get_infectedSpeedIncrease() ;

constexpr bool const& __cordl_internal_get_infectedState() const;

constexpr bool& __cordl_internal_get_infectedState() ;

constexpr float_t const& __cordl_internal_get_lastHeldTime() const;

constexpr float_t& __cordl_internal_get_lastHeldTime() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_leafMesh() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_leafMesh() ;

constexpr ::GlobalNamespace::GliderHoldable_HoldingHand* const& __cordl_internal_get_leftHold() const;

constexpr ::GlobalNamespace::GliderHoldable_HoldingHand*& __cordl_internal_get_leftHold() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_leftHoldPositionLocal() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_leftHoldPositionLocal() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_leftWhooshAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_leftWhooshAudio() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftWhooshHitPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftWhooshHitPoint() ;

constexpr float_t const& __cordl_internal_get_leftWhooshStartTime() const;

constexpr float_t& __cordl_internal_get_leftWhooshStartTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_liftIncreaseVsRoll() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_liftIncreaseVsRoll() ;

constexpr float_t const& __cordl_internal_get_liftIncreaseVsRollMaxAngle() const;

constexpr float_t& __cordl_internal_get_liftIncreaseVsRollMaxAngle() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_liftVsAttack() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_liftVsAttack() ;

constexpr float_t const& __cordl_internal_get_maxDistanceBeforeRespawn() const;

constexpr float_t& __cordl_internal_get_maxDistanceBeforeRespawn() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_maxDistanceRespawnOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_maxDistanceRespawnOrigin() ;

constexpr float_t const& __cordl_internal_get_maxDroppedTimeToRespawn() const;

constexpr float_t& __cordl_internal_get_maxDroppedTimeToRespawn() ;

constexpr float_t const& __cordl_internal_get_maxSlipOverrideSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_maxSlipOverrideSpeedThreshold() ;

constexpr float_t const& __cordl_internal_get_networkSyncFollowRate() const;

constexpr float_t& __cordl_internal_get_networkSyncFollowRate() ;

constexpr float_t const& __cordl_internal_get_networkSyncFollowRateExp() const;

constexpr float_t& __cordl_internal_get_networkSyncFollowRateExp() ;

constexpr float_t const& __cordl_internal_get_oneHandHoldRotationRate() const;

constexpr float_t& __cordl_internal_get_oneHandHoldRotationRate() ;

constexpr float_t const& __cordl_internal_get_oneHandPitchMultiplier() const;

constexpr float_t& __cordl_internal_get_oneHandPitchMultiplier() ;

constexpr float_t const& __cordl_internal_get_oneHandRotationRateExp() const;

constexpr float_t& __cordl_internal_get_oneHandRotationRateExp() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_oneHandSimulatedHoldOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_oneHandSimulatedHoldOffset() ;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& __cordl_internal_get_ownershipGuard() const;

constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& __cordl_internal_get_ownershipGuard() ;

constexpr bool const& __cordl_internal_get_pendingOwnershipRequest() const;

constexpr bool& __cordl_internal_get_pendingOwnershipRequest() ;

constexpr float_t const& __cordl_internal_get_pitch() const;

constexpr float_t& __cordl_internal_get_pitch() ;

constexpr float_t const& __cordl_internal_get_pitchHalfLife() const;

constexpr float_t& __cordl_internal_get_pitchHalfLife() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pitchMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pitchMinMax() ;

constexpr float_t const& __cordl_internal_get_pitchVel() const;

constexpr float_t& __cordl_internal_get_pitchVel() ;

constexpr float_t const& __cordl_internal_get_pitchVelocityFollowRateAngle() const;

constexpr float_t& __cordl_internal_get_pitchVelocityFollowRateAngle() ;

constexpr float_t const& __cordl_internal_get_pitchVelocityFollowRateMagnitude() const;

constexpr float_t& __cordl_internal_get_pitchVelocityFollowRateMagnitude() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pitchVelocityRampTimeMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pitchVelocityRampTimeMinMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_pitchVelocityTargetMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_pitchVelocityTargetMinMax() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_playerFacingRotationOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_playerFacingRotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_positionLocalToVRRig() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_positionLocalToVRRig() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousVelocity() ;

constexpr float_t const& __cordl_internal_get_pullUpLiftActivationAcceleration() const;

constexpr float_t& __cordl_internal_get_pullUpLiftActivationAcceleration() ;

constexpr float_t const& __cordl_internal_get_pullUpLiftActivationVelocity() const;

constexpr float_t& __cordl_internal_get_pullUpLiftActivationVelocity() ;

constexpr float_t const& __cordl_internal_get_pullUpLiftBonus() const;

constexpr float_t& __cordl_internal_get_pullUpLiftBonus() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_reenableOwnershipRequestCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_reenableOwnershipRequestCoroutine() ;

constexpr int32_t const& __cordl_internal_get_riderId() const;

constexpr int32_t& __cordl_internal_get_riderId() ;

constexpr float_t const& __cordl_internal_get_riderPosDirectPitchMax() const;

constexpr float_t& __cordl_internal_get_riderPosDirectPitchMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_riderPosRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_riderPosRange() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_riderPosRangeNormalizedDeadzone() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_riderPosRangeNormalizedDeadzone() ;

constexpr float_t const& __cordl_internal_get_riderPosRangeOffset() const;

constexpr float_t& __cordl_internal_get_riderPosRangeOffset() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_riderPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_riderPosition() ;

constexpr int32_t const& __cordl_internal_get_ridersMaterialOverideIndex() const;

constexpr int32_t& __cordl_internal_get_ridersMaterialOverideIndex() ;

constexpr ::GlobalNamespace::GliderHoldable_HoldingHand* const& __cordl_internal_get_rightHold() const;

constexpr ::GlobalNamespace::GliderHoldable_HoldingHand*& __cordl_internal_get_rightHold() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_rightHoldPositionLocal() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_rightHoldPositionLocal() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_rightWhooshAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_rightWhooshAudio() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightWhooshHitPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightWhooshHitPoint() ;

constexpr float_t const& __cordl_internal_get_rightWhooshStartTime() const;

constexpr float_t& __cordl_internal_get_rightWhooshStartTime() ;

constexpr float_t const& __cordl_internal_get_roll() const;

constexpr float_t& __cordl_internal_get_roll() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_rollMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_rollMinMax() ;

constexpr float_t const& __cordl_internal_get_rollVel() const;

constexpr float_t& __cordl_internal_get_rollVel() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotationLocalToVRRig() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotationLocalToVRRig() ;

constexpr bool const& __cordl_internal_get_setMaxHandSlipDuringFlight() const;

constexpr bool& __cordl_internal_get_setMaxHandSlipDuringFlight() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_skyJungleRespawnOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_skyJungleRespawnOrigin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_skyJungleSpawnPostion() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_skyJungleSpawnPostion() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_skyJungleSpawnRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_skyJungleSpawnRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spawnPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spawnPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_spawnRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_spawnRotation() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerPitch() const;

constexpr float_t& __cordl_internal_get_subtlePlayerPitch() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_subtlePlayerPitchAccelMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_subtlePlayerPitchAccelMinMax() ;

constexpr bool const& __cordl_internal_get_subtlePlayerPitchActive() const;

constexpr bool& __cordl_internal_get_subtlePlayerPitchActive() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerPitchFactor() const;

constexpr float_t& __cordl_internal_get_subtlePlayerPitchFactor() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerPitchRate() const;

constexpr float_t& __cordl_internal_get_subtlePlayerPitchRate() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerPitchRateExp() const;

constexpr float_t& __cordl_internal_get_subtlePlayerPitchRateExp() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerRoll() const;

constexpr float_t& __cordl_internal_get_subtlePlayerRoll() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_subtlePlayerRollAccelMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_subtlePlayerRollAccelMinMax() ;

constexpr bool const& __cordl_internal_get_subtlePlayerRollActive() const;

constexpr bool& __cordl_internal_get_subtlePlayerRollActive() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerRollFactor() const;

constexpr float_t& __cordl_internal_get_subtlePlayerRollFactor() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerRollRate() const;

constexpr float_t& __cordl_internal_get_subtlePlayerRollRate() ;

constexpr float_t const& __cordl_internal_get_subtlePlayerRollRateExp() const;

constexpr float_t& __cordl_internal_get_subtlePlayerRollRateExp() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_subtlePlayerRotationSpeedRampMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_subtlePlayerRotationSpeedRampMinMax() ;

constexpr ::GlobalNamespace::GliderHoldable_SyncedState const& __cordl_internal_get_syncedState() const;

constexpr ::GlobalNamespace::GliderHoldable_SyncedState& __cordl_internal_get_syncedState() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_tagRangeOutput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_tagRangeOutput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_tagRangeSpeedInput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_tagRangeSpeedInput() ;

constexpr float_t const& __cordl_internal_get_turnAccelerationSmoothed() const;

constexpr float_t& __cordl_internal_get_turnAccelerationSmoothed() ;

constexpr bool const& __cordl_internal_get_twoHandGliderInversionOnYawInsteadOfRoll() const;

constexpr bool& __cordl_internal_get_twoHandGliderInversionOnYawInsteadOfRoll() ;

constexpr float_t const& __cordl_internal_get_twoHandHoldRotationRate() const;

constexpr float_t& __cordl_internal_get_twoHandHoldRotationRate() ;

constexpr float_t const& __cordl_internal_get_twoHandRotationOffsetAngle() const;

constexpr float_t& __cordl_internal_get_twoHandRotationOffsetAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_twoHandRotationOffsetAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_twoHandRotationOffsetAxis() ;

constexpr float_t const& __cordl_internal_get_twoHandRotationRateExp() const;

constexpr float_t& __cordl_internal_get_twoHandRotationRateExp() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_whistlingAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_whistlingAudio() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_whistlingAudioSpeedInputRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_whistlingAudioSpeedInputRange() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_whooshAudioPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_whooshAudioPositionOffset() ;

constexpr float_t const& __cordl_internal_get_whooshCheckDistance() const;

constexpr float_t& __cordl_internal_get_whooshCheckDistance() ;

constexpr float_t const& __cordl_internal_get_whooshSoundDuration() const;

constexpr float_t& __cordl_internal_get_whooshSoundDuration() ;

constexpr float_t const& __cordl_internal_get_whooshSoundRetriggerThreshold() const;

constexpr float_t& __cordl_internal_get_whooshSoundRetriggerThreshold() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_whooshSpeedThresholdInput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_whooshSpeedThresholdInput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_whooshVolumeOutput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_whooshVolumeOutput() ;

constexpr float_t const& __cordl_internal_get_windUprightTorqueMultiplier() const;

constexpr float_t& __cordl_internal_get_windUprightTorqueMultiplier() ;

constexpr int32_t const& __cordl_internal_get_windVolumeForceAppliedFrame() const;

constexpr int32_t& __cordl_internal_get_windVolumeForceAppliedFrame() ;

constexpr float_t const& __cordl_internal_get_yaw() const;

constexpr float_t& __cordl_internal_get_yaw() ;

constexpr float_t const& __cordl_internal_get_yawVel() const;

constexpr float_t& __cordl_internal_get_yawVel() ;

constexpr void __cordl_internal_set__Data(::GlobalNamespace::GliderHoldable_SyncedState  value) ;

constexpr void __cordl_internal_set_accelSmoothingFollowRate(float_t  value) ;

constexpr void __cordl_internal_set_accelSmoothingFollowRateExp(float_t  value) ;

constexpr void __cordl_internal_set_accelerationAverage(::GlobalNamespace::AverageVector3*  value) ;

constexpr void __cordl_internal_set_accelerationSmoothed(float_t  value) ;

constexpr void __cordl_internal_set_activeAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_attackDragFactor(float_t  value) ;

constexpr void __cordl_internal_set_audioLevel(float_t  value) ;

constexpr void __cordl_internal_set_audioVolumeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_baseLeafMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_cachedRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_calmAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_cosmeticMaterialOverrides(::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>  value) ;

constexpr void __cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugDrawTagRange(bool  value) ;

constexpr void __cordl_internal_set_defaultMaxDistanceBeforeRespawn(float_t  value) ;

constexpr void __cordl_internal_set_dragVsAttack(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_dragVsSpeed(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_dragVsSpeedDragFactor(float_t  value) ;

constexpr void __cordl_internal_set_dragVsSpeedMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_extendTagRangeInFlight(bool  value) ;

constexpr void __cordl_internal_set_fallingGravityReduction(float_t  value) ;

constexpr void __cordl_internal_set_frozenLeafMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_gliderState(::GlobalNamespace::GliderHoldable_GliderState  value) ;

constexpr void __cordl_internal_set_gravityCompensation(float_t  value) ;

constexpr void __cordl_internal_set_gravityUprightTorqueMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_handle(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_hapticAccelInputRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hapticAccelOutputMax(float_t  value) ;

constexpr void __cordl_internal_set_hapticMaxSpeedInputRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hapticSpeedInputRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hapticSpeedOutputMax(float_t  value) ;

constexpr void __cordl_internal_set_holdingTwoGliders(bool  value) ;

constexpr void __cordl_internal_set_infectedAudioVolumeMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_infectedLeafMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_infectedSpeedIncrease(float_t  value) ;

constexpr void __cordl_internal_set_infectedState(bool  value) ;

constexpr void __cordl_internal_set_lastHeldTime(float_t  value) ;

constexpr void __cordl_internal_set_leafMesh(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_leftHold(::GlobalNamespace::GliderHoldable_HoldingHand*  value) ;

constexpr void __cordl_internal_set_leftHoldPositionLocal(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_leftWhooshAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_leftWhooshHitPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftWhooshStartTime(float_t  value) ;

constexpr void __cordl_internal_set_liftIncreaseVsRoll(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_liftIncreaseVsRollMaxAngle(float_t  value) ;

constexpr void __cordl_internal_set_liftVsAttack(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_maxDistanceBeforeRespawn(float_t  value) ;

constexpr void __cordl_internal_set_maxDistanceRespawnOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxDroppedTimeToRespawn(float_t  value) ;

constexpr void __cordl_internal_set_maxSlipOverrideSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_networkSyncFollowRate(float_t  value) ;

constexpr void __cordl_internal_set_networkSyncFollowRateExp(float_t  value) ;

constexpr void __cordl_internal_set_oneHandHoldRotationRate(float_t  value) ;

constexpr void __cordl_internal_set_oneHandPitchMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_oneHandRotationRateExp(float_t  value) ;

constexpr void __cordl_internal_set_oneHandSimulatedHoldOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ownershipGuard(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value) ;

constexpr void __cordl_internal_set_pendingOwnershipRequest(bool  value) ;

constexpr void __cordl_internal_set_pitch(float_t  value) ;

constexpr void __cordl_internal_set_pitchHalfLife(float_t  value) ;

constexpr void __cordl_internal_set_pitchMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_pitchVel(float_t  value) ;

constexpr void __cordl_internal_set_pitchVelocityFollowRateAngle(float_t  value) ;

constexpr void __cordl_internal_set_pitchVelocityFollowRateMagnitude(float_t  value) ;

constexpr void __cordl_internal_set_pitchVelocityRampTimeMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_pitchVelocityTargetMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_playerFacingRotationOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_positionLocalToVRRig(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pullUpLiftActivationAcceleration(float_t  value) ;

constexpr void __cordl_internal_set_pullUpLiftActivationVelocity(float_t  value) ;

constexpr void __cordl_internal_set_pullUpLiftBonus(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_reenableOwnershipRequestCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_riderId(int32_t  value) ;

constexpr void __cordl_internal_set_riderPosDirectPitchMax(float_t  value) ;

constexpr void __cordl_internal_set_riderPosRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_riderPosRangeNormalizedDeadzone(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_riderPosRangeOffset(float_t  value) ;

constexpr void __cordl_internal_set_riderPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_ridersMaterialOverideIndex(int32_t  value) ;

constexpr void __cordl_internal_set_rightHold(::GlobalNamespace::GliderHoldable_HoldingHand*  value) ;

constexpr void __cordl_internal_set_rightHoldPositionLocal(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_rightWhooshAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_rightWhooshHitPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightWhooshStartTime(float_t  value) ;

constexpr void __cordl_internal_set_roll(float_t  value) ;

constexpr void __cordl_internal_set_rollMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_rollVel(float_t  value) ;

constexpr void __cordl_internal_set_rotationLocalToVRRig(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_setMaxHandSlipDuringFlight(bool  value) ;

constexpr void __cordl_internal_set_skyJungleRespawnOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_skyJungleSpawnPostion(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_skyJungleSpawnRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_spawnPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_spawnRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_subtlePlayerPitch(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerPitchAccelMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_subtlePlayerPitchActive(bool  value) ;

constexpr void __cordl_internal_set_subtlePlayerPitchFactor(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerPitchRate(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerPitchRateExp(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerRoll(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerRollAccelMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_subtlePlayerRollActive(bool  value) ;

constexpr void __cordl_internal_set_subtlePlayerRollFactor(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerRollRate(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerRollRateExp(float_t  value) ;

constexpr void __cordl_internal_set_subtlePlayerRotationSpeedRampMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_syncedState(::GlobalNamespace::GliderHoldable_SyncedState  value) ;

constexpr void __cordl_internal_set_tagRangeOutput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_tagRangeSpeedInput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_turnAccelerationSmoothed(float_t  value) ;

constexpr void __cordl_internal_set_twoHandGliderInversionOnYawInsteadOfRoll(bool  value) ;

constexpr void __cordl_internal_set_twoHandHoldRotationRate(float_t  value) ;

constexpr void __cordl_internal_set_twoHandRotationOffsetAngle(float_t  value) ;

constexpr void __cordl_internal_set_twoHandRotationOffsetAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_twoHandRotationRateExp(float_t  value) ;

constexpr void __cordl_internal_set_whistlingAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_whistlingAudioSpeedInputRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_whooshAudioPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_whooshCheckDistance(float_t  value) ;

constexpr void __cordl_internal_set_whooshSoundDuration(float_t  value) ;

constexpr void __cordl_internal_set_whooshSoundRetriggerThreshold(float_t  value) ;

constexpr void __cordl_internal_set_whooshSpeedThresholdInput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_whooshVolumeOutput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_windUprightTorqueMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_windVolumeForceAppliedFrame(int32_t  value) ;

constexpr void __cordl_internal_set_yaw(float_t  value) ;

constexpr void __cordl_internal_set_yawVel(float_t  value) ;

/// @brief Method .ctor, addr 0x5abb180, size 0x4b0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method getNewHolderRig, addr 0x5ab48ac, size 0x18c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRig> getNewHolderRig(int32_t  riderId) ;

/// @brief Method get_Data, addr 0x5aba82c, size 0x68, virtual false, abstract: false, final false
inline ::GlobalNamespace::GliderHoldable_SyncedState get_Data() ;

/// @brief Method get_OutOfBounds, addr 0x5ab328c, size 0xe8, virtual false, abstract: false, final false
inline bool get_OutOfBounds() ;

/// @brief Method get_TwoHanded, addr 0x5ab3b7c, size 0x8, virtual true, abstract: false, final false
inline bool get_TwoHanded() ;

/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept;

/// @brief Method set_Data, addr 0x5aba894, size 0x70, virtual false, abstract: false, final false
inline void set_Data(::GlobalNamespace::GliderHoldable_SyncedState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GliderHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GliderHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GliderHoldable(GliderHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GliderHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GliderHoldable(GliderHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3306};

/// @brief Field accelAveragingWindow offset 0xffffffff size 0x4
static constexpr float_t  accelAveragingWindow{static_cast<float_t>(0.1f)};

/// [Header("Flight Settings")]
/// [SerializeField]
/// @brief Field pitchMinMax, offset: 0x9c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pitchMinMax;

/// [SerializeField]
/// @brief Field rollMinMax, offset: 0xa4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___rollMinMax;

/// [SerializeField]
/// @brief Field pitchHalfLife, offset: 0xac, size: 0x4, def value: None
 float_t  ___pitchHalfLife;

/// @brief Field pitchVelocityTargetMinMax, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pitchVelocityTargetMinMax;

/// @brief Field pitchVelocityRampTimeMinMax, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___pitchVelocityRampTimeMinMax;

/// [SerializeField]
/// @brief Field pitchVelocityFollowRateAngle, offset: 0xc0, size: 0x4, def value: None
 float_t  ___pitchVelocityFollowRateAngle;

/// [SerializeField]
/// @brief Field pitchVelocityFollowRateMagnitude, offset: 0xc4, size: 0x4, def value: None
 float_t  ___pitchVelocityFollowRateMagnitude;

/// [SerializeField]
/// @brief Field liftVsAttack, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___liftVsAttack;

/// [SerializeField]
/// @brief Field dragVsAttack, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___dragVsAttack;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field attackDragFactor, offset: 0xd8, size: 0x4, def value: None
 float_t  ___attackDragFactor;

/// [SerializeField]
/// @brief Field dragVsSpeed, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___dragVsSpeed;

/// [SerializeField]
/// @brief Field dragVsSpeedMaxSpeed, offset: 0xe8, size: 0x4, def value: None
 float_t  ___dragVsSpeedMaxSpeed;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field dragVsSpeedDragFactor, offset: 0xec, size: 0x4, def value: None
 float_t  ___dragVsSpeedDragFactor;

/// [SerializeField]
/// @brief Field liftIncreaseVsRoll, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___liftIncreaseVsRoll;

/// [SerializeField]
/// @brief Field liftIncreaseVsRollMaxAngle, offset: 0xf8, size: 0x4, def value: None
 float_t  ___liftIncreaseVsRollMaxAngle;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field gravityCompensation, offset: 0xfc, size: 0x4, def value: None
 float_t  ___gravityCompensation;

/// [Range(0, 1)]
/// @brief Field pullUpLiftBonus, offset: 0x100, size: 0x4, def value: None
 float_t  ___pullUpLiftBonus;

/// @brief Field pullUpLiftActivationVelocity, offset: 0x104, size: 0x4, def value: None
 float_t  ___pullUpLiftActivationVelocity;

/// @brief Field pullUpLiftActivationAcceleration, offset: 0x108, size: 0x4, def value: None
 float_t  ___pullUpLiftActivationAcceleration;

/// [Header("Body Positioning Control")]
/// [SerializeField]
/// @brief Field riderPosDirectPitchMax, offset: 0x10c, size: 0x4, def value: None
 float_t  ___riderPosDirectPitchMax;

/// [SerializeField]
/// @brief Field riderPosRange, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___riderPosRange;

/// [SerializeField]
/// @brief Field riderPosRangeOffset, offset: 0x118, size: 0x4, def value: None
 float_t  ___riderPosRangeOffset;

/// [SerializeField]
/// @brief Field riderPosRangeNormalizedDeadzone, offset: 0x11c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___riderPosRangeNormalizedDeadzone;

/// [Header("Direct Handle Control")]
/// [SerializeField]
/// @brief Field oneHandHoldRotationRate, offset: 0x124, size: 0x4, def value: None
 float_t  ___oneHandHoldRotationRate;

/// @brief Field oneHandSimulatedHoldOffset, offset: 0x128, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___oneHandSimulatedHoldOffset;

/// @brief Field oneHandPitchMultiplier, offset: 0x134, size: 0x4, def value: None
 float_t  ___oneHandPitchMultiplier;

/// [SerializeField]
/// @brief Field twoHandHoldRotationRate, offset: 0x138, size: 0x4, def value: None
 float_t  ___twoHandHoldRotationRate;

/// [SerializeField]
/// @brief Field twoHandGliderInversionOnYawInsteadOfRoll, offset: 0x13c, size: 0x1, def value: None
 bool  ___twoHandGliderInversionOnYawInsteadOfRoll;

/// [Header("Player Settings")]
/// [SerializeField]
/// @brief Field setMaxHandSlipDuringFlight, offset: 0x13d, size: 0x1, def value: None
 bool  ___setMaxHandSlipDuringFlight;

/// [SerializeField]
/// @brief Field maxSlipOverrideSpeedThreshold, offset: 0x140, size: 0x4, def value: None
 float_t  ___maxSlipOverrideSpeedThreshold;

/// [Header("Player Camera Rotation")]
/// [SerializeField]
/// @brief Field subtlePlayerPitchFactor, offset: 0x144, size: 0x4, def value: None
 float_t  ___subtlePlayerPitchFactor;

/// [SerializeField]
/// @brief Field subtlePlayerPitchRate, offset: 0x148, size: 0x4, def value: None
 float_t  ___subtlePlayerPitchRate;

/// [SerializeField]
/// @brief Field subtlePlayerRollFactor, offset: 0x14c, size: 0x4, def value: None
 float_t  ___subtlePlayerRollFactor;

/// [SerializeField]
/// @brief Field subtlePlayerRollRate, offset: 0x150, size: 0x4, def value: None
 float_t  ___subtlePlayerRollRate;

/// [SerializeField]
/// @brief Field subtlePlayerRotationSpeedRampMinMax, offset: 0x154, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___subtlePlayerRotationSpeedRampMinMax;

/// [SerializeField]
/// @brief Field subtlePlayerRollAccelMinMax, offset: 0x15c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___subtlePlayerRollAccelMinMax;

/// [SerializeField]
/// @brief Field subtlePlayerPitchAccelMinMax, offset: 0x164, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___subtlePlayerPitchAccelMinMax;

/// [SerializeField]
/// @brief Field accelSmoothingFollowRate, offset: 0x16c, size: 0x4, def value: None
 float_t  ___accelSmoothingFollowRate;

/// [Header("Haptics")]
/// [SerializeField]
/// @brief Field hapticAccelInputRange, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hapticAccelInputRange;

/// [SerializeField]
/// @brief Field hapticAccelOutputMax, offset: 0x178, size: 0x4, def value: None
 float_t  ___hapticAccelOutputMax;

/// [SerializeField]
/// @brief Field hapticMaxSpeedInputRange, offset: 0x17c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hapticMaxSpeedInputRange;

/// [SerializeField]
/// @brief Field hapticSpeedInputRange, offset: 0x184, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hapticSpeedInputRange;

/// [SerializeField]
/// @brief Field hapticSpeedOutputMax, offset: 0x18c, size: 0x4, def value: None
 float_t  ___hapticSpeedOutputMax;

/// [SerializeField]
/// @brief Field whistlingAudioSpeedInputRange, offset: 0x190, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___whistlingAudioSpeedInputRange;

/// [Header("Audio")]
/// [SerializeField]
/// @brief Field audioVolumeMultiplier, offset: 0x198, size: 0x4, def value: None
 float_t  ___audioVolumeMultiplier;

/// [SerializeField]
/// @brief Field infectedAudioVolumeMultiplier, offset: 0x19c, size: 0x4, def value: None
 float_t  ___infectedAudioVolumeMultiplier;

/// [SerializeField]
/// @brief Field whooshSpeedThresholdInput, offset: 0x1a0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___whooshSpeedThresholdInput;

/// [SerializeField]
/// @brief Field whooshVolumeOutput, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___whooshVolumeOutput;

/// [SerializeField]
/// @brief Field whooshCheckDistance, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___whooshCheckDistance;

/// [Header("Tag Adjustment")]
/// [SerializeField]
/// @brief Field extendTagRangeInFlight, offset: 0x1b4, size: 0x1, def value: None
 bool  ___extendTagRangeInFlight;

/// [SerializeField]
/// @brief Field tagRangeSpeedInput, offset: 0x1b8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___tagRangeSpeedInput;

/// [SerializeField]
/// @brief Field tagRangeOutput, offset: 0x1c0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___tagRangeOutput;

/// [SerializeField]
/// @brief Field debugDrawTagRange, offset: 0x1c8, size: 0x1, def value: None
 bool  ___debugDrawTagRange;

/// [Header("Infected State")]
/// [SerializeField]
/// @brief Field infectedSpeedIncrease, offset: 0x1cc, size: 0x4, def value: None
 float_t  ___infectedSpeedIncrease;

/// [Header("Glider Materials")]
/// [SerializeField]
/// @brief Field leafMesh, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___leafMesh;

/// [SerializeField]
/// @brief Field baseLeafMaterial, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___baseLeafMaterial;

/// [SerializeField]
/// @brief Field infectedLeafMaterial, offset: 0x1e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___infectedLeafMaterial;

/// [SerializeField]
/// @brief Field frozenLeafMaterial, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___frozenLeafMaterial;

/// [SerializeField]
/// @brief Field cosmeticMaterialOverrides, offset: 0x1f0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GliderHoldable_CosmeticMaterialOverride>  ___cosmeticMaterialOverrides;

/// [Header("Network Syncing")]
/// [SerializeField]
/// @brief Field networkSyncFollowRate, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___networkSyncFollowRate;

/// [Header("Life Cycle")]
/// [SerializeField]
/// @brief Field maxDistanceRespawnOrigin, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___maxDistanceRespawnOrigin;

/// [SerializeField]
/// @brief Field maxDistanceBeforeRespawn, offset: 0x208, size: 0x4, def value: None
 float_t  ___maxDistanceBeforeRespawn;

/// [SerializeField]
/// @brief Field maxDroppedTimeToRespawn, offset: 0x20c, size: 0x4, def value: None
 float_t  ___maxDroppedTimeToRespawn;

/// [Header("Rigidbody")]
/// [SerializeField]
/// @brief Field windUprightTorqueMultiplier, offset: 0x210, size: 0x4, def value: None
 float_t  ___windUprightTorqueMultiplier;

/// [SerializeField]
/// @brief Field gravityUprightTorqueMultiplier, offset: 0x214, size: 0x4, def value: None
 float_t  ___gravityUprightTorqueMultiplier;

/// [SerializeField]
/// @brief Field fallingGravityReduction, offset: 0x218, size: 0x4, def value: None
 float_t  ___fallingGravityReduction;

/// [Header("References")]
/// [SerializeField]
/// @brief Field calmAudio, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___calmAudio;

/// [SerializeField]
/// @brief Field activeAudio, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___activeAudio;

/// [SerializeField]
/// @brief Field whistlingAudio, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___whistlingAudio;

/// [SerializeField]
/// @brief Field leftWhooshAudio, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___leftWhooshAudio;

/// [SerializeField]
/// @brief Field rightWhooshAudio, offset: 0x240, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___rightWhooshAudio;

/// [SerializeField]
/// @brief Field handle, offset: 0x248, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___handle;

/// [SerializeField]
/// @brief Field ownershipGuard, offset: 0x250, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  ___ownershipGuard;

/// @brief Field subtlePlayerPitchActive, offset: 0x258, size: 0x1, def value: None
 bool  ___subtlePlayerPitchActive;

/// @brief Field subtlePlayerRollActive, offset: 0x259, size: 0x1, def value: None
 bool  ___subtlePlayerRollActive;

/// @brief Field subtlePlayerPitch, offset: 0x25c, size: 0x4, def value: None
 float_t  ___subtlePlayerPitch;

/// @brief Field subtlePlayerRoll, offset: 0x260, size: 0x4, def value: None
 float_t  ___subtlePlayerRoll;

/// @brief Field subtlePlayerPitchRateExp, offset: 0x264, size: 0x4, def value: None
 float_t  ___subtlePlayerPitchRateExp;

/// @brief Field subtlePlayerRollRateExp, offset: 0x268, size: 0x4, def value: None
 float_t  ___subtlePlayerRollRateExp;

/// @brief Field defaultMaxDistanceBeforeRespawn, offset: 0x26c, size: 0x4, def value: None
 float_t  ___defaultMaxDistanceBeforeRespawn;

/// @brief Field leftHold, offset: 0x270, size: 0x8, def value: None
 ::GlobalNamespace::GliderHoldable_HoldingHand*  ___leftHold;

/// @brief Field rightHold, offset: 0x278, size: 0x8, def value: None
 ::GlobalNamespace::GliderHoldable_HoldingHand*  ___rightHold;

/// @brief Field syncedState, offset: 0x280, size: 0x2c, def value: None
 ::GlobalNamespace::GliderHoldable_SyncedState  ___syncedState;

/// @brief Field twoHandRotationOffsetAxis, offset: 0x2ac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___twoHandRotationOffsetAxis;

/// @brief Field twoHandRotationOffsetAngle, offset: 0x2b8, size: 0x4, def value: None
 float_t  ___twoHandRotationOffsetAngle;

/// @brief Field rb, offset: 0x2c0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field riderPosition, offset: 0x2c8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___riderPosition;

/// @brief Field previousVelocity, offset: 0x2d0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousVelocity;

/// @brief Field currentVelocity, offset: 0x2dc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentVelocity;

/// @brief Field pitch, offset: 0x2e8, size: 0x4, def value: None
 float_t  ___pitch;

/// @brief Field yaw, offset: 0x2ec, size: 0x4, def value: None
 float_t  ___yaw;

/// @brief Field roll, offset: 0x2f0, size: 0x4, def value: None
 float_t  ___roll;

/// @brief Field pitchVel, offset: 0x2f4, size: 0x4, def value: None
 float_t  ___pitchVel;

/// @brief Field yawVel, offset: 0x2f8, size: 0x4, def value: None
 float_t  ___yawVel;

/// @brief Field rollVel, offset: 0x2fc, size: 0x4, def value: None
 float_t  ___rollVel;

/// @brief Field oneHandRotationRateExp, offset: 0x300, size: 0x4, def value: None
 float_t  ___oneHandRotationRateExp;

/// @brief Field twoHandRotationRateExp, offset: 0x304, size: 0x4, def value: None
 float_t  ___twoHandRotationRateExp;

/// @brief Field playerFacingRotationOffset, offset: 0x308, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___playerFacingRotationOffset;

/// @brief Field accelerationAverage, offset: 0x318, size: 0x8, def value: None
 ::GlobalNamespace::AverageVector3*  ___accelerationAverage;

/// @brief Field accelerationSmoothed, offset: 0x320, size: 0x4, def value: None
 float_t  ___accelerationSmoothed;

/// @brief Field turnAccelerationSmoothed, offset: 0x324, size: 0x4, def value: None
 float_t  ___turnAccelerationSmoothed;

/// @brief Field accelSmoothingFollowRateExp, offset: 0x328, size: 0x4, def value: None
 float_t  ___accelSmoothingFollowRateExp;

/// @brief Field networkSyncFollowRateExp, offset: 0x32c, size: 0x4, def value: None
 float_t  ___networkSyncFollowRateExp;

/// @brief Field pendingOwnershipRequest, offset: 0x330, size: 0x1, def value: None
 bool  ___pendingOwnershipRequest;

/// @brief Field positionLocalToVRRig, offset: 0x334, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___positionLocalToVRRig;

/// @brief Field rotationLocalToVRRig, offset: 0x340, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotationLocalToVRRig;

/// @brief Field reenableOwnershipRequestCoroutine, offset: 0x350, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___reenableOwnershipRequestCoroutine;

/// @brief Field spawnPosition, offset: 0x358, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spawnPosition;

/// @brief Field spawnRotation, offset: 0x364, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___spawnRotation;

/// @brief Field skyJungleSpawnPostion, offset: 0x374, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___skyJungleSpawnPostion;

/// @brief Field skyJungleSpawnRotation, offset: 0x380, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___skyJungleSpawnRotation;

/// @brief Field skyJungleRespawnOrigin, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___skyJungleRespawnOrigin;

/// @brief Field lastHeldTime, offset: 0x398, size: 0x4, def value: None
 float_t  ___lastHeldTime;

/// @brief Field leftHoldPositionLocal, offset: 0x3a0, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___leftHoldPositionLocal;

/// @brief Field rightHoldPositionLocal, offset: 0x3b0, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___rightHoldPositionLocal;

/// @brief Field whooshSoundDuration, offset: 0x3c0, size: 0x4, def value: None
 float_t  ___whooshSoundDuration;

/// @brief Field whooshSoundRetriggerThreshold, offset: 0x3c4, size: 0x4, def value: None
 float_t  ___whooshSoundRetriggerThreshold;

/// @brief Field leftWhooshStartTime, offset: 0x3c8, size: 0x4, def value: None
 float_t  ___leftWhooshStartTime;

/// @brief Field leftWhooshHitPoint, offset: 0x3cc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftWhooshHitPoint;

/// @brief Field whooshAudioPositionOffset, offset: 0x3d8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___whooshAudioPositionOffset;

/// @brief Field rightWhooshStartTime, offset: 0x3e4, size: 0x4, def value: None
 float_t  ___rightWhooshStartTime;

/// @brief Field rightWhooshHitPoint, offset: 0x3e8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightWhooshHitPoint;

/// @brief Field ridersMaterialOverideIndex, offset: 0x3f4, size: 0x4, def value: None
 int32_t  ___ridersMaterialOverideIndex;

/// @brief Field windVolumeForceAppliedFrame, offset: 0x3f8, size: 0x4, def value: None
 int32_t  ___windVolumeForceAppliedFrame;

/// @brief Field holdingTwoGliders, offset: 0x3fc, size: 0x1, def value: None
 bool  ___holdingTwoGliders;

/// @brief Field gliderState, offset: 0x400, size: 0x4, def value: None
 ::GlobalNamespace::GliderHoldable_GliderState  ___gliderState;

/// @brief Field audioLevel, offset: 0x404, size: 0x4, def value: None
 float_t  ___audioLevel;

/// @brief Field riderId, offset: 0x408, size: 0x4, def value: None
 int32_t  ___riderId;

/// [SerializeField]
/// @brief Field cachedRig, offset: 0x410, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___cachedRig;

/// @brief Field infectedState, offset: 0x418, size: 0x1, def value: None
 bool  ___infectedState;

/// [WeaverGenerated]
/// [DefaultForProperty("Data", 0, 11)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0x41c, size: 0x2c, def value: None
 ::GlobalNamespace::GliderHoldable_SyncedState  ____Data;

/// @brief Size padding 0x440 - 0x448 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitchMinMax) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rollMinMax) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitchHalfLife) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitchVelocityTargetMinMax) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitchVelocityRampTimeMinMax) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitchVelocityFollowRateAngle) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitchVelocityFollowRateMagnitude) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___liftVsAttack) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___dragVsAttack) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___attackDragFactor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___dragVsSpeed) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___dragVsSpeedMaxSpeed) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___dragVsSpeedDragFactor) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___liftIncreaseVsRoll) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___liftIncreaseVsRollMaxAngle) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___gravityCompensation) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pullUpLiftBonus) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pullUpLiftActivationVelocity) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pullUpLiftActivationAcceleration) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___riderPosDirectPitchMax) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___riderPosRange) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___riderPosRangeOffset) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___riderPosRangeNormalizedDeadzone) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___oneHandHoldRotationRate) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___oneHandSimulatedHoldOffset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___oneHandPitchMultiplier) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___twoHandHoldRotationRate) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___twoHandGliderInversionOnYawInsteadOfRoll) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___setMaxHandSlipDuringFlight) == 0x13d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___maxSlipOverrideSpeedThreshold) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerPitchFactor) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerPitchRate) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerRollFactor) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerRollRate) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerRotationSpeedRampMinMax) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerRollAccelMinMax) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerPitchAccelMinMax) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___accelSmoothingFollowRate) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___hapticAccelInputRange) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___hapticAccelOutputMax) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___hapticMaxSpeedInputRange) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___hapticSpeedInputRange) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___hapticSpeedOutputMax) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whistlingAudioSpeedInputRange) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___audioVolumeMultiplier) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___infectedAudioVolumeMultiplier) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whooshSpeedThresholdInput) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whooshVolumeOutput) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whooshCheckDistance) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___extendTagRangeInFlight) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___tagRangeSpeedInput) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___tagRangeOutput) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___debugDrawTagRange) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___infectedSpeedIncrease) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___leafMesh) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___baseLeafMaterial) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___infectedLeafMaterial) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___frozenLeafMaterial) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___cosmeticMaterialOverrides) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___networkSyncFollowRate) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___maxDistanceRespawnOrigin) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___maxDistanceBeforeRespawn) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___maxDroppedTimeToRespawn) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___windUprightTorqueMultiplier) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___gravityUprightTorqueMultiplier) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___fallingGravityReduction) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___calmAudio) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___activeAudio) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whistlingAudio) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___leftWhooshAudio) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rightWhooshAudio) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___handle) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___ownershipGuard) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerPitchActive) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerRollActive) == 0x259, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerPitch) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerRoll) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerPitchRateExp) == 0x264, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___subtlePlayerRollRateExp) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___defaultMaxDistanceBeforeRespawn) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___leftHold) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rightHold) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___syncedState) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___twoHandRotationOffsetAxis) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___twoHandRotationOffsetAngle) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rb) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___riderPosition) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___previousVelocity) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___currentVelocity) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitch) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___yaw) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___roll) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pitchVel) == 0x2f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___yawVel) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rollVel) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___oneHandRotationRateExp) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___twoHandRotationRateExp) == 0x304, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___playerFacingRotationOffset) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___accelerationAverage) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___accelerationSmoothed) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___turnAccelerationSmoothed) == 0x324, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___accelSmoothingFollowRateExp) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___networkSyncFollowRateExp) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___pendingOwnershipRequest) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___positionLocalToVRRig) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rotationLocalToVRRig) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___reenableOwnershipRequestCoroutine) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___spawnPosition) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___spawnRotation) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___skyJungleSpawnPostion) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___skyJungleSpawnRotation) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___skyJungleRespawnOrigin) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___lastHeldTime) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___leftHoldPositionLocal) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rightHoldPositionLocal) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whooshSoundDuration) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whooshSoundRetriggerThreshold) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___leftWhooshStartTime) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___leftWhooshHitPoint) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___whooshAudioPositionOffset) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rightWhooshStartTime) == 0x3e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___rightWhooshHitPoint) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___ridersMaterialOverideIndex) == 0x3f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___windVolumeForceAppliedFrame) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___holdingTwoGliders) == 0x3fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___gliderState) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___audioLevel) == 0x404, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___riderId) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___cachedRig) == 0x410, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ___infectedState) == 0x418, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable, ____Data) == 0x41c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GliderHoldable) == 0x440, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GliderHoldable/<ReenableOwnershipRequest>d__178
class CORDL_TYPE GliderHoldable__ReenableOwnershipRequest_d__178 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GliderHoldable>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5abb73c, size 0xac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5abb7e8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5abb7f0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5abb828, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5abb738, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GliderHoldable> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GliderHoldable>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GliderHoldable>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5abaf60, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GliderHoldable__ReenableOwnershipRequest_d__178() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GliderHoldable__ReenableOwnershipRequest_d__178", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GliderHoldable__ReenableOwnershipRequest_d__178(GliderHoldable__ReenableOwnershipRequest_d__178 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GliderHoldable__ReenableOwnershipRequest_d__178", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GliderHoldable__ReenableOwnershipRequest_d__178(GliderHoldable__ReenableOwnershipRequest_d__178 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3305};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GliderHoldable>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GliderHoldable__ReenableOwnershipRequest_d__178) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GliderHoldable/HoldingHand
class CORDL_TYPE GliderHoldable_HoldingHand : public ::System::Object {
public:
// Declarations
/// @brief Field active, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field handleLocalPos, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_handleLocalPos, put=__cordl_internal_set_handleLocalPos)) ::UnityEngine::Vector3  handleLocalPos;

/// @brief Field holdLocalPos, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_holdLocalPos, put=__cordl_internal_set_holdLocalPos)) ::UnityEngine::Vector3  holdLocalPos;

/// @brief Field localHoldRotation, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_localHoldRotation, put=__cordl_internal_set_localHoldRotation)) ::UnityEngine::Quaternion  localHoldRotation;

/// @brief Field transform, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_transform, put=__cordl_internal_set_transform)) ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Method Activate, addr 0x5ab4d4c, size 0x190, virtual false, abstract: false, final false
inline void Activate(::UnityEngine::Transform*  handTransform, ::UnityEngine::Transform*  gliderTransform, ::UnityEngine::Vector3  worldGrabPoint) ;

/// @brief Method Deactivate, addr 0x5ab5528, size 0xb4, virtual false, abstract: false, final false
inline void Deactivate() ;

static inline ::GlobalNamespace::GliderHoldable_HoldingHand* New_ctor() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handleLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_handleLocalPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_holdLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_holdLocalPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_localHoldRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_localHoldRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_handleLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_holdLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_localHoldRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5abb630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GliderHoldable_HoldingHand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GliderHoldable_HoldingHand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GliderHoldable_HoldingHand(GliderHoldable_HoldingHand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GliderHoldable_HoldingHand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GliderHoldable_HoldingHand(GliderHoldable_HoldingHand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3302};

/// @brief Field active, offset: 0x10, size: 0x1, def value: None
 bool  ___active;

/// @brief Field transform, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transform;

/// @brief Field holdLocalPos, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___holdLocalPos;

/// @brief Field handleLocalPos, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___handleLocalPos;

/// @brief Field localHoldRotation, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___localHoldRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GliderHoldable_HoldingHand, ___active) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable_HoldingHand, ___transform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable_HoldingHand, ___holdLocalPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable_HoldingHand, ___handleLocalPos) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GliderHoldable_HoldingHand, ___localHoldRotation) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GliderHoldable_HoldingHand) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
