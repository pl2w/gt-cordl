#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_SurfaceQuery_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandHoldState_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandState_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HoverBoardCast_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MaterialData_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_MovingSurfaceContactPoint_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTPlayer)
namespace GlobalNamespace {
class BasePlatform;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class ConnectedControllerHandler;
}
namespace GlobalNamespace {
class ForceDisableHoverboardTrigger;
}
namespace GlobalNamespace {
struct GTPlayer_HandHoldState;
}
namespace GlobalNamespace {
struct GTPlayer_HandState;
}
namespace GlobalNamespace {
struct GTPlayer_HoverBoardCast;
}
namespace GlobalNamespace {
struct GTPlayer_LiquidProperties;
}
namespace GlobalNamespace {
struct GTPlayer_LiquidType;
}
namespace GlobalNamespace {
struct GTPlayer_MaterialData;
}
namespace GlobalNamespace {
struct GTPlayer_MovingSurfaceContactPoint;
}
namespace GlobalNamespace {
struct GTPlayer__DoLaunch_d__494;
}
namespace GlobalNamespace {
class GorillaGrabber;
}
namespace GlobalNamespace {
class GorillaSurfaceOverride;
}
namespace GlobalNamespace {
struct HandLinkAuthorityStatus;
}
namespace GlobalNamespace {
class HoverboardAreaTrigger;
}
namespace GlobalNamespace {
class HoverboardAudio;
}
namespace GlobalNamespace {
class HoverboardVisual;
}
namespace GlobalNamespace {
class NativeSizeChangerSettings;
}
namespace GlobalNamespace {
class PlayerAudioManager;
}
namespace GlobalNamespace {
class TakeMyHand_HandLink;
}
namespace GlobalNamespace {
struct WaterVolume_SurfaceQuery;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbableRef;
}
namespace GorillaLocomotion::Climbing {
class GorillaClimbable;
}
namespace GorillaLocomotion::Climbing {
class GorillaHandClimber;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace GorillaLocomotion::Gameplay {
class GorillaRopeSwing;
}
namespace GorillaLocomotion::Gameplay {
class GorillaZipline;
}
namespace GorillaLocomotion::Swimming {
class PlayerSwimmingParameters;
}
namespace GorillaLocomotion::Swimming {
class WaterCurrent;
}
namespace GorillaLocomotion::Swimming {
class WaterParameters;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace GorillaLocomotion {
class GTPlayer__DelayedRemoveHoverboard_d__425;
}
namespace GorillaLocomotion {
struct StiltID;
}
namespace GorillaTagScripts {
class LayerChanger;
}
namespace GorillaTag {
class MaterialDatasSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
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
class Camera;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class PhysicsMaterial;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct RigidbodyInterpolation;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion {
class GTPlayer;
}
namespace GorillaLocomotion {
class GTPlayer__DelayedRemoveHoverboard_d__425;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::GTPlayer*);
MARK_REF_T(::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::GTPlayer*, "GorillaLocomotion", "GTPlayer");
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425*, "GorillaLocomotion", "GTPlayer/<DelayedRemoveHoverboard>d__425");
// Dependencies GorillaLocomotion.GTPlayer::HandHoldState, GorillaLocomotion.GTPlayer::HandState, GorillaLocomotion.GTPlayer::HoverBoardCast, GorillaLocomotion.GTPlayer::MaterialData, GorillaLocomotion.GTPlayer::MovingSurfaceContactPoint, GorillaLocomotion.Swimming.WaterVolume::SurfaceQuery, System.Nullable`1<T>, UnityEngine.Collider, UnityEngine.ContactPoint, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.RaycastHit, UnityEngine.RigidbodyInterpolation, UnityEngine.Vector3
namespace GorillaLocomotion {
// Is value type: false
// CS Name: GorillaLocomotion.GTPlayer
class CORDL_TYPE GTPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using HandHoldState = ::GlobalNamespace::GTPlayer_HandHoldState;

using HandState = ::GlobalNamespace::GTPlayer_HandState;

using HoverBoardCast = ::GlobalNamespace::GTPlayer_HoverBoardCast;

using LiquidProperties = ::GlobalNamespace::GTPlayer_LiquidProperties;

using LiquidType = ::GlobalNamespace::GTPlayer_LiquidType;

using MaterialData = ::GlobalNamespace::GTPlayer_MaterialData;

using MovingSurfaceContactPoint = ::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint;

using _DoLaunch_d__494 = ::GlobalNamespace::GTPlayer__DoLaunch_d__494;

using _DelayedRemoveHoverboard_d__425 = ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425;

 __declspec(property(get=get_AveragedVelocity)) ::UnityEngine::Vector3  AveragedVelocity;

 __declspec(property(get=get_BodyOnGround)) bool  BodyOnGround;

 __declspec(property(get=get_CosmeticsHeadTarget)) ::UnityW<::UnityEngine::Transform>  CosmeticsHeadTarget;

 __declspec(property(get=get_CurrentClimbable)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  CurrentClimbable;

 __declspec(property(get=get_CurrentClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  CurrentClimber;

 __declspec(property(get=get_CurrentWaterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  CurrentWaterVolume;

 __declspec(property(get=get_GravityOverrideCount)) int32_t  GravityOverrideCount;

 __declspec(property(get=get_HandContactingSurface)) bool  HandContactingSurface;

 __declspec(property(get=get_HeadCenterPosition)) ::UnityEngine::Vector3  HeadCenterPosition;

 __declspec(property(get=get_HeadInWater)) bool  HeadInWater;

 __declspec(property(get=get_HeadOverlappingWaterVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  HeadOverlappingWaterVolumes;

/// @brief Field InReportMenu, offset 0x8ec, size 0x1 
 __declspec(property(get=__cordl_internal_get_InReportMenu, put=__cordl_internal_set_InReportMenu)) bool  InReportMenu;

 __declspec(property(get=get_InWater)) bool  InWater;

 __declspec(property(get=get_InstantaneousVelocity)) ::UnityEngine::Vector3  InstantaneousVelocity;

 __declspec(property(get=get_IsBodySliding, put=set_IsBodySliding)) bool  IsBodySliding;

 __declspec(property(get=get_IsDefaultScale)) bool  IsDefaultScale;

 __declspec(property(get=get_IsFrozen, put=set_IsFrozen)) bool  IsFrozen;

 __declspec(property(get=get_IsGroundedButt)) bool  IsGroundedButt;

 __declspec(property(get=get_IsGroundedHand)) bool  IsGroundedHand;

 __declspec(property(get=get_IsLaserZiplineActive)) bool  IsLaserZiplineActive;

 __declspec(property(get=get_IsTentacleActive)) bool  IsTentacleActive;

 __declspec(property(get=get_IsThrusterActive)) bool  IsThrusterActive;

 __declspec(property(get=get_LaserZiplineActiveAtFrame, put=set_LaserZiplineActiveAtFrame)) int32_t  LaserZiplineActiveAtFrame;

 __declspec(property(get=get_LastHandTouchedGroundAtNetworkTime, put=set_LastHandTouchedGroundAtNetworkTime)) float_t  LastHandTouchedGroundAtNetworkTime;

 __declspec(property(get=get_LastLeftHandPosition)) ::UnityEngine::Vector3  LastLeftHandPosition;

 __declspec(property(get=get_LastPosition)) ::UnityEngine::Vector3  LastPosition;

 __declspec(property(get=get_LastRightHandPosition)) ::UnityEngine::Vector3  LastRightHandPosition;

 __declspec(property(get=get_LastTouchedGroundAtNetworkTime, put=set_LastTouchedGroundAtNetworkTime)) float_t  LastTouchedGroundAtNetworkTime;

 __declspec(property(get=get_LeftHand)) ::GlobalNamespace::GTPlayer_HandState  LeftHand;

/// @brief [IsReadOnly]
 __declspec(property(get=get_LeftHandRef)) ::GlobalNamespace::GTPlayer_HandState  LeftHandRef;

 __declspec(property(get=get_LeftHandWaterSurface)) ::GlobalNamespace::WaterVolume_SurfaceQuery  LeftHandWaterSurface;

 __declspec(property(get=get_LeftHandWaterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  LeftHandWaterVolume;

/// @brief Field LocomotionEnabledLayers, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LocomotionEnabledLayers, put=setStaticF_LocomotionEnabledLayers)) ::UnityEngine::LayerMask  LocomotionEnabledLayers;

 __declspec(property(get=get_NativeScale)) float_t  NativeScale;

 __declspec(property(put=set_PlayerRotationOverride)) ::UnityEngine::Quaternion  PlayerRotationOverride;

/// @brief Field RecordingRig, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_RecordingRig, put=__cordl_internal_set_RecordingRig)) ::UnityW<::UnityEngine::GameObject>  RecordingRig;

 __declspec(property(get=get_RightHand)) ::GlobalNamespace::GTPlayer_HandState  RightHand;

/// @brief [IsReadOnly]
 __declspec(property(get=get_RightHandRef)) ::GlobalNamespace::GTPlayer_HandState  RightHandRef;

 __declspec(property(get=get_RightHandWaterSurface)) ::GlobalNamespace::WaterVolume_SurfaceQuery  RightHandWaterSurface;

 __declspec(property(get=get_RightHandWaterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  RightHandWaterVolume;

 __declspec(property(get=get_RigidbodyInterpolation, put=set_RigidbodyInterpolation)) ::UnityEngine::RigidbodyInterpolation  RigidbodyInterpolation;

 __declspec(property(get=get_RigidbodyVelocity)) ::UnityEngine::Vector3  RigidbodyVelocity;

 __declspec(property(get=get_ScaleMultiplier)) float_t  ScaleMultiplier;

 __declspec(property(get=get_TentacleActiveAtFrame, put=set_TentacleActiveAtFrame)) int32_t  TentacleActiveAtFrame;

 __declspec(property(get=get_ThrusterActiveAtFrame, put=set_ThrusterActiveAtFrame)) int32_t  ThrusterActiveAtFrame;

 __declspec(property(get=get_WaterSurfaceForHead)) ::GlobalNamespace::WaterVolume_SurfaceQuery  WaterSurfaceForHead;

/// @brief Field <IsBodySliding>k__BackingField, offset 0x724, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsBodySliding_k__BackingField, put=__cordl_internal_set__IsBodySliding_k__BackingField)) bool  _IsBodySliding_k__BackingField;

/// @brief Field <IsFrozen>k__BackingField, offset 0x64c, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsFrozen_k__BackingField, put=__cordl_internal_set__IsFrozen_k__BackingField)) bool  _IsFrozen_k__BackingField;

/// @brief Field <LaserZiplineActiveAtFrame>k__BackingField, offset 0x704, size 0x4 
 __declspec(property(get=__cordl_internal_get__LaserZiplineActiveAtFrame_k__BackingField, put=__cordl_internal_set__LaserZiplineActiveAtFrame_k__BackingField)) int32_t  _LaserZiplineActiveAtFrame_k__BackingField;

/// @brief Field <LastHandTouchedGroundAtNetworkTime>k__BackingField, offset 0x8fc, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField, put=__cordl_internal_set__LastHandTouchedGroundAtNetworkTime_k__BackingField)) float_t  _LastHandTouchedGroundAtNetworkTime_k__BackingField;

/// @brief Field <LastTouchedGroundAtNetworkTime>k__BackingField, offset 0x8f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField, put=__cordl_internal_set__LastTouchedGroundAtNetworkTime_k__BackingField)) float_t  _LastTouchedGroundAtNetworkTime_k__BackingField;

/// @brief Field <TentacleActiveAtFrame>k__BackingField, offset 0x700, size 0x4 
 __declspec(property(get=__cordl_internal_get__TentacleActiveAtFrame_k__BackingField, put=__cordl_internal_set__TentacleActiveAtFrame_k__BackingField)) int32_t  _TentacleActiveAtFrame_k__BackingField;

/// @brief Field <ThrusterActiveAtFrame>k__BackingField, offset 0x708, size 0x4 
 __declspec(property(get=__cordl_internal_get__ThrusterActiveAtFrame_k__BackingField, put=__cordl_internal_set__ThrusterActiveAtFrame_k__BackingField)) int32_t  _ThrusterActiveAtFrame_k__BackingField;

/// @brief Field <bodyGroundIsSlippery>k__BackingField, offset 0x768, size 0x1 
 __declspec(property(get=__cordl_internal_get__bodyGroundIsSlippery_k__BackingField, put=__cordl_internal_set__bodyGroundIsSlippery_k__BackingField)) bool  _bodyGroundIsSlippery_k__BackingField;

/// @brief Field _bodyInitialHeight, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bodyInitialHeight, put=__cordl_internal_set__bodyInitialHeight)) float_t  _bodyInitialHeight;

/// @brief Field <enableHoverMode>k__BackingField, offset 0x949, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableHoverMode_k__BackingField, put=__cordl_internal_set__enableHoverMode_k__BackingField)) bool  _enableHoverMode_k__BackingField;

/// @brief Field <forcedUnderwater>k__BackingField, offset 0x6c8, size 0x1 
 __declspec(property(get=__cordl_internal_get__forcedUnderwater_k__BackingField, put=__cordl_internal_set__forcedUnderwater_k__BackingField)) bool  _forcedUnderwater_k__BackingField;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GorillaLocomotion::GTPlayer>  _instance;

/// @brief Field <isHoverAllowed>k__BackingField, offset 0x948, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHoverAllowed_k__BackingField, put=__cordl_internal_set__isHoverAllowed_k__BackingField)) bool  _isHoverAllowed_k__BackingField;

/// @brief Field _jumpMultiplier, offset 0x344, size 0x4 
 __declspec(property(get=__cordl_internal_get__jumpMultiplier, put=__cordl_internal_set__jumpMultiplier)) float_t  _jumpMultiplier;

/// @brief Field <playerRigidBody>k__BackingField, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerRigidBody_k__BackingField, put=__cordl_internal_set__playerRigidBody_k__BackingField)) ::UnityW<::UnityEngine::Rigidbody>  _playerRigidBody_k__BackingField;

/// @brief Field <siJumpMultiplier>k__BackingField, offset 0x6cc, size 0x4 
 __declspec(property(get=__cordl_internal_get__siJumpMultiplier_k__BackingField, put=__cordl_internal_set__siJumpMultiplier_k__BackingField)) float_t  _siJumpMultiplier_k__BackingField;

/// @brief Field activeHandHold, offset 0xa00, size 0x28 
 __declspec(property(get=__cordl_internal_get_activeHandHold, put=__cordl_internal_set_activeHandHold)) ::GlobalNamespace::GTPlayer_HandHoldState  activeHandHold;

/// @brief Field activeSizeChangerSettings, offset 0x3e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeSizeChangerSettings, put=__cordl_internal_set_activeSizeChangerSettings)) ::GlobalNamespace::NativeSizeChangerSettings*  activeSizeChangerSettings;

/// @brief Field activeWaterCurrents, offset 0x6f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeWaterCurrents, put=__cordl_internal_set_activeWaterCurrents)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*  activeWaterCurrents;

/// @brief Field antiDriftLastPosition, offset 0x5f0, size 0x10 
 __declspec(property(get=__cordl_internal_get_antiDriftLastPosition, put=__cordl_internal_set_antiDriftLastPosition)) ::System::Nullable_1<::UnityEngine::Vector3>  antiDriftLastPosition;

/// @brief Field anyHandIsColliding, offset 0x300, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyHandIsColliding, put=__cordl_internal_set_anyHandIsColliding)) bool  anyHandIsColliding;

/// @brief Field anyHandIsSliding, offset 0x302, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyHandIsSliding, put=__cordl_internal_set_anyHandIsSliding)) bool  anyHandIsSliding;

/// @brief Field anyHandIsSticking, offset 0x304, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyHandIsSticking, put=__cordl_internal_set_anyHandIsSticking)) bool  anyHandIsSticking;

/// @brief Field anyHandWasColliding, offset 0x301, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyHandWasColliding, put=__cordl_internal_set_anyHandWasColliding)) bool  anyHandWasColliding;

/// @brief Field anyHandWasSliding, offset 0x303, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyHandWasSliding, put=__cordl_internal_set_anyHandWasSliding)) bool  anyHandWasSliding;

/// @brief Field anyHandWasSticking, offset 0x305, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyHandWasSticking, put=__cordl_internal_set_anyHandWasSticking)) bool  anyHandWasSticking;

/// @brief Field areBothTouching, offset 0x580, size 0x1 
 __declspec(property(get=__cordl_internal_get_areBothTouching, put=__cordl_internal_set_areBothTouching)) bool  areBothTouching;

/// @brief Field audioManager, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioManager, put=__cordl_internal_set_audioManager)) ::UnityW<::GlobalNamespace::PlayerAudioManager>  audioManager;

/// @brief Field audioSetToUnderwater, offset 0x6c2, size 0x1 
 __declspec(property(get=__cordl_internal_get_audioSetToUnderwater, put=__cordl_internal_set_audioSetToUnderwater)) bool  audioSetToUnderwater;

/// @brief Field averageSlipPercentage, offset 0x564, size 0x4 
 __declspec(property(get=__cordl_internal_get_averageSlipPercentage, put=__cordl_internal_set_averageSlipPercentage)) float_t  averageSlipPercentage;

/// @brief Field averagedVelocity, offset 0x388, size 0xc 
 __declspec(property(get=__cordl_internal_get_averagedVelocity, put=__cordl_internal_set_averagedVelocity)) ::UnityEngine::Vector3  averagedVelocity;

/// @brief Field bodyCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  bodyCollider;

/// @brief Field bodyCollisionContacts, offset 0x728, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollisionContacts, put=__cordl_internal_set_bodyCollisionContacts)) ::ArrayW<::UnityEngine::ContactPoint>  bodyCollisionContacts;

/// @brief Field bodyCollisionContactsCount, offset 0x730, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyCollisionContactsCount, put=__cordl_internal_set_bodyCollisionContactsCount)) int32_t  bodyCollisionContactsCount;

/// @brief Field bodyGroundContact, offset 0x734, size 0x30 
 __declspec(property(get=__cordl_internal_get_bodyGroundContact, put=__cordl_internal_set_bodyGroundContact)) ::UnityEngine::ContactPoint  bodyGroundContact;

/// @brief Field bodyGroundContactTime, offset 0x764, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyGroundContactTime, put=__cordl_internal_set_bodyGroundContactTime)) float_t  bodyGroundContactTime;

 __declspec(property(get=get_bodyGroundIsSlippery, put=set_bodyGroundIsSlippery)) bool  bodyGroundIsSlippery;

/// @brief Field bodyHitInfo, offset 0x50, size 0x2c 
 __declspec(property(get=__cordl_internal_get_bodyHitInfo, put=__cordl_internal_set_bodyHitInfo)) ::UnityEngine::RaycastHit  bodyHitInfo;

/// @brief Field bodyInWater, offset 0x6c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_bodyInWater, put=__cordl_internal_set_bodyInWater)) bool  bodyInWater;

 __declspec(property(get=get_bodyInitialHeight)) float_t  bodyInitialHeight;

/// @brief Field bodyInitialRadius, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyInitialRadius, put=__cordl_internal_set_bodyInitialRadius)) float_t  bodyInitialRadius;

/// @brief Field bodyLerp, offset 0x57c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyLerp, put=__cordl_internal_set_bodyLerp)) float_t  bodyLerp;

/// @brief Field bodyMaxRadius, offset 0x578, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyMaxRadius, put=__cordl_internal_set_bodyMaxRadius)) float_t  bodyMaxRadius;

/// @brief Field bodyOffset, offset 0x3a0, size 0xc 
 __declspec(property(get=__cordl_internal_get_bodyOffset, put=__cordl_internal_set_bodyOffset)) ::UnityEngine::Vector3  bodyOffset;

/// @brief Field bodyOffsetVector, offset 0x414, size 0xc 
 __declspec(property(get=__cordl_internal_get_bodyOffsetVector, put=__cordl_internal_set_bodyOffsetVector)) ::UnityEngine::Vector3  bodyOffsetVector;

/// @brief Field bodyOverlappingWaterVolumes, offset 0x6f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyOverlappingWaterVolumes, put=__cordl_internal_set_bodyOverlappingWaterVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  bodyOverlappingWaterVolumes;

/// @brief Field bodyTouchedSurfaces, offset 0x600, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyTouchedSurfaces, put=__cordl_internal_set_bodyTouchedSurfaces)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>*  bodyTouchedSurfaces;

/// @brief Field bodyVelocityTracker, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyVelocityTracker, put=__cordl_internal_set_bodyVelocityTracker)) ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  bodyVelocityTracker;

/// @brief Field boostEnabledUntilTimestamp, offset 0x9bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_boostEnabledUntilTimestamp, put=__cordl_internal_set_boostEnabledUntilTimestamp)) float_t  boostEnabledUntilTimestamp;

/// @brief Field bufferCount, offset 0x5d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_bufferCount, put=__cordl_internal_set_bufferCount)) int32_t  bufferCount;

/// @brief Field buoyancyExtension, offset 0x6c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_buoyancyExtension, put=__cordl_internal_set_buoyancyExtension)) float_t  buoyancyExtension;

/// @brief Field calcDeltaTime, offset 0x49c, size 0x4 
 __declspec(property(get=__cordl_internal_get_calcDeltaTime, put=__cordl_internal_set_calcDeltaTime)) float_t  calcDeltaTime;

/// @brief Field climbHelper, offset 0x8c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_climbHelper, put=__cordl_internal_set_climbHelper)) ::UnityW<::UnityEngine::Transform>  climbHelper;

/// @brief Field climbHelperTargetPos, offset 0x8b8, size 0xc 
 __declspec(property(get=__cordl_internal_get_climbHelperTargetPos, put=__cordl_internal_set_climbHelperTargetPos)) ::UnityEngine::Vector3  climbHelperTargetPos;

/// @brief Field collidedMesh, offset 0x438, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidedMesh, put=__cordl_internal_set_collidedMesh)) ::UnityW<::UnityEngine::Mesh>  collidedMesh;

/// @brief Field controllerState, offset 0x8e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerState, put=__cordl_internal_set_controllerState)) ::UnityW<::GlobalNamespace::ConnectedControllerHandler>  controllerState;

/// @brief Field cosmeticsHeadTarget, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticsHeadTarget, put=__cordl_internal_set_cosmeticsHeadTarget)) ::UnityW<::UnityEngine::Transform>  cosmeticsHeadTarget;

/// @brief Field crazyCheckVectors, offset 0x5a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_crazyCheckVectors, put=__cordl_internal_set_crazyCheckVectors)) ::ArrayW<::UnityEngine::Vector3>  crazyCheckVectors;

/// @brief Field currentBodyHeight, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentBodyHeight, put=__cordl_internal_set_currentBodyHeight)) float_t  currentBodyHeight;

/// @brief Field currentClimbable, offset 0x8a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentClimbable, put=__cordl_internal_set_currentClimbable)) ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  currentClimbable;

/// @brief Field currentClimber, offset 0x8b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentClimber, put=__cordl_internal_set_currentClimber)) ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  currentClimber;

/// @brief Field currentMaterialIndex, offset 0x3bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentMaterialIndex, put=__cordl_internal_set_currentMaterialIndex)) int32_t  currentMaterialIndex;

/// @brief Field currentOverride, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentOverride, put=__cordl_internal_set_currentOverride)) ::UnityW<::GlobalNamespace::GorillaSurfaceOverride>  currentOverride;

/// @brief Field currentPlatform, offset 0x830, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentPlatform, put=__cordl_internal_set_currentPlatform)) ::UnityW<::GlobalNamespace::BasePlatform>  currentPlatform;

/// @brief Field currentSlopDirection, offset 0x928, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentSlopDirection, put=__cordl_internal_set_currentSlopDirection)) ::UnityEngine::Vector3  currentSlopDirection;

/// @brief Field currentSwing, offset 0x8d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentSwing, put=__cordl_internal_set_currentSwing)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  currentSwing;

/// @brief Field currentVelocity, offset 0x37c, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentVelocity, put=__cordl_internal_set_currentVelocity)) ::UnityEngine::Vector3  currentVelocity;

/// @brief Field currentZipline, offset 0x8d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentZipline, put=__cordl_internal_set_currentZipline)) ::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline>  currentZipline;

/// @brief Field debugDrawSwimming, offset 0x628, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawSwimming, put=__cordl_internal_set_debugDrawSwimming)) bool  debugDrawSwimming;

/// @brief Field debugFreezeTag, offset 0x644, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugFreezeTag, put=__cordl_internal_set_debugFreezeTag)) bool  debugFreezeTag;

/// @brief Field debugLastRightHandPosition, offset 0x874, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugLastRightHandPosition, put=__cordl_internal_set_debugLastRightHandPosition)) ::UnityEngine::Vector3  debugLastRightHandPosition;

/// @brief Field debugMovement, offset 0x3e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugMovement, put=__cordl_internal_set_debugMovement)) bool  debugMovement;

/// @brief Field debugPlatformDeltaPosition, offset 0x880, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugPlatformDeltaPosition, put=__cordl_internal_set_debugPlatformDeltaPosition)) ::UnityEngine::Vector3  debugPlatformDeltaPosition;

/// @brief Field defaultPrecision, offset 0x354, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultPrecision, put=__cordl_internal_set_defaultPrecision)) float_t  defaultPrecision;

/// @brief Field defaultSlideFactor, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultSlideFactor, put=__cordl_internal_set_defaultSlideFactor)) float_t  defaultSlideFactor;

/// @brief Field degreesTurnedThisFrame, offset 0x410, size 0x4 
 __declspec(property(get=__cordl_internal_get_degreesTurnedThisFrame, put=__cordl_internal_set_degreesTurnedThisFrame)) float_t  degreesTurnedThisFrame;

/// @brief Field didAJump, offset 0x588, size 0x1 
 __declspec(property(get=__cordl_internal_get_didAJump, put=__cordl_internal_set_didAJump)) bool  didAJump;

/// @brief Field didHoverLastFrame, offset 0x9e4, size 0x1 
 __declspec(property(get=__cordl_internal_get_didHoverLastFrame, put=__cordl_internal_set_didHoverLastFrame)) bool  didHoverLastFrame;

/// @brief Field disableMovement, offset 0x3e9, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableMovement, put=__cordl_internal_set_disableMovement)) bool  disableMovement;

/// @brief Field emptyHit, offset 0x5a8, size 0x2c 
 __declspec(property(get=__cordl_internal_get_emptyHit, put=__cordl_internal_set_emptyHit)) ::UnityEngine::RaycastHit  emptyHit;

 __declspec(property(get=get_enableHoverMode, put=set_enableHoverMode)) bool  enableHoverMode;

/// @brief Field exitMovingSurface, offset 0x769, size 0x1 
 __declspec(property(get=__cordl_internal_get_exitMovingSurface, put=__cordl_internal_set_exitMovingSurface)) bool  exitMovingSurface;

/// @brief Field exitMovingSurfaceThreshold, offset 0x76c, size 0x4 
 __declspec(property(get=__cordl_internal_get_exitMovingSurfaceThreshold, put=__cordl_internal_set_exitMovingSurfaceThreshold)) float_t  exitMovingSurfaceThreshold;

/// @brief Field findMatName, offset 0x468, size 0x8 
 __declspec(property(get=__cordl_internal_get_findMatName, put=__cordl_internal_set_findMatName)) ::StringW  findMatName;

/// @brief Field firstPosition, offset 0x514, size 0xc 
 __declspec(property(get=__cordl_internal_get_firstPosition, put=__cordl_internal_set_firstPosition)) ::UnityEngine::Vector3  firstPosition;

/// @brief Field forceRBSync, offset 0x306, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceRBSync, put=__cordl_internal_set_forceRBSync)) bool  forceRBSync;

 __declspec(property(get=get_forcedUnderwater, put=set_forcedUnderwater)) bool  forcedUnderwater;

/// @brief Field foundMatData, offset 0x440, size 0x28 
 __declspec(property(get=__cordl_internal_get_foundMatData, put=__cordl_internal_set_foundMatData)) ::GlobalNamespace::GTPlayer_MaterialData  foundMatData;

/// @brief Field frameCount, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_frameCount, put=__cordl_internal_set_frameCount)) double_t  frameCount;

/// @brief Field freezeTagHandSlidePercent, offset 0x640, size 0x4 
 __declspec(property(get=__cordl_internal_get_freezeTagHandSlidePercent, put=__cordl_internal_set_freezeTagHandSlidePercent)) float_t  freezeTagHandSlidePercent;

/// @brief Field frictionConstant, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frictionConstant, put=__cordl_internal_set_frictionConstant)) float_t  frictionConstant;

/// @brief Field frozenBodyBuoyancyFactor, offset 0x648, size 0x4 
 __declspec(property(get=__cordl_internal_get_frozenBodyBuoyancyFactor, put=__cordl_internal_set_frozenBodyBuoyancyFactor)) float_t  frozenBodyBuoyancyFactor;

/// @brief Field geodeHitEffects, offset 0x638, size 0x8 
 __declspec(property(get=__cordl_internal_get_geodeHitEffects, put=__cordl_internal_set_geodeHitEffects)) ::UnityW<::UnityEngine::GameObject>  geodeHitEffects;

/// @brief Field gravityOverrides, offset 0x940, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityOverrides, put=__cordl_internal_set_gravityOverrides)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>*  gravityOverrides;

/// @brief Field halloweenLevitateBonusFullAtYSpeed, offset 0x918, size 0x4 
 __declspec(property(get=__cordl_internal_get_halloweenLevitateBonusFullAtYSpeed, put=__cordl_internal_set_halloweenLevitateBonusFullAtYSpeed)) float_t  halloweenLevitateBonusFullAtYSpeed;

/// @brief Field halloweenLevitateBonusOffAtYSpeed, offset 0x914, size 0x4 
 __declspec(property(get=__cordl_internal_get_halloweenLevitateBonusOffAtYSpeed, put=__cordl_internal_set_halloweenLevitateBonusOffAtYSpeed)) float_t  halloweenLevitateBonusOffAtYSpeed;

/// @brief Field halloweenLevitationBonusStrength, offset 0x910, size 0x4 
 __declspec(property(get=__cordl_internal_get_halloweenLevitationBonusStrength, put=__cordl_internal_set_halloweenLevitationBonusStrength)) float_t  halloweenLevitationBonusStrength;

/// @brief Field halloweenLevitationFullStrengthDuration, offset 0x908, size 0x4 
 __declspec(property(get=__cordl_internal_get_halloweenLevitationFullStrengthDuration, put=__cordl_internal_set_halloweenLevitationFullStrengthDuration)) float_t  halloweenLevitationFullStrengthDuration;

/// @brief Field halloweenLevitationStrength, offset 0x904, size 0x4 
 __declspec(property(get=__cordl_internal_get_halloweenLevitationStrength, put=__cordl_internal_set_halloweenLevitationStrength)) float_t  halloweenLevitationStrength;

/// @brief Field halloweenLevitationTotalDuration, offset 0x90c, size 0x4 
 __declspec(property(get=__cordl_internal_get_halloweenLevitationTotalDuration, put=__cordl_internal_set_halloweenLevitationTotalDuration)) float_t  halloweenLevitationTotalDuration;

/// @brief Field hasCorrectedForTracking, offset 0x900, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCorrectedForTracking, put=__cordl_internal_set_hasCorrectedForTracking)) bool  hasCorrectedForTracking;

/// @brief Field hasHoverPoint, offset 0x9b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasHoverPoint, put=__cordl_internal_set_hasHoverPoint)) bool  hasHoverPoint;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field hasLeftHandTentacleMove, offset 0x9e5, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLeftHandTentacleMove, put=__cordl_internal_set_hasLeftHandTentacleMove)) bool  hasLeftHandTentacleMove;

/// @brief Field hasRightHandTentacleMove, offset 0x9e6, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRightHandTentacleMove, put=__cordl_internal_set_hasRightHandTentacleMove)) bool  hasRightHandTentacleMove;

/// @brief Field headCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_headCollider, put=__cordl_internal_set_headCollider)) ::UnityW<::UnityEngine::SphereCollider>  headCollider;

/// @brief Field headInWater, offset 0x6c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_headInWater, put=__cordl_internal_set_headInWater)) bool  headInWater;

/// @brief Field headOverlappingWaterVolumes, offset 0x6e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_headOverlappingWaterVolumes, put=__cordl_internal_set_headOverlappingWaterVolumes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  headOverlappingWaterVolumes;

/// @brief Field headSlideNormal, offset 0x3c0, size 0xc 
 __declspec(property(get=__cordl_internal_get_headSlideNormal, put=__cordl_internal_set_headSlideNormal)) ::UnityEngine::Vector3  headSlideNormal;

/// @brief Field headSlipPercentage, offset 0x3cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_headSlipPercentage, put=__cordl_internal_set_headSlipPercentage)) float_t  headSlipPercentage;

/// @brief Field hoverBodyCollisionRadiusUpOffset, offset 0x994, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverBodyCollisionRadiusUpOffset, put=__cordl_internal_set_hoverBodyCollisionRadiusUpOffset)) float_t  hoverBodyCollisionRadiusUpOffset;

/// @brief Field hoverBodyHasCollisionsOutsideRadius, offset 0x990, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverBodyHasCollisionsOutsideRadius, put=__cordl_internal_set_hoverBodyHasCollisionsOutsideRadius)) float_t  hoverBodyHasCollisionsOutsideRadius;

/// @brief Field hoverCarveAngleResponsiveness, offset 0x968, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverCarveAngleResponsiveness, put=__cordl_internal_set_hoverCarveAngleResponsiveness)) ::UnityEngine::AnimationCurve*  hoverCarveAngleResponsiveness;

/// @brief Field hoverCarveSidewaysSpeedLossFactor, offset 0x964, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverCarveSidewaysSpeedLossFactor, put=__cordl_internal_set_hoverCarveSidewaysSpeedLossFactor)) float_t  hoverCarveSidewaysSpeedLossFactor;

/// @brief Field hoverGeneralUpwardForce, offset 0x998, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverGeneralUpwardForce, put=__cordl_internal_set_hoverGeneralUpwardForce)) float_t  hoverGeneralUpwardForce;

/// @brief Field hoverIdealHeight, offset 0x960, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverIdealHeight, put=__cordl_internal_set_hoverIdealHeight)) float_t  hoverIdealHeight;

/// @brief Field hoverMaxPaddleSpeed, offset 0x9a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverMaxPaddleSpeed, put=__cordl_internal_set_hoverMaxPaddleSpeed)) float_t  hoverMaxPaddleSpeed;

/// @brief Field hoverMinGrindSpeed, offset 0x9a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverMinGrindSpeed, put=__cordl_internal_set_hoverMinGrindSpeed)) float_t  hoverMinGrindSpeed;

/// @brief Field hoverSlamJumpStrengthFactor, offset 0x9a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverSlamJumpStrengthFactor, put=__cordl_internal_set_hoverSlamJumpStrengthFactor)) float_t  hoverSlamJumpStrengthFactor;

/// @brief Field hoverTiltAdjustsForwardFactor, offset 0x99c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverTiltAdjustsForwardFactor, put=__cordl_internal_set_hoverTiltAdjustsForwardFactor)) float_t  hoverTiltAdjustsForwardFactor;

/// @brief Field hoverboardAudio, offset 0x9b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverboardAudio, put=__cordl_internal_set_hoverboardAudio)) ::UnityW<::GlobalNamespace::HoverboardAudio>  hoverboardAudio;

/// @brief Field hoverboardBoostGracePeriod, offset 0x98c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverboardBoostGracePeriod, put=__cordl_internal_set_hoverboardBoostGracePeriod)) float_t  hoverboardBoostGracePeriod;

/// @brief Field hoverboardCasts, offset 0x9c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverboardCasts, put=__cordl_internal_set_hoverboardCasts)) ::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast>  hoverboardCasts;

/// @brief Field hoverboardLocomotionLayers, offset 0x3b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverboardLocomotionLayers, put=__cordl_internal_set_hoverboardLocomotionLayers)) ::UnityEngine::LayerMask  hoverboardLocomotionLayers;

/// @brief Field hoverboardPaddleBoostMax, offset 0x988, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverboardPaddleBoostMax, put=__cordl_internal_set_hoverboardPaddleBoostMax)) float_t  hoverboardPaddleBoostMax;

/// @brief Field hoverboardPaddleBoostMultiplier, offset 0x984, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverboardPaddleBoostMultiplier, put=__cordl_internal_set_hoverboardPaddleBoostMultiplier)) float_t  hoverboardPaddleBoostMultiplier;

/// @brief Field hoverboardPlayerLocalPos, offset 0x9c8, size 0xc 
 __declspec(property(get=__cordl_internal_get_hoverboardPlayerLocalPos, put=__cordl_internal_set_hoverboardPlayerLocalPos)) ::UnityEngine::Vector3  hoverboardPlayerLocalPos;

/// @brief Field hoverboardPlayerLocalRot, offset 0x9d4, size 0x10 
 __declspec(property(get=__cordl_internal_get_hoverboardPlayerLocalRot, put=__cordl_internal_set_hoverboardPlayerLocalRot)) ::UnityEngine::Quaternion  hoverboardPlayerLocalRot;

/// @brief Field hoverboardVisual, offset 0x970, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverboardVisual, put=__cordl_internal_set_hoverboardVisual)) ::UnityW<::GlobalNamespace::HoverboardVisual>  hoverboardVisual;

/// @brief Field hoveringSlowSpeed, offset 0x97c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoveringSlowSpeed, put=__cordl_internal_set_hoveringSlowSpeed)) float_t  hoveringSlowSpeed;

/// @brief Field hoveringSlowStoppingFactor, offset 0x980, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoveringSlowStoppingFactor, put=__cordl_internal_set_hoveringSlowStoppingFactor)) float_t  hoveringSlowStoppingFactor;

/// @brief Field iceThreshold, offset 0x574, size 0x4 
 __declspec(property(get=__cordl_internal_get_iceThreshold, put=__cordl_internal_set_iceThreshold)) float_t  iceThreshold;

/// @brief Field inHoverAreas, offset 0x950, size 0x8 
 __declspec(property(get=__cordl_internal_get_inHoverAreas, put=__cordl_internal_set_inHoverAreas)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>*  inHoverAreas;

/// @brief Field inHoverDisablers, offset 0x958, size 0x8 
 __declspec(property(get=__cordl_internal_get_inHoverDisablers, put=__cordl_internal_set_inHoverDisablers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>*  inHoverDisablers;

/// @brief Field inOverlay, offset 0x3ea, size 0x1 
 __declspec(property(get=__cordl_internal_get_inOverlay, put=__cordl_internal_set_inOverlay)) bool  inOverlay;

/// @brief Field isAttachedToTrain, offset 0x921, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAttachedToTrain, put=__cordl_internal_set_isAttachedToTrain)) bool  isAttachedToTrain;

/// @brief Field isClimbableMoving, offset 0x770, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClimbableMoving, put=__cordl_internal_set_isClimbableMoving)) bool  isClimbableMoving;

/// @brief Field isClimbing, offset 0x8a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isClimbing, put=__cordl_internal_set_isClimbing)) bool  isClimbing;

/// @brief Field isHandHoldMoving, offset 0x788, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHandHoldMoving, put=__cordl_internal_set_isHandHoldMoving)) bool  isHandHoldMoving;

 __declspec(property(get=get_isHoverAllowed, put=set_isHoverAllowed)) bool  isHoverAllowed;

/// @brief Field isUserPresent, offset 0x3eb, size 0x1 
 __declspec(property(get=__cordl_internal_get_isUserPresent, put=__cordl_internal_set_isUserPresent)) bool  isUserPresent;

 __declspec(property(get=get_jumpMultiplier, put=set_jumpMultiplier)) float_t  jumpMultiplier;

/// @brief Field junkHit, offset 0x4e8, size 0x2c 
 __declspec(property(get=__cordl_internal_get_junkHit, put=__cordl_internal_set_junkHit)) ::UnityEngine::RaycastHit  junkHit;

/// @brief Field lastAttachedToMovingSurfaceFrame, offset 0x784, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAttachedToMovingSurfaceFrame, put=__cordl_internal_set_lastAttachedToMovingSurfaceFrame)) int32_t  lastAttachedToMovingSurfaceFrame;

/// @brief Field lastClimbableRotation, offset 0x774, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastClimbableRotation, put=__cordl_internal_set_lastClimbableRotation)) ::UnityEngine::Quaternion  lastClimbableRotation;

/// @brief Field lastFrameHasValidTouchPos, offset 0x858, size 0x1 
 __declspec(property(get=__cordl_internal_get_lastFrameHasValidTouchPos, put=__cordl_internal_set_lastFrameHasValidTouchPos)) bool  lastFrameHasValidTouchPos;

/// @brief Field lastFrameTouchPosLocal, offset 0x840, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastFrameTouchPosLocal, put=__cordl_internal_set_lastFrameTouchPosLocal)) ::UnityEngine::Vector3  lastFrameTouchPosLocal;

/// @brief Field lastFrameTouchPosWorld, offset 0x84c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastFrameTouchPosWorld, put=__cordl_internal_set_lastFrameTouchPosWorld)) ::UnityEngine::Vector3  lastFrameTouchPosWorld;

/// @brief Field lastHandHoldRotation, offset 0x78c, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastHandHoldRotation, put=__cordl_internal_set_lastHandHoldRotation)) ::UnityEngine::Quaternion  lastHandHoldRotation;

/// @brief Field lastHeadPosition, offset 0x308, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastHeadPosition, put=__cordl_internal_set_lastHeadPosition)) ::UnityEngine::Vector3  lastHeadPosition;

/// @brief Field lastHitInfoHand, offset 0x7c, size 0x2c 
 __declspec(property(get=__cordl_internal_get_lastHitInfoHand, put=__cordl_internal_set_lastHitInfoHand)) ::UnityEngine::RaycastHit  lastHitInfoHand;

/// @brief Field lastMonkeBlock, offset 0x7b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastMonkeBlock, put=__cordl_internal_set_lastMonkeBlock)) ::UnityW<::GlobalNamespace::BuilderPiece>  lastMonkeBlock;

/// @brief Field lastMovingSurfaceContact, offset 0x7a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastMovingSurfaceContact, put=__cordl_internal_set_lastMovingSurfaceContact)) ::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint  lastMovingSurfaceContact;

/// @brief Field lastMovingSurfaceHit, offset 0x7c8, size 0x2c 
 __declspec(property(get=__cordl_internal_get_lastMovingSurfaceHit, put=__cordl_internal_set_lastMovingSurfaceHit)) ::UnityEngine::RaycastHit  lastMovingSurfaceHit;

/// @brief Field lastMovingSurfaceID, offset 0x7ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastMovingSurfaceID, put=__cordl_internal_set_lastMovingSurfaceID)) int32_t  lastMovingSurfaceID;

/// @brief Field lastMovingSurfaceRot, offset 0x7b8, size 0x10 
 __declspec(property(get=__cordl_internal_get_lastMovingSurfaceRot, put=__cordl_internal_set_lastMovingSurfaceRot)) ::UnityEngine::Quaternion  lastMovingSurfaceRot;

/// @brief Field lastMovingSurfaceTouchLocal, offset 0x7f4, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastMovingSurfaceTouchLocal, put=__cordl_internal_set_lastMovingSurfaceTouchLocal)) ::UnityEngine::Vector3  lastMovingSurfaceTouchLocal;

/// @brief Field lastMovingSurfaceTouchWorld, offset 0x800, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastMovingSurfaceTouchWorld, put=__cordl_internal_set_lastMovingSurfaceTouchWorld)) ::UnityEngine::Vector3  lastMovingSurfaceTouchWorld;

/// @brief Field lastMovingSurfaceVelocity, offset 0x81c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastMovingSurfaceVelocity, put=__cordl_internal_set_lastMovingSurfaceVelocity)) ::UnityEngine::Vector3  lastMovingSurfaceVelocity;

/// @brief Field lastOpenHeadPosition, offset 0x5d8, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastOpenHeadPosition, put=__cordl_internal_set_lastOpenHeadPosition)) ::UnityEngine::Vector3  lastOpenHeadPosition;

/// @brief Field lastPlatformTouched, offset 0x838, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastPlatformTouched, put=__cordl_internal_set_lastPlatformTouched)) ::UnityW<::GlobalNamespace::BasePlatform>  lastPlatformTouched;

/// @brief Field lastPosition, offset 0x394, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastPreHandholdVelocity, offset 0xa68, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPreHandholdVelocity, put=__cordl_internal_set_lastPreHandholdVelocity)) ::UnityEngine::Vector3  lastPreHandholdVelocity;

/// @brief Field lastRealTime, offset 0x498, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRealTime, put=__cordl_internal_set_lastRealTime)) float_t  lastRealTime;

/// @brief Field lastRigidbodyPosition, offset 0x314, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRigidbodyPosition, put=__cordl_internal_set_lastRigidbodyPosition)) ::UnityEngine::Vector3  lastRigidbodyPosition;

/// @brief Field lastScale, offset 0x924, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastScale, put=__cordl_internal_set_lastScale)) float_t  lastScale;

/// @brief Field lastSlopeDirection, offset 0x934, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastSlopeDirection, put=__cordl_internal_set_lastSlopeDirection)) ::UnityEngine::Vector3  lastSlopeDirection;

/// @brief Field lastTouchedGroundTimestamp, offset 0x91c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTouchedGroundTimestamp, put=__cordl_internal_set_lastTouchedGroundTimestamp)) float_t  lastTouchedGroundTimestamp;

/// @brief Field lastWaterSurfaceJumpTimeLeft, offset 0x6d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastWaterSurfaceJumpTimeLeft, put=__cordl_internal_set_lastWaterSurfaceJumpTimeLeft)) float_t  lastWaterSurfaceJumpTimeLeft;

/// @brief Field lastWaterSurfaceJumpTimeRight, offset 0x6d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastWaterSurfaceJumpTimeRight, put=__cordl_internal_set_lastWaterSurfaceJumpTimeRight)) float_t  lastWaterSurfaceJumpTimeRight;

/// @brief Field layerChanger, offset 0x8f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerChanger, put=__cordl_internal_set_layerChanger)) ::UnityW<::GorillaTagScripts::LayerChanger>  layerChanger;

/// @brief Field leftHand, offset 0xb8, size 0x120 
 __declspec(property(get=__cordl_internal_get_leftHand, put=__cordl_internal_set_leftHand)) ::GlobalNamespace::GTPlayer_HandState  leftHand;

/// @brief Field leftHandNonDiveHapticsAmount, offset 0x6dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftHandNonDiveHapticsAmount, put=__cordl_internal_set_leftHandNonDiveHapticsAmount)) float_t  leftHandNonDiveHapticsAmount;

/// @brief Field leftHandTentacleMove, offset 0x9e8, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandTentacleMove, put=__cordl_internal_set_leftHandTentacleMove)) ::UnityEngine::Vector3  leftHandTentacleMove;

/// @brief Field leftHandWaterSurface, offset 0x660, size 0x1c 
 __declspec(property(get=__cordl_internal_get_leftHandWaterSurface, put=__cordl_internal_set_leftHandWaterSurface)) ::GlobalNamespace::WaterVolume_SurfaceQuery  leftHandWaterSurface;

/// @brief Field leftHandWaterVolume, offset 0x650, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandWaterVolume, put=__cordl_internal_set_leftHandWaterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  leftHandWaterVolume;

/// @brief Field liquidPropertiesList, offset 0x620, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidPropertiesList, put=__cordl_internal_set_liquidPropertiesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>*  liquidPropertiesList;

/// @brief Field locomotionEnabledLayers, offset 0x3ac, size 0x4 
 __declspec(property(get=__cordl_internal_get_locomotionEnabledLayers, put=__cordl_internal_set_locomotionEnabledLayers)) ::UnityEngine::LayerMask  locomotionEnabledLayers;

/// @brief Field mainCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::Camera>  mainCamera;

 __declspec(property(get=get_materialData)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>*  materialData;

/// @brief Field materialDatasSO, offset 0x408, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialDatasSO, put=__cordl_internal_set_materialDatasSO)) ::UnityW<::GorillaTag::MaterialDatasSO>  materialDatasSO;

/// @brief Field maxArmLength, offset 0x330, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxArmLength, put=__cordl_internal_set_maxArmLength)) float_t  maxArmLength;

/// @brief Field maxJumpSpeed, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxJumpSpeed, put=__cordl_internal_set_maxJumpSpeed)) float_t  maxJumpSpeed;

/// @brief Field maxSphereSize1, offset 0x54c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSphereSize1, put=__cordl_internal_set_maxSphereSize1)) float_t  maxSphereSize1;

/// @brief Field maxSphereSize2, offset 0x550, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSphereSize2, put=__cordl_internal_set_maxSphereSize2)) float_t  maxSphereSize2;

/// @brief Field meshCollider, offset 0x430, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshCollider, put=__cordl_internal_set_meshCollider)) ::UnityW<::UnityEngine::MeshCollider>  meshCollider;

/// @brief Field meshTrianglesDict, offset 0x488, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshTrianglesDict, put=__cordl_internal_set_meshTrianglesDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*  meshTrianglesDict;

/// @brief Field minimumRaycastDistance, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumRaycastDistance, put=__cordl_internal_set_minimumRaycastDistance)) float_t  minimumRaycastDistance;

/// @brief Field movementToProjectedAboveCollisionPlane, offset 0x420, size 0xc 
 __declspec(property(get=__cordl_internal_get_movementToProjectedAboveCollisionPlane, put=__cordl_internal_set_movementToProjectedAboveCollisionPlane)) ::UnityEngine::Vector3  movementToProjectedAboveCollisionPlane;

/// @brief Field movingHandHoldReleaseVelocity, offset 0x79c, size 0xc 
 __declspec(property(get=__cordl_internal_get_movingHandHoldReleaseVelocity, put=__cordl_internal_set_movingHandHoldReleaseVelocity)) ::UnityEngine::Vector3  movingHandHoldReleaseVelocity;

/// @brief Field movingSurfaceOffset, offset 0x80c, size 0xc 
 __declspec(property(get=__cordl_internal_get_movingSurfaceOffset, put=__cordl_internal_set_movingSurfaceOffset)) ::UnityEngine::Vector3  movingSurfaceOffset;

/// @brief Field nativeScale, offset 0x3d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nativeScale, put=__cordl_internal_set_nativeScale)) float_t  nativeScale;

/// @brief Field nativeScaleMagnitudeAdjustmentFactor, offset 0xa78, size 0x8 
 __declspec(property(get=__cordl_internal_get_nativeScaleMagnitudeAdjustmentFactor, put=__cordl_internal_set_nativeScaleMagnitudeAdjustmentFactor)) ::UnityEngine::AnimationCurve*  nativeScaleMagnitudeAdjustmentFactor;

/// @brief Field overlapAttempts, offset 0x560, size 0x4 
 __declspec(property(get=__cordl_internal_get_overlapAttempts, put=__cordl_internal_set_overlapAttempts)) int32_t  overlapAttempts;

/// @brief Field overlapColliders, offset 0x558, size 0x8 
 __declspec(property(get=__cordl_internal_get_overlapColliders, put=__cordl_internal_set_overlapColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  overlapColliders;

/// @brief Field platformTouchOffset, offset 0x868, size 0xc 
 __declspec(property(get=__cordl_internal_get_platformTouchOffset, put=__cordl_internal_set_platformTouchOffset)) ::UnityEngine::Vector3  platformTouchOffset;

 __declspec(property(get=get_playerRigidBody, put=set_playerRigidBody)) ::UnityW<::UnityEngine::Rigidbody>  playerRigidBody;

/// @brief Field playerRigidbodyInterpolationDefault, offset 0x328, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerRigidbodyInterpolationDefault, put=__cordl_internal_set_playerRigidbodyInterpolationDefault)) ::UnityEngine::RigidbodyInterpolation  playerRigidbodyInterpolationDefault;

/// @brief Field playerRotationOverride, offset 0x70c, size 0x10 
 __declspec(property(get=__cordl_internal_get_playerRotationOverride, put=__cordl_internal_set_playerRotationOverride)) ::UnityEngine::Quaternion  playerRotationOverride;

/// @brief Field playerRotationOverrideDecayRate, offset 0x720, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerRotationOverrideDecayRate, put=__cordl_internal_set_playerRotationOverrideDecayRate)) float_t  playerRotationOverrideDecayRate;

/// @brief Field playerRotationOverrideFrame, offset 0x71c, size 0x4 
 __declspec(property(get=__cordl_internal_get_playerRotationOverrideFrame, put=__cordl_internal_set_playerRotationOverrideFrame)) int32_t  playerRotationOverrideFrame;

/// @brief Field primaryButtonPressed, offset 0x608, size 0x1 
 __declspec(property(get=__cordl_internal_get_primaryButtonPressed, put=__cordl_internal_set_primaryButtonPressed)) bool  primaryButtonPressed;

/// @brief Field rayCastNonAllocColliders, offset 0x598, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayCastNonAllocColliders, put=__cordl_internal_set_rayCastNonAllocColliders)) ::ArrayW<::UnityEngine::RaycastHit>  rayCastNonAllocColliders;

/// @brief Field refMovement, offset 0x85c, size 0xc 
 __declspec(property(get=__cordl_internal_get_refMovement, put=__cordl_internal_set_refMovement)) ::UnityEngine::Vector3  refMovement;

/// @brief Field rightHand, offset 0x1d8, size 0x120 
 __declspec(property(get=__cordl_internal_get_rightHand, put=__cordl_internal_set_rightHand)) ::GlobalNamespace::GTPlayer_HandState  rightHand;

/// @brief Field rightHandNonDiveHapticsAmount, offset 0x6e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightHandNonDiveHapticsAmount, put=__cordl_internal_set_rightHandNonDiveHapticsAmount)) float_t  rightHandNonDiveHapticsAmount;

/// @brief Field rightHandTentacleMove, offset 0x9f4, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandTentacleMove, put=__cordl_internal_set_rightHandTentacleMove)) ::UnityEngine::Vector3  rightHandTentacleMove;

/// @brief Field rightHandWaterSurface, offset 0x67c, size 0x1c 
 __declspec(property(get=__cordl_internal_get_rightHandWaterSurface, put=__cordl_internal_set_rightHandWaterSurface)) ::GlobalNamespace::WaterVolume_SurfaceQuery  rightHandWaterSurface;

/// @brief Field rightHandWaterVolume, offset 0x658, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandWaterVolume, put=__cordl_internal_set_rightHandWaterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  rightHandWaterVolume;

 __declspec(property(get=get_scale)) float_t  scale;

/// @brief Field scaleMultiplier, offset 0x3dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleMultiplier, put=__cordl_internal_set_scaleMultiplier)) float_t  scaleMultiplier;

/// @brief Field secondLastPreHandholdVelocity, offset 0xa5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_secondLastPreHandholdVelocity, put=__cordl_internal_set_secondLastPreHandholdVelocity)) ::UnityEngine::Vector3  secondLastPreHandholdVelocity;

/// @brief Field secondaryHandHold, offset 0xa28, size 0x28 
 __declspec(property(get=__cordl_internal_get_secondaryHandHold, put=__cordl_internal_set_secondaryHandHold)) ::GlobalNamespace::GTPlayer_HandHoldState  secondaryHandHold;

/// @brief Field sharedMeshTris, offset 0x490, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedMeshTris, put=__cordl_internal_set_sharedMeshTris)) ::ArrayW<int32_t>  sharedMeshTris;

 __declspec(property(get=get_siJumpMultiplier, put=set_siJumpMultiplier)) float_t  siJumpMultiplier;

/// @brief Field sidewaysDrag, offset 0x978, size 0x4 
 __declspec(property(get=__cordl_internal_get_sidewaysDrag, put=__cordl_internal_set_sidewaysDrag)) float_t  sidewaysDrag;

/// @brief Field sizeLayerMask, offset 0x8e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_sizeLayerMask, put=__cordl_internal_set_sizeLayerMask)) int32_t  sizeLayerMask;

/// @brief Field slideAverageHistory, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_slideAverageHistory, put=__cordl_internal_set_slideAverageHistory)) ::ArrayW<::UnityEngine::Vector3>  slideAverageHistory;

/// @brief Field slideAverageNormal, offset 0x4b0, size 0xc 
 __declspec(property(get=__cordl_internal_get_slideAverageNormal, put=__cordl_internal_set_slideAverageNormal)) ::UnityEngine::Vector3  slideAverageNormal;

/// @brief Field slideControl, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_slideControl, put=__cordl_internal_set_slideControl)) float_t  slideControl;

/// @brief Field slideFactor, offset 0x584, size 0x4 
 __declspec(property(get=__cordl_internal_get_slideFactor, put=__cordl_internal_set_slideFactor)) float_t  slideFactor;

/// @brief Field slideRenderer, offset 0x590, size 0x8 
 __declspec(property(get=__cordl_internal_get_slideRenderer, put=__cordl_internal_set_slideRenderer)) ::UnityW<::UnityEngine::Renderer>  slideRenderer;

/// @brief Field slideVelocity, offset 0x4a4, size 0xc 
 __declspec(property(get=__cordl_internal_get_slideVelocity, put=__cordl_internal_set_slideVelocity)) ::UnityEngine::Vector3  slideVelocity;

/// @brief Field slideVelocityLimit, offset 0x33c, size 0x4 
 __declspec(property(get=__cordl_internal_get_slideVelocityLimit, put=__cordl_internal_set_slideVelocityLimit)) float_t  slideVelocityLimit;

/// @brief Field slidingMinimum, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_slidingMinimum, put=__cordl_internal_set_slidingMinimum)) float_t  slidingMinimum;

/// @brief Field slipperyMaterial, offset 0xa50, size 0x8 
 __declspec(property(get=__cordl_internal_get_slipperyMaterial, put=__cordl_internal_set_slipperyMaterial)) ::UnityW<::UnityEngine::PhysicsMaterial>  slipperyMaterial;

/// @brief Field stickDepth, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_stickDepth, put=__cordl_internal_set_stickDepth)) float_t  stickDepth;

/// @brief Field stiltStates, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_stiltStates, put=__cordl_internal_set_stiltStates)) ::ArrayW<::GlobalNamespace::GTPlayer_HandState>  stiltStates;

/// @brief Field stuckLeft, offset 0x922, size 0x1 
 __declspec(property(get=__cordl_internal_get_stuckLeft, put=__cordl_internal_set_stuckLeft)) bool  stuckLeft;

/// @brief Field stuckRight, offset 0x923, size 0x1 
 __declspec(property(get=__cordl_internal_get_stuckRight, put=__cordl_internal_set_stuckRight)) bool  stuckRight;

/// @brief Field surfaceDirection, offset 0x568, size 0xc 
 __declspec(property(get=__cordl_internal_get_surfaceDirection, put=__cordl_internal_set_surfaceDirection)) ::UnityEngine::Vector3  surfaceDirection;

/// @brief Field swimmingParamsList, offset 0x610, size 0x8 
 __declspec(property(get=__cordl_internal_get_swimmingParamsList, put=__cordl_internal_set_swimmingParamsList)) ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>*  swimmingParamsList;

/// @brief Field swimmingVelocity, offset 0x698, size 0xc 
 __declspec(property(get=__cordl_internal_get_swimmingVelocity, put=__cordl_internal_set_swimmingVelocity)) ::UnityEngine::Vector3  swimmingVelocity;

/// @brief Field teleportThresholdNoVel, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_teleportThresholdNoVel, put=__cordl_internal_set_teleportThresholdNoVel)) float_t  teleportThresholdNoVel;

/// @brief Field teleportToTrain, offset 0x920, size 0x1 
 __declspec(property(get=__cordl_internal_get_teleportToTrain, put=__cordl_internal_set_teleportToTrain)) bool  teleportToTrain;

/// @brief Field tempFreezeLeftHandEnableTime, offset 0x898, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempFreezeLeftHandEnableTime, put=__cordl_internal_set_tempFreezeLeftHandEnableTime)) double_t  tempFreezeLeftHandEnableTime;

/// @brief Field tempFreezeRightHandEnableTime, offset 0x890, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempFreezeRightHandEnableTime, put=__cordl_internal_set_tempFreezeRightHandEnableTime)) double_t  tempFreezeRightHandEnableTime;

/// @brief Field tempHitInfo, offset 0x4bc, size 0x2c 
 __declspec(property(get=__cordl_internal_get_tempHitInfo, put=__cordl_internal_set_tempHitInfo)) ::UnityEngine::RaycastHit  tempHitInfo;

/// @brief Field tempIterativeHit, offset 0x520, size 0x2c 
 __declspec(property(get=__cordl_internal_get_tempIterativeHit, put=__cordl_internal_set_tempIterativeHit)) ::UnityEngine::RaycastHit  tempIterativeHit;

/// @brief Field tempMaterialArray, offset 0x5e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempMaterialArray, put=__cordl_internal_set_tempMaterialArray)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  tempMaterialArray;

/// @brief Field tempRealTime, offset 0x4a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempRealTime, put=__cordl_internal_set_tempRealTime)) float_t  tempRealTime;

/// @brief Field trianglesList, offset 0x480, size 0x8 
 __declspec(property(get=__cordl_internal_get_trianglesList, put=__cordl_internal_set_trianglesList)) ::System::Collections::Generic::List_1<int32_t>*  trianglesList;

/// @brief Field turnParent, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_turnParent, put=__cordl_internal_set_turnParent)) ::UnityW<::UnityEngine::GameObject>  turnParent;

 __declspec(property(get=get_turnedThisFrame)) bool  turnedThisFrame;

/// @brief Field unStickDistance, offset 0x334, size 0x4 
 __declspec(property(get=__cordl_internal_get_unStickDistance, put=__cordl_internal_set_unStickDistance)) float_t  unStickDistance;

/// @brief Field updateRB, offset 0x589, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateRB, put=__cordl_internal_set_updateRB)) bool  updateRB;

/// @brief Field velocityHistory, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityHistory, put=__cordl_internal_set_velocityHistory)) ::ArrayW<::UnityEngine::Vector3>  velocityHistory;

/// @brief Field velocityHistorySize, offset 0x32c, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityHistorySize, put=__cordl_internal_set_velocityHistorySize)) int32_t  velocityHistorySize;

/// @brief Field velocityIndex, offset 0x378, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityIndex, put=__cordl_internal_set_velocityIndex)) int32_t  velocityIndex;

/// @brief Field velocityLimit, offset 0x338, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityLimit, put=__cordl_internal_set_velocityLimit)) float_t  velocityLimit;

/// @brief Field vertex1, offset 0x470, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertex1, put=__cordl_internal_set_vertex1)) int32_t  vertex1;

/// @brief Field vertex2, offset 0x474, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertex2, put=__cordl_internal_set_vertex2)) int32_t  vertex2;

/// @brief Field vertex3, offset 0x478, size 0x4 
 __declspec(property(get=__cordl_internal_get_vertex3, put=__cordl_internal_set_vertex3)) int32_t  vertex3;

/// @brief Field wasBodyOnGround, offset 0x828, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasBodyOnGround, put=__cordl_internal_set_wasBodyOnGround)) bool  wasBodyOnGround;

/// @brief Field wasHeadTouching, offset 0x3b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHeadTouching, put=__cordl_internal_set_wasHeadTouching)) bool  wasHeadTouching;

/// @brief Field wasHoldingHandhold, offset 0xa58, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHoldingHandhold, put=__cordl_internal_set_wasHoldingHandhold)) bool  wasHoldingHandhold;

/// @brief Field wasMovingSurfaceMonkeBlock, offset 0x818, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasMovingSurfaceMonkeBlock, put=__cordl_internal_set_wasMovingSurfaceMonkeBlock)) bool  wasMovingSurfaceMonkeBlock;

/// @brief Field waterLayer, offset 0x3b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_waterLayer, put=__cordl_internal_set_waterLayer)) ::UnityEngine::LayerMask  waterLayer;

/// @brief Field waterParams, offset 0x618, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterParams, put=__cordl_internal_set_waterParams)) ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  waterParams;

/// @brief Field waterSurfaceForHead, offset 0x6a4, size 0x1c 
 __declspec(property(get=__cordl_internal_get_waterSurfaceForHead, put=__cordl_internal_set_waterSurfaceForHead)) ::GlobalNamespace::WaterVolume_SurfaceQuery  waterSurfaceForHead;

/// @brief Field waterSurfaceJumpCooldown, offset 0x6d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_waterSurfaceJumpCooldown, put=__cordl_internal_set_waterSurfaceJumpCooldown)) float_t  waterSurfaceJumpCooldown;

/// @brief Field wizardStaffSlamEffects, offset 0x630, size 0x8 
 __declspec(property(get=__cordl_internal_get_wizardStaffSlamEffects, put=__cordl_internal_set_wizardStaffSlamEffects)) ::UnityW<::UnityEngine::GameObject>  wizardStaffSlamEffects;

/// @brief Method AddForce, addr 0x5cbdc5c, size 0x7c, virtual false, abstract: false, final false
inline void AddForce(::UnityEngine::Vector3  force, ::UnityEngine::ForceMode  mode) ;

/// @brief Method AddHandHold, addr 0x5cd0138, size 0x238, virtual false, abstract: false, final false
inline void AddHandHold(::UnityEngine::Transform*  objectHeld, ::UnityEngine::Vector3  localPositionHeld, ::GlobalNamespace::GorillaGrabber*  grabber, bool  forLeftHand, bool  rotatePlayerWhenHeld, ::by_ref<::UnityEngine::Vector3>  grabbedVelocity) ;

/// @brief Method AddHoverArea, addr 0x5cc318c, size 0x17c, virtual false, abstract: false, final false
inline void AddHoverArea(::GlobalNamespace::HoverboardAreaTrigger*  area) ;

/// @brief Method AddHoverDisabler, addr 0x5cc35d8, size 0x17c, virtual false, abstract: false, final false
inline void AddHoverDisabler(::GlobalNamespace::ForceDisableHoverboardTrigger*  disabler) ;

/// @brief Method AntiTeleportTechnology, addr 0x5cc04e0, size 0x1dc, virtual false, abstract: false, final false
inline void AntiTeleportTechnology() ;

/// @brief Method ApplyClampedKnockback, addr 0x5cbe170, size 0x370, virtual false, abstract: false, final false
inline void ApplyClampedKnockback(::UnityEngine::Vector3  direction, float_t  speed, float_t  boostMultiplier, bool  forceOffTheGround) ;

/// @brief Method ApplyGravityOverrides, addr 0x5cbdde8, size 0x14c, virtual false, abstract: false, final false
inline void ApplyGravityOverrides() ;

/// @brief Method ApplyKnockback, addr 0x5cbdf34, size 0x214, virtual false, abstract: false, final false
inline void ApplyKnockback(::UnityEngine::Vector3  direction, float_t  speed, bool  forceOffTheGround) ;

/// @brief Method ApplyNativeScaleAdjustment, addr 0x5ccaae0, size 0x4c, virtual false, abstract: false, final false
inline float_t ApplyNativeScaleAdjustment(float_t  adjustedMagnitude) ;

/// @brief Method Awake, addr 0x5cbbf18, size 0x5dc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BeginClimbing, addr 0x5cce788, size 0x74c, virtual false, abstract: false, final false
inline void BeginClimbing(::GorillaLocomotion::Climbing::GorillaClimbable*  climbable, ::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, ::GorillaLocomotion::Climbing::GorillaClimbableRef*  climbableRef) ;

/// @brief Method BodyCollider, addr 0x5cc3a7c, size 0x5a8, virtual false, abstract: false, final false
inline void BodyCollider() ;

/// @brief Method ChangeLayer, addr 0x5ccf3a8, size 0xb8, virtual false, abstract: false, final false
inline void ChangeLayer(::StringW  layerName) ;

/// @brief Method CheckWaterSurfaceJump, addr 0x5ccb4e4, size 0x2f4, virtual false, abstract: false, final false
inline bool CheckWaterSurfaceJump(::UnityEngine::Vector3  startingHandPosition, ::UnityEngine::Vector3  endingHandPosition, ::UnityEngine::Vector3  palmForwardDirection, ::UnityEngine::Vector3  handAvgVelocity, ::GorillaLocomotion::Swimming::PlayerSwimmingParameters*  parameters, ::GorillaLocomotion::Swimming::WaterVolume*  contactingWaterVolume, ::GlobalNamespace::WaterVolume_SurfaceQuery  waterSurface, ::by_ref<::UnityEngine::Vector3>  jumpVelocity) ;

/// @brief Method ClearColliderBuffer, addr 0x5ccf134, size 0x68, virtual false, abstract: false, final false
inline void ClearColliderBuffer(::by_ref<::ArrayW<::UnityEngine::Collider*>>  colliders) ;

/// @brief Method ClearHandHolds, addr 0x5cbd27c, size 0x28, virtual false, abstract: false, final false
inline void ClearHandHolds() ;

/// @brief Method ClearRaycasthitBuffer, addr 0x5ccb914, size 0x68, virtual false, abstract: false, final false
inline void ClearRaycasthitBuffer(::by_ref<::ArrayW<::UnityEngine::RaycastHit>>  raycastHits) ;

/// @brief Method CollisionsSphereCast, addr 0x5ccd120, size 0xd1c, virtual false, abstract: false, final false
inline bool CollisionsSphereCast(::UnityEngine::Vector3  startPosition, float_t  sphereRadius, ::UnityEngine::Vector3  movementVector, ::by_ref<::UnityEngine::Vector3>  finalPosition, ::by_ref<::UnityEngine::RaycastHit>  collisionsHitInfo) ;

/// @brief Method ComputeLocalHitPoint, addr 0x5ccb7d8, size 0x13c, virtual false, abstract: false, final false
static inline bool ComputeLocalHitPoint(::UnityEngine::RaycastHit  hit, ::by_ref<::UnityEngine::Vector3>  localHitPoint) ;

/// @brief Method ComputeWorldHitPoint, addr 0x5cc96c4, size 0x124, virtual false, abstract: false, final false
static inline bool ComputeWorldHitPoint(::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  localPoint, ::by_ref<::UnityEngine::Vector3>  worldHitPoint) ;

/// @brief Method CrazyCheck2, addr 0x5cc97e8, size 0xc8, virtual false, abstract: false, final false
inline bool CrazyCheck2(float_t  sphereSize, ::UnityEngine::Vector3  startPosition) ;

/// [IteratorStateMachine(typeof(GorillaLocomotion.GTPlayer::<DelayedRemoveHoverboard>d__425))]
/// @brief Method DelayedRemoveHoverboard, addr 0x5cc3974, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedRemoveHoverboard() ;

/// @brief Method DisableStilt, addr 0x5cbbee4, size 0x34, virtual false, abstract: false, final false
inline void DisableStilt(::GorillaLocomotion::StiltID  stiltID) ;

/// [AsyncStateMachine(typeof(GorillaLocomotion.GTPlayer::<DoLaunch>d__494))]
/// @brief Method DoLaunch, addr 0x5ccfbd0, size 0xcc, virtual false, abstract: false, final false
inline void DoLaunch(::UnityEngine::Vector3  velocity) ;

/// @brief Method EnableStilt, addr 0x5cbbc4c, size 0x228, virtual false, abstract: false, final false
inline void EnableStilt(::GorillaLocomotion::StiltID  stiltID, bool  isLeftHand, ::UnityEngine::Vector3  currentTipWorldPos, float_t  maxArmLength, bool  canTag, bool  canStun, float_t  customBoostFactor, ::GorillaLocomotion::Climbing::GorillaVelocityTracker*  velocityTracker) ;

/// @brief Method EndClimbing, addr 0x5ccb97c, size 0x6a8, virtual false, abstract: false, final false
inline void EndClimbing(::GorillaLocomotion::Climbing::GorillaHandClimber*  hand, bool  startingNewClimb, bool  doDontReclimb) ;

/// @brief Method ExtraVelMaxMultiplier, addr 0x5cca934, size 0xdc, virtual false, abstract: false, final false
inline float_t ExtraVelMaxMultiplier() ;

/// @brief Method ExtraVelMultiplier, addr 0x5ccaa10, size 0xd0, virtual false, abstract: false, final false
inline float_t ExtraVelMultiplier() ;

/// @brief Method FixedUpdate, addr 0x5cbe4e0, size 0x2000, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method FixedUpdate_HandHolds, addr 0x5cc2554, size 0x4b4, virtual false, abstract: false, final false
inline void FixedUpdate_HandHolds(float_t  timeDelta) ;

/// @brief Method ForceHoverDisallowed, addr 0x5cc3884, size 0xf0, virtual false, abstract: false, final false
inline void ForceHoverDisallowed() ;

/// @brief Method ForceRigidBodySync, addr 0x5cbcf74, size 0xc, virtual false, abstract: false, final false
inline void ForceRigidBodySync() ;

/// @brief Method FreezeTagSlidePercentage, addr 0x5cce6b8, size 0xd0, virtual false, abstract: false, final false
inline float_t FreezeTagSlidePercentage() ;

/// @brief Method GetControllerTransform, addr 0x5cbb284, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetControllerTransform(bool  isLeftHand) ;

/// @brief Method GetHandFollower, addr 0x5cbb29c, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetHandFollower(bool  isLeftHand) ;

/// @brief Method GetHandOffset, addr 0x5cbb2b4, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHandOffset(bool  isLeftHand) ;

/// @brief Method GetHandPosition, addr 0x5cbb334, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetHandPosition(bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID) ;

/// @brief Method GetHandRotOffset, addr 0x5cbb2ec, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetHandRotOffset(bool  isLeftHand) ;

/// @brief Method GetHandTapData, addr 0x5cbb3b0, size 0x104, virtual false, abstract: false, final false
inline void GetHandTapData(bool  isLeftHand, ::GorillaLocomotion::StiltID  stiltID, ::by_ref<bool>  wasHandTouching, ::by_ref<bool>  wasSliding, ::by_ref<int32_t>  handMatIndex, ::by_ref<::GlobalNamespace::GorillaSurfaceOverride*>  surfaceOverride, ::by_ref<::UnityEngine::RaycastHit>  handHitInfo, ::by_ref<::UnityEngine::Vector3>  handPosition, ::by_ref<::GorillaLocomotion::Climbing::GorillaVelocityTracker*>  handVelocityTracker) ;

/// @brief Method GetHandVelocityTracker, addr 0x5cbb254, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> GetHandVelocityTracker(bool  isLeftHand) ;

/// @brief Method GetInteractPointVelocityTracker, addr 0x5cbb26c, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> GetInteractPointVelocityTracker(bool  isLeftHand) ;

/// @brief Method GetMaterialTouchIndex, addr 0x5cbb194, size 0x18, virtual false, abstract: false, final false
inline int32_t GetMaterialTouchIndex(bool  isLeftHand) ;

/// @brief Method GetSlidePercentage, addr 0x5ccde3c, size 0x87c, virtual false, abstract: false, final false
inline float_t GetSlidePercentage(::UnityEngine::RaycastHit  raycastHit) ;

/// @brief Method GetSurfaceOverride, addr 0x5cbb1ac, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::GorillaSurfaceOverride> GetSurfaceOverride(bool  isLeftHand) ;

/// @brief Method GetSwimmingParams, addr 0x5cbb75c, size 0x58, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters> GetSwimmingParams(::GlobalNamespace::GTPlayer_LiquidType  liquidType) ;

/// @brief Method GetSwimmingParams, addr 0x5cbb7b4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters> GetSwimmingParams(::GorillaLocomotion::Swimming::WaterVolume*  volume) ;

/// @brief Method GetSwimmingVelocityForHand, addr 0x5ccab94, size 0x950, virtual false, abstract: false, final false
inline bool GetSwimmingVelocityForHand(::UnityEngine::Vector3  startingHandPosition, ::UnityEngine::Vector3  endingHandPosition, ::UnityEngine::Vector3  palmForwardDirection, float_t  dt, ::by_ref<::GorillaLocomotion::Swimming::WaterVolume*>  contactingWaterVolume, ::by_ref<::GlobalNamespace::WaterVolume_SurfaceQuery>  waterSurface, ::by_ref<::UnityEngine::Vector3>  swimmingVelocityChange) ;

/// @brief Method GetTouchHitInfo, addr 0x5cbb1c4, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::RaycastHit GetTouchHitInfo(bool  isLeftHand) ;

/// @brief Method GrabPersonalHoverboard, addr 0x5cc3020, size 0x16c, virtual false, abstract: false, final false
inline void GrabPersonalHoverboard(bool  isLeftHand, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::UnityEngine::Color  col) ;

/// @brief Method HandleTentacleMovement, addr 0x5cca3b0, size 0x11c, virtual false, abstract: false, final false
inline bool HandleTentacleMovement() ;

/// @brief Method HoverboardFixedUpdate, addr 0x5cc06bc, size 0x12e0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 HoverboardFixedUpdate(::UnityEngine::Vector3  velocity) ;

/// @brief Method HoverboardLateUpdate, addr 0x5cc2b30, size 0x4f0, virtual false, abstract: false, final false
inline void HoverboardLateUpdate() ;

/// @brief Method InitializeValues, addr 0x5cbc4f4, size 0x360, virtual false, abstract: false, final false
inline void InitializeValues() ;

/// @brief Method IsHandTouching, addr 0x5cbb238, size 0x1c, virtual false, abstract: false, final false
inline bool IsHandTouching(bool  isLeftHand) ;

/// @brief Method IsTouchingMovingSurface, addr 0x5cca4cc, size 0x2a8, virtual false, abstract: false, final false
inline bool IsTouchingMovingSurface(::UnityEngine::Vector3  rayOrigin, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<int32_t>  movingSurfaceId, ::by_ref<bool>  sideTouch, ::by_ref<bool>  isMonkeBlock) ;

/// @brief Method IterativeCollisionSphereCast, addr 0x5cc98b0, size 0x4f8, virtual false, abstract: false, final false
inline bool IterativeCollisionSphereCast(::UnityEngine::Vector3  startPosition, float_t  sphereRadius, ::UnityEngine::Vector3  movementVector, ::UnityEngine::Vector3  boostVector, ::by_ref<::UnityEngine::Vector3>  endPosition, bool  singleHand, ::by_ref<float_t>  slipPercentage, ::by_ref<::UnityEngine::RaycastHit>  iterativeHitInfo, bool  fullSlide) ;

/// @brief Method LateUpdate, addr 0x5cc46a8, size 0x4ffc, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method MaxSphereSizeForNoOverlap, addr 0x5cc4024, size 0x20c, virtual false, abstract: false, final false
inline bool MaxSphereSizeForNoOverlap(float_t  testRadius, ::UnityEngine::Vector3  checkPosition, bool  ignoreOneWay, ::by_ref<float_t>  overlapRadiusTest) ;

/// @brief Method MovingSurfaceMovement, addr 0x5cc96a4, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 MovingSurfaceMovement() ;

static inline ::GorillaLocomotion::GTPlayer* New_ctor() ;

/// @brief Method NonAllocRaycast, addr 0x5ccf19c, size 0x1d4, virtual false, abstract: false, final false
inline int32_t NonAllocRaycast(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  endPosition) ;

/// @brief Method OnBeforeRenderInit, addr 0x5cc449c, size 0x20c, virtual false, abstract: false, final false
inline void OnBeforeRenderInit() ;

/// @brief Method OnChangeActiveHandhold, addr 0x5ccfe88, size 0x2b0, virtual false, abstract: false, final false
inline void OnChangeActiveHandhold() ;

/// @brief Method OnCollisionStay, addr 0x5ccf96c, size 0x264, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDestroy, addr 0x5cbcd98, size 0x138, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5ccfda0, size 0xe8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ccfc9c, size 0xe8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnterWaterVolume, addr 0x5ccf4e4, size 0x1a4, virtual false, abstract: false, final false
inline void OnEnterWaterVolume(::UnityEngine::Collider*  playerCollider, ::GorillaLocomotion::Swimming::WaterVolume*  volume) ;

/// @brief Method OnExitWaterVolume, addr 0x5ccf688, size 0xe0, virtual false, abstract: false, final false
inline void OnExitWaterVolume(::UnityEngine::Collider*  playerCollider, ::GorillaLocomotion::Swimming::WaterVolume*  volume) ;

/// @brief Method OnJoinedRoom, addr 0x5ccfd84, size 0x1c, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method PositionWithOffset, addr 0x5cbced0, size 0xa4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 PositionWithOffset(::UnityEngine::Transform*  transformToModify, ::UnityEngine::Vector3  offsetVector) ;

/// @brief Method RefreshHoverAllowed, addr 0x5cc3308, size 0x1a0, virtual false, abstract: false, final false
inline void RefreshHoverAllowed() ;

/// @brief Method RemoveHandHold, addr 0x5cd0370, size 0xdc, virtual false, abstract: false, final false
inline void RemoveHandHold(::GlobalNamespace::GorillaGrabber*  grabber, bool  forLeftHand) ;

/// @brief Method RemoveHoverArea, addr 0x5cc34a8, size 0x130, virtual false, abstract: false, final false
inline void RemoveHoverArea(::GlobalNamespace::HoverboardAreaTrigger*  area) ;

/// @brief Method RemoveHoverDisabler, addr 0x5cc3754, size 0x130, virtual false, abstract: false, final false
inline void RemoveHoverDisabler(::GlobalNamespace::ForceDisableHoverboardTrigger*  disabler) ;

/// @brief Method RequestTentacleMove, addr 0x5ccc024, size 0x30, virtual false, abstract: false, final false
inline void RequestTentacleMove(bool  isLeftHand, ::UnityEngine::Vector3  move) ;

/// @brief Method ResetRigidbodyInterpolation, addr 0x5ccf024, size 0x20, virtual false, abstract: false, final false
inline void ResetRigidbodyInterpolation() ;

/// @brief Method RestoreLayer, addr 0x5ccf460, size 0x84, virtual false, abstract: false, final false
inline void RestoreLayer() ;

/// @brief Method RigidbodyMovePosition, addr 0x5ccf08c, size 0x18, virtual false, abstract: false, final false
inline void RigidbodyMovePosition(::UnityEngine::Vector3  pos) ;

/// @brief Method RotateWithSurface, addr 0x5cc9da8, size 0x1e0, virtual false, abstract: false, final false
inline float_t RotateWithSurface(::UnityEngine::Quaternion  rotationDelta, ::UnityEngine::Vector3  pivot) ;

/// @brief Method ScaleAwayFromPoint, addr 0x5cc4230, size 0x150, virtual false, abstract: false, final false
inline void ScaleAwayFromPoint(float_t  oldScale, float_t  newScale, ::UnityEngine::Vector3  scaleCenter) ;

/// @brief Method ScalePointAwayFromCenter, addr 0x5cc4380, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ScalePointAwayFromCenter(::UnityEngine::Vector3  point, float_t  baseRadius, float_t  oldScale, float_t  newScale, ::UnityEngine::Vector3  scaleCenter) ;

/// @brief Method SetGravityOverride, addr 0x5cbdd28, size 0x68, virtual false, abstract: false, final false
inline void SetGravityOverride(::UnityEngine::Object*  caller, ::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*  gravityFunction) ;

/// @brief Method SetHalloweenLevitation, addr 0x5cbcf80, size 0x20, virtual false, abstract: false, final false
inline void SetHalloweenLevitation(float_t  levitateStrength, float_t  levitateDuration, float_t  levitateBlendOutDuration, float_t  levitateBonusStrength, float_t  levitateBonusOffAtYSpeed, float_t  levitateBonusFullAtYSpeed) ;

/// @brief Method SetHandOffsets, addr 0x5cbb4b4, size 0x48, virtual false, abstract: false, final false
inline void SetHandOffsets(bool  isLeftHand, ::UnityEngine::Vector3  handOffset, ::UnityEngine::Quaternion  handRotOffset) ;

/// @brief Method SetHoverActive, addr 0x5cc39e8, size 0x94, virtual false, abstract: false, final false
inline void SetHoverActive(bool  enable) ;

/// @brief Method SetHoverboardPosRot, addr 0x5cc2a28, size 0x108, virtual false, abstract: false, final false
inline void SetHoverboardPosRot(::UnityEngine::Vector3  worldPos, ::UnityEngine::Quaternion  worldRot) ;

/// @brief Method SetLeftMaximumSlipThisFrame, addr 0x5ccf370, size 0x1c, virtual false, abstract: false, final false
inline void SetLeftMaximumSlipThisFrame() ;

/// @brief Method SetMaximumSlipThisFrame, addr 0x5cbe148, size 0x28, virtual false, abstract: false, final false
inline void SetMaximumSlipThisFrame() ;

/// @brief Method SetNativeScale, addr 0x5cbb574, size 0x198, virtual false, abstract: false, final false
inline void SetNativeScale(::GlobalNamespace::NativeSizeChangerSettings*  s) ;

/// @brief Method SetPlayerVelocity, addr 0x5cbdbc0, size 0x9c, virtual false, abstract: false, final false
inline void SetPlayerVelocity(::UnityEngine::Vector3  newVelocity) ;

/// @brief Method SetRightMaximumSlipThisFrame, addr 0x5ccf38c, size 0x1c, virtual false, abstract: false, final false
inline void SetRightMaximumSlipThisFrame() ;

/// @brief Method SetScaleMultiplier, addr 0x5cbb56c, size 0x8, virtual false, abstract: false, final false
inline void SetScaleMultiplier(float_t  s) ;

/// @brief Method SetVelocity, addr 0x5ccf074, size 0x18, virtual false, abstract: false, final false
inline void SetVelocity(::UnityEngine::Vector3  velocity) ;

/// @brief Method Start, addr 0x5cbc854, size 0x2a8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StoreVelocities, addr 0x5cca774, size 0x1c0, virtual false, abstract: false, final false
inline void StoreVelocities() ;

/// @brief Method TakeMyHand_GetSelfHandLinkAuthority, addr 0x5ccc054, size 0x15c, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandLinkAuthorityStatus TakeMyHand_GetSelfHandLinkAuthority() ;

/// @brief Method TakeMyHand_PositionBoth, addr 0x5ccc968, size 0x280, virtual false, abstract: false, final false
inline void TakeMyHand_PositionBoth(::GlobalNamespace::TakeMyHand_HandLink*  link) ;

/// @brief Method TakeMyHand_PositionBoth_BothHands, addr 0x5ccc5a0, size 0x314, virtual false, abstract: false, final false
inline void TakeMyHand_PositionBoth_BothHands(::GlobalNamespace::TakeMyHand_HandLink*  link1, ::GlobalNamespace::TakeMyHand_HandLink*  link2) ;

/// @brief Method TakeMyHand_PositionChild_LocalPlayer, addr 0x5ccc2e0, size 0x2c0, virtual false, abstract: false, final false
inline void TakeMyHand_PositionChild_LocalPlayer(::GlobalNamespace::TakeMyHand_HandLink*  linkA, ::GlobalNamespace::TakeMyHand_HandLink*  linkB) ;

/// @brief Method TakeMyHand_PositionChild_LocalPlayer, addr 0x5cccee0, size 0x240, virtual false, abstract: false, final false
inline void TakeMyHand_PositionChild_LocalPlayer(::GlobalNamespace::TakeMyHand_HandLink*  parentLink) ;

/// @brief Method TakeMyHand_PositionChild_RemotePlayer, addr 0x5ccc8b4, size 0xb4, virtual false, abstract: false, final false
inline void TakeMyHand_PositionChild_RemotePlayer(::GlobalNamespace::TakeMyHand_HandLink*  childLink) ;

/// @brief Method TakeMyHand_PositionChild_RemotePlayer_BothHands, addr 0x5ccc1b0, size 0x130, virtual false, abstract: false, final false
inline void TakeMyHand_PositionChild_RemotePlayer_BothHands(::GlobalNamespace::TakeMyHand_HandLink*  childLink1, ::GlobalNamespace::TakeMyHand_HandLink*  childLink2) ;

/// @brief Method TakeMyHand_PositionTriple, addr 0x5cccbe8, size 0x2f8, virtual false, abstract: false, final false
inline void TakeMyHand_PositionTriple(::GlobalNamespace::TakeMyHand_HandLink*  linkA, ::GlobalNamespace::TakeMyHand_HandLink*  linkB) ;

/// @brief Method TakeMyHand_ProcessMovement, addr 0x5cc9f88, size 0x428, virtual false, abstract: false, final false
inline void TakeMyHand_ProcessMovement() ;

/// @brief Method TeleportCleanup, addr 0x5cbcfa8, size 0x2d4, virtual false, abstract: false, final false
inline void TeleportCleanup() ;

/// @brief Method TeleportTo, addr 0x5cbd930, size 0x290, virtual false, abstract: false, final false
inline void TeleportTo(::UnityEngine::Transform*  destination, bool  matchDestinationRotation, bool  maintainVelocity) ;

/// @brief Method TeleportTo, addr 0x5cbd2a4, size 0x68c, virtual false, abstract: false, final false
inline void TeleportTo(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  keepVelocity, bool  center) ;

/// @brief Method TeleportToTrain, addr 0x5cbcfa0, size 0x8, virtual false, abstract: false, final false
inline void TeleportToTrain(bool  enable) ;

/// @brief Method TempFreezeHand, addr 0x5ccf0a4, size 0x90, virtual false, abstract: false, final false
inline void TempFreezeHand(bool  isLeft, float_t  freezeDuration) ;

/// @brief Method TryNormalize, addr 0x5ccf768, size 0x104, virtual false, abstract: false, final false
inline bool TryNormalize(::UnityEngine::Vector3  input, ::by_ref<::UnityEngine::Vector3>  normalized, ::by_ref<float_t>  magnitude, float_t  eps) ;

/// @brief Method TryNormalizeDown, addr 0x5ccf86c, size 0x100, virtual false, abstract: false, final false
inline bool TryNormalizeDown(::UnityEngine::Vector3  input, ::by_ref<::UnityEngine::Vector3>  normalized, ::by_ref<float_t>  magnitude, float_t  eps) ;

/// @brief Method Turn, addr 0x5cbcafc, size 0x29c, virtual false, abstract: false, final false
inline void Turn(float_t  degrees) ;

/// @brief Method UnsetGravityOverride, addr 0x5cbdd90, size 0x58, virtual false, abstract: false, final false
inline void UnsetGravityOverride(::UnityEngine::Object*  caller) ;

/// @brief Method UpdateStiltOffset, addr 0x5cbbe74, size 0x70, virtual false, abstract: false, final false
inline void UpdateStiltOffset(::GorillaLocomotion::StiltID  stiltID, ::UnityEngine::Vector3  currentTipWorldPos) ;

/// @brief Method VerifyClimbHelper, addr 0x5cceed4, size 0x114, virtual false, abstract: false, final false
inline void VerifyClimbHelper() ;

/// [CompilerGenerated]
/// @brief Method <BeginClimbing>g__SnapAxis|458_0, addr 0x5ccefe8, size 0x20, virtual false, abstract: false, final false
static inline void _BeginClimbing_g__SnapAxis_458_0(::by_ref<float_t>  val, float_t  maxDist) ;

/// [CompilerGenerated]
/// @brief Method <GetSlidePercentage>b__455_0, addr 0x5cd0c5c, size 0x14, virtual false, abstract: false, final false
inline bool _GetSlidePercentage_b__455_0(::GlobalNamespace::GTPlayer_MaterialData  matData) ;

/// [CompilerGenerated]
/// @brief Method <GetSlidePercentage>b__455_1, addr 0x5cd0c70, size 0x108, virtual false, abstract: false, final false
inline bool _GetSlidePercentage_b__455_1(::GlobalNamespace::GTPlayer_MaterialData  matData) ;

constexpr bool const& __cordl_internal_get_InReportMenu() const;

constexpr bool& __cordl_internal_get_InReportMenu() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RecordingRig() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RecordingRig() ;

constexpr bool const& __cordl_internal_get__IsBodySliding_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsBodySliding_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsFrozen_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsFrozen_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LaserZiplineActiveAtFrame_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LaserZiplineActiveAtFrame_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastHandTouchedGroundAtNetworkTime_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastTouchedGroundAtNetworkTime_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__TentacleActiveAtFrame_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__TentacleActiveAtFrame_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ThrusterActiveAtFrame_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ThrusterActiveAtFrame_k__BackingField() ;

constexpr bool const& __cordl_internal_get__bodyGroundIsSlippery_k__BackingField() const;

constexpr bool& __cordl_internal_get__bodyGroundIsSlippery_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__bodyInitialHeight() const;

constexpr float_t& __cordl_internal_get__bodyInitialHeight() ;

constexpr bool const& __cordl_internal_get__enableHoverMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__enableHoverMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__forcedUnderwater_k__BackingField() const;

constexpr bool& __cordl_internal_get__forcedUnderwater_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isHoverAllowed_k__BackingField() const;

constexpr bool& __cordl_internal_get__isHoverAllowed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__jumpMultiplier() const;

constexpr float_t& __cordl_internal_get__jumpMultiplier() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__playerRigidBody_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__playerRigidBody_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__siJumpMultiplier_k__BackingField() const;

constexpr float_t& __cordl_internal_get__siJumpMultiplier_k__BackingField() ;

constexpr ::GlobalNamespace::GTPlayer_HandHoldState const& __cordl_internal_get_activeHandHold() const;

constexpr ::GlobalNamespace::GTPlayer_HandHoldState& __cordl_internal_get_activeHandHold() ;

constexpr ::GlobalNamespace::NativeSizeChangerSettings* const& __cordl_internal_get_activeSizeChangerSettings() const;

constexpr ::GlobalNamespace::NativeSizeChangerSettings*& __cordl_internal_get_activeSizeChangerSettings() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>* const& __cordl_internal_get_activeWaterCurrents() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*& __cordl_internal_get_activeWaterCurrents() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get_antiDriftLastPosition() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get_antiDriftLastPosition() ;

constexpr bool const& __cordl_internal_get_anyHandIsColliding() const;

constexpr bool& __cordl_internal_get_anyHandIsColliding() ;

constexpr bool const& __cordl_internal_get_anyHandIsSliding() const;

constexpr bool& __cordl_internal_get_anyHandIsSliding() ;

constexpr bool const& __cordl_internal_get_anyHandIsSticking() const;

constexpr bool& __cordl_internal_get_anyHandIsSticking() ;

constexpr bool const& __cordl_internal_get_anyHandWasColliding() const;

constexpr bool& __cordl_internal_get_anyHandWasColliding() ;

constexpr bool const& __cordl_internal_get_anyHandWasSliding() const;

constexpr bool& __cordl_internal_get_anyHandWasSliding() ;

constexpr bool const& __cordl_internal_get_anyHandWasSticking() const;

constexpr bool& __cordl_internal_get_anyHandWasSticking() ;

constexpr bool const& __cordl_internal_get_areBothTouching() const;

constexpr bool& __cordl_internal_get_areBothTouching() ;

constexpr ::UnityW<::GlobalNamespace::PlayerAudioManager> const& __cordl_internal_get_audioManager() const;

constexpr ::UnityW<::GlobalNamespace::PlayerAudioManager>& __cordl_internal_get_audioManager() ;

constexpr bool const& __cordl_internal_get_audioSetToUnderwater() const;

constexpr bool& __cordl_internal_get_audioSetToUnderwater() ;

constexpr float_t const& __cordl_internal_get_averageSlipPercentage() const;

constexpr float_t& __cordl_internal_get_averageSlipPercentage() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_averagedVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_averagedVelocity() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_bodyCollider() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint> const& __cordl_internal_get_bodyCollisionContacts() const;

constexpr ::ArrayW<::UnityEngine::ContactPoint>& __cordl_internal_get_bodyCollisionContacts() ;

constexpr int32_t const& __cordl_internal_get_bodyCollisionContactsCount() const;

constexpr int32_t& __cordl_internal_get_bodyCollisionContactsCount() ;

constexpr ::UnityEngine::ContactPoint const& __cordl_internal_get_bodyGroundContact() const;

constexpr ::UnityEngine::ContactPoint& __cordl_internal_get_bodyGroundContact() ;

constexpr float_t const& __cordl_internal_get_bodyGroundContactTime() const;

constexpr float_t& __cordl_internal_get_bodyGroundContactTime() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_bodyHitInfo() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_bodyHitInfo() ;

constexpr bool const& __cordl_internal_get_bodyInWater() const;

constexpr bool& __cordl_internal_get_bodyInWater() ;

constexpr float_t const& __cordl_internal_get_bodyInitialRadius() const;

constexpr float_t& __cordl_internal_get_bodyInitialRadius() ;

constexpr float_t const& __cordl_internal_get_bodyLerp() const;

constexpr float_t& __cordl_internal_get_bodyLerp() ;

constexpr float_t const& __cordl_internal_get_bodyMaxRadius() const;

constexpr float_t& __cordl_internal_get_bodyMaxRadius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyOffsetVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyOffsetVector() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* const& __cordl_internal_get_bodyOverlappingWaterVolumes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*& __cordl_internal_get_bodyOverlappingWaterVolumes() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>* const& __cordl_internal_get_bodyTouchedSurfaces() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>*& __cordl_internal_get_bodyTouchedSurfaces() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& __cordl_internal_get_bodyVelocityTracker() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& __cordl_internal_get_bodyVelocityTracker() ;

constexpr float_t const& __cordl_internal_get_boostEnabledUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_boostEnabledUntilTimestamp() ;

constexpr int32_t const& __cordl_internal_get_bufferCount() const;

constexpr int32_t& __cordl_internal_get_bufferCount() ;

constexpr float_t const& __cordl_internal_get_buoyancyExtension() const;

constexpr float_t& __cordl_internal_get_buoyancyExtension() ;

constexpr float_t const& __cordl_internal_get_calcDeltaTime() const;

constexpr float_t& __cordl_internal_get_calcDeltaTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_climbHelper() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_climbHelper() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_climbHelperTargetPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_climbHelperTargetPos() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_collidedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_collidedMesh() ;

constexpr ::UnityW<::GlobalNamespace::ConnectedControllerHandler> const& __cordl_internal_get_controllerState() const;

constexpr ::UnityW<::GlobalNamespace::ConnectedControllerHandler>& __cordl_internal_get_controllerState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cosmeticsHeadTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cosmeticsHeadTarget() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_crazyCheckVectors() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_crazyCheckVectors() ;

constexpr float_t const& __cordl_internal_get_currentBodyHeight() const;

constexpr float_t& __cordl_internal_get_currentBodyHeight() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> const& __cordl_internal_get_currentClimbable() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>& __cordl_internal_get_currentClimbable() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> const& __cordl_internal_get_currentClimber() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>& __cordl_internal_get_currentClimber() ;

constexpr int32_t const& __cordl_internal_get_currentMaterialIndex() const;

constexpr int32_t& __cordl_internal_get_currentMaterialIndex() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSurfaceOverride> const& __cordl_internal_get_currentOverride() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSurfaceOverride>& __cordl_internal_get_currentOverride() ;

constexpr ::UnityW<::GlobalNamespace::BasePlatform> const& __cordl_internal_get_currentPlatform() const;

constexpr ::UnityW<::GlobalNamespace::BasePlatform>& __cordl_internal_get_currentPlatform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentSlopDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentSlopDirection() ;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing> const& __cordl_internal_get_currentSwing() const;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>& __cordl_internal_get_currentSwing() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentVelocity() ;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline> const& __cordl_internal_get_currentZipline() const;

constexpr ::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline>& __cordl_internal_get_currentZipline() ;

constexpr bool const& __cordl_internal_get_debugDrawSwimming() const;

constexpr bool& __cordl_internal_get_debugDrawSwimming() ;

constexpr bool const& __cordl_internal_get_debugFreezeTag() const;

constexpr bool& __cordl_internal_get_debugFreezeTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugLastRightHandPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugLastRightHandPosition() ;

constexpr bool const& __cordl_internal_get_debugMovement() const;

constexpr bool& __cordl_internal_get_debugMovement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugPlatformDeltaPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugPlatformDeltaPosition() ;

constexpr float_t const& __cordl_internal_get_defaultPrecision() const;

constexpr float_t& __cordl_internal_get_defaultPrecision() ;

constexpr float_t const& __cordl_internal_get_defaultSlideFactor() const;

constexpr float_t& __cordl_internal_get_defaultSlideFactor() ;

constexpr float_t const& __cordl_internal_get_degreesTurnedThisFrame() const;

constexpr float_t& __cordl_internal_get_degreesTurnedThisFrame() ;

constexpr bool const& __cordl_internal_get_didAJump() const;

constexpr bool& __cordl_internal_get_didAJump() ;

constexpr bool const& __cordl_internal_get_didHoverLastFrame() const;

constexpr bool& __cordl_internal_get_didHoverLastFrame() ;

constexpr bool const& __cordl_internal_get_disableMovement() const;

constexpr bool& __cordl_internal_get_disableMovement() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_emptyHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_emptyHit() ;

constexpr bool const& __cordl_internal_get_exitMovingSurface() const;

constexpr bool& __cordl_internal_get_exitMovingSurface() ;

constexpr float_t const& __cordl_internal_get_exitMovingSurfaceThreshold() const;

constexpr float_t& __cordl_internal_get_exitMovingSurfaceThreshold() ;

constexpr ::StringW const& __cordl_internal_get_findMatName() const;

constexpr ::StringW& __cordl_internal_get_findMatName() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_firstPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_firstPosition() ;

constexpr bool const& __cordl_internal_get_forceRBSync() const;

constexpr bool& __cordl_internal_get_forceRBSync() ;

constexpr ::GlobalNamespace::GTPlayer_MaterialData const& __cordl_internal_get_foundMatData() const;

constexpr ::GlobalNamespace::GTPlayer_MaterialData& __cordl_internal_get_foundMatData() ;

constexpr double_t const& __cordl_internal_get_frameCount() const;

constexpr double_t& __cordl_internal_get_frameCount() ;

constexpr float_t const& __cordl_internal_get_freezeTagHandSlidePercent() const;

constexpr float_t& __cordl_internal_get_freezeTagHandSlidePercent() ;

constexpr float_t const& __cordl_internal_get_frictionConstant() const;

constexpr float_t& __cordl_internal_get_frictionConstant() ;

constexpr float_t const& __cordl_internal_get_frozenBodyBuoyancyFactor() const;

constexpr float_t& __cordl_internal_get_frozenBodyBuoyancyFactor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_geodeHitEffects() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_geodeHitEffects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>* const& __cordl_internal_get_gravityOverrides() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>*& __cordl_internal_get_gravityOverrides() ;

constexpr float_t const& __cordl_internal_get_halloweenLevitateBonusFullAtYSpeed() const;

constexpr float_t& __cordl_internal_get_halloweenLevitateBonusFullAtYSpeed() ;

constexpr float_t const& __cordl_internal_get_halloweenLevitateBonusOffAtYSpeed() const;

constexpr float_t& __cordl_internal_get_halloweenLevitateBonusOffAtYSpeed() ;

constexpr float_t const& __cordl_internal_get_halloweenLevitationBonusStrength() const;

constexpr float_t& __cordl_internal_get_halloweenLevitationBonusStrength() ;

constexpr float_t const& __cordl_internal_get_halloweenLevitationFullStrengthDuration() const;

constexpr float_t& __cordl_internal_get_halloweenLevitationFullStrengthDuration() ;

constexpr float_t const& __cordl_internal_get_halloweenLevitationStrength() const;

constexpr float_t& __cordl_internal_get_halloweenLevitationStrength() ;

constexpr float_t const& __cordl_internal_get_halloweenLevitationTotalDuration() const;

constexpr float_t& __cordl_internal_get_halloweenLevitationTotalDuration() ;

constexpr bool const& __cordl_internal_get_hasCorrectedForTracking() const;

constexpr bool& __cordl_internal_get_hasCorrectedForTracking() ;

constexpr bool const& __cordl_internal_get_hasHoverPoint() const;

constexpr bool& __cordl_internal_get_hasHoverPoint() ;

constexpr bool const& __cordl_internal_get_hasLeftHandTentacleMove() const;

constexpr bool& __cordl_internal_get_hasLeftHandTentacleMove() ;

constexpr bool const& __cordl_internal_get_hasRightHandTentacleMove() const;

constexpr bool& __cordl_internal_get_hasRightHandTentacleMove() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_headCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_headCollider() ;

constexpr bool const& __cordl_internal_get_headInWater() const;

constexpr bool& __cordl_internal_get_headInWater() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* const& __cordl_internal_get_headOverlappingWaterVolumes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*& __cordl_internal_get_headOverlappingWaterVolumes() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headSlideNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headSlideNormal() ;

constexpr float_t const& __cordl_internal_get_headSlipPercentage() const;

constexpr float_t& __cordl_internal_get_headSlipPercentage() ;

constexpr float_t const& __cordl_internal_get_hoverBodyCollisionRadiusUpOffset() const;

constexpr float_t& __cordl_internal_get_hoverBodyCollisionRadiusUpOffset() ;

constexpr float_t const& __cordl_internal_get_hoverBodyHasCollisionsOutsideRadius() const;

constexpr float_t& __cordl_internal_get_hoverBodyHasCollisionsOutsideRadius() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_hoverCarveAngleResponsiveness() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_hoverCarveAngleResponsiveness() ;

constexpr float_t const& __cordl_internal_get_hoverCarveSidewaysSpeedLossFactor() const;

constexpr float_t& __cordl_internal_get_hoverCarveSidewaysSpeedLossFactor() ;

constexpr float_t const& __cordl_internal_get_hoverGeneralUpwardForce() const;

constexpr float_t& __cordl_internal_get_hoverGeneralUpwardForce() ;

constexpr float_t const& __cordl_internal_get_hoverIdealHeight() const;

constexpr float_t& __cordl_internal_get_hoverIdealHeight() ;

constexpr float_t const& __cordl_internal_get_hoverMaxPaddleSpeed() const;

constexpr float_t& __cordl_internal_get_hoverMaxPaddleSpeed() ;

constexpr float_t const& __cordl_internal_get_hoverMinGrindSpeed() const;

constexpr float_t& __cordl_internal_get_hoverMinGrindSpeed() ;

constexpr float_t const& __cordl_internal_get_hoverSlamJumpStrengthFactor() const;

constexpr float_t& __cordl_internal_get_hoverSlamJumpStrengthFactor() ;

constexpr float_t const& __cordl_internal_get_hoverTiltAdjustsForwardFactor() const;

constexpr float_t& __cordl_internal_get_hoverTiltAdjustsForwardFactor() ;

constexpr ::UnityW<::GlobalNamespace::HoverboardAudio> const& __cordl_internal_get_hoverboardAudio() const;

constexpr ::UnityW<::GlobalNamespace::HoverboardAudio>& __cordl_internal_get_hoverboardAudio() ;

constexpr float_t const& __cordl_internal_get_hoverboardBoostGracePeriod() const;

constexpr float_t& __cordl_internal_get_hoverboardBoostGracePeriod() ;

constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast> const& __cordl_internal_get_hoverboardCasts() const;

constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast>& __cordl_internal_get_hoverboardCasts() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_hoverboardLocomotionLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_hoverboardLocomotionLayers() ;

constexpr float_t const& __cordl_internal_get_hoverboardPaddleBoostMax() const;

constexpr float_t& __cordl_internal_get_hoverboardPaddleBoostMax() ;

constexpr float_t const& __cordl_internal_get_hoverboardPaddleBoostMultiplier() const;

constexpr float_t& __cordl_internal_get_hoverboardPaddleBoostMultiplier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_hoverboardPlayerLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_hoverboardPlayerLocalPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_hoverboardPlayerLocalRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_hoverboardPlayerLocalRot() ;

constexpr ::UnityW<::GlobalNamespace::HoverboardVisual> const& __cordl_internal_get_hoverboardVisual() const;

constexpr ::UnityW<::GlobalNamespace::HoverboardVisual>& __cordl_internal_get_hoverboardVisual() ;

constexpr float_t const& __cordl_internal_get_hoveringSlowSpeed() const;

constexpr float_t& __cordl_internal_get_hoveringSlowSpeed() ;

constexpr float_t const& __cordl_internal_get_hoveringSlowStoppingFactor() const;

constexpr float_t& __cordl_internal_get_hoveringSlowStoppingFactor() ;

constexpr float_t const& __cordl_internal_get_iceThreshold() const;

constexpr float_t& __cordl_internal_get_iceThreshold() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>* const& __cordl_internal_get_inHoverAreas() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>*& __cordl_internal_get_inHoverAreas() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>* const& __cordl_internal_get_inHoverDisablers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>*& __cordl_internal_get_inHoverDisablers() ;

constexpr bool const& __cordl_internal_get_inOverlay() const;

constexpr bool& __cordl_internal_get_inOverlay() ;

constexpr bool const& __cordl_internal_get_isAttachedToTrain() const;

constexpr bool& __cordl_internal_get_isAttachedToTrain() ;

constexpr bool const& __cordl_internal_get_isClimbableMoving() const;

constexpr bool& __cordl_internal_get_isClimbableMoving() ;

constexpr bool const& __cordl_internal_get_isClimbing() const;

constexpr bool& __cordl_internal_get_isClimbing() ;

constexpr bool const& __cordl_internal_get_isHandHoldMoving() const;

constexpr bool& __cordl_internal_get_isHandHoldMoving() ;

constexpr bool const& __cordl_internal_get_isUserPresent() const;

constexpr bool& __cordl_internal_get_isUserPresent() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_junkHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_junkHit() ;

constexpr int32_t const& __cordl_internal_get_lastAttachedToMovingSurfaceFrame() const;

constexpr int32_t& __cordl_internal_get_lastAttachedToMovingSurfaceFrame() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastClimbableRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastClimbableRotation() ;

constexpr bool const& __cordl_internal_get_lastFrameHasValidTouchPos() const;

constexpr bool& __cordl_internal_get_lastFrameHasValidTouchPos() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastFrameTouchPosLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastFrameTouchPosLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastFrameTouchPosWorld() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastFrameTouchPosWorld() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastHandHoldRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastHandHoldRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastHeadPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastHeadPosition() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_lastHitInfoHand() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_lastHitInfoHand() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_lastMonkeBlock() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_lastMonkeBlock() ;

constexpr ::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint const& __cordl_internal_get_lastMovingSurfaceContact() const;

constexpr ::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint& __cordl_internal_get_lastMovingSurfaceContact() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_lastMovingSurfaceHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_lastMovingSurfaceHit() ;

constexpr int32_t const& __cordl_internal_get_lastMovingSurfaceID() const;

constexpr int32_t& __cordl_internal_get_lastMovingSurfaceID() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastMovingSurfaceRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastMovingSurfaceRot() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastMovingSurfaceTouchLocal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastMovingSurfaceTouchLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastMovingSurfaceTouchWorld() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastMovingSurfaceTouchWorld() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastMovingSurfaceVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastMovingSurfaceVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastOpenHeadPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastOpenHeadPosition() ;

constexpr ::UnityW<::GlobalNamespace::BasePlatform> const& __cordl_internal_get_lastPlatformTouched() const;

constexpr ::UnityW<::GlobalNamespace::BasePlatform>& __cordl_internal_get_lastPlatformTouched() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPreHandholdVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPreHandholdVelocity() ;

constexpr float_t const& __cordl_internal_get_lastRealTime() const;

constexpr float_t& __cordl_internal_get_lastRealTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRigidbodyPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRigidbodyPosition() ;

constexpr float_t const& __cordl_internal_get_lastScale() const;

constexpr float_t& __cordl_internal_get_lastScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastSlopeDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastSlopeDirection() ;

constexpr float_t const& __cordl_internal_get_lastTouchedGroundTimestamp() const;

constexpr float_t& __cordl_internal_get_lastTouchedGroundTimestamp() ;

constexpr float_t const& __cordl_internal_get_lastWaterSurfaceJumpTimeLeft() const;

constexpr float_t& __cordl_internal_get_lastWaterSurfaceJumpTimeLeft() ;

constexpr float_t const& __cordl_internal_get_lastWaterSurfaceJumpTimeRight() const;

constexpr float_t& __cordl_internal_get_lastWaterSurfaceJumpTimeRight() ;

constexpr ::UnityW<::GorillaTagScripts::LayerChanger> const& __cordl_internal_get_layerChanger() const;

constexpr ::UnityW<::GorillaTagScripts::LayerChanger>& __cordl_internal_get_layerChanger() ;

constexpr ::GlobalNamespace::GTPlayer_HandState const& __cordl_internal_get_leftHand() const;

constexpr ::GlobalNamespace::GTPlayer_HandState& __cordl_internal_get_leftHand() ;

constexpr float_t const& __cordl_internal_get_leftHandNonDiveHapticsAmount() const;

constexpr float_t& __cordl_internal_get_leftHandNonDiveHapticsAmount() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandTentacleMove() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandTentacleMove() ;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery const& __cordl_internal_get_leftHandWaterSurface() const;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery& __cordl_internal_get_leftHandWaterSurface() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_leftHandWaterVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_leftHandWaterVolume() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>* const& __cordl_internal_get_liquidPropertiesList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>*& __cordl_internal_get_liquidPropertiesList() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_locomotionEnabledLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_locomotionEnabledLayers() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera() ;

constexpr ::UnityW<::GorillaTag::MaterialDatasSO> const& __cordl_internal_get_materialDatasSO() const;

constexpr ::UnityW<::GorillaTag::MaterialDatasSO>& __cordl_internal_get_materialDatasSO() ;

constexpr float_t const& __cordl_internal_get_maxArmLength() const;

constexpr float_t& __cordl_internal_get_maxArmLength() ;

constexpr float_t const& __cordl_internal_get_maxJumpSpeed() const;

constexpr float_t& __cordl_internal_get_maxJumpSpeed() ;

constexpr float_t const& __cordl_internal_get_maxSphereSize1() const;

constexpr float_t& __cordl_internal_get_maxSphereSize1() ;

constexpr float_t const& __cordl_internal_get_maxSphereSize2() const;

constexpr float_t& __cordl_internal_get_maxSphereSize2() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_meshCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_meshCollider() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>* const& __cordl_internal_get_meshTrianglesDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*& __cordl_internal_get_meshTrianglesDict() ;

constexpr float_t const& __cordl_internal_get_minimumRaycastDistance() const;

constexpr float_t& __cordl_internal_get_minimumRaycastDistance() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_movementToProjectedAboveCollisionPlane() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_movementToProjectedAboveCollisionPlane() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_movingHandHoldReleaseVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_movingHandHoldReleaseVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_movingSurfaceOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_movingSurfaceOffset() ;

constexpr float_t const& __cordl_internal_get_nativeScale() const;

constexpr float_t& __cordl_internal_get_nativeScale() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_nativeScaleMagnitudeAdjustmentFactor() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_nativeScaleMagnitudeAdjustmentFactor() ;

constexpr int32_t const& __cordl_internal_get_overlapAttempts() const;

constexpr int32_t& __cordl_internal_get_overlapAttempts() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_overlapColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_overlapColliders() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_platformTouchOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_platformTouchOffset() ;

constexpr ::UnityEngine::RigidbodyInterpolation const& __cordl_internal_get_playerRigidbodyInterpolationDefault() const;

constexpr ::UnityEngine::RigidbodyInterpolation& __cordl_internal_get_playerRigidbodyInterpolationDefault() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_playerRotationOverride() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_playerRotationOverride() ;

constexpr float_t const& __cordl_internal_get_playerRotationOverrideDecayRate() const;

constexpr float_t& __cordl_internal_get_playerRotationOverrideDecayRate() ;

constexpr int32_t const& __cordl_internal_get_playerRotationOverrideFrame() const;

constexpr int32_t& __cordl_internal_get_playerRotationOverrideFrame() ;

constexpr bool const& __cordl_internal_get_primaryButtonPressed() const;

constexpr bool& __cordl_internal_get_primaryButtonPressed() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_rayCastNonAllocColliders() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_rayCastNonAllocColliders() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_refMovement() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_refMovement() ;

constexpr ::GlobalNamespace::GTPlayer_HandState const& __cordl_internal_get_rightHand() const;

constexpr ::GlobalNamespace::GTPlayer_HandState& __cordl_internal_get_rightHand() ;

constexpr float_t const& __cordl_internal_get_rightHandNonDiveHapticsAmount() const;

constexpr float_t& __cordl_internal_get_rightHandNonDiveHapticsAmount() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandTentacleMove() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandTentacleMove() ;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery const& __cordl_internal_get_rightHandWaterSurface() const;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery& __cordl_internal_get_rightHandWaterSurface() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_rightHandWaterVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_rightHandWaterVolume() ;

constexpr float_t const& __cordl_internal_get_scaleMultiplier() const;

constexpr float_t& __cordl_internal_get_scaleMultiplier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_secondLastPreHandholdVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_secondLastPreHandholdVelocity() ;

constexpr ::GlobalNamespace::GTPlayer_HandHoldState const& __cordl_internal_get_secondaryHandHold() const;

constexpr ::GlobalNamespace::GTPlayer_HandHoldState& __cordl_internal_get_secondaryHandHold() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_sharedMeshTris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_sharedMeshTris() ;

constexpr float_t const& __cordl_internal_get_sidewaysDrag() const;

constexpr float_t& __cordl_internal_get_sidewaysDrag() ;

constexpr int32_t const& __cordl_internal_get_sizeLayerMask() const;

constexpr int32_t& __cordl_internal_get_sizeLayerMask() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_slideAverageHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_slideAverageHistory() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_slideAverageNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_slideAverageNormal() ;

constexpr float_t const& __cordl_internal_get_slideControl() const;

constexpr float_t& __cordl_internal_get_slideControl() ;

constexpr float_t const& __cordl_internal_get_slideFactor() const;

constexpr float_t& __cordl_internal_get_slideFactor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_slideRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_slideRenderer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_slideVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_slideVelocity() ;

constexpr float_t const& __cordl_internal_get_slideVelocityLimit() const;

constexpr float_t& __cordl_internal_get_slideVelocityLimit() ;

constexpr float_t const& __cordl_internal_get_slidingMinimum() const;

constexpr float_t& __cordl_internal_get_slidingMinimum() ;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial> const& __cordl_internal_get_slipperyMaterial() const;

constexpr ::UnityW<::UnityEngine::PhysicsMaterial>& __cordl_internal_get_slipperyMaterial() ;

constexpr float_t const& __cordl_internal_get_stickDepth() const;

constexpr float_t& __cordl_internal_get_stickDepth() ;

constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HandState> const& __cordl_internal_get_stiltStates() const;

constexpr ::ArrayW<::GlobalNamespace::GTPlayer_HandState>& __cordl_internal_get_stiltStates() ;

constexpr bool const& __cordl_internal_get_stuckLeft() const;

constexpr bool& __cordl_internal_get_stuckLeft() ;

constexpr bool const& __cordl_internal_get_stuckRight() const;

constexpr bool& __cordl_internal_get_stuckRight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_surfaceDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_surfaceDirection() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>* const& __cordl_internal_get_swimmingParamsList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>*& __cordl_internal_get_swimmingParamsList() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_swimmingVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_swimmingVelocity() ;

constexpr float_t const& __cordl_internal_get_teleportThresholdNoVel() const;

constexpr float_t& __cordl_internal_get_teleportThresholdNoVel() ;

constexpr bool const& __cordl_internal_get_teleportToTrain() const;

constexpr bool& __cordl_internal_get_teleportToTrain() ;

constexpr double_t const& __cordl_internal_get_tempFreezeLeftHandEnableTime() const;

constexpr double_t& __cordl_internal_get_tempFreezeLeftHandEnableTime() ;

constexpr double_t const& __cordl_internal_get_tempFreezeRightHandEnableTime() const;

constexpr double_t& __cordl_internal_get_tempFreezeRightHandEnableTime() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_tempHitInfo() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_tempHitInfo() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_tempIterativeHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_tempIterativeHit() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_tempMaterialArray() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_tempMaterialArray() ;

constexpr float_t const& __cordl_internal_get_tempRealTime() const;

constexpr float_t& __cordl_internal_get_tempRealTime() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_trianglesList() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_trianglesList() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_turnParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_turnParent() ;

constexpr float_t const& __cordl_internal_get_unStickDistance() const;

constexpr float_t& __cordl_internal_get_unStickDistance() ;

constexpr bool const& __cordl_internal_get_updateRB() const;

constexpr bool& __cordl_internal_get_updateRB() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_velocityHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_velocityHistory() ;

constexpr int32_t const& __cordl_internal_get_velocityHistorySize() const;

constexpr int32_t& __cordl_internal_get_velocityHistorySize() ;

constexpr int32_t const& __cordl_internal_get_velocityIndex() const;

constexpr int32_t& __cordl_internal_get_velocityIndex() ;

constexpr float_t const& __cordl_internal_get_velocityLimit() const;

constexpr float_t& __cordl_internal_get_velocityLimit() ;

constexpr int32_t const& __cordl_internal_get_vertex1() const;

constexpr int32_t& __cordl_internal_get_vertex1() ;

constexpr int32_t const& __cordl_internal_get_vertex2() const;

constexpr int32_t& __cordl_internal_get_vertex2() ;

constexpr int32_t const& __cordl_internal_get_vertex3() const;

constexpr int32_t& __cordl_internal_get_vertex3() ;

constexpr bool const& __cordl_internal_get_wasBodyOnGround() const;

constexpr bool& __cordl_internal_get_wasBodyOnGround() ;

constexpr bool const& __cordl_internal_get_wasHeadTouching() const;

constexpr bool& __cordl_internal_get_wasHeadTouching() ;

constexpr bool const& __cordl_internal_get_wasHoldingHandhold() const;

constexpr bool& __cordl_internal_get_wasHoldingHandhold() ;

constexpr bool const& __cordl_internal_get_wasMovingSurfaceMonkeBlock() const;

constexpr bool& __cordl_internal_get_wasMovingSurfaceMonkeBlock() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_waterLayer() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_waterLayer() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& __cordl_internal_get_waterParams() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& __cordl_internal_get_waterParams() ;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery const& __cordl_internal_get_waterSurfaceForHead() const;

constexpr ::GlobalNamespace::WaterVolume_SurfaceQuery& __cordl_internal_get_waterSurfaceForHead() ;

constexpr float_t const& __cordl_internal_get_waterSurfaceJumpCooldown() const;

constexpr float_t& __cordl_internal_get_waterSurfaceJumpCooldown() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_wizardStaffSlamEffects() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_wizardStaffSlamEffects() ;

constexpr void __cordl_internal_set_InReportMenu(bool  value) ;

constexpr void __cordl_internal_set_RecordingRig(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__IsBodySliding_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsFrozen_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LaserZiplineActiveAtFrame_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__LastHandTouchedGroundAtNetworkTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__LastTouchedGroundAtNetworkTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__TentacleActiveAtFrame_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ThrusterActiveAtFrame_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__bodyGroundIsSlippery_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__bodyInitialHeight(float_t  value) ;

constexpr void __cordl_internal_set__enableHoverMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__forcedUnderwater_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isHoverAllowed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__jumpMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__playerRigidBody_k__BackingField(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set__siJumpMultiplier_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_activeHandHold(::GlobalNamespace::GTPlayer_HandHoldState  value) ;

constexpr void __cordl_internal_set_activeSizeChangerSettings(::GlobalNamespace::NativeSizeChangerSettings*  value) ;

constexpr void __cordl_internal_set_activeWaterCurrents(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*  value) ;

constexpr void __cordl_internal_set_antiDriftLastPosition(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_anyHandIsColliding(bool  value) ;

constexpr void __cordl_internal_set_anyHandIsSliding(bool  value) ;

constexpr void __cordl_internal_set_anyHandIsSticking(bool  value) ;

constexpr void __cordl_internal_set_anyHandWasColliding(bool  value) ;

constexpr void __cordl_internal_set_anyHandWasSliding(bool  value) ;

constexpr void __cordl_internal_set_anyHandWasSticking(bool  value) ;

constexpr void __cordl_internal_set_areBothTouching(bool  value) ;

constexpr void __cordl_internal_set_audioManager(::UnityW<::GlobalNamespace::PlayerAudioManager>  value) ;

constexpr void __cordl_internal_set_audioSetToUnderwater(bool  value) ;

constexpr void __cordl_internal_set_averageSlipPercentage(float_t  value) ;

constexpr void __cordl_internal_set_averagedVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_bodyCollisionContacts(::ArrayW<::UnityEngine::ContactPoint>  value) ;

constexpr void __cordl_internal_set_bodyCollisionContactsCount(int32_t  value) ;

constexpr void __cordl_internal_set_bodyGroundContact(::UnityEngine::ContactPoint  value) ;

constexpr void __cordl_internal_set_bodyGroundContactTime(float_t  value) ;

constexpr void __cordl_internal_set_bodyHitInfo(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_bodyInWater(bool  value) ;

constexpr void __cordl_internal_set_bodyInitialRadius(float_t  value) ;

constexpr void __cordl_internal_set_bodyLerp(float_t  value) ;

constexpr void __cordl_internal_set_bodyMaxRadius(float_t  value) ;

constexpr void __cordl_internal_set_bodyOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bodyOffsetVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bodyOverlappingWaterVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value) ;

constexpr void __cordl_internal_set_bodyTouchedSurfaces(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>*  value) ;

constexpr void __cordl_internal_set_bodyVelocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value) ;

constexpr void __cordl_internal_set_boostEnabledUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_bufferCount(int32_t  value) ;

constexpr void __cordl_internal_set_buoyancyExtension(float_t  value) ;

constexpr void __cordl_internal_set_calcDeltaTime(float_t  value) ;

constexpr void __cordl_internal_set_climbHelper(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_climbHelperTargetPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_collidedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_controllerState(::UnityW<::GlobalNamespace::ConnectedControllerHandler>  value) ;

constexpr void __cordl_internal_set_cosmeticsHeadTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_crazyCheckVectors(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_currentBodyHeight(float_t  value) ;

constexpr void __cordl_internal_set_currentClimbable(::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  value) ;

constexpr void __cordl_internal_set_currentClimber(::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  value) ;

constexpr void __cordl_internal_set_currentMaterialIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentOverride(::UnityW<::GlobalNamespace::GorillaSurfaceOverride>  value) ;

constexpr void __cordl_internal_set_currentPlatform(::UnityW<::GlobalNamespace::BasePlatform>  value) ;

constexpr void __cordl_internal_set_currentSlopDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentSwing(::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  value) ;

constexpr void __cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentZipline(::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline>  value) ;

constexpr void __cordl_internal_set_debugDrawSwimming(bool  value) ;

constexpr void __cordl_internal_set_debugFreezeTag(bool  value) ;

constexpr void __cordl_internal_set_debugLastRightHandPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugMovement(bool  value) ;

constexpr void __cordl_internal_set_debugPlatformDeltaPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_defaultPrecision(float_t  value) ;

constexpr void __cordl_internal_set_defaultSlideFactor(float_t  value) ;

constexpr void __cordl_internal_set_degreesTurnedThisFrame(float_t  value) ;

constexpr void __cordl_internal_set_didAJump(bool  value) ;

constexpr void __cordl_internal_set_didHoverLastFrame(bool  value) ;

constexpr void __cordl_internal_set_disableMovement(bool  value) ;

constexpr void __cordl_internal_set_emptyHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_exitMovingSurface(bool  value) ;

constexpr void __cordl_internal_set_exitMovingSurfaceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_findMatName(::StringW  value) ;

constexpr void __cordl_internal_set_firstPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_forceRBSync(bool  value) ;

constexpr void __cordl_internal_set_foundMatData(::GlobalNamespace::GTPlayer_MaterialData  value) ;

constexpr void __cordl_internal_set_frameCount(double_t  value) ;

constexpr void __cordl_internal_set_freezeTagHandSlidePercent(float_t  value) ;

constexpr void __cordl_internal_set_frictionConstant(float_t  value) ;

constexpr void __cordl_internal_set_frozenBodyBuoyancyFactor(float_t  value) ;

constexpr void __cordl_internal_set_geodeHitEffects(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_gravityOverrides(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>*  value) ;

constexpr void __cordl_internal_set_halloweenLevitateBonusFullAtYSpeed(float_t  value) ;

constexpr void __cordl_internal_set_halloweenLevitateBonusOffAtYSpeed(float_t  value) ;

constexpr void __cordl_internal_set_halloweenLevitationBonusStrength(float_t  value) ;

constexpr void __cordl_internal_set_halloweenLevitationFullStrengthDuration(float_t  value) ;

constexpr void __cordl_internal_set_halloweenLevitationStrength(float_t  value) ;

constexpr void __cordl_internal_set_halloweenLevitationTotalDuration(float_t  value) ;

constexpr void __cordl_internal_set_hasCorrectedForTracking(bool  value) ;

constexpr void __cordl_internal_set_hasHoverPoint(bool  value) ;

constexpr void __cordl_internal_set_hasLeftHandTentacleMove(bool  value) ;

constexpr void __cordl_internal_set_hasRightHandTentacleMove(bool  value) ;

constexpr void __cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_headInWater(bool  value) ;

constexpr void __cordl_internal_set_headOverlappingWaterVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  value) ;

constexpr void __cordl_internal_set_headSlideNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headSlipPercentage(float_t  value) ;

constexpr void __cordl_internal_set_hoverBodyCollisionRadiusUpOffset(float_t  value) ;

constexpr void __cordl_internal_set_hoverBodyHasCollisionsOutsideRadius(float_t  value) ;

constexpr void __cordl_internal_set_hoverCarveAngleResponsiveness(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_hoverCarveSidewaysSpeedLossFactor(float_t  value) ;

constexpr void __cordl_internal_set_hoverGeneralUpwardForce(float_t  value) ;

constexpr void __cordl_internal_set_hoverIdealHeight(float_t  value) ;

constexpr void __cordl_internal_set_hoverMaxPaddleSpeed(float_t  value) ;

constexpr void __cordl_internal_set_hoverMinGrindSpeed(float_t  value) ;

constexpr void __cordl_internal_set_hoverSlamJumpStrengthFactor(float_t  value) ;

constexpr void __cordl_internal_set_hoverTiltAdjustsForwardFactor(float_t  value) ;

constexpr void __cordl_internal_set_hoverboardAudio(::UnityW<::GlobalNamespace::HoverboardAudio>  value) ;

constexpr void __cordl_internal_set_hoverboardBoostGracePeriod(float_t  value) ;

constexpr void __cordl_internal_set_hoverboardCasts(::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast>  value) ;

constexpr void __cordl_internal_set_hoverboardLocomotionLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_hoverboardPaddleBoostMax(float_t  value) ;

constexpr void __cordl_internal_set_hoverboardPaddleBoostMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_hoverboardPlayerLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hoverboardPlayerLocalRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_hoverboardVisual(::UnityW<::GlobalNamespace::HoverboardVisual>  value) ;

constexpr void __cordl_internal_set_hoveringSlowSpeed(float_t  value) ;

constexpr void __cordl_internal_set_hoveringSlowStoppingFactor(float_t  value) ;

constexpr void __cordl_internal_set_iceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_inHoverAreas(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>*  value) ;

constexpr void __cordl_internal_set_inHoverDisablers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>*  value) ;

constexpr void __cordl_internal_set_inOverlay(bool  value) ;

constexpr void __cordl_internal_set_isAttachedToTrain(bool  value) ;

constexpr void __cordl_internal_set_isClimbableMoving(bool  value) ;

constexpr void __cordl_internal_set_isClimbing(bool  value) ;

constexpr void __cordl_internal_set_isHandHoldMoving(bool  value) ;

constexpr void __cordl_internal_set_isUserPresent(bool  value) ;

constexpr void __cordl_internal_set_junkHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_lastAttachedToMovingSurfaceFrame(int32_t  value) ;

constexpr void __cordl_internal_set_lastClimbableRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastFrameHasValidTouchPos(bool  value) ;

constexpr void __cordl_internal_set_lastFrameTouchPosLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastFrameTouchPosWorld(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastHandHoldRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastHeadPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastHitInfoHand(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_lastMonkeBlock(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_lastMovingSurfaceContact(::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint  value) ;

constexpr void __cordl_internal_set_lastMovingSurfaceHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_lastMovingSurfaceID(int32_t  value) ;

constexpr void __cordl_internal_set_lastMovingSurfaceRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_lastMovingSurfaceTouchLocal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastMovingSurfaceTouchWorld(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastMovingSurfaceVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastOpenHeadPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastPlatformTouched(::UnityW<::GlobalNamespace::BasePlatform>  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastPreHandholdVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRealTime(float_t  value) ;

constexpr void __cordl_internal_set_lastRigidbodyPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastScale(float_t  value) ;

constexpr void __cordl_internal_set_lastSlopeDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastTouchedGroundTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_lastWaterSurfaceJumpTimeLeft(float_t  value) ;

constexpr void __cordl_internal_set_lastWaterSurfaceJumpTimeRight(float_t  value) ;

constexpr void __cordl_internal_set_layerChanger(::UnityW<::GorillaTagScripts::LayerChanger>  value) ;

constexpr void __cordl_internal_set_leftHand(::GlobalNamespace::GTPlayer_HandState  value) ;

constexpr void __cordl_internal_set_leftHandNonDiveHapticsAmount(float_t  value) ;

constexpr void __cordl_internal_set_leftHandTentacleMove(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandWaterSurface(::GlobalNamespace::WaterVolume_SurfaceQuery  value) ;

constexpr void __cordl_internal_set_leftHandWaterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

constexpr void __cordl_internal_set_liquidPropertiesList(::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>*  value) ;

constexpr void __cordl_internal_set_locomotionEnabledLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_materialDatasSO(::UnityW<::GorillaTag::MaterialDatasSO>  value) ;

constexpr void __cordl_internal_set_maxArmLength(float_t  value) ;

constexpr void __cordl_internal_set_maxJumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxSphereSize1(float_t  value) ;

constexpr void __cordl_internal_set_maxSphereSize2(float_t  value) ;

constexpr void __cordl_internal_set_meshCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_meshTrianglesDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*  value) ;

constexpr void __cordl_internal_set_minimumRaycastDistance(float_t  value) ;

constexpr void __cordl_internal_set_movementToProjectedAboveCollisionPlane(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_movingHandHoldReleaseVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_movingSurfaceOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_nativeScale(float_t  value) ;

constexpr void __cordl_internal_set_nativeScaleMagnitudeAdjustmentFactor(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_overlapAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_overlapColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_platformTouchOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_playerRigidbodyInterpolationDefault(::UnityEngine::RigidbodyInterpolation  value) ;

constexpr void __cordl_internal_set_playerRotationOverride(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_playerRotationOverrideDecayRate(float_t  value) ;

constexpr void __cordl_internal_set_playerRotationOverrideFrame(int32_t  value) ;

constexpr void __cordl_internal_set_primaryButtonPressed(bool  value) ;

constexpr void __cordl_internal_set_rayCastNonAllocColliders(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_refMovement(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHand(::GlobalNamespace::GTPlayer_HandState  value) ;

constexpr void __cordl_internal_set_rightHandNonDiveHapticsAmount(float_t  value) ;

constexpr void __cordl_internal_set_rightHandTentacleMove(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHandWaterSurface(::GlobalNamespace::WaterVolume_SurfaceQuery  value) ;

constexpr void __cordl_internal_set_rightHandWaterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

constexpr void __cordl_internal_set_scaleMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_secondLastPreHandholdVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_secondaryHandHold(::GlobalNamespace::GTPlayer_HandHoldState  value) ;

constexpr void __cordl_internal_set_sharedMeshTris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_sidewaysDrag(float_t  value) ;

constexpr void __cordl_internal_set_sizeLayerMask(int32_t  value) ;

constexpr void __cordl_internal_set_slideAverageHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_slideAverageNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_slideControl(float_t  value) ;

constexpr void __cordl_internal_set_slideFactor(float_t  value) ;

constexpr void __cordl_internal_set_slideRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_slideVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_slideVelocityLimit(float_t  value) ;

constexpr void __cordl_internal_set_slidingMinimum(float_t  value) ;

constexpr void __cordl_internal_set_slipperyMaterial(::UnityW<::UnityEngine::PhysicsMaterial>  value) ;

constexpr void __cordl_internal_set_stickDepth(float_t  value) ;

constexpr void __cordl_internal_set_stiltStates(::ArrayW<::GlobalNamespace::GTPlayer_HandState>  value) ;

constexpr void __cordl_internal_set_stuckLeft(bool  value) ;

constexpr void __cordl_internal_set_stuckRight(bool  value) ;

constexpr void __cordl_internal_set_surfaceDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_swimmingParamsList(::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>*  value) ;

constexpr void __cordl_internal_set_swimmingVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_teleportThresholdNoVel(float_t  value) ;

constexpr void __cordl_internal_set_teleportToTrain(bool  value) ;

constexpr void __cordl_internal_set_tempFreezeLeftHandEnableTime(double_t  value) ;

constexpr void __cordl_internal_set_tempFreezeRightHandEnableTime(double_t  value) ;

constexpr void __cordl_internal_set_tempHitInfo(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_tempIterativeHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_tempMaterialArray(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_tempRealTime(float_t  value) ;

constexpr void __cordl_internal_set_trianglesList(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_turnParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_unStickDistance(float_t  value) ;

constexpr void __cordl_internal_set_updateRB(bool  value) ;

constexpr void __cordl_internal_set_velocityHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_velocityHistorySize(int32_t  value) ;

constexpr void __cordl_internal_set_velocityIndex(int32_t  value) ;

constexpr void __cordl_internal_set_velocityLimit(float_t  value) ;

constexpr void __cordl_internal_set_vertex1(int32_t  value) ;

constexpr void __cordl_internal_set_vertex2(int32_t  value) ;

constexpr void __cordl_internal_set_vertex3(int32_t  value) ;

constexpr void __cordl_internal_set_wasBodyOnGround(bool  value) ;

constexpr void __cordl_internal_set_wasHeadTouching(bool  value) ;

constexpr void __cordl_internal_set_wasHoldingHandhold(bool  value) ;

constexpr void __cordl_internal_set_wasMovingSurfaceMonkeBlock(bool  value) ;

constexpr void __cordl_internal_set_waterLayer(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_waterParams(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value) ;

constexpr void __cordl_internal_set_waterSurfaceForHead(::GlobalNamespace::WaterVolume_SurfaceQuery  value) ;

constexpr void __cordl_internal_set_waterSurfaceJumpCooldown(float_t  value) ;

constexpr void __cordl_internal_set_wizardStaffSlamEffects(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5cd044c, size 0x7ac, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method enablePlayerGravity, addr 0x5ccf008, size 0x1c, virtual false, abstract: false, final false
inline void enablePlayerGravity(bool  useGravity) ;

static inline ::UnityEngine::LayerMask getStaticF_LocomotionEnabledLayers() ;

static inline ::UnityW<::GorillaLocomotion::GTPlayer> getStaticF__instance() ;

static inline bool getStaticF_hasInstance() ;

/// @brief Method get_AveragedVelocity, addr 0x5cbb534, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_AveragedVelocity() ;

/// @brief Method get_BodyOnGround, addr 0x5cbba90, size 0x34, virtual false, abstract: false, final false
inline bool get_BodyOnGround() ;

/// @brief Method get_CosmeticsHeadTarget, addr 0x5cbb544, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_CosmeticsHeadTarget() ;

/// @brief Method get_CurrentClimbable, addr 0x5cbbc0c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable> get_CurrentClimbable() ;

/// @brief Method get_CurrentClimber, addr 0x5cbbc14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber> get_CurrentClimber() ;

/// @brief Method get_CurrentWaterVolume, addr 0x5cbb888, size 0xd0, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> get_CurrentWaterVolume() ;

/// @brief Method get_GravityOverrideCount, addr 0x5cbdcd8, size 0x50, virtual false, abstract: false, final false
inline int32_t get_GravityOverrideCount() ;

/// @brief Method get_HandContactingSurface, addr 0x5cbba70, size 0x20, virtual false, abstract: false, final false
inline bool get_HandContactingSurface() ;

/// @brief Method get_HeadCenterPosition, addr 0x5cbb9e4, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_HeadCenterPosition() ;

/// @brief Method get_HeadInWater, addr 0x5cbb880, size 0x8, virtual false, abstract: false, final false
inline bool get_HeadInWater() ;

/// @brief Method get_HeadOverlappingWaterVolumes, addr 0x5cbb870, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>* get_HeadOverlappingWaterVolumes() ;

/// @brief Method get_InWater, addr 0x5cbb878, size 0x8, virtual false, abstract: false, final false
inline bool get_InWater() ;

/// @brief Method get_Instance, addr 0x5cbafa0, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaLocomotion::GTPlayer> get_Instance() ;

/// @brief Method get_InstantaneousVelocity, addr 0x5cbb524, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_InstantaneousVelocity() ;

/// [CompilerGenerated]
/// @brief Method get_IsBodySliding, addr 0x5cbbbec, size 0x8, virtual false, abstract: false, final false
inline bool get_IsBodySliding() ;

/// @brief Method get_IsDefaultScale, addr 0x5cbb70c, size 0x28, virtual false, abstract: false, final false
inline bool get_IsDefaultScale() ;

/// [CompilerGenerated]
/// @brief Method get_IsFrozen, addr 0x5cbb840, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFrozen() ;

/// @brief Method get_IsGroundedButt, addr 0x5cbbafc, size 0x34, virtual false, abstract: false, final false
inline bool get_IsGroundedButt() ;

/// @brief Method get_IsGroundedHand, addr 0x5cbbac4, size 0x38, virtual false, abstract: false, final false
inline bool get_IsGroundedHand() ;

/// @brief Method get_IsLaserZiplineActive, addr 0x5cbbb70, size 0x20, virtual false, abstract: false, final false
inline bool get_IsLaserZiplineActive() ;

/// @brief Method get_IsTentacleActive, addr 0x5cbbb40, size 0x20, virtual false, abstract: false, final false
inline bool get_IsTentacleActive() ;

/// @brief Method get_IsThrusterActive, addr 0x5cbbba0, size 0x20, virtual false, abstract: false, final false
inline bool get_IsThrusterActive() ;

/// [CompilerGenerated]
/// @brief Method get_LaserZiplineActiveAtFrame, addr 0x5cbbb60, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LaserZiplineActiveAtFrame() ;

/// [CompilerGenerated]
/// @brief Method get_LastHandTouchedGroundAtNetworkTime, addr 0x5cbbc3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_LastHandTouchedGroundAtNetworkTime() ;

/// @brief Method get_LastLeftHandPosition, addr 0x5cbb9b0, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastLeftHandPosition() ;

/// @brief Method get_LastPosition, addr 0x5cbb514, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastPosition() ;

/// @brief Method get_LastRightHandPosition, addr 0x5cbb9bc, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LastRightHandPosition() ;

/// [CompilerGenerated]
/// @brief Method get_LastTouchedGroundAtNetworkTime, addr 0x5cbbc2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_LastTouchedGroundAtNetworkTime() ;

/// @brief Method get_LeftHand, addr 0x5cbb164, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTPlayer_HandState get_LeftHand() ;

/// @brief Method get_LeftHandRef, addr 0x5cbb174, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::GTPlayer_HandState> get_LeftHandRef() ;

/// @brief Method get_LeftHandWaterSurface, addr 0x5cbb980, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::WaterVolume_SurfaceQuery get_LeftHandWaterSurface() ;

/// @brief Method get_LeftHandWaterVolume, addr 0x5cbb970, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> get_LeftHandWaterVolume() ;

/// @brief Method get_NativeScale, addr 0x5cbb55c, size 0x8, virtual false, abstract: false, final false
inline float_t get_NativeScale() ;

/// @brief Method get_RightHand, addr 0x5cbb17c, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTPlayer_HandState get_RightHand() ;

/// @brief Method get_RightHandRef, addr 0x5cbb18c, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::GTPlayer_HandState> get_RightHandRef() ;

/// @brief Method get_RightHandWaterSurface, addr 0x5cbb998, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::WaterVolume_SurfaceQuery get_RightHandWaterSurface() ;

/// @brief Method get_RightHandWaterVolume, addr 0x5cbb978, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> get_RightHandWaterVolume() ;

/// @brief Method get_RigidbodyInterpolation, addr 0x5ccf044, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::RigidbodyInterpolation get_RigidbodyInterpolation() ;

/// @brief Method get_RigidbodyVelocity, addr 0x5cbb9cc, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_RigidbodyVelocity() ;

/// @brief Method get_ScaleMultiplier, addr 0x5cbb564, size 0x8, virtual false, abstract: false, final false
inline float_t get_ScaleMultiplier() ;

/// [CompilerGenerated]
/// @brief Method get_TentacleActiveAtFrame, addr 0x5cbbb30, size 0x8, virtual false, abstract: false, final false
inline int32_t get_TentacleActiveAtFrame() ;

/// [CompilerGenerated]
/// @brief Method get_ThrusterActiveAtFrame, addr 0x5cbbb90, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ThrusterActiveAtFrame() ;

/// @brief Method get_WaterSurfaceForHead, addr 0x5cbb958, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::WaterVolume_SurfaceQuery get_WaterSurfaceForHead() ;

/// [CompilerGenerated]
/// @brief Method get_bodyGroundIsSlippery, addr 0x5cbbbfc, size 0x8, virtual false, abstract: false, final false
inline bool get_bodyGroundIsSlippery() ;

/// @brief Method get_bodyInitialHeight, addr 0x5cbaff8, size 0x16c, virtual false, abstract: false, final false
inline float_t get_bodyInitialHeight() ;

/// [CompilerGenerated]
/// @brief Method get_enableHoverMode, addr 0x5cc2a18, size 0x8, virtual false, abstract: false, final false
inline bool get_enableHoverMode() ;

/// [CompilerGenerated]
/// @brief Method get_forcedUnderwater, addr 0x5cbb850, size 0x8, virtual false, abstract: false, final false
inline bool get_forcedUnderwater() ;

/// [CompilerGenerated]
/// @brief Method get_isHoverAllowed, addr 0x5cc2a08, size 0x8, virtual false, abstract: false, final false
inline bool get_isHoverAllowed() ;

/// @brief Method get_jumpMultiplier, addr 0x5cbbc1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_jumpMultiplier() ;

/// @brief Method get_materialData, addr 0x5cbb744, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_MaterialData>* get_materialData() ;

/// [CompilerGenerated]
/// @brief Method get_playerRigidBody, addr 0x5cbb4fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_playerRigidBody() ;

/// @brief Method get_scale, addr 0x5cbb54c, size 0x10, virtual false, abstract: false, final false
inline float_t get_scale() ;

/// [CompilerGenerated]
/// @brief Method get_siJumpMultiplier, addr 0x5cbb860, size 0x8, virtual false, abstract: false, final false
inline float_t get_siJumpMultiplier() ;

/// @brief Method get_turnedThisFrame, addr 0x5cbb734, size 0x10, virtual false, abstract: false, final false
inline bool get_turnedThisFrame() ;

/// @brief Method handleClimbing, addr 0x5cc199c, size 0x5cc, virtual false, abstract: false, final false
inline void handleClimbing(float_t  deltaTime) ;

static inline void setStaticF_LocomotionEnabledLayers(::UnityEngine::LayerMask  value) ;

static inline void setStaticF__instance(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsBodySliding, addr 0x5cbbbf4, size 0x8, virtual false, abstract: false, final false
inline void set_IsBodySliding(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsFrozen, addr 0x5cbb848, size 0x8, virtual false, abstract: false, final false
inline void set_IsFrozen(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LaserZiplineActiveAtFrame, addr 0x5cbbb68, size 0x8, virtual false, abstract: false, final false
inline void set_LaserZiplineActiveAtFrame(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastHandTouchedGroundAtNetworkTime, addr 0x5cbbc44, size 0x8, virtual false, abstract: false, final false
inline void set_LastHandTouchedGroundAtNetworkTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastTouchedGroundAtNetworkTime, addr 0x5cbbc34, size 0x8, virtual false, abstract: false, final false
inline void set_LastTouchedGroundAtNetworkTime(float_t  value) ;

/// @brief Method set_PlayerRotationOverride, addr 0x5cbbbc0, size 0x2c, virtual false, abstract: false, final false
inline void set_PlayerRotationOverride(::UnityEngine::Quaternion  value) ;

/// @brief Method set_RigidbodyInterpolation, addr 0x5ccf05c, size 0x18, virtual false, abstract: false, final false
inline void set_RigidbodyInterpolation(::UnityEngine::RigidbodyInterpolation  value) ;

/// [CompilerGenerated]
/// @brief Method set_TentacleActiveAtFrame, addr 0x5cbbb38, size 0x8, virtual false, abstract: false, final false
inline void set_TentacleActiveAtFrame(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ThrusterActiveAtFrame, addr 0x5cbbb98, size 0x8, virtual false, abstract: false, final false
inline void set_ThrusterActiveAtFrame(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_bodyGroundIsSlippery, addr 0x5cbbc04, size 0x8, virtual false, abstract: false, final false
inline void set_bodyGroundIsSlippery(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_enableHoverMode, addr 0x5cc2a20, size 0x8, virtual false, abstract: false, final false
inline void set_enableHoverMode(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_forcedUnderwater, addr 0x5cbb858, size 0x8, virtual false, abstract: false, final false
inline void set_forcedUnderwater(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isHoverAllowed, addr 0x5cc2a10, size 0x8, virtual false, abstract: false, final false
inline void set_isHoverAllowed(bool  value) ;

/// @brief Method set_jumpMultiplier, addr 0x5cbbc24, size 0x8, virtual false, abstract: false, final false
inline void set_jumpMultiplier(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_playerRigidBody, addr 0x5cbb504, size 0x10, virtual false, abstract: false, final false
inline void set_playerRigidBody(::UnityEngine::Rigidbody*  value) ;

/// [CompilerGenerated]
/// @brief Method set_siJumpMultiplier, addr 0x5cbb868, size 0x8, virtual false, abstract: false, final false
inline void set_siJumpMultiplier(float_t  value) ;

/// @brief Method stuckHandsCheckFixedUpdate, addr 0x5cc1f68, size 0x5ec, virtual false, abstract: false, final false
inline void stuckHandsCheckFixedUpdate() ;

/// @brief Method stuckHandsCheckLateUpdate, addr 0x5ccab2c, size 0x68, virtual false, abstract: false, final false
inline void stuckHandsCheckLateUpdate(::by_ref<::UnityEngine::Vector3>  finalLeftHandPosition, ::by_ref<::UnityEngine::Vector3>  finalRightHandPosition) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTPlayer(GTPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTPlayer(GTPlayer const& ) = delete;

/// @brief Field CameraFarClipDefault offset 0xffffffff size 0x4
static constexpr float_t  CameraFarClipDefault{static_cast<float_t>(500.0f)};

/// @brief Field CameraNearClipDefault offset 0xffffffff size 0x4
static constexpr float_t  CameraNearClipDefault{static_cast<float_t>(0.01f)};

/// @brief Field CameraNearClipTiny offset 0xffffffff size 0x4
static constexpr float_t  CameraNearClipTiny{static_cast<float_t>(0.002f)};

/// @brief Field MIN_FRAMES_OFF_SURFACE_TO_DETACH offset 0xffffffff size 0x4
static constexpr int32_t  MIN_FRAMES_OFF_SURFACE_TO_DETACH{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4506};

/// @brief Field climbHelperSmoothSnapSpeed offset 0xffffffff size 0x4
static constexpr float_t  climbHelperSmoothSnapSpeed{static_cast<float_t>(12.0f)};

/// @brief Field climbingMaxThrowSpeed offset 0xffffffff size 0x4
static constexpr float_t  climbingMaxThrowSpeed{static_cast<float_t>(5.5f)};

/// @brief Field movingSurfaceVelocityLimit offset 0xffffffff size 0x4
static constexpr float_t  movingSurfaceVelocityLimit{static_cast<float_t>(40.0f)};

/// @brief Field mainCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mainCamera;

/// @brief Field headCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___headCollider;

/// @brief Field bodyCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___bodyCollider;

/// @brief Field bodyInitialRadius, offset: 0x38, size: 0x4, def value: None
 float_t  ___bodyInitialRadius;

/// @brief Field _bodyInitialHeight, offset: 0x3c, size: 0x4, def value: None
 float_t  ____bodyInitialHeight;

/// @brief Field currentBodyHeight, offset: 0x40, size: 0x4, def value: None
 float_t  ___currentBodyHeight;

/// @brief Field frameCount, offset: 0x48, size: 0x8, def value: None
 double_t  ___frameCount;

/// @brief Field bodyHitInfo, offset: 0x50, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___bodyHitInfo;

/// @brief Field lastHitInfoHand, offset: 0x7c, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___lastHitInfoHand;

/// @brief Field bodyVelocityTracker, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  ___bodyVelocityTracker;

/// @brief Field audioManager, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerAudioManager>  ___audioManager;

/// [SerializeField]
/// @brief Field leftHand, offset: 0xb8, size: 0x120, def value: None
 ::GlobalNamespace::GTPlayer_HandState  ___leftHand;

/// [SerializeField]
/// @brief Field rightHand, offset: 0x1d8, size: 0x120, def value: None
 ::GlobalNamespace::GTPlayer_HandState  ___rightHand;

/// @brief Field stiltStates, offset: 0x2f8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTPlayer_HandState>  ___stiltStates;

/// @brief Field anyHandIsColliding, offset: 0x300, size: 0x1, def value: None
 bool  ___anyHandIsColliding;

/// @brief Field anyHandWasColliding, offset: 0x301, size: 0x1, def value: None
 bool  ___anyHandWasColliding;

/// @brief Field anyHandIsSliding, offset: 0x302, size: 0x1, def value: None
 bool  ___anyHandIsSliding;

/// @brief Field anyHandWasSliding, offset: 0x303, size: 0x1, def value: None
 bool  ___anyHandWasSliding;

/// @brief Field anyHandIsSticking, offset: 0x304, size: 0x1, def value: None
 bool  ___anyHandIsSticking;

/// @brief Field anyHandWasSticking, offset: 0x305, size: 0x1, def value: None
 bool  ___anyHandWasSticking;

/// @brief Field forceRBSync, offset: 0x306, size: 0x1, def value: None
 bool  ___forceRBSync;

/// @brief Field lastHeadPosition, offset: 0x308, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastHeadPosition;

/// @brief Field lastRigidbodyPosition, offset: 0x314, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRigidbodyPosition;

/// [CompilerGenerated]
/// @brief Field <playerRigidBody>k__BackingField, offset: 0x320, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____playerRigidBody_k__BackingField;

/// @brief Field playerRigidbodyInterpolationDefault, offset: 0x328, size: 0x4, def value: None
 ::UnityEngine::RigidbodyInterpolation  ___playerRigidbodyInterpolationDefault;

/// @brief Field velocityHistorySize, offset: 0x32c, size: 0x4, def value: None
 int32_t  ___velocityHistorySize;

/// @brief Field maxArmLength, offset: 0x330, size: 0x4, def value: None
 float_t  ___maxArmLength;

/// @brief Field unStickDistance, offset: 0x334, size: 0x4, def value: None
 float_t  ___unStickDistance;

/// @brief Field velocityLimit, offset: 0x338, size: 0x4, def value: None
 float_t  ___velocityLimit;

/// @brief Field slideVelocityLimit, offset: 0x33c, size: 0x4, def value: None
 float_t  ___slideVelocityLimit;

/// @brief Field maxJumpSpeed, offset: 0x340, size: 0x4, def value: None
 float_t  ___maxJumpSpeed;

/// @brief Field _jumpMultiplier, offset: 0x344, size: 0x4, def value: None
 float_t  ____jumpMultiplier;

/// @brief Field minimumRaycastDistance, offset: 0x348, size: 0x4, def value: None
 float_t  ___minimumRaycastDistance;

/// @brief Field defaultSlideFactor, offset: 0x34c, size: 0x4, def value: None
 float_t  ___defaultSlideFactor;

/// @brief Field slidingMinimum, offset: 0x350, size: 0x4, def value: None
 float_t  ___slidingMinimum;

/// @brief Field defaultPrecision, offset: 0x354, size: 0x4, def value: None
 float_t  ___defaultPrecision;

/// @brief Field teleportThresholdNoVel, offset: 0x358, size: 0x4, def value: None
 float_t  ___teleportThresholdNoVel;

/// @brief Field frictionConstant, offset: 0x35c, size: 0x4, def value: None
 float_t  ___frictionConstant;

/// @brief Field slideControl, offset: 0x360, size: 0x4, def value: None
 float_t  ___slideControl;

/// @brief Field stickDepth, offset: 0x364, size: 0x4, def value: None
 float_t  ___stickDepth;

/// @brief Field velocityHistory, offset: 0x368, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___velocityHistory;

/// @brief Field slideAverageHistory, offset: 0x370, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___slideAverageHistory;

/// @brief Field velocityIndex, offset: 0x378, size: 0x4, def value: None
 int32_t  ___velocityIndex;

/// @brief Field currentVelocity, offset: 0x37c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentVelocity;

/// @brief Field averagedVelocity, offset: 0x388, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___averagedVelocity;

/// @brief Field lastPosition, offset: 0x394, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field bodyOffset, offset: 0x3a0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bodyOffset;

/// @brief Field locomotionEnabledLayers, offset: 0x3ac, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___locomotionEnabledLayers;

/// @brief Field hoverboardLocomotionLayers, offset: 0x3b0, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___hoverboardLocomotionLayers;

/// @brief Field waterLayer, offset: 0x3b4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___waterLayer;

/// @brief Field wasHeadTouching, offset: 0x3b8, size: 0x1, def value: None
 bool  ___wasHeadTouching;

/// @brief Field currentMaterialIndex, offset: 0x3bc, size: 0x4, def value: None
 int32_t  ___currentMaterialIndex;

/// @brief Field headSlideNormal, offset: 0x3c0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headSlideNormal;

/// @brief Field headSlipPercentage, offset: 0x3cc, size: 0x4, def value: None
 float_t  ___headSlipPercentage;

/// [SerializeField]
/// @brief Field cosmeticsHeadTarget, offset: 0x3d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cosmeticsHeadTarget;

/// [SerializeField]
/// @brief Field nativeScale, offset: 0x3d8, size: 0x4, def value: None
 float_t  ___nativeScale;

/// [SerializeField]
/// @brief Field scaleMultiplier, offset: 0x3dc, size: 0x4, def value: None
 float_t  ___scaleMultiplier;

/// @brief Field activeSizeChangerSettings, offset: 0x3e0, size: 0x8, def value: None
 ::GlobalNamespace::NativeSizeChangerSettings*  ___activeSizeChangerSettings;

/// @brief Field debugMovement, offset: 0x3e8, size: 0x1, def value: None
 bool  ___debugMovement;

/// @brief Field disableMovement, offset: 0x3e9, size: 0x1, def value: None
 bool  ___disableMovement;

/// @brief Field inOverlay, offset: 0x3ea, size: 0x1, def value: None
 bool  ___inOverlay;

/// @brief Field isUserPresent, offset: 0x3eb, size: 0x1, def value: None
 bool  ___isUserPresent;

/// @brief Field turnParent, offset: 0x3f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___turnParent;

/// [SerializeField]
/// @brief Field RecordingRig, offset: 0x3f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___RecordingRig;

/// @brief Field currentOverride, offset: 0x400, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSurfaceOverride>  ___currentOverride;

/// @brief Field materialDatasSO, offset: 0x408, size: 0x8, def value: None
 ::UnityW<::GorillaTag::MaterialDatasSO>  ___materialDatasSO;

/// @brief Field degreesTurnedThisFrame, offset: 0x410, size: 0x4, def value: None
 float_t  ___degreesTurnedThisFrame;

/// @brief Field bodyOffsetVector, offset: 0x414, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bodyOffsetVector;

/// @brief Field movementToProjectedAboveCollisionPlane, offset: 0x420, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___movementToProjectedAboveCollisionPlane;

/// @brief Field meshCollider, offset: 0x430, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___meshCollider;

/// @brief Field collidedMesh, offset: 0x438, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___collidedMesh;

/// @brief Field foundMatData, offset: 0x440, size: 0x28, def value: None
 ::GlobalNamespace::GTPlayer_MaterialData  ___foundMatData;

/// @brief Field findMatName, offset: 0x468, size: 0x8, def value: None
 ::StringW  ___findMatName;

/// @brief Field vertex1, offset: 0x470, size: 0x4, def value: None
 int32_t  ___vertex1;

/// @brief Field vertex2, offset: 0x474, size: 0x4, def value: None
 int32_t  ___vertex2;

/// @brief Field vertex3, offset: 0x478, size: 0x4, def value: None
 int32_t  ___vertex3;

/// @brief Field trianglesList, offset: 0x480, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___trianglesList;

/// @brief Field meshTrianglesDict, offset: 0x488, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Mesh>,::ArrayW<int32_t>>*  ___meshTrianglesDict;

/// @brief Field sharedMeshTris, offset: 0x490, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___sharedMeshTris;

/// @brief Field lastRealTime, offset: 0x498, size: 0x4, def value: None
 float_t  ___lastRealTime;

/// @brief Field calcDeltaTime, offset: 0x49c, size: 0x4, def value: None
 float_t  ___calcDeltaTime;

/// @brief Field tempRealTime, offset: 0x4a0, size: 0x4, def value: None
 float_t  ___tempRealTime;

/// @brief Field slideVelocity, offset: 0x4a4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___slideVelocity;

/// @brief Field slideAverageNormal, offset: 0x4b0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___slideAverageNormal;

/// @brief Field tempHitInfo, offset: 0x4bc, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___tempHitInfo;

/// @brief Field junkHit, offset: 0x4e8, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___junkHit;

/// @brief Field firstPosition, offset: 0x514, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___firstPosition;

/// @brief Field tempIterativeHit, offset: 0x520, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___tempIterativeHit;

/// @brief Field maxSphereSize1, offset: 0x54c, size: 0x4, def value: None
 float_t  ___maxSphereSize1;

/// @brief Field maxSphereSize2, offset: 0x550, size: 0x4, def value: None
 float_t  ___maxSphereSize2;

/// @brief Field overlapColliders, offset: 0x558, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___overlapColliders;

/// @brief Field overlapAttempts, offset: 0x560, size: 0x4, def value: None
 int32_t  ___overlapAttempts;

/// @brief Field averageSlipPercentage, offset: 0x564, size: 0x4, def value: None
 float_t  ___averageSlipPercentage;

/// @brief Field surfaceDirection, offset: 0x568, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___surfaceDirection;

/// @brief Field iceThreshold, offset: 0x574, size: 0x4, def value: None
 float_t  ___iceThreshold;

/// @brief Field bodyMaxRadius, offset: 0x578, size: 0x4, def value: None
 float_t  ___bodyMaxRadius;

/// @brief Field bodyLerp, offset: 0x57c, size: 0x4, def value: None
 float_t  ___bodyLerp;

/// @brief Field areBothTouching, offset: 0x580, size: 0x1, def value: None
 bool  ___areBothTouching;

/// @brief Field slideFactor, offset: 0x584, size: 0x4, def value: None
 float_t  ___slideFactor;

/// [DebugOption]
/// @brief Field didAJump, offset: 0x588, size: 0x1, def value: None
 bool  ___didAJump;

/// @brief Field updateRB, offset: 0x589, size: 0x1, def value: None
 bool  ___updateRB;

/// @brief Field slideRenderer, offset: 0x590, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___slideRenderer;

/// @brief Field rayCastNonAllocColliders, offset: 0x598, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___rayCastNonAllocColliders;

/// @brief Field crazyCheckVectors, offset: 0x5a0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___crazyCheckVectors;

/// @brief Field emptyHit, offset: 0x5a8, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___emptyHit;

/// @brief Field bufferCount, offset: 0x5d4, size: 0x4, def value: None
 int32_t  ___bufferCount;

/// @brief Field lastOpenHeadPosition, offset: 0x5d8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastOpenHeadPosition;

/// @brief Field tempMaterialArray, offset: 0x5e8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  ___tempMaterialArray;

/// @brief Field antiDriftLastPosition, offset: 0x5f0, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ___antiDriftLastPosition;

/// @brief Field bodyTouchedSurfaces, offset: 0x600, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::UnityW<::UnityEngine::PhysicsMaterial>>*  ___bodyTouchedSurfaces;

/// @brief Field primaryButtonPressed, offset: 0x608, size: 0x1, def value: None
 bool  ___primaryButtonPressed;

/// [Header("Swimming")]
/// @brief Field swimmingParamsList, offset: 0x610, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::PlayerSwimmingParameters>>*  ___swimmingParamsList;

/// @brief Field waterParams, offset: 0x618, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  ___waterParams;

/// @brief Field liquidPropertiesList, offset: 0x620, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GTPlayer_LiquidProperties>*  ___liquidPropertiesList;

/// @brief Field debugDrawSwimming, offset: 0x628, size: 0x1, def value: None
 bool  ___debugDrawSwimming;

/// [Header("Slam/Hit effects")]
/// @brief Field wizardStaffSlamEffects, offset: 0x630, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___wizardStaffSlamEffects;

/// @brief Field geodeHitEffects, offset: 0x638, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___geodeHitEffects;

/// [Header("Freeze Tag")]
/// @brief Field freezeTagHandSlidePercent, offset: 0x640, size: 0x4, def value: None
 float_t  ___freezeTagHandSlidePercent;

/// @brief Field debugFreezeTag, offset: 0x644, size: 0x1, def value: None
 bool  ___debugFreezeTag;

/// @brief Field frozenBodyBuoyancyFactor, offset: 0x648, size: 0x4, def value: None
 float_t  ___frozenBodyBuoyancyFactor;

/// [CompilerGenerated]
/// @brief Field <IsFrozen>k__BackingField, offset: 0x64c, size: 0x1, def value: None
 bool  ____IsFrozen_k__BackingField;

/// [Space]
/// @brief Field leftHandWaterVolume, offset: 0x650, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___leftHandWaterVolume;

/// @brief Field rightHandWaterVolume, offset: 0x658, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___rightHandWaterVolume;

/// @brief Field leftHandWaterSurface, offset: 0x660, size: 0x1c, def value: None
 ::GlobalNamespace::WaterVolume_SurfaceQuery  ___leftHandWaterSurface;

/// @brief Field rightHandWaterSurface, offset: 0x67c, size: 0x1c, def value: None
 ::GlobalNamespace::WaterVolume_SurfaceQuery  ___rightHandWaterSurface;

/// @brief Field swimmingVelocity, offset: 0x698, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___swimmingVelocity;

/// @brief Field waterSurfaceForHead, offset: 0x6a4, size: 0x1c, def value: None
 ::GlobalNamespace::WaterVolume_SurfaceQuery  ___waterSurfaceForHead;

/// @brief Field bodyInWater, offset: 0x6c0, size: 0x1, def value: None
 bool  ___bodyInWater;

/// @brief Field headInWater, offset: 0x6c1, size: 0x1, def value: None
 bool  ___headInWater;

/// @brief Field audioSetToUnderwater, offset: 0x6c2, size: 0x1, def value: None
 bool  ___audioSetToUnderwater;

/// @brief Field buoyancyExtension, offset: 0x6c4, size: 0x4, def value: None
 float_t  ___buoyancyExtension;

/// [CompilerGenerated]
/// @brief Field <forcedUnderwater>k__BackingField, offset: 0x6c8, size: 0x1, def value: None
 bool  ____forcedUnderwater_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <siJumpMultiplier>k__BackingField, offset: 0x6cc, size: 0x4, def value: None
 float_t  ____siJumpMultiplier_k__BackingField;

/// @brief Field lastWaterSurfaceJumpTimeLeft, offset: 0x6d0, size: 0x4, def value: None
 float_t  ___lastWaterSurfaceJumpTimeLeft;

/// @brief Field lastWaterSurfaceJumpTimeRight, offset: 0x6d4, size: 0x4, def value: None
 float_t  ___lastWaterSurfaceJumpTimeRight;

/// @brief Field waterSurfaceJumpCooldown, offset: 0x6d8, size: 0x4, def value: None
 float_t  ___waterSurfaceJumpCooldown;

/// @brief Field leftHandNonDiveHapticsAmount, offset: 0x6dc, size: 0x4, def value: None
 float_t  ___leftHandNonDiveHapticsAmount;

/// @brief Field rightHandNonDiveHapticsAmount, offset: 0x6e0, size: 0x4, def value: None
 float_t  ___rightHandNonDiveHapticsAmount;

/// @brief Field headOverlappingWaterVolumes, offset: 0x6e8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  ___headOverlappingWaterVolumes;

/// @brief Field bodyOverlappingWaterVolumes, offset: 0x6f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterVolume>>*  ___bodyOverlappingWaterVolumes;

/// @brief Field activeWaterCurrents, offset: 0x6f8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaLocomotion::Swimming::WaterCurrent>>*  ___activeWaterCurrents;

/// [CompilerGenerated]
/// @brief Field <TentacleActiveAtFrame>k__BackingField, offset: 0x700, size: 0x4, def value: None
 int32_t  ____TentacleActiveAtFrame_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LaserZiplineActiveAtFrame>k__BackingField, offset: 0x704, size: 0x4, def value: None
 int32_t  ____LaserZiplineActiveAtFrame_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ThrusterActiveAtFrame>k__BackingField, offset: 0x708, size: 0x4, def value: None
 int32_t  ____ThrusterActiveAtFrame_k__BackingField;

/// @brief Field playerRotationOverride, offset: 0x70c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___playerRotationOverride;

/// @brief Field playerRotationOverrideFrame, offset: 0x71c, size: 0x4, def value: None
 int32_t  ___playerRotationOverrideFrame;

/// @brief Field playerRotationOverrideDecayRate, offset: 0x720, size: 0x4, def value: None
 float_t  ___playerRotationOverrideDecayRate;

/// [CompilerGenerated]
/// @brief Field <IsBodySliding>k__BackingField, offset: 0x724, size: 0x1, def value: None
 bool  ____IsBodySliding_k__BackingField;

/// @brief Field bodyCollisionContacts, offset: 0x728, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::ContactPoint>  ___bodyCollisionContacts;

/// @brief Field bodyCollisionContactsCount, offset: 0x730, size: 0x4, def value: None
 int32_t  ___bodyCollisionContactsCount;

/// @brief Field bodyGroundContact, offset: 0x734, size: 0x30, def value: None
 ::UnityEngine::ContactPoint  ___bodyGroundContact;

/// @brief Field bodyGroundContactTime, offset: 0x764, size: 0x4, def value: None
 float_t  ___bodyGroundContactTime;

/// [CompilerGenerated]
/// @brief Field <bodyGroundIsSlippery>k__BackingField, offset: 0x768, size: 0x1, def value: None
 bool  ____bodyGroundIsSlippery_k__BackingField;

/// @brief Field exitMovingSurface, offset: 0x769, size: 0x1, def value: None
 bool  ___exitMovingSurface;

/// @brief Field exitMovingSurfaceThreshold, offset: 0x76c, size: 0x4, def value: None
 float_t  ___exitMovingSurfaceThreshold;

/// @brief Field isClimbableMoving, offset: 0x770, size: 0x1, def value: None
 bool  ___isClimbableMoving;

/// @brief Field lastClimbableRotation, offset: 0x774, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastClimbableRotation;

/// @brief Field lastAttachedToMovingSurfaceFrame, offset: 0x784, size: 0x4, def value: None
 int32_t  ___lastAttachedToMovingSurfaceFrame;

/// @brief Field isHandHoldMoving, offset: 0x788, size: 0x1, def value: None
 bool  ___isHandHoldMoving;

/// @brief Field lastHandHoldRotation, offset: 0x78c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastHandHoldRotation;

/// @brief Field movingHandHoldReleaseVelocity, offset: 0x79c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___movingHandHoldReleaseVelocity;

/// @brief Field lastMovingSurfaceContact, offset: 0x7a8, size: 0x4, def value: None
 ::GlobalNamespace::GTPlayer_MovingSurfaceContactPoint  ___lastMovingSurfaceContact;

/// @brief Field lastMovingSurfaceID, offset: 0x7ac, size: 0x4, def value: None
 int32_t  ___lastMovingSurfaceID;

/// @brief Field lastMonkeBlock, offset: 0x7b0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___lastMonkeBlock;

/// @brief Field lastMovingSurfaceRot, offset: 0x7b8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___lastMovingSurfaceRot;

/// @brief Field lastMovingSurfaceHit, offset: 0x7c8, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___lastMovingSurfaceHit;

/// @brief Field lastMovingSurfaceTouchLocal, offset: 0x7f4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastMovingSurfaceTouchLocal;

/// @brief Field lastMovingSurfaceTouchWorld, offset: 0x800, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastMovingSurfaceTouchWorld;

/// @brief Field movingSurfaceOffset, offset: 0x80c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___movingSurfaceOffset;

/// @brief Field wasMovingSurfaceMonkeBlock, offset: 0x818, size: 0x1, def value: None
 bool  ___wasMovingSurfaceMonkeBlock;

/// @brief Field lastMovingSurfaceVelocity, offset: 0x81c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastMovingSurfaceVelocity;

/// @brief Field wasBodyOnGround, offset: 0x828, size: 0x1, def value: None
 bool  ___wasBodyOnGround;

/// @brief Field currentPlatform, offset: 0x830, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BasePlatform>  ___currentPlatform;

/// @brief Field lastPlatformTouched, offset: 0x838, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BasePlatform>  ___lastPlatformTouched;

/// @brief Field lastFrameTouchPosLocal, offset: 0x840, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastFrameTouchPosLocal;

/// @brief Field lastFrameTouchPosWorld, offset: 0x84c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastFrameTouchPosWorld;

/// @brief Field lastFrameHasValidTouchPos, offset: 0x858, size: 0x1, def value: None
 bool  ___lastFrameHasValidTouchPos;

/// @brief Field refMovement, offset: 0x85c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___refMovement;

/// @brief Field platformTouchOffset, offset: 0x868, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___platformTouchOffset;

/// @brief Field debugLastRightHandPosition, offset: 0x874, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugLastRightHandPosition;

/// @brief Field debugPlatformDeltaPosition, offset: 0x880, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugPlatformDeltaPosition;

/// @brief Field tempFreezeRightHandEnableTime, offset: 0x890, size: 0x8, def value: None
 double_t  ___tempFreezeRightHandEnableTime;

/// @brief Field tempFreezeLeftHandEnableTime, offset: 0x898, size: 0x8, def value: None
 double_t  ___tempFreezeLeftHandEnableTime;

/// @brief Field isClimbing, offset: 0x8a0, size: 0x1, def value: None
 bool  ___isClimbing;

/// @brief Field currentClimbable, offset: 0x8a8, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaClimbable>  ___currentClimbable;

/// @brief Field currentClimber, offset: 0x8b0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>  ___currentClimber;

/// @brief Field climbHelperTargetPos, offset: 0x8b8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___climbHelperTargetPos;

/// @brief Field climbHelper, offset: 0x8c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___climbHelper;

/// @brief Field currentSwing, offset: 0x8d0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Gameplay::GorillaRopeSwing>  ___currentSwing;

/// @brief Field currentZipline, offset: 0x8d8, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Gameplay::GorillaZipline>  ___currentZipline;

/// [SerializeField]
/// @brief Field controllerState, offset: 0x8e0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ConnectedControllerHandler>  ___controllerState;

/// @brief Field sizeLayerMask, offset: 0x8e8, size: 0x4, def value: None
 int32_t  ___sizeLayerMask;

/// @brief Field InReportMenu, offset: 0x8ec, size: 0x1, def value: None
 bool  ___InReportMenu;

/// @brief Field layerChanger, offset: 0x8f0, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::LayerChanger>  ___layerChanger;

/// [CompilerGenerated]
/// @brief Field <LastTouchedGroundAtNetworkTime>k__BackingField, offset: 0x8f8, size: 0x4, def value: None
 float_t  ____LastTouchedGroundAtNetworkTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastHandTouchedGroundAtNetworkTime>k__BackingField, offset: 0x8fc, size: 0x4, def value: None
 float_t  ____LastHandTouchedGroundAtNetworkTime_k__BackingField;

/// @brief Field hasCorrectedForTracking, offset: 0x900, size: 0x1, def value: None
 bool  ___hasCorrectedForTracking;

/// @brief Field halloweenLevitationStrength, offset: 0x904, size: 0x4, def value: None
 float_t  ___halloweenLevitationStrength;

/// @brief Field halloweenLevitationFullStrengthDuration, offset: 0x908, size: 0x4, def value: None
 float_t  ___halloweenLevitationFullStrengthDuration;

/// @brief Field halloweenLevitationTotalDuration, offset: 0x90c, size: 0x4, def value: None
 float_t  ___halloweenLevitationTotalDuration;

/// @brief Field halloweenLevitationBonusStrength, offset: 0x910, size: 0x4, def value: None
 float_t  ___halloweenLevitationBonusStrength;

/// @brief Field halloweenLevitateBonusOffAtYSpeed, offset: 0x914, size: 0x4, def value: None
 float_t  ___halloweenLevitateBonusOffAtYSpeed;

/// @brief Field halloweenLevitateBonusFullAtYSpeed, offset: 0x918, size: 0x4, def value: None
 float_t  ___halloweenLevitateBonusFullAtYSpeed;

/// @brief Field lastTouchedGroundTimestamp, offset: 0x91c, size: 0x4, def value: None
 float_t  ___lastTouchedGroundTimestamp;

/// @brief Field teleportToTrain, offset: 0x920, size: 0x1, def value: None
 bool  ___teleportToTrain;

/// @brief Field isAttachedToTrain, offset: 0x921, size: 0x1, def value: None
 bool  ___isAttachedToTrain;

/// @brief Field stuckLeft, offset: 0x922, size: 0x1, def value: None
 bool  ___stuckLeft;

/// @brief Field stuckRight, offset: 0x923, size: 0x1, def value: None
 bool  ___stuckRight;

/// @brief Field lastScale, offset: 0x924, size: 0x4, def value: None
 float_t  ___lastScale;

/// @brief Field currentSlopDirection, offset: 0x928, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentSlopDirection;

/// @brief Field lastSlopeDirection, offset: 0x934, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastSlopeDirection;

/// @brief Field gravityOverrides, offset: 0x940, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>,::System::Action_1<::UnityW<::GorillaLocomotion::GTPlayer>>*>*  ___gravityOverrides;

/// [CompilerGenerated]
/// @brief Field <isHoverAllowed>k__BackingField, offset: 0x948, size: 0x1, def value: None
 bool  ____isHoverAllowed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <enableHoverMode>k__BackingField, offset: 0x949, size: 0x1, def value: None
 bool  ____enableHoverMode_k__BackingField;

/// @brief Field inHoverAreas, offset: 0x950, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::HoverboardAreaTrigger>>*  ___inHoverAreas;

/// @brief Field inHoverDisablers, offset: 0x958, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::ForceDisableHoverboardTrigger>>*  ___inHoverDisablers;

/// [Header("Hoverboard")]
/// [SerializeField]
/// @brief Field hoverIdealHeight, offset: 0x960, size: 0x4, def value: None
 float_t  ___hoverIdealHeight;

/// [SerializeField]
/// @brief Field hoverCarveSidewaysSpeedLossFactor, offset: 0x964, size: 0x4, def value: None
 float_t  ___hoverCarveSidewaysSpeedLossFactor;

/// [SerializeField]
/// @brief Field hoverCarveAngleResponsiveness, offset: 0x968, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___hoverCarveAngleResponsiveness;

/// [SerializeField]
/// @brief Field hoverboardVisual, offset: 0x970, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoverboardVisual>  ___hoverboardVisual;

/// [SerializeField]
/// @brief Field sidewaysDrag, offset: 0x978, size: 0x4, def value: None
 float_t  ___sidewaysDrag;

/// [SerializeField]
/// @brief Field hoveringSlowSpeed, offset: 0x97c, size: 0x4, def value: None
 float_t  ___hoveringSlowSpeed;

/// [SerializeField]
/// @brief Field hoveringSlowStoppingFactor, offset: 0x980, size: 0x4, def value: None
 float_t  ___hoveringSlowStoppingFactor;

/// [SerializeField]
/// @brief Field hoverboardPaddleBoostMultiplier, offset: 0x984, size: 0x4, def value: None
 float_t  ___hoverboardPaddleBoostMultiplier;

/// [SerializeField]
/// @brief Field hoverboardPaddleBoostMax, offset: 0x988, size: 0x4, def value: None
 float_t  ___hoverboardPaddleBoostMax;

/// [SerializeField]
/// @brief Field hoverboardBoostGracePeriod, offset: 0x98c, size: 0x4, def value: None
 float_t  ___hoverboardBoostGracePeriod;

/// [SerializeField]
/// @brief Field hoverBodyHasCollisionsOutsideRadius, offset: 0x990, size: 0x4, def value: None
 float_t  ___hoverBodyHasCollisionsOutsideRadius;

/// [SerializeField]
/// @brief Field hoverBodyCollisionRadiusUpOffset, offset: 0x994, size: 0x4, def value: None
 float_t  ___hoverBodyCollisionRadiusUpOffset;

/// [SerializeField]
/// @brief Field hoverGeneralUpwardForce, offset: 0x998, size: 0x4, def value: None
 float_t  ___hoverGeneralUpwardForce;

/// [SerializeField]
/// @brief Field hoverTiltAdjustsForwardFactor, offset: 0x99c, size: 0x4, def value: None
 float_t  ___hoverTiltAdjustsForwardFactor;

/// [SerializeField]
/// @brief Field hoverMinGrindSpeed, offset: 0x9a0, size: 0x4, def value: None
 float_t  ___hoverMinGrindSpeed;

/// [SerializeField]
/// @brief Field hoverSlamJumpStrengthFactor, offset: 0x9a4, size: 0x4, def value: None
 float_t  ___hoverSlamJumpStrengthFactor;

/// [SerializeField]
/// @brief Field hoverMaxPaddleSpeed, offset: 0x9a8, size: 0x4, def value: None
 float_t  ___hoverMaxPaddleSpeed;

/// [SerializeField]
/// @brief Field hoverboardAudio, offset: 0x9b0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoverboardAudio>  ___hoverboardAudio;

/// @brief Field hasHoverPoint, offset: 0x9b8, size: 0x1, def value: None
 bool  ___hasHoverPoint;

/// @brief Field boostEnabledUntilTimestamp, offset: 0x9bc, size: 0x4, def value: None
 float_t  ___boostEnabledUntilTimestamp;

/// @brief Field hoverboardCasts, offset: 0x9c0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTPlayer_HoverBoardCast>  ___hoverboardCasts;

/// @brief Field hoverboardPlayerLocalPos, offset: 0x9c8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___hoverboardPlayerLocalPos;

/// @brief Field hoverboardPlayerLocalRot, offset: 0x9d4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___hoverboardPlayerLocalRot;

/// @brief Field didHoverLastFrame, offset: 0x9e4, size: 0x1, def value: None
 bool  ___didHoverLastFrame;

/// @brief Field hasLeftHandTentacleMove, offset: 0x9e5, size: 0x1, def value: None
 bool  ___hasLeftHandTentacleMove;

/// @brief Field hasRightHandTentacleMove, offset: 0x9e6, size: 0x1, def value: None
 bool  ___hasRightHandTentacleMove;

/// @brief Field leftHandTentacleMove, offset: 0x9e8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandTentacleMove;

/// @brief Field rightHandTentacleMove, offset: 0x9f4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandTentacleMove;

/// @brief Field activeHandHold, offset: 0xa00, size: 0x28, def value: None
 ::GlobalNamespace::GTPlayer_HandHoldState  ___activeHandHold;

/// @brief Field secondaryHandHold, offset: 0xa28, size: 0x28, def value: None
 ::GlobalNamespace::GTPlayer_HandHoldState  ___secondaryHandHold;

/// @brief Field slipperyMaterial, offset: 0xa50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::PhysicsMaterial>  ___slipperyMaterial;

/// @brief Field wasHoldingHandhold, offset: 0xa58, size: 0x1, def value: None
 bool  ___wasHoldingHandhold;

/// @brief Field secondLastPreHandholdVelocity, offset: 0xa5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___secondLastPreHandholdVelocity;

/// @brief Field lastPreHandholdVelocity, offset: 0xa68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPreHandholdVelocity;

/// [Header("Native Scale Adjustment")]
/// [SerializeField]
/// @brief Field nativeScaleMagnitudeAdjustmentFactor, offset: 0xa78, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___nativeScaleMagnitudeAdjustmentFactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___mainCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___headCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyCollider) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyInitialRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____bodyInitialHeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentBodyHeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___frameCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyHitInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastHitInfoHand) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyVelocityTracker) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___audioManager) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___leftHand) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___rightHand) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___stiltStates) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___anyHandIsColliding) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___anyHandWasColliding) == 0x301, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___anyHandIsSliding) == 0x302, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___anyHandWasSliding) == 0x303, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___anyHandIsSticking) == 0x304, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___anyHandWasSticking) == 0x305, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___forceRBSync) == 0x306, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastHeadPosition) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastRigidbodyPosition) == 0x314, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____playerRigidBody_k__BackingField) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___playerRigidbodyInterpolationDefault) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___velocityHistorySize) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___maxArmLength) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___unStickDistance) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___velocityLimit) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slideVelocityLimit) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___maxJumpSpeed) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____jumpMultiplier) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___minimumRaycastDistance) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___defaultSlideFactor) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slidingMinimum) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___defaultPrecision) == 0x354, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___teleportThresholdNoVel) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___frictionConstant) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slideControl) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___stickDepth) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___velocityHistory) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slideAverageHistory) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___velocityIndex) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentVelocity) == 0x37c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___averagedVelocity) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastPosition) == 0x394, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyOffset) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___locomotionEnabledLayers) == 0x3ac, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardLocomotionLayers) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___waterLayer) == 0x3b4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___wasHeadTouching) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentMaterialIndex) == 0x3bc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___headSlideNormal) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___headSlipPercentage) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___cosmeticsHeadTarget) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___nativeScale) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___scaleMultiplier) == 0x3dc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___activeSizeChangerSettings) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___debugMovement) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___disableMovement) == 0x3e9, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___inOverlay) == 0x3ea, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___isUserPresent) == 0x3eb, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___turnParent) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___RecordingRig) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentOverride) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___materialDatasSO) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___degreesTurnedThisFrame) == 0x410, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyOffsetVector) == 0x414, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___movementToProjectedAboveCollisionPlane) == 0x420, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___meshCollider) == 0x430, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___collidedMesh) == 0x438, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___foundMatData) == 0x440, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___findMatName) == 0x468, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___vertex1) == 0x470, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___vertex2) == 0x474, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___vertex3) == 0x478, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___trianglesList) == 0x480, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___meshTrianglesDict) == 0x488, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___sharedMeshTris) == 0x490, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastRealTime) == 0x498, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___calcDeltaTime) == 0x49c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___tempRealTime) == 0x4a0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slideVelocity) == 0x4a4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slideAverageNormal) == 0x4b0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___tempHitInfo) == 0x4bc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___junkHit) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___firstPosition) == 0x514, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___tempIterativeHit) == 0x520, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___maxSphereSize1) == 0x54c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___maxSphereSize2) == 0x550, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___overlapColliders) == 0x558, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___overlapAttempts) == 0x560, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___averageSlipPercentage) == 0x564, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___surfaceDirection) == 0x568, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___iceThreshold) == 0x574, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyMaxRadius) == 0x578, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyLerp) == 0x57c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___areBothTouching) == 0x580, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slideFactor) == 0x584, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___didAJump) == 0x588, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___updateRB) == 0x589, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slideRenderer) == 0x590, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___rayCastNonAllocColliders) == 0x598, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___crazyCheckVectors) == 0x5a0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___emptyHit) == 0x5a8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bufferCount) == 0x5d4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastOpenHeadPosition) == 0x5d8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___tempMaterialArray) == 0x5e8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___antiDriftLastPosition) == 0x5f0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyTouchedSurfaces) == 0x600, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___primaryButtonPressed) == 0x608, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___swimmingParamsList) == 0x610, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___waterParams) == 0x618, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___liquidPropertiesList) == 0x620, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___debugDrawSwimming) == 0x628, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___wizardStaffSlamEffects) == 0x630, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___geodeHitEffects) == 0x638, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___freezeTagHandSlidePercent) == 0x640, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___debugFreezeTag) == 0x644, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___frozenBodyBuoyancyFactor) == 0x648, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____IsFrozen_k__BackingField) == 0x64c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___leftHandWaterVolume) == 0x650, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___rightHandWaterVolume) == 0x658, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___leftHandWaterSurface) == 0x660, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___rightHandWaterSurface) == 0x67c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___swimmingVelocity) == 0x698, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___waterSurfaceForHead) == 0x6a4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyInWater) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___headInWater) == 0x6c1, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___audioSetToUnderwater) == 0x6c2, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___buoyancyExtension) == 0x6c4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____forcedUnderwater_k__BackingField) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____siJumpMultiplier_k__BackingField) == 0x6cc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastWaterSurfaceJumpTimeLeft) == 0x6d0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastWaterSurfaceJumpTimeRight) == 0x6d4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___waterSurfaceJumpCooldown) == 0x6d8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___leftHandNonDiveHapticsAmount) == 0x6dc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___rightHandNonDiveHapticsAmount) == 0x6e0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___headOverlappingWaterVolumes) == 0x6e8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyOverlappingWaterVolumes) == 0x6f0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___activeWaterCurrents) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____TentacleActiveAtFrame_k__BackingField) == 0x700, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____LaserZiplineActiveAtFrame_k__BackingField) == 0x704, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____ThrusterActiveAtFrame_k__BackingField) == 0x708, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___playerRotationOverride) == 0x70c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___playerRotationOverrideFrame) == 0x71c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___playerRotationOverrideDecayRate) == 0x720, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____IsBodySliding_k__BackingField) == 0x724, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyCollisionContacts) == 0x728, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyCollisionContactsCount) == 0x730, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyGroundContact) == 0x734, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___bodyGroundContactTime) == 0x764, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____bodyGroundIsSlippery_k__BackingField) == 0x768, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___exitMovingSurface) == 0x769, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___exitMovingSurfaceThreshold) == 0x76c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___isClimbableMoving) == 0x770, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastClimbableRotation) == 0x774, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastAttachedToMovingSurfaceFrame) == 0x784, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___isHandHoldMoving) == 0x788, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastHandHoldRotation) == 0x78c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___movingHandHoldReleaseVelocity) == 0x79c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMovingSurfaceContact) == 0x7a8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMovingSurfaceID) == 0x7ac, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMonkeBlock) == 0x7b0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMovingSurfaceRot) == 0x7b8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMovingSurfaceHit) == 0x7c8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMovingSurfaceTouchLocal) == 0x7f4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMovingSurfaceTouchWorld) == 0x800, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___movingSurfaceOffset) == 0x80c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___wasMovingSurfaceMonkeBlock) == 0x818, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastMovingSurfaceVelocity) == 0x81c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___wasBodyOnGround) == 0x828, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentPlatform) == 0x830, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastPlatformTouched) == 0x838, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastFrameTouchPosLocal) == 0x840, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastFrameTouchPosWorld) == 0x84c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastFrameHasValidTouchPos) == 0x858, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___refMovement) == 0x85c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___platformTouchOffset) == 0x868, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___debugLastRightHandPosition) == 0x874, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___debugPlatformDeltaPosition) == 0x880, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___tempFreezeRightHandEnableTime) == 0x890, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___tempFreezeLeftHandEnableTime) == 0x898, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___isClimbing) == 0x8a0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentClimbable) == 0x8a8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentClimber) == 0x8b0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___climbHelperTargetPos) == 0x8b8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___climbHelper) == 0x8c8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentSwing) == 0x8d0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentZipline) == 0x8d8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___controllerState) == 0x8e0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___sizeLayerMask) == 0x8e8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___InReportMenu) == 0x8ec, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___layerChanger) == 0x8f0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____LastTouchedGroundAtNetworkTime_k__BackingField) == 0x8f8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____LastHandTouchedGroundAtNetworkTime_k__BackingField) == 0x8fc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hasCorrectedForTracking) == 0x900, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___halloweenLevitationStrength) == 0x904, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___halloweenLevitationFullStrengthDuration) == 0x908, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___halloweenLevitationTotalDuration) == 0x90c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___halloweenLevitationBonusStrength) == 0x910, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___halloweenLevitateBonusOffAtYSpeed) == 0x914, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___halloweenLevitateBonusFullAtYSpeed) == 0x918, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastTouchedGroundTimestamp) == 0x91c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___teleportToTrain) == 0x920, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___isAttachedToTrain) == 0x921, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___stuckLeft) == 0x922, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___stuckRight) == 0x923, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastScale) == 0x924, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___currentSlopDirection) == 0x928, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastSlopeDirection) == 0x934, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___gravityOverrides) == 0x940, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____isHoverAllowed_k__BackingField) == 0x948, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ____enableHoverMode_k__BackingField) == 0x949, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___inHoverAreas) == 0x950, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___inHoverDisablers) == 0x958, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverIdealHeight) == 0x960, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverCarveSidewaysSpeedLossFactor) == 0x964, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverCarveAngleResponsiveness) == 0x968, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardVisual) == 0x970, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___sidewaysDrag) == 0x978, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoveringSlowSpeed) == 0x97c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoveringSlowStoppingFactor) == 0x980, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardPaddleBoostMultiplier) == 0x984, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardPaddleBoostMax) == 0x988, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardBoostGracePeriod) == 0x98c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverBodyHasCollisionsOutsideRadius) == 0x990, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverBodyCollisionRadiusUpOffset) == 0x994, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverGeneralUpwardForce) == 0x998, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverTiltAdjustsForwardFactor) == 0x99c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverMinGrindSpeed) == 0x9a0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverSlamJumpStrengthFactor) == 0x9a4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverMaxPaddleSpeed) == 0x9a8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardAudio) == 0x9b0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hasHoverPoint) == 0x9b8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___boostEnabledUntilTimestamp) == 0x9bc, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardCasts) == 0x9c0, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardPlayerLocalPos) == 0x9c8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hoverboardPlayerLocalRot) == 0x9d4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___didHoverLastFrame) == 0x9e4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hasLeftHandTentacleMove) == 0x9e5, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___hasRightHandTentacleMove) == 0x9e6, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___leftHandTentacleMove) == 0x9e8, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___rightHandTentacleMove) == 0x9f4, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___activeHandHold) == 0xa00, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___secondaryHandHold) == 0xa28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___slipperyMaterial) == 0xa50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___wasHoldingHandhold) == 0xa58, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___secondLastPreHandholdVelocity) == 0xa5c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___lastPreHandholdVelocity) == 0xa68, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer, ___nativeScaleMagnitudeAdjustmentFactor) == 0xa78, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::GTPlayer) == 0xa80, "Size mismatch!");

} // namespace end def GorillaLocomotion
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaLocomotion {
// Is value type: false
// CS Name: GorillaLocomotion.GTPlayer/<DelayedRemoveHoverboard>d__425
class CORDL_TYPE GTPlayer__DelayedRemoveHoverboard_d__425 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaLocomotion::GTPlayer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5cdaab4, size 0x10c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5cdabc0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5cdabc8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5cdac00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5cdaab0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5cdaa88, size 0x28, virtual false, abstract: false, final false
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
constexpr GTPlayer__DelayedRemoveHoverboard_d__425() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTPlayer__DelayedRemoveHoverboard_d__425", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTPlayer__DelayedRemoveHoverboard_d__425(GTPlayer__DelayedRemoveHoverboard_d__425 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTPlayer__DelayedRemoveHoverboard_d__425", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTPlayer__DelayedRemoveHoverboard_d__425(GTPlayer__DelayedRemoveHoverboard_d__425 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4504};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::GTPlayer__DelayedRemoveHoverboard_d__425) == 0x28, "Size mismatch!");

} // namespace end def GorillaLocomotion
