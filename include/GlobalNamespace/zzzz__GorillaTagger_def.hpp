#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTagger_StatusEffect_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagger_StiltTagData_def.hpp"
#include "GorillaTag/GuidedRefs/zzzz__GuidedRefReceiverFieldInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagger)
namespace GlobalNamespace {
class GorillaTagger_DebouncedBool;
}
namespace GlobalNamespace {
struct GorillaTagger_StatusEffect;
}
namespace GlobalNamespace {
struct GorillaTagger_StiltTagData;
}
namespace GlobalNamespace {
class GorillaTagger__AudioClipHapticPulses_d__167;
}
namespace GlobalNamespace {
struct GorillaTagger__ConfirmUpdatedFrameRate_d__180;
}
namespace GlobalNamespace {
class GorillaTagger__HapticPulses_d__164;
}
namespace GlobalNamespace {
struct GorillaTagger__IsXRSubsystemActive_d__149;
}
namespace GlobalNamespace {
struct GorillaTagger___c__DisplayClass159_0;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class NetworkView;
}
namespace GlobalNamespace {
class VRRigSerializer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
template<typename T>
class Watchable_1;
}
namespace GorillaLocomotion {
struct StiltID;
}
namespace GorillaTag::GuidedRefs {
struct GuidedRefTryResolveInfo;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefMonoBehaviour;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefObject;
}
namespace GorillaTag::GuidedRefs {
class IGuidedRefReceiverMono;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct GameOverlayActivated_t;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
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
namespace GlobalNamespace {
class GorillaTagger;
}
namespace GlobalNamespace {
class GorillaTagger_DebouncedBool;
}
namespace GlobalNamespace {
class GorillaTagger__AudioClipHapticPulses_d__167;
}
namespace GlobalNamespace {
class GorillaTagger__HapticPulses_d__164;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagger*);
MARK_REF_T(::GlobalNamespace::GorillaTagger_DebouncedBool*);
MARK_REF_T(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*);
MARK_REF_T(::GlobalNamespace::GorillaTagger__HapticPulses_d__164*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger*, "", "GorillaTagger");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger_DebouncedBool*, "", "GorillaTagger/DebouncedBool");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167*, "", "GorillaTagger/<AudioClipHapticPulses>d__167");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger__HapticPulses_d__164*, "", "GorillaTagger/<HapticPulses>d__164");
// Dependencies GorillaTag.GuidedRefs.GuidedRefReceiverFieldInfo, GorillaTagger::StatusEffect, GorillaTagger::StiltTagData, System.Nullable`1<T>, UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Object, UnityEngine.RaycastHit, UnityEngine.Vector3, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagger
class CORDL_TYPE GorillaTagger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DebouncedBool = ::GlobalNamespace::GorillaTagger_DebouncedBool;

using StatusEffect = ::GlobalNamespace::GorillaTagger_StatusEffect;

using StiltTagData = ::GlobalNamespace::GorillaTagger_StiltTagData;

using _AudioClipHapticPulses_d__167 = ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167;

using _ConfirmUpdatedFrameRate_d__180 = ::GlobalNamespace::GorillaTagger__ConfirmUpdatedFrameRate_d__180;

using _HapticPulses_d__164 = ::GlobalNamespace::GorillaTagger__HapticPulses_d__164;

using _IsXRSubsystemActive_d__149 = ::GlobalNamespace::GorillaTagger__IsXRSubsystemActive_d__149;

using __c__DisplayClass159_0 = ::GlobalNamespace::GorillaTagger___c__DisplayClass159_0;

/// @brief Field BaseMirrorCameraCullingMask, offset 0x300, size 0x4 
 __declspec(property(get=__cordl_internal_get_BaseMirrorCameraCullingMask, put=__cordl_internal_set_BaseMirrorCameraCullingMask)) ::UnityEngine::LayerMask  BaseMirrorCameraCullingMask;

 __declspec(property(get=get_DefaultHandTapVolume)) float_t  DefaultHandTapVolume;

 __declspec(property(get=get_ForcePerfRefreshRate)) bool  ForcePerfRefreshRate;

/// @brief Field FramerateHealth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_FramerateHealth, put=__cordl_internal_set_FramerateHealth)) int32_t  FramerateHealth;

 __declspec(property(get=GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount, put=GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount)) int32_t  GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount;

/// @brief Field MirrorCameraCullingMask, offset 0x308, size 0x8 
 __declspec(property(get=__cordl_internal_get_MirrorCameraCullingMask, put=__cordl_internal_set_MirrorCameraCullingMask)) ::GlobalNamespace::Watchable_1<int32_t>*  MirrorCameraCullingMask;

/// @brief Field OnHandTap, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHandTap, put=__cordl_internal_set_OnHandTap)) ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  OnHandTap;

 __declspec(property(get=get_PerformanceOn)) bool  PerformanceOn;

/// @brief Field SmoothedFramerate, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_SmoothedFramerate, put=__cordl_internal_set_SmoothedFramerate)) int32_t  SmoothedFramerate;

/// @brief Field <GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefsWaitingToResolveCount>k__BackingField, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField, put=__cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField)) int32_t  _GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;

/// @brief Field _defaultRefreshRate, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultRefreshRate, put=__cordl_internal_set__defaultRefreshRate)) float_t  _defaultRefreshRate;

/// @brief Field _forceFramerateCheck, offset 0x2e8, size 0x1 
 __declspec(property(get=__cordl_internal_get__forceFramerateCheck, put=__cordl_internal_set__forceFramerateCheck)) bool  _forceFramerateCheck;

/// @brief Field _forcePerfRefreshRate, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get__forcePerfRefreshRate, put=__cordl_internal_set__forcePerfRefreshRate)) bool  _forcePerfRefreshRate;

/// @brief Field _framerateHealthTimer, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__framerateHealthTimer, put=__cordl_internal_set__framerateHealthTimer)) float_t  _framerateHealthTimer;

/// @brief Field _framerateIndex, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__framerateIndex, put=__cordl_internal_set__framerateIndex)) int32_t  _framerateIndex;

/// @brief Field _framerateTimer, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__framerateTimer, put=__cordl_internal_set__framerateTimer)) float_t  _framerateTimer;

/// @brief Field _framerateTotal, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__framerateTotal, put=__cordl_internal_set__framerateTotal)) float_t  _framerateTotal;

/// @brief Field _framerateTracker, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__framerateTracker, put=__cordl_internal_set__framerateTracker)) ::ArrayW<float_t>  _framerateTracker;

/// @brief Field _framerateUpdated, offset 0x142, size 0x1 
 __declspec(property(get=__cordl_internal_get__framerateUpdated, put=__cordl_internal_set__framerateUpdated)) bool  _framerateUpdated;

/// @brief Field _framesForHandTrigger, offset 0x2ec, size 0x4 
 __declspec(property(get=__cordl_internal_get__framesForHandTrigger, put=__cordl_internal_set__framesForHandTrigger)) int32_t  _framesForHandTrigger;

/// @brief Field <hasTappedSurface>k__BackingField, offset 0x360, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasTappedSurface_k__BackingField, put=__cordl_internal_set__hasTappedSurface_k__BackingField)) bool  _hasTappedSurface_k__BackingField;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::GorillaTagger>  _instance;

/// @brief Field _leftHandDown, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHandDown, put=__cordl_internal_set__leftHandDown)) ::GlobalNamespace::GorillaTagger_DebouncedBool*  _leftHandDown;

/// @brief Field <myRecorder>k__BackingField, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__myRecorder_k__BackingField, put=__cordl_internal_set__myRecorder_k__BackingField)) ::UnityW<::Photon::Voice::Unity::Recorder>  _myRecorder_k__BackingField;

/// @brief Field _perfRefreshRate, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__perfRefreshRate, put=__cordl_internal_set__perfRefreshRate)) float_t  _perfRefreshRate;

/// @brief Field _performanceOn, offset 0x143, size 0x1 
 __declspec(property(get=__cordl_internal_get__performanceOn, put=__cordl_internal_set__performanceOn)) bool  _performanceOn;

/// @brief Field _prevFramerateHealth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevFramerateHealth, put=__cordl_internal_set__prevFramerateHealth)) int32_t  _prevFramerateHealth;

/// @brief Field _prevSmoothedFramerate, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__prevSmoothedFramerate, put=__cordl_internal_set__prevSmoothedFramerate)) int32_t  _prevSmoothedFramerate;

/// @brief Field _rightHandDown, offset 0x2f8, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHandDown, put=__cordl_internal_set__rightHandDown)) ::GlobalNamespace::GorillaTagger_DebouncedBool*  _rightHandDown;

/// @brief Field <rigidbody>k__BackingField, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__rigidbody_k__BackingField, put=__cordl_internal_set__rigidbody_k__BackingField)) ::UnityW<::UnityEngine::Rigidbody>  _rigidbody_k__BackingField;

/// @brief Field activeXRDisplay, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeXRDisplay, put=__cordl_internal_set_activeXRDisplay)) Il2CppObject*  activeXRDisplay;

/// @brief Field audioClipIndex, offset 0x260, size 0x4 
 __declspec(property(get=__cordl_internal_get_audioClipIndex, put=__cordl_internal_set_audioClipIndex)) int32_t  audioClipIndex;

/// @brief Field baseSlideControl, offset 0x2a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_baseSlideControl, put=__cordl_internal_set_baseSlideControl)) float_t  baseSlideControl;

/// @brief Field bodyCollider, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  bodyCollider;

/// @brief Field bodyRaycastSweep, offset 0x1bc, size 0xc 
 __declspec(property(get=__cordl_internal_get_bodyRaycastSweep, put=__cordl_internal_set_bodyRaycastSweep)) ::UnityEngine::Vector3  bodyRaycastSweep;

/// @brief Field bodySlideSource, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodySlideSource, put=__cordl_internal_set_bodySlideSource)) ::UnityW<::UnityEngine::AudioSource>  bodySlideSource;

/// @brief Field bodyVector, offset 0x248, size 0xc 
 __declspec(property(get=__cordl_internal_get_bodyVector, put=__cordl_internal_set_bodyVector)) ::UnityEngine::Vector3  bodyVector;

/// @brief Field bottomVector, offset 0x23c, size 0xc 
 __declspec(property(get=__cordl_internal_get_bottomVector, put=__cordl_internal_set_bottomVector)) ::UnityEngine::Vector3  bottomVector;

/// @brief Field cacheHandTapVolume, offset 0x290, size 0x4 
 __declspec(property(get=__cordl_internal_get_cacheHandTapVolume, put=__cordl_internal_set_cacheHandTapVolume)) float_t  cacheHandTapVolume;

/// @brief Field colliderOverlaps, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderOverlaps, put=__cordl_internal_set_colliderOverlaps)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliderOverlaps;

/// @brief Field currentStatus, offset 0x294, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentStatus, put=__cordl_internal_set_currentStatus)) ::GlobalNamespace::GorillaTagger_StatusEffect  currentStatus;

/// @brief Field dirFromHitToHand, offset 0x254, size 0xc 
 __declspec(property(get=__cordl_internal_get_dirFromHitToHand, put=__cordl_internal_set_dirFromHitToHand)) ::UnityEngine::Vector3  dirFromHitToHand;

/// @brief Field disableTutorial, offset 0x141, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableTutorial, put=__cordl_internal_set_disableTutorial)) bool  disableTutorial;

/// @brief Field gameOverlayActivatedCb, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameOverlayActivatedCb, put=__cordl_internal_set_gameOverlayActivatedCb)) ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  gameOverlayActivatedCb;

/// @brief Field gorillaTagColliderLayerMask, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_gorillaTagColliderLayerMask, put=__cordl_internal_set_gorillaTagColliderLayerMask)) int32_t  gorillaTagColliderLayerMask;

/// @brief Field handTapSpeed, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_handTapSpeed, put=__cordl_internal_set_handTapSpeed)) float_t  handTapSpeed;

/// @brief Field handTapVolume, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_handTapVolume, put=__cordl_internal_set_handTapVolume)) float_t  handTapVolume;

/// @brief Field hapticWaitSeconds, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticWaitSeconds, put=__cordl_internal_set_hapticWaitSeconds)) float_t  hapticWaitSeconds;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

 __declspec(property(get=get_hasTappedSurface, put=set_hasTappedSurface)) bool  hasTappedSurface;

/// @brief Field headCollider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_headCollider, put=__cordl_internal_set_headCollider)) ::UnityW<::UnityEngine::SphereCollider>  headCollider;

/// @brief Field headRaycastSweep, offset 0x1b0, size 0xc 
 __declspec(property(get=__cordl_internal_get_headRaycastSweep, put=__cordl_internal_set_headRaycastSweep)) ::UnityEngine::Vector3  headRaycastSweep;

/// @brief Field hitInfo, offset 0x1ec, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hitInfo, put=__cordl_internal_set_hitInfo)) ::UnityEngine::RaycastHit  hitInfo;

/// @brief Field inCosmeticsRoom, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_inCosmeticsRoom, put=__cordl_internal_set_inCosmeticsRoom)) bool  inCosmeticsRoom;

/// @brief Field inputDevice, offset 0x268, size 0x10 
 __declspec(property(get=__cordl_internal_get_inputDevice, put=__cordl_internal_set_inputDevice)) ::UnityEngine::XR::InputDevice  inputDevice;

/// @brief Field isGameOverlayActive, offset 0x338, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGameOverlayActive, put=__cordl_internal_set_isGameOverlayActive)) bool  isGameOverlayActive;

/// @brief Field lastBodyPositionForTag, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastBodyPositionForTag, put=__cordl_internal_set_lastBodyPositionForTag)) ::UnityEngine::Vector3  lastBodyPositionForTag;

/// @brief Field lastHeadPositionForTag, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastHeadPositionForTag, put=__cordl_internal_set_lastHeadPositionForTag)) ::UnityEngine::Vector3  lastHeadPositionForTag;

/// @brief Field lastLeftHandPositionForTag, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLeftHandPositionForTag, put=__cordl_internal_set_lastLeftHandPositionForTag)) ::UnityEngine::Vector3  lastLeftHandPositionForTag;

/// @brief Field lastLeftTap, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLeftTap, put=__cordl_internal_set_lastLeftTap)) float_t  lastLeftTap;

/// @brief Field lastLeftUpTap, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLeftUpTap, put=__cordl_internal_set_lastLeftUpTap)) float_t  lastLeftUpTap;

/// @brief Field lastRightHandPositionForTag, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRightHandPositionForTag, put=__cordl_internal_set_lastRightHandPositionForTag)) ::UnityEngine::Vector3  lastRightHandPositionForTag;

/// @brief Field lastRightTap, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRightTap, put=__cordl_internal_set_lastRightTap)) float_t  lastRightTap;

/// @brief Field lastRightUpTap, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastRightUpTap, put=__cordl_internal_set_lastRightUpTap)) float_t  lastRightUpTap;

/// @brief Field leftDevice, offset 0x1d8, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftDevice, put=__cordl_internal_set_leftDevice)) ::UnityEngine::XR::InputDevice  leftDevice;

/// @brief Field leftHandSlideSource, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandSlideSource, put=__cordl_internal_set_leftHandSlideSource)) ::UnityW<::UnityEngine::AudioSource>  leftHandSlideSource;

/// @brief Field leftHandTransform, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandTransform, put=__cordl_internal_set_leftHandTransform)) ::UnityW<::UnityEngine::Transform>  leftHandTransform;

/// @brief Field leftHandTriggerCollider, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandTriggerCollider, put=__cordl_internal_set_leftHandTriggerCollider)) ::UnityW<::UnityEngine::GameObject>  leftHandTriggerCollider;

/// @brief Field leftHandWasTouching, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandWasTouching, put=__cordl_internal_set_leftHandWasTouching)) bool  leftHandWasTouching;

/// @brief Field leftHapticsBuffer, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHapticsBuffer, put=__cordl_internal_set_leftHapticsBuffer)) ::ArrayW<float_t>  leftHapticsBuffer;

/// @brief Field leftHapticsRoutine, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHapticsRoutine, put=__cordl_internal_set_leftHapticsRoutine)) ::UnityEngine::Coroutine*  leftHapticsRoutine;

/// @brief Field leftHeadRaycastSweep, offset 0x18c, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHeadRaycastSweep, put=__cordl_internal_set_leftHeadRaycastSweep)) ::UnityEngine::Vector3  leftHeadRaycastSweep;

/// @brief Field leftRaycastSweep, offset 0x180, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftRaycastSweep, put=__cordl_internal_set_leftRaycastSweep)) ::UnityEngine::Vector3  leftRaycastSweep;

/// @brief Field loadedDeviceName, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadedDeviceName, put=__cordl_internal_set_loadedDeviceName)) ::StringW  loadedDeviceName;

/// @brief Field mainCamera, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::GameObject>  mainCamera;

/// @brief Field maxStiltTagDistance, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxStiltTagDistance, put=__cordl_internal_set_maxStiltTagDistance)) float_t  maxStiltTagDistance;

/// @brief Field maxTagDistance, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxTagDistance, put=__cordl_internal_set_maxTagDistance)) float_t  maxTagDistance;

/// @brief Field moderationMutedTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_moderationMutedTime, put=setStaticF_moderationMutedTime)) float_t  moderationMutedTime;

 __declspec(property(get=get_myRecorder, put=set_myRecorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  myRecorder;

 __declspec(property(get=get_myVRRig)) ::UnityW<::GlobalNamespace::NetworkView>  myVRRig;

/// @brief Field nonAllocHits, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nonAllocHits, put=__cordl_internal_set_nonAllocHits)) int32_t  nonAllocHits;

/// @brief Field nonAllocRaycastHits, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonAllocRaycastHits, put=__cordl_internal_set_nonAllocRaycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  nonAllocRaycastHits;

/// @brief Field offlineVRRig, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineVRRig, put=__cordl_internal_set_offlineVRRig)) ::UnityW<::GlobalNamespace::VRRig>  offlineVRRig;

/// @brief Field offlineVRRig_gRef, offset 0x110, size 0x20 
 __declspec(property(get=__cordl_internal_get_offlineVRRig_gRef, put=__cordl_internal_set_offlineVRRig_gRef)) ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  offlineVRRig_gRef;

/// @brief Field onPlayerSpawnedRootCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_onPlayerSpawnedRootCallback, put=setStaticF_onPlayerSpawnedRootCallback)) ::System::Action*  onPlayerSpawnedRootCallback;

/// @brief Field otherPlayer, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherPlayer, put=__cordl_internal_set_otherPlayer)) ::GlobalNamespace::NetPlayer*  otherPlayer;

/// @brief Field overrideNotInFocus, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideNotInFocus, put=__cordl_internal_set_overrideNotInFocus)) bool  overrideNotInFocus;

/// @brief Field primaryButtonPressLeft, offset 0x1ea, size 0x1 
 __declspec(property(get=__cordl_internal_get_primaryButtonPressLeft, put=__cordl_internal_set_primaryButtonPressLeft)) bool  primaryButtonPressLeft;

/// @brief Field primaryButtonPressRight, offset 0x1e8, size 0x1 
 __declspec(property(get=__cordl_internal_get_primaryButtonPressRight, put=__cordl_internal_set_primaryButtonPressRight)) bool  primaryButtonPressRight;

/// @brief Field refreshRate, offset 0x2a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_refreshRate, put=__cordl_internal_set_refreshRate)) float_t  refreshRate;

 __declspec(property(get=get_rigSerializer)) ::UnityW<::GlobalNamespace::VRRigSerializer>  rigSerializer;

/// @brief Field rightDevice, offset 0x1c8, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightDevice, put=__cordl_internal_set_rightDevice)) ::UnityEngine::XR::InputDevice  rightDevice;

/// @brief Field rightHandSlideSource, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandSlideSource, put=__cordl_internal_set_rightHandSlideSource)) ::UnityW<::UnityEngine::AudioSource>  rightHandSlideSource;

/// @brief Field rightHandTransform, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandTransform, put=__cordl_internal_set_rightHandTransform)) ::UnityW<::UnityEngine::Transform>  rightHandTransform;

/// @brief Field rightHandTriggerCollider, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandTriggerCollider, put=__cordl_internal_set_rightHandTriggerCollider)) ::UnityW<::UnityEngine::GameObject>  rightHandTriggerCollider;

/// @brief Field rightHandWasTouching, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandWasTouching, put=__cordl_internal_set_rightHandWasTouching)) bool  rightHandWasTouching;

/// @brief Field rightHapticsBuffer, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHapticsBuffer, put=__cordl_internal_set_rightHapticsBuffer)) ::ArrayW<float_t>  rightHapticsBuffer;

/// @brief Field rightHapticsRoutine, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHapticsRoutine, put=__cordl_internal_set_rightHapticsRoutine)) ::UnityEngine::Coroutine*  rightHapticsRoutine;

/// @brief Field rightHeadRaycastSweep, offset 0x1a4, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHeadRaycastSweep, put=__cordl_internal_set_rightHeadRaycastSweep)) ::UnityEngine::Vector3  rightHeadRaycastSweep;

/// @brief Field rightRaycastSweep, offset 0x198, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightRaycastSweep, put=__cordl_internal_set_rightRaycastSweep)) ::UnityEngine::Vector3  rightRaycastSweep;

 __declspec(property(get=get_rigidbody, put=set_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

/// @brief Field secondaryButtonPressLeft, offset 0x1eb, size 0x1 
 __declspec(property(get=__cordl_internal_get_secondaryButtonPressLeft, put=__cordl_internal_set_secondaryButtonPressLeft)) bool  secondaryButtonPressLeft;

/// @brief Field secondaryButtonPressRight, offset 0x1e9, size 0x1 
 __declspec(property(get=__cordl_internal_get_secondaryButtonPressRight, put=__cordl_internal_set_secondaryButtonPressRight)) bool  secondaryButtonPressRight;

/// @brief Field slowCooldown, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowCooldown, put=__cordl_internal_set_slowCooldown)) float_t  slowCooldown;

 __declspec(property(get=get_sphereCastRadius)) float_t  sphereCastRadius;

/// @brief Field statusEndTime, offset 0x29c, size 0x4 
 __declspec(property(get=__cordl_internal_get_statusEndTime, put=__cordl_internal_set_statusEndTime)) float_t  statusEndTime;

/// @brief Field statusStartTime, offset 0x298, size 0x4 
 __declspec(property(get=__cordl_internal_get_statusStartTime, put=__cordl_internal_set_statusStartTime)) float_t  statusStartTime;

/// @brief Field stiltTagData, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_stiltTagData, put=__cordl_internal_set_stiltTagData)) ::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData>  stiltTagData;

/// @brief Field tagCooldown, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagCooldown, put=__cordl_internal_set_tagCooldown)) float_t  tagCooldown;

/// @brief Field tagHapticDuration, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagHapticDuration, put=__cordl_internal_set_tagHapticDuration)) float_t  tagHapticDuration;

/// @brief Field tagHapticStrength, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagHapticStrength, put=__cordl_internal_set_tagHapticStrength)) float_t  tagHapticStrength;

/// @brief Field tagRadiusOverride, offset 0x340, size 0x10 
 __declspec(property(get=__cordl_internal_get_tagRadiusOverride, put=__cordl_internal_set_tagRadiusOverride)) ::System::Nullable_1<float_t>  tagRadiusOverride;

/// @brief Field tagRadiusOverrideFrame, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagRadiusOverrideFrame, put=__cordl_internal_set_tagRadiusOverrideFrame)) int32_t  tagRadiusOverrideFrame;

/// @brief Field tagRigDict, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagRigDict, put=__cordl_internal_set_tagRigDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>*  tagRigDict;

/// @brief Field taggedHapticDuration, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_taggedHapticDuration, put=__cordl_internal_set_taggedHapticDuration)) float_t  taggedHapticDuration;

/// @brief Field taggedHapticStrength, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_taggedHapticStrength, put=__cordl_internal_set_taggedHapticStrength)) float_t  taggedHapticStrength;

/// @brief Field taggedTime, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_taggedTime, put=__cordl_internal_set_taggedTime)) float_t  taggedTime;

/// @brief Field tapCoolDown, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapCoolDown, put=__cordl_internal_set_tapCoolDown)) float_t  tapCoolDown;

/// @brief Field tapHapticDuration, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapHapticDuration, put=__cordl_internal_set_tapHapticDuration)) float_t  tapHapticDuration;

/// @brief Field tapHapticStrength, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapHapticStrength, put=__cordl_internal_set_tapHapticStrength)) float_t  tapHapticStrength;

/// @brief Field tempCreator, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempCreator, put=__cordl_internal_set_tempCreator)) ::GlobalNamespace::NetPlayer*  tempCreator;

/// @brief Field tempView, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_tempView, put=__cordl_internal_set_tempView)) ::UnityW<::Photon::Pun::PhotonView>  tempView;

/// @brief Field testTutorial, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_testTutorial, put=__cordl_internal_set_testTutorial)) bool  testTutorial;

/// @brief Field thirdPersonCamera, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_thirdPersonCamera, put=__cordl_internal_set_thirdPersonCamera)) ::UnityW<::UnityEngine::GameObject>  thirdPersonCamera;

/// @brief Field topVector, offset 0x230, size 0xc 
 __declspec(property(get=__cordl_internal_get_topVector, put=__cordl_internal_set_topVector)) ::UnityEngine::Vector3  topVector;

/// @brief Field touchedPlayer, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_touchedPlayer, put=__cordl_internal_set_touchedPlayer)) ::GlobalNamespace::NetPlayer*  touchedPlayer;

/// @brief Field tryPlayer, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_tryPlayer, put=__cordl_internal_set_tryPlayer)) ::GlobalNamespace::NetPlayer*  tryPlayer;

/// @brief Field wasInOverlay, offset 0x278, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInOverlay, put=__cordl_internal_set_wasInOverlay)) bool  wasInOverlay;

/// @brief Field xrSubsystemIsActive, offset 0x2d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_xrSubsystemIsActive, put=__cordl_internal_set_xrSubsystemIsActive)) bool  xrSubsystemIsActive;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefObject*() noexcept;

/// @brief Convert operator to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr operator  ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono*() noexcept;

/// @brief Method ApplyStatusEffect, addr 0x593676c, size 0xd4, virtual false, abstract: false, final false
inline void ApplyStatusEffect(::GlobalNamespace::GorillaTagger_StatusEffect  newStatus, float_t  duration) ;

/// [IteratorStateMachine(typeof(GorillaTagger::<AudioClipHapticPulses>d__167))]
/// @brief Method AudioClipHapticPulses, addr 0x59362c8, size 0xac, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AudioClipHapticPulses(bool  forLeftController, ::UnityEngine::AudioClip*  clip, float_t  strength) ;

/// @brief Method Awake, addr 0x592febc, size 0xd70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcSlideControl, addr 0x59340d8, size 0x38, virtual false, abstract: false, final false
inline float_t CalcSlideControl(float_t  fps) ;

/// @brief Method CheckEndStatusEffect, addr 0x5935b48, size 0x34, virtual false, abstract: false, final false
inline void CheckEndStatusEffect() ;

/// @brief Method ClearFramerateTracker, addr 0x5930de8, size 0x4c, virtual false, abstract: false, final false
inline void ClearFramerateTracker() ;

/// [AsyncStateMachine(typeof(GorillaTagger::<ConfirmUpdatedFrameRate>d__180))]
/// @brief Method ConfirmUpdatedFrameRate, addr 0x5936a28, size 0xa8, virtual false, abstract: false, final false
inline void ConfirmUpdatedFrameRate() ;

/// @brief Method DebugDrawTagCasts, addr 0x5936ad0, size 0x614, virtual false, abstract: false, final false
inline void DebugDrawTagCasts(::UnityEngine::Color  color) ;

/// @brief Method DoVibration, addr 0x59363bc, size 0x60, virtual false, abstract: false, final false
inline void DoVibration(::UnityEngine::XR::XRNode  node, float_t  amplitude, float_t  duration) ;

/// @brief Method DrawSphereCast, addr 0x59370e4, size 0x100, virtual false, abstract: false, final false
inline void DrawSphereCast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  dir, float_t  radius, float_t  dist, ::UnityEngine::Color  color) ;

/// @brief Method EndStatusEffect, addr 0x5936840, size 0xb0, virtual false, abstract: false, final false
inline void EndStatusEffect(::GlobalNamespace::GorillaTagger_StatusEffect  effectToEnd) ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour.get_transform, addr 0x5937628, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> GorillaTag_GuidedRefs_IGuidedRefMonoBehaviour_get_transform() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefObject.GetInstanceID, addr 0x5937630, size 0x58, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefObject_GetInstanceID() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefTryResolveReference, addr 0x59371f4, size 0x1c0, virtual true, abstract: false, final true
inline bool GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefTryResolveReference(::GorillaTag::GuidedRefs::GuidedRefTryResolveInfo  target) ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnAllGuidedRefsResolved, addr 0x59373b4, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnAllGuidedRefsResolved() ;

/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.OnGuidedRefTargetDestroyed, addr 0x59373b8, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_OnGuidedRefTargetDestroyed(int32_t  fieldId) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.get_GuidedRefsWaitingToResolveCount, addr 0x59371e4, size 0x8, virtual true, abstract: false, final true
inline int32_t GorillaTag_GuidedRefs_IGuidedRefReceiverMono_get_GuidedRefsWaitingToResolveCount() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.GuidedRefs.IGuidedRefReceiverMono.set_GuidedRefsWaitingToResolveCount, addr 0x59371ec, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_GuidedRefs_IGuidedRefReceiverMono_set_GuidedRefsWaitingToResolveCount(int32_t  value) ;

/// @brief Method GuidedRefInitialize, addr 0x5930c2c, size 0xb0, virtual true, abstract: false, final true
inline void GuidedRefInitialize() ;

/// [IteratorStateMachine(typeof(GorillaTagger::<HapticPulses>d__164))]
/// @brief Method HapticPulses, addr 0x5936170, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* HapticPulses(bool  forLeftController, float_t  amplitude, float_t  duration) ;

/// @brief Method HitWithKnockBack, addr 0x59345bc, size 0x3b4, virtual false, abstract: false, final false
inline void HitWithKnockBack(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer, bool  leftHand) ;

/// @brief Method IsOculusQuest2, addr 0x5930fac, size 0x98, virtual false, abstract: false, final false
inline bool IsOculusQuest2() ;

/// [AsyncStateMachine(typeof(GorillaTagger::<IsXRSubsystemActive>d__149))]
/// @brief Method IsXRSubsystemActive, addr 0x5930f04, size 0xa8, virtual false, abstract: false, final false
inline void IsXRSubsystemActive() ;

/// @brief Method LateUpdate, addr 0x59318b0, size 0x2828, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaTagger* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5930e34, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnGameOverlayActivated, addr 0x5931478, size 0x10, virtual false, abstract: false, final false
inline void OnGameOverlayActivated(::Steamworks::GameOverlayActivated_t  pCallback) ;

/// @brief Method OnPlayerSpawned, addr 0x59368f0, size 0x138, virtual false, abstract: false, final false
static inline void OnPlayerSpawned(::System::Action*  action) ;

/// @brief Method OnTriggerEnter, addr 0x593654c, size 0x74, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x59365c0, size 0x74, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method PlayHapticClip, addr 0x5936210, size 0xb8, virtual false, abstract: false, final false
inline void PlayHapticClip(bool  forLeftController, ::UnityEngine::AudioClip*  clip, float_t  strength) ;

/// @brief Method ProcessHandTapping, addr 0x5934970, size 0x11d8, virtual false, abstract: false, final false
inline void ProcessHandTapping(/* [IsReadOnly] */ ::by_ref<bool>  isLeftHand, /* [IsReadOnly] */ ::by_ref<::GorillaLocomotion::StiltID>  stiltID, ::by_ref<float_t>  lastTapTime, ::by_ref<float_t>  lastTapUpTime, ::by_ref<bool>  wasHandTouching, /* [IsReadOnly] */ ::by_ref<::UnityEngine::AudioSource*>  handSlideSource) ;

/// @brief Method RecoverMissingRefs, addr 0x5930cdc, size 0x10c, virtual false, abstract: false, final false
inline void RecoverMissingRefs() ;

/// @brief Method RecoverMissingRefs_Asdf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void RecoverMissingRefs_Asdf(::by_ref<T>  objRef, ::StringW  objFieldName, ::StringW  recoveryPath) ;

/// @brief Method ResetTappedSurfaceCheck, addr 0x592fe3c, size 0x8, virtual false, abstract: false, final false
inline void ResetTappedSurfaceCheck() ;

/// @brief Method SetExtraHandPosition, addr 0x592fb7c, size 0x70, virtual false, abstract: false, final false
inline void SetExtraHandPosition(::GorillaLocomotion::StiltID  stiltID, ::UnityEngine::Vector3  position, bool  canTag, bool  canStun) ;

/// @brief Method SetForcedRefreshRate, addr 0x5931498, size 0x2b0, virtual false, abstract: false, final false
inline void SetForcedRefreshRate(bool  forcePerf, float_t  newRefreshRate) ;

/// @brief Method SetTagRadiusOverrideThisFrame, addr 0x592fe44, size 0x78, virtual false, abstract: false, final false
inline void SetTagRadiusOverrideThisFrame(float_t  radius) ;

/// @brief Method ShowCosmeticParticles, addr 0x5936634, size 0x138, virtual false, abstract: false, final false
inline void ShowCosmeticParticles(bool  showParticles) ;

/// @brief Method Start, addr 0x5931044, size 0x434, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartVibration, addr 0x5935ef4, size 0x20, virtual false, abstract: false, final false
inline void StartVibration(bool  forLeftController, float_t  amplitude, float_t  duration) ;

/// @brief Method StopHapticClip, addr 0x5936374, size 0x48, virtual false, abstract: false, final false
inline void StopHapticClip(bool  forLeftController) ;

/// @brief Method ToggleDefaultPerformanceRefresh, addr 0x5931748, size 0xc, virtual false, abstract: false, final false
inline void ToggleDefaultPerformanceRefresh() ;

/// [ContextMenu("Toggle Performance Refresh Rate")]
/// @brief Method ToggleForcedPerformanceRefresh, addr 0x5931488, size 0x10, virtual false, abstract: false, final false
inline void ToggleForcedPerformanceRefresh() ;

/// @brief Method ToggleForcedRefreshRate, addr 0x5931754, size 0x10, virtual false, abstract: false, final false
inline void ToggleForcedRefreshRate(float_t  newRefreshRate) ;

/// @brief Method TryToTag, addr 0x5935f14, size 0x25c, virtual false, abstract: false, final false
inline bool TryToTag(::UnityEngine::Collider*  hitCollider, bool  isBodyTag, bool  canStun, float_t  maxTagDistance, ::by_ref<::GlobalNamespace::NetPlayer*>  taggedPlayer, ::by_ref<::GlobalNamespace::NetPlayer*>  touchedNetPlayer) ;

/// @brief Method TryToTag, addr 0x5935b7c, size 0x378, virtual false, abstract: false, final false
inline bool TryToTag(::GlobalNamespace::VRRig*  rig, ::UnityEngine::Vector3  hitObjectPos, bool  isBodyTag, bool  canStun, float_t  maxTagDistance, ::by_ref<::GlobalNamespace::NetPlayer*>  taggedPlayer, ::by_ref<::GlobalNamespace::NetPlayer*>  touchedPlayer) ;

/// @brief Method UpdateColor, addr 0x593641c, size 0x130, virtual false, abstract: false, final false
inline void UpdateColor(float_t  red, float_t  green, float_t  blue) ;

/// @brief Method UpdateResolutionScale, addr 0x5931764, size 0x14c, virtual false, abstract: false, final false
inline void UpdateResolutionScale(bool  performanceMode) ;

/// [CompilerGenerated]
/// @brief Method <LateUpdate>g__TryTaggingAllHitsCapsulecast|159_1, addr 0x5934358, size 0x264, virtual false, abstract: false, final false
inline void _LateUpdate_g__TryTaggingAllHitsCapsulecast_159_1(float_t  maxTagDistance, bool  canTag, bool  canStun, ::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <LateUpdate>g__TryTaggingAllHitsOverlap|159_0, addr 0x5934110, size 0x248, virtual false, abstract: false, final false
inline void _LateUpdate_g__TryTaggingAllHitsOverlap_159_0(bool  isLeftHand, float_t  maxTagDistance, bool  canTag, bool  canStun, ::by_ref<::GlobalNamespace::GorillaTagger___c__DisplayClass159_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_BaseMirrorCameraCullingMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_BaseMirrorCameraCullingMask() ;

constexpr int32_t const& __cordl_internal_get_FramerateHealth() const;

constexpr int32_t& __cordl_internal_get_FramerateHealth() ;

constexpr ::GlobalNamespace::Watchable_1<int32_t>* const& __cordl_internal_get_MirrorCameraCullingMask() const;

constexpr ::GlobalNamespace::Watchable_1<int32_t>*& __cordl_internal_get_MirrorCameraCullingMask() ;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>* const& __cordl_internal_get_OnHandTap() const;

constexpr ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*& __cordl_internal_get_OnHandTap() ;

constexpr int32_t const& __cordl_internal_get_SmoothedFramerate() const;

constexpr int32_t& __cordl_internal_get_SmoothedFramerate() ;

constexpr int32_t const& __cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__defaultRefreshRate() const;

constexpr float_t& __cordl_internal_get__defaultRefreshRate() ;

constexpr bool const& __cordl_internal_get__forceFramerateCheck() const;

constexpr bool& __cordl_internal_get__forceFramerateCheck() ;

constexpr bool const& __cordl_internal_get__forcePerfRefreshRate() const;

constexpr bool& __cordl_internal_get__forcePerfRefreshRate() ;

constexpr float_t const& __cordl_internal_get__framerateHealthTimer() const;

constexpr float_t& __cordl_internal_get__framerateHealthTimer() ;

constexpr int32_t const& __cordl_internal_get__framerateIndex() const;

constexpr int32_t& __cordl_internal_get__framerateIndex() ;

constexpr float_t const& __cordl_internal_get__framerateTimer() const;

constexpr float_t& __cordl_internal_get__framerateTimer() ;

constexpr float_t const& __cordl_internal_get__framerateTotal() const;

constexpr float_t& __cordl_internal_get__framerateTotal() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__framerateTracker() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__framerateTracker() ;

constexpr bool const& __cordl_internal_get__framerateUpdated() const;

constexpr bool& __cordl_internal_get__framerateUpdated() ;

constexpr int32_t const& __cordl_internal_get__framesForHandTrigger() const;

constexpr int32_t& __cordl_internal_get__framesForHandTrigger() ;

constexpr bool const& __cordl_internal_get__hasTappedSurface_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasTappedSurface_k__BackingField() ;

constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool* const& __cordl_internal_get__leftHandDown() const;

constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool*& __cordl_internal_get__leftHandDown() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get__myRecorder_k__BackingField() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get__myRecorder_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__perfRefreshRate() const;

constexpr float_t& __cordl_internal_get__perfRefreshRate() ;

constexpr bool const& __cordl_internal_get__performanceOn() const;

constexpr bool& __cordl_internal_get__performanceOn() ;

constexpr int32_t const& __cordl_internal_get__prevFramerateHealth() const;

constexpr int32_t& __cordl_internal_get__prevFramerateHealth() ;

constexpr int32_t const& __cordl_internal_get__prevSmoothedFramerate() const;

constexpr int32_t& __cordl_internal_get__prevSmoothedFramerate() ;

constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool* const& __cordl_internal_get__rightHandDown() const;

constexpr ::GlobalNamespace::GorillaTagger_DebouncedBool*& __cordl_internal_get__rightHandDown() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get__rigidbody_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get__rigidbody_k__BackingField() ;

constexpr Il2CppObject* const& __cordl_internal_get_activeXRDisplay() const;

constexpr Il2CppObject*& __cordl_internal_get_activeXRDisplay() ;

constexpr int32_t const& __cordl_internal_get_audioClipIndex() const;

constexpr int32_t& __cordl_internal_get_audioClipIndex() ;

constexpr float_t const& __cordl_internal_get_baseSlideControl() const;

constexpr float_t& __cordl_internal_get_baseSlideControl() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_bodyCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyRaycastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyRaycastSweep() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_bodySlideSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_bodySlideSource() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyVector() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bottomVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bottomVector() ;

constexpr float_t const& __cordl_internal_get_cacheHandTapVolume() const;

constexpr float_t& __cordl_internal_get_cacheHandTapVolume() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliderOverlaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliderOverlaps() ;

constexpr ::GlobalNamespace::GorillaTagger_StatusEffect const& __cordl_internal_get_currentStatus() const;

constexpr ::GlobalNamespace::GorillaTagger_StatusEffect& __cordl_internal_get_currentStatus() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_dirFromHitToHand() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_dirFromHitToHand() ;

constexpr bool const& __cordl_internal_get_disableTutorial() const;

constexpr bool& __cordl_internal_get_disableTutorial() ;

constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>* const& __cordl_internal_get_gameOverlayActivatedCb() const;

constexpr ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*& __cordl_internal_get_gameOverlayActivatedCb() ;

constexpr int32_t const& __cordl_internal_get_gorillaTagColliderLayerMask() const;

constexpr int32_t& __cordl_internal_get_gorillaTagColliderLayerMask() ;

constexpr float_t const& __cordl_internal_get_handTapSpeed() const;

constexpr float_t& __cordl_internal_get_handTapSpeed() ;

constexpr float_t const& __cordl_internal_get_handTapVolume() const;

constexpr float_t& __cordl_internal_get_handTapVolume() ;

constexpr float_t const& __cordl_internal_get_hapticWaitSeconds() const;

constexpr float_t& __cordl_internal_get_hapticWaitSeconds() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_headCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_headCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headRaycastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headRaycastSweep() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hitInfo() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hitInfo() ;

constexpr bool const& __cordl_internal_get_inCosmeticsRoom() const;

constexpr bool& __cordl_internal_get_inCosmeticsRoom() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_inputDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_inputDevice() ;

constexpr bool const& __cordl_internal_get_isGameOverlayActive() const;

constexpr bool& __cordl_internal_get_isGameOverlayActive() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastBodyPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastBodyPositionForTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastHeadPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastHeadPositionForTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLeftHandPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLeftHandPositionForTag() ;

constexpr float_t const& __cordl_internal_get_lastLeftTap() const;

constexpr float_t& __cordl_internal_get_lastLeftTap() ;

constexpr float_t const& __cordl_internal_get_lastLeftUpTap() const;

constexpr float_t& __cordl_internal_get_lastLeftUpTap() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRightHandPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRightHandPositionForTag() ;

constexpr float_t const& __cordl_internal_get_lastRightTap() const;

constexpr float_t& __cordl_internal_get_lastRightTap() ;

constexpr float_t const& __cordl_internal_get_lastRightUpTap() const;

constexpr float_t& __cordl_internal_get_lastRightUpTap() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_leftDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_leftDevice() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_leftHandSlideSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_leftHandSlideSource() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandTransform() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHandTriggerCollider() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHandTriggerCollider() ;

constexpr bool const& __cordl_internal_get_leftHandWasTouching() const;

constexpr bool& __cordl_internal_get_leftHandWasTouching() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_leftHapticsBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_leftHapticsBuffer() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_leftHapticsRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_leftHapticsRoutine() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHeadRaycastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHeadRaycastSweep() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftRaycastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftRaycastSweep() ;

constexpr ::StringW const& __cordl_internal_get_loadedDeviceName() const;

constexpr ::StringW& __cordl_internal_get_loadedDeviceName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mainCamera() ;

constexpr float_t const& __cordl_internal_get_maxStiltTagDistance() const;

constexpr float_t& __cordl_internal_get_maxStiltTagDistance() ;

constexpr float_t const& __cordl_internal_get_maxTagDistance() const;

constexpr float_t& __cordl_internal_get_maxTagDistance() ;

constexpr int32_t const& __cordl_internal_get_nonAllocHits() const;

constexpr int32_t& __cordl_internal_get_nonAllocHits() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_nonAllocRaycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_nonAllocRaycastHits() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_offlineVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_offlineVRRig() ;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo const& __cordl_internal_get_offlineVRRig_gRef() const;

constexpr ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo& __cordl_internal_get_offlineVRRig_gRef() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_otherPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_otherPlayer() ;

constexpr bool const& __cordl_internal_get_overrideNotInFocus() const;

constexpr bool& __cordl_internal_get_overrideNotInFocus() ;

constexpr bool const& __cordl_internal_get_primaryButtonPressLeft() const;

constexpr bool& __cordl_internal_get_primaryButtonPressLeft() ;

constexpr bool const& __cordl_internal_get_primaryButtonPressRight() const;

constexpr bool& __cordl_internal_get_primaryButtonPressRight() ;

constexpr float_t const& __cordl_internal_get_refreshRate() const;

constexpr float_t& __cordl_internal_get_refreshRate() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get_rightDevice() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get_rightDevice() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_rightHandSlideSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_rightHandSlideSource() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandTransform() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHandTriggerCollider() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHandTriggerCollider() ;

constexpr bool const& __cordl_internal_get_rightHandWasTouching() const;

constexpr bool& __cordl_internal_get_rightHandWasTouching() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_rightHapticsBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_rightHapticsBuffer() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_rightHapticsRoutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_rightHapticsRoutine() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHeadRaycastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHeadRaycastSweep() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightRaycastSweep() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightRaycastSweep() ;

constexpr bool const& __cordl_internal_get_secondaryButtonPressLeft() const;

constexpr bool& __cordl_internal_get_secondaryButtonPressLeft() ;

constexpr bool const& __cordl_internal_get_secondaryButtonPressRight() const;

constexpr bool& __cordl_internal_get_secondaryButtonPressRight() ;

constexpr float_t const& __cordl_internal_get_slowCooldown() const;

constexpr float_t& __cordl_internal_get_slowCooldown() ;

constexpr float_t const& __cordl_internal_get_statusEndTime() const;

constexpr float_t& __cordl_internal_get_statusEndTime() ;

constexpr float_t const& __cordl_internal_get_statusStartTime() const;

constexpr float_t& __cordl_internal_get_statusStartTime() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData> const& __cordl_internal_get_stiltTagData() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData>& __cordl_internal_get_stiltTagData() ;

constexpr float_t const& __cordl_internal_get_tagCooldown() const;

constexpr float_t& __cordl_internal_get_tagCooldown() ;

constexpr float_t const& __cordl_internal_get_tagHapticDuration() const;

constexpr float_t& __cordl_internal_get_tagHapticDuration() ;

constexpr float_t const& __cordl_internal_get_tagHapticStrength() const;

constexpr float_t& __cordl_internal_get_tagHapticStrength() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get_tagRadiusOverride() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get_tagRadiusOverride() ;

constexpr int32_t const& __cordl_internal_get_tagRadiusOverrideFrame() const;

constexpr int32_t& __cordl_internal_get_tagRadiusOverrideFrame() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_tagRigDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_tagRigDict() ;

constexpr float_t const& __cordl_internal_get_taggedHapticDuration() const;

constexpr float_t& __cordl_internal_get_taggedHapticDuration() ;

constexpr float_t const& __cordl_internal_get_taggedHapticStrength() const;

constexpr float_t& __cordl_internal_get_taggedHapticStrength() ;

constexpr float_t const& __cordl_internal_get_taggedTime() const;

constexpr float_t& __cordl_internal_get_taggedTime() ;

constexpr float_t const& __cordl_internal_get_tapCoolDown() const;

constexpr float_t& __cordl_internal_get_tapCoolDown() ;

constexpr float_t const& __cordl_internal_get_tapHapticDuration() const;

constexpr float_t& __cordl_internal_get_tapHapticDuration() ;

constexpr float_t const& __cordl_internal_get_tapHapticStrength() const;

constexpr float_t& __cordl_internal_get_tapHapticStrength() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_tempCreator() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_tempCreator() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_tempView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_tempView() ;

constexpr bool const& __cordl_internal_get_testTutorial() const;

constexpr bool& __cordl_internal_get_testTutorial() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_thirdPersonCamera() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_thirdPersonCamera() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_topVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_topVector() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_touchedPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_touchedPlayer() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_tryPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_tryPlayer() ;

constexpr bool const& __cordl_internal_get_wasInOverlay() const;

constexpr bool& __cordl_internal_get_wasInOverlay() ;

constexpr bool const& __cordl_internal_get_xrSubsystemIsActive() const;

constexpr bool& __cordl_internal_get_xrSubsystemIsActive() ;

constexpr void __cordl_internal_set_BaseMirrorCameraCullingMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_FramerateHealth(int32_t  value) ;

constexpr void __cordl_internal_set_MirrorCameraCullingMask(::GlobalNamespace::Watchable_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_OnHandTap(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_SmoothedFramerate(int32_t  value) ;

constexpr void __cordl_internal_set__GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__defaultRefreshRate(float_t  value) ;

constexpr void __cordl_internal_set__forceFramerateCheck(bool  value) ;

constexpr void __cordl_internal_set__forcePerfRefreshRate(bool  value) ;

constexpr void __cordl_internal_set__framerateHealthTimer(float_t  value) ;

constexpr void __cordl_internal_set__framerateIndex(int32_t  value) ;

constexpr void __cordl_internal_set__framerateTimer(float_t  value) ;

constexpr void __cordl_internal_set__framerateTotal(float_t  value) ;

constexpr void __cordl_internal_set__framerateTracker(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__framerateUpdated(bool  value) ;

constexpr void __cordl_internal_set__framesForHandTrigger(int32_t  value) ;

constexpr void __cordl_internal_set__hasTappedSurface_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__leftHandDown(::GlobalNamespace::GorillaTagger_DebouncedBool*  value) ;

constexpr void __cordl_internal_set__myRecorder_k__BackingField(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set__perfRefreshRate(float_t  value) ;

constexpr void __cordl_internal_set__performanceOn(bool  value) ;

constexpr void __cordl_internal_set__prevFramerateHealth(int32_t  value) ;

constexpr void __cordl_internal_set__prevSmoothedFramerate(int32_t  value) ;

constexpr void __cordl_internal_set__rightHandDown(::GlobalNamespace::GorillaTagger_DebouncedBool*  value) ;

constexpr void __cordl_internal_set__rigidbody_k__BackingField(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_activeXRDisplay(Il2CppObject*  value) ;

constexpr void __cordl_internal_set_audioClipIndex(int32_t  value) ;

constexpr void __cordl_internal_set_baseSlideControl(float_t  value) ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_bodyRaycastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bodySlideSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bodyVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bottomVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cacheHandTapVolume(float_t  value) ;

constexpr void __cordl_internal_set_colliderOverlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_currentStatus(::GlobalNamespace::GorillaTagger_StatusEffect  value) ;

constexpr void __cordl_internal_set_dirFromHitToHand(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_disableTutorial(bool  value) ;

constexpr void __cordl_internal_set_gameOverlayActivatedCb(::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  value) ;

constexpr void __cordl_internal_set_gorillaTagColliderLayerMask(int32_t  value) ;

constexpr void __cordl_internal_set_handTapSpeed(float_t  value) ;

constexpr void __cordl_internal_set_handTapVolume(float_t  value) ;

constexpr void __cordl_internal_set_hapticWaitSeconds(float_t  value) ;

constexpr void __cordl_internal_set_headCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_headRaycastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_hitInfo(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_inCosmeticsRoom(bool  value) ;

constexpr void __cordl_internal_set_inputDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_isGameOverlayActive(bool  value) ;

constexpr void __cordl_internal_set_lastBodyPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastHeadPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastLeftHandPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastLeftTap(float_t  value) ;

constexpr void __cordl_internal_set_lastLeftUpTap(float_t  value) ;

constexpr void __cordl_internal_set_lastRightHandPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRightTap(float_t  value) ;

constexpr void __cordl_internal_set_lastRightUpTap(float_t  value) ;

constexpr void __cordl_internal_set_leftDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_leftHandSlideSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftHandTriggerCollider(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leftHandWasTouching(bool  value) ;

constexpr void __cordl_internal_set_leftHapticsBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_leftHapticsRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_leftHeadRaycastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftRaycastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_loadedDeviceName(::StringW  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_maxStiltTagDistance(float_t  value) ;

constexpr void __cordl_internal_set_maxTagDistance(float_t  value) ;

constexpr void __cordl_internal_set_nonAllocHits(int32_t  value) ;

constexpr void __cordl_internal_set_nonAllocRaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_offlineVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_offlineVRRig_gRef(::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  value) ;

constexpr void __cordl_internal_set_otherPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_overrideNotInFocus(bool  value) ;

constexpr void __cordl_internal_set_primaryButtonPressLeft(bool  value) ;

constexpr void __cordl_internal_set_primaryButtonPressRight(bool  value) ;

constexpr void __cordl_internal_set_refreshRate(float_t  value) ;

constexpr void __cordl_internal_set_rightDevice(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set_rightHandSlideSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightHandTriggerCollider(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rightHandWasTouching(bool  value) ;

constexpr void __cordl_internal_set_rightHapticsBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_rightHapticsRoutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_rightHeadRaycastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightRaycastSweep(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_secondaryButtonPressLeft(bool  value) ;

constexpr void __cordl_internal_set_secondaryButtonPressRight(bool  value) ;

constexpr void __cordl_internal_set_slowCooldown(float_t  value) ;

constexpr void __cordl_internal_set_statusEndTime(float_t  value) ;

constexpr void __cordl_internal_set_statusStartTime(float_t  value) ;

constexpr void __cordl_internal_set_stiltTagData(::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData>  value) ;

constexpr void __cordl_internal_set_tagCooldown(float_t  value) ;

constexpr void __cordl_internal_set_tagHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_tagHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_tagRadiusOverride(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set_tagRadiusOverrideFrame(int32_t  value) ;

constexpr void __cordl_internal_set_tagRigDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_taggedHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_taggedHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_taggedTime(float_t  value) ;

constexpr void __cordl_internal_set_tapCoolDown(float_t  value) ;

constexpr void __cordl_internal_set_tapHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_tapHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_tempCreator(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_tempView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_testTutorial(bool  value) ;

constexpr void __cordl_internal_set_thirdPersonCamera(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_topVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_touchedPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_tryPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_wasInOverlay(bool  value) ;

constexpr void __cordl_internal_set_xrSubsystemIsActive(bool  value) ;

/// @brief Method .ctor, addr 0x59373bc, size 0x220, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnHandTap, addr 0x592fccc, size 0xb0, virtual false, abstract: false, final false
inline void add_OnHandTap(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

static inline ::UnityW<::GlobalNamespace::GorillaTagger> getStaticF__instance() ;

static inline bool getStaticF_hasInstance() ;

static inline float_t getStaticF_moderationMutedTime() ;

static inline ::System::Action* getStaticF_onPlayerSpawnedRootCallback() ;

/// @brief Method get_DefaultHandTapVolume, addr 0x592fc3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_DefaultHandTapVolume() ;

/// @brief Method get_ForcePerfRefreshRate, addr 0x592fb74, size 0x8, virtual false, abstract: false, final false
inline bool get_ForcePerfRefreshRate() ;

/// @brief Method get_Instance, addr 0x592fb1c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaTagger> get_Instance() ;

/// @brief Method get_PerformanceOn, addr 0x592fc1c, size 0x8, virtual false, abstract: false, final false
inline bool get_PerformanceOn() ;

/// [CompilerGenerated]
/// @brief Method get_hasTappedSurface, addr 0x592fe2c, size 0x8, virtual false, abstract: false, final false
inline bool get_hasTappedSurface() ;

/// [CompilerGenerated]
/// @brief Method get_myRecorder, addr 0x592fc44, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Recorder> get_myRecorder() ;

/// @brief Method get_myVRRig, addr 0x592fbec, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::NetworkView> get_myVRRig() ;

/// @brief Method get_rigSerializer, addr 0x592fc04, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::VRRigSerializer> get_rigSerializer() ;

/// [CompilerGenerated]
/// @brief Method get_rigidbody, addr 0x592fc24, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Rigidbody> get_rigidbody() ;

/// @brief Method get_sphereCastRadius, addr 0x592fc5c, size 0x70, virtual false, abstract: false, final false
inline float_t get_sphereCastRadius() ;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour* i___GorillaTag__GuidedRefs__IGuidedRefMonoBehaviour() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefObject"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefObject* i___GorillaTag__GuidedRefs__IGuidedRefObject() noexcept;

/// @brief Convert to "::GorillaTag::GuidedRefs::IGuidedRefReceiverMono"
constexpr ::GorillaTag::GuidedRefs::IGuidedRefReceiverMono* i___GorillaTag__GuidedRefs__IGuidedRefReceiverMono() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnHandTap, addr 0x592fd7c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnHandTap(::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::GorillaTagger>  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_moderationMutedTime(float_t  value) ;

static inline void setStaticF_onPlayerSpawnedRootCallback(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasTappedSurface, addr 0x592fe34, size 0x8, virtual false, abstract: false, final false
inline void set_hasTappedSurface(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_myRecorder, addr 0x592fc4c, size 0x10, virtual false, abstract: false, final false
inline void set_myRecorder(::Photon::Voice::Unity::Recorder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_rigidbody, addr 0x592fc2c, size 0x10, virtual false, abstract: false, final false
inline void set_rigidbody(::UnityEngine::Rigidbody*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagger(GorillaTagger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagger(GorillaTagger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2260};

/// @brief Field SmoothedFramerate, offset: 0x20, size: 0x4, def value: None
 int32_t  ___SmoothedFramerate;

/// @brief Field _prevSmoothedFramerate, offset: 0x24, size: 0x4, def value: None
 int32_t  ____prevSmoothedFramerate;

/// @brief Field FramerateHealth, offset: 0x28, size: 0x4, def value: None
 int32_t  ___FramerateHealth;

/// @brief Field _prevFramerateHealth, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____prevFramerateHealth;

/// @brief Field _framerateHealthTimer, offset: 0x30, size: 0x4, def value: None
 float_t  ____framerateHealthTimer;

/// @brief Field _framerateTracker, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ____framerateTracker;

/// @brief Field _framerateTotal, offset: 0x40, size: 0x4, def value: None
 float_t  ____framerateTotal;

/// @brief Field _framerateIndex, offset: 0x44, size: 0x4, def value: None
 int32_t  ____framerateIndex;

/// @brief Field _framerateTimer, offset: 0x48, size: 0x4, def value: None
 float_t  ____framerateTimer;

/// @brief Field _forcePerfRefreshRate, offset: 0x4c, size: 0x1, def value: None
 bool  ____forcePerfRefreshRate;

/// @brief Field _perfRefreshRate, offset: 0x50, size: 0x4, def value: None
 float_t  ____perfRefreshRate;

/// @brief Field _defaultRefreshRate, offset: 0x54, size: 0x4, def value: None
 float_t  ____defaultRefreshRate;

/// @brief Field inCosmeticsRoom, offset: 0x58, size: 0x1, def value: None
 bool  ___inCosmeticsRoom;

/// @brief Field headCollider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___headCollider;

/// @brief Field bodyCollider, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___bodyCollider;

/// @brief Field lastLeftHandPositionForTag, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLeftHandPositionForTag;

/// @brief Field lastRightHandPositionForTag, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRightHandPositionForTag;

/// @brief Field lastBodyPositionForTag, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastBodyPositionForTag;

/// @brief Field lastHeadPositionForTag, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastHeadPositionForTag;

/// @brief Field stiltTagData, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaTagger_StiltTagData>  ___stiltTagData;

/// @brief Field rightHandTransform, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandTransform;

/// @brief Field leftHandTransform, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandTransform;

/// @brief Field hapticWaitSeconds, offset: 0xb8, size: 0x4, def value: None
 float_t  ___hapticWaitSeconds;

/// @brief Field handTapVolume, offset: 0xbc, size: 0x4, def value: None
 float_t  ___handTapVolume;

/// @brief Field handTapSpeed, offset: 0xc0, size: 0x4, def value: None
 float_t  ___handTapSpeed;

/// @brief Field tapCoolDown, offset: 0xc4, size: 0x4, def value: None
 float_t  ___tapCoolDown;

/// @brief Field lastLeftTap, offset: 0xc8, size: 0x4, def value: None
 float_t  ___lastLeftTap;

/// @brief Field lastLeftUpTap, offset: 0xcc, size: 0x4, def value: None
 float_t  ___lastLeftUpTap;

/// @brief Field lastRightTap, offset: 0xd0, size: 0x4, def value: None
 float_t  ___lastRightTap;

/// @brief Field lastRightUpTap, offset: 0xd4, size: 0x4, def value: None
 float_t  ___lastRightUpTap;

/// @brief Field leftHandWasTouching, offset: 0xd8, size: 0x1, def value: None
 bool  ___leftHandWasTouching;

/// @brief Field rightHandWasTouching, offset: 0xd9, size: 0x1, def value: None
 bool  ___rightHandWasTouching;

/// @brief Field tapHapticDuration, offset: 0xdc, size: 0x4, def value: None
 float_t  ___tapHapticDuration;

/// @brief Field tapHapticStrength, offset: 0xe0, size: 0x4, def value: None
 float_t  ___tapHapticStrength;

/// @brief Field tagHapticDuration, offset: 0xe4, size: 0x4, def value: None
 float_t  ___tagHapticDuration;

/// @brief Field tagHapticStrength, offset: 0xe8, size: 0x4, def value: None
 float_t  ___tagHapticStrength;

/// @brief Field taggedHapticDuration, offset: 0xec, size: 0x4, def value: None
 float_t  ___taggedHapticDuration;

/// @brief Field taggedHapticStrength, offset: 0xf0, size: 0x4, def value: None
 float_t  ___taggedHapticStrength;

/// @brief Field taggedTime, offset: 0xf4, size: 0x4, def value: None
 float_t  ___taggedTime;

/// @brief Field tagCooldown, offset: 0xf8, size: 0x4, def value: None
 float_t  ___tagCooldown;

/// @brief Field slowCooldown, offset: 0xfc, size: 0x4, def value: None
 float_t  ___slowCooldown;

/// @brief Field maxTagDistance, offset: 0x100, size: 0x4, def value: None
 float_t  ___maxTagDistance;

/// @brief Field maxStiltTagDistance, offset: 0x104, size: 0x4, def value: None
 float_t  ___maxStiltTagDistance;

/// @brief Field offlineVRRig, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___offlineVRRig;

/// [FormerlySerializedAs("offlineVRRig_guidedRef")]
/// @brief Field offlineVRRig_gRef, offset: 0x110, size: 0x20, def value: None
 ::GorillaTag::GuidedRefs::GuidedRefReceiverFieldInfo  ___offlineVRRig_gRef;

/// @brief Field thirdPersonCamera, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___thirdPersonCamera;

/// @brief Field mainCamera, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mainCamera;

/// @brief Field testTutorial, offset: 0x140, size: 0x1, def value: None
 bool  ___testTutorial;

/// @brief Field disableTutorial, offset: 0x141, size: 0x1, def value: None
 bool  ___disableTutorial;

/// @brief Field _framerateUpdated, offset: 0x142, size: 0x1, def value: None
 bool  ____framerateUpdated;

/// @brief Field _performanceOn, offset: 0x143, size: 0x1, def value: None
 bool  ____performanceOn;

/// @brief Field leftHandTriggerCollider, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftHandTriggerCollider;

/// @brief Field rightHandTriggerCollider, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightHandTriggerCollider;

/// @brief Field leftHandSlideSource, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___leftHandSlideSource;

/// @brief Field rightHandSlideSource, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___rightHandSlideSource;

/// @brief Field bodySlideSource, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___bodySlideSource;

/// @brief Field overrideNotInFocus, offset: 0x170, size: 0x1, def value: None
 bool  ___overrideNotInFocus;

/// [CompilerGenerated]
/// @brief Field <rigidbody>k__BackingField, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ____rigidbody_k__BackingField;

/// @brief Field leftRaycastSweep, offset: 0x180, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftRaycastSweep;

/// @brief Field leftHeadRaycastSweep, offset: 0x18c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHeadRaycastSweep;

/// @brief Field rightRaycastSweep, offset: 0x198, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightRaycastSweep;

/// @brief Field rightHeadRaycastSweep, offset: 0x1a4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHeadRaycastSweep;

/// @brief Field headRaycastSweep, offset: 0x1b0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headRaycastSweep;

/// @brief Field bodyRaycastSweep, offset: 0x1bc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bodyRaycastSweep;

/// @brief Field rightDevice, offset: 0x1c8, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___rightDevice;

/// @brief Field leftDevice, offset: 0x1d8, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___leftDevice;

/// @brief Field primaryButtonPressRight, offset: 0x1e8, size: 0x1, def value: None
 bool  ___primaryButtonPressRight;

/// @brief Field secondaryButtonPressRight, offset: 0x1e9, size: 0x1, def value: None
 bool  ___secondaryButtonPressRight;

/// @brief Field primaryButtonPressLeft, offset: 0x1ea, size: 0x1, def value: None
 bool  ___primaryButtonPressLeft;

/// @brief Field secondaryButtonPressLeft, offset: 0x1eb, size: 0x1, def value: None
 bool  ___secondaryButtonPressLeft;

/// @brief Field hitInfo, offset: 0x1ec, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hitInfo;

/// @brief Field otherPlayer, offset: 0x218, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___otherPlayer;

/// @brief Field tryPlayer, offset: 0x220, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___tryPlayer;

/// @brief Field touchedPlayer, offset: 0x228, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___touchedPlayer;

/// @brief Field topVector, offset: 0x230, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___topVector;

/// @brief Field bottomVector, offset: 0x23c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bottomVector;

/// @brief Field bodyVector, offset: 0x248, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bodyVector;

/// @brief Field dirFromHitToHand, offset: 0x254, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___dirFromHitToHand;

/// @brief Field audioClipIndex, offset: 0x260, size: 0x4, def value: None
 int32_t  ___audioClipIndex;

/// @brief Field inputDevice, offset: 0x268, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ___inputDevice;

/// @brief Field wasInOverlay, offset: 0x278, size: 0x1, def value: None
 bool  ___wasInOverlay;

/// @brief Field tempView, offset: 0x280, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___tempView;

/// @brief Field tempCreator, offset: 0x288, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___tempCreator;

/// @brief Field cacheHandTapVolume, offset: 0x290, size: 0x4, def value: None
 float_t  ___cacheHandTapVolume;

/// @brief Field currentStatus, offset: 0x294, size: 0x4, def value: None
 ::GlobalNamespace::GorillaTagger_StatusEffect  ___currentStatus;

/// @brief Field statusStartTime, offset: 0x298, size: 0x4, def value: None
 float_t  ___statusStartTime;

/// @brief Field statusEndTime, offset: 0x29c, size: 0x4, def value: None
 float_t  ___statusEndTime;

/// @brief Field refreshRate, offset: 0x2a0, size: 0x4, def value: None
 float_t  ___refreshRate;

/// @brief Field baseSlideControl, offset: 0x2a4, size: 0x4, def value: None
 float_t  ___baseSlideControl;

/// @brief Field gorillaTagColliderLayerMask, offset: 0x2a8, size: 0x4, def value: None
 int32_t  ___gorillaTagColliderLayerMask;

/// @brief Field nonAllocRaycastHits, offset: 0x2b0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___nonAllocRaycastHits;

/// @brief Field colliderOverlaps, offset: 0x2b8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliderOverlaps;

/// @brief Field tagRigDict, offset: 0x2c0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::GlobalNamespace::VRRig>>*  ___tagRigDict;

/// @brief Field nonAllocHits, offset: 0x2c8, size: 0x4, def value: None
 int32_t  ___nonAllocHits;

/// [CompilerGenerated]
/// @brief Field <myRecorder>k__BackingField, offset: 0x2d0, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ____myRecorder_k__BackingField;

/// @brief Field xrSubsystemIsActive, offset: 0x2d8, size: 0x1, def value: None
 bool  ___xrSubsystemIsActive;

/// @brief Field loadedDeviceName, offset: 0x2e0, size: 0x8, def value: None
 ::StringW  ___loadedDeviceName;

/// @brief Field _forceFramerateCheck, offset: 0x2e8, size: 0x1, def value: None
 bool  ____forceFramerateCheck;

/// [SerializeField]
/// @brief Field _framesForHandTrigger, offset: 0x2ec, size: 0x4, def value: None
 int32_t  ____framesForHandTrigger;

/// @brief Field _leftHandDown, offset: 0x2f0, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagger_DebouncedBool*  ____leftHandDown;

/// @brief Field _rightHandDown, offset: 0x2f8, size: 0x8, def value: None
 ::GlobalNamespace::GorillaTagger_DebouncedBool*  ____rightHandDown;

/// [SerializeField]
/// @brief Field BaseMirrorCameraCullingMask, offset: 0x300, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___BaseMirrorCameraCullingMask;

/// @brief Field MirrorCameraCullingMask, offset: 0x308, size: 0x8, def value: None
 ::GlobalNamespace::Watchable_1<int32_t>*  ___MirrorCameraCullingMask;

/// @brief Field leftHapticsBuffer, offset: 0x310, size: 0x8, def value: None
 ::ArrayW<float_t>  ___leftHapticsBuffer;

/// @brief Field rightHapticsBuffer, offset: 0x318, size: 0x8, def value: None
 ::ArrayW<float_t>  ___rightHapticsBuffer;

/// @brief Field leftHapticsRoutine, offset: 0x320, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___leftHapticsRoutine;

/// @brief Field rightHapticsRoutine, offset: 0x328, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___rightHapticsRoutine;

/// @brief Field gameOverlayActivatedCb, offset: 0x330, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::GameOverlayActivated_t>*  ___gameOverlayActivatedCb;

/// @brief Field isGameOverlayActive, offset: 0x338, size: 0x1, def value: None
 bool  ___isGameOverlayActive;

/// @brief Field tagRadiusOverride, offset: 0x340, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ___tagRadiusOverride;

/// @brief Field tagRadiusOverrideFrame, offset: 0x350, size: 0x4, def value: None
 int32_t  ___tagRadiusOverrideFrame;

/// [CompilerGenerated]
/// @brief Field OnHandTap, offset: 0x358, size: 0x8, def value: None
 ::System::Action_3<bool,::UnityEngine::Vector3,::UnityEngine::Vector3>*  ___OnHandTap;

/// [CompilerGenerated]
/// @brief Field <hasTappedSurface>k__BackingField, offset: 0x360, size: 0x1, def value: None
 bool  ____hasTappedSurface_k__BackingField;

/// @brief Field activeXRDisplay, offset: 0x368, size: 0x8, def value: None
 Il2CppObject*  ___activeXRDisplay;

/// @brief Size padding 0x368 - 0x378 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [CompilerGenerated]
/// @brief Field <GorillaTag.GuidedRefs.IGuidedRefReceiverMono.GuidedRefsWaitingToResolveCount>k__BackingField, offset: 0x370, size: 0x4, def value: None
 int32_t  ____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___SmoothedFramerate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____prevSmoothedFramerate) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___FramerateHealth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____prevFramerateHealth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____framerateHealthTimer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____framerateTracker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____framerateTotal) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____framerateIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____framerateTimer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____forcePerfRefreshRate) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____perfRefreshRate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____defaultRefreshRate) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___inCosmeticsRoom) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___headCollider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___bodyCollider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastLeftHandPositionForTag) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastRightHandPositionForTag) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastBodyPositionForTag) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastHeadPositionForTag) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___stiltTagData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightHandTransform) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftHandTransform) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___hapticWaitSeconds) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___handTapVolume) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___handTapSpeed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tapCoolDown) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastLeftTap) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastLeftUpTap) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastRightTap) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___lastRightUpTap) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftHandWasTouching) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightHandWasTouching) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tapHapticDuration) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tapHapticStrength) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tagHapticDuration) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tagHapticStrength) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___taggedHapticDuration) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___taggedHapticStrength) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___taggedTime) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tagCooldown) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___slowCooldown) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___maxTagDistance) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___maxStiltTagDistance) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___offlineVRRig) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___offlineVRRig_gRef) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___thirdPersonCamera) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___mainCamera) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___testTutorial) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___disableTutorial) == 0x141, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____framerateUpdated) == 0x142, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____performanceOn) == 0x143, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftHandTriggerCollider) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightHandTriggerCollider) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftHandSlideSource) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightHandSlideSource) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___bodySlideSource) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___overrideNotInFocus) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____rigidbody_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftRaycastSweep) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftHeadRaycastSweep) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightRaycastSweep) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightHeadRaycastSweep) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___headRaycastSweep) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___bodyRaycastSweep) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightDevice) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftDevice) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___primaryButtonPressRight) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___secondaryButtonPressRight) == 0x1e9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___primaryButtonPressLeft) == 0x1ea, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___secondaryButtonPressLeft) == 0x1eb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___hitInfo) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___otherPlayer) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tryPlayer) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___touchedPlayer) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___topVector) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___bottomVector) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___bodyVector) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___dirFromHitToHand) == 0x254, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___audioClipIndex) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___inputDevice) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___wasInOverlay) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tempView) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tempCreator) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___cacheHandTapVolume) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___currentStatus) == 0x294, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___statusStartTime) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___statusEndTime) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___refreshRate) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___baseSlideControl) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___gorillaTagColliderLayerMask) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___nonAllocRaycastHits) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___colliderOverlaps) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tagRigDict) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___nonAllocHits) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____myRecorder_k__BackingField) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___xrSubsystemIsActive) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___loadedDeviceName) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____forceFramerateCheck) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____framesForHandTrigger) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____leftHandDown) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____rightHandDown) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___BaseMirrorCameraCullingMask) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___MirrorCameraCullingMask) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftHapticsBuffer) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightHapticsBuffer) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___leftHapticsRoutine) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___rightHapticsRoutine) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___gameOverlayActivatedCb) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___isGameOverlayActive) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tagRadiusOverride) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___tagRadiusOverrideFrame) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___OnHandTap) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____hasTappedSurface_k__BackingField) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ___activeXRDisplay) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger, ____GorillaTag_GuidedRefs_IGuidedRefReceiverMono_GuidedRefsWaitingToResolveCount_k__BackingField) == 0x370, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger) == 0x368, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagger/<HapticPulses>d__164
class CORDL_TYPE GorillaTagger__HapticPulses_d__164 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagger>  __4__this;

/// @brief Field <channel>5__4, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel_5__4, put=__cordl_internal_set__channel_5__4)) uint32_t  _channel_5__4;

/// @brief Field <device>5__3, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__device_5__3, put=__cordl_internal_set__device_5__3)) ::UnityEngine::XR::InputDevice  _device_5__3;

/// @brief Field <startTime>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__2, put=__cordl_internal_set__startTime_5__2)) float_t  _startTime_5__2;

/// @brief Field amplitude, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_amplitude, put=__cordl_internal_set_amplitude)) float_t  amplitude;

/// @brief Field duration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field forLeftController, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_forLeftController, put=__cordl_internal_set_forLeftController)) bool  forLeftController;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59384e4, size 0x168, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagger__HapticPulses_d__164* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x593864c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5938654, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x593868c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59384e0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagger> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagger>& __cordl_internal_get___4__this() ;

constexpr uint32_t const& __cordl_internal_get__channel_5__4() const;

constexpr uint32_t& __cordl_internal_get__channel_5__4() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get__device_5__3() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get__device_5__3() ;

constexpr float_t const& __cordl_internal_get__startTime_5__2() const;

constexpr float_t& __cordl_internal_get__startTime_5__2() ;

constexpr float_t const& __cordl_internal_get_amplitude() const;

constexpr float_t& __cordl_internal_get_amplitude() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr bool const& __cordl_internal_get_forLeftController() const;

constexpr bool& __cordl_internal_get_forLeftController() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagger>  value) ;

constexpr void __cordl_internal_set__channel_5__4(uint32_t  value) ;

constexpr void __cordl_internal_set__device_5__3(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set__startTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_amplitude(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_forLeftController(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59384b8, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagger__HapticPulses_d__164() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger__HapticPulses_d__164", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagger__HapticPulses_d__164(GorillaTagger__HapticPulses_d__164 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger__HapticPulses_d__164", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagger__HapticPulses_d__164(GorillaTagger__HapticPulses_d__164 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2258};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field forLeftController, offset: 0x20, size: 0x1, def value: None
 bool  ___forLeftController;

/// @brief Field amplitude, offset: 0x24, size: 0x4, def value: None
 float_t  ___amplitude;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagger>  _____4__this;

/// @brief Field duration, offset: 0x30, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field <startTime>5__2, offset: 0x34, size: 0x4, def value: None
 float_t  ____startTime_5__2;

/// @brief Field <device>5__3, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ____device_5__3;

/// @brief Field <channel>5__4, offset: 0x48, size: 0x4, def value: None
 uint32_t  ____channel_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, ___forLeftController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, ___amplitude) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, ___duration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, ____startTime_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, ____device_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164, ____channel_5__4) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger__HapticPulses_d__164) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.XR.InputDevice
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagger/<AudioClipHapticPulses>d__167
class CORDL_TYPE GorillaTagger__AudioClipHapticPulses_d__167 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::GorillaTagger>  __4__this;

/// @brief Field <audioData>5__6, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioData_5__6, put=__cordl_internal_set__audioData_5__6)) ::ArrayW<float_t>  _audioData_5__6;

/// @brief Field <bufferSize>5__4, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize_5__4, put=__cordl_internal_set__bufferSize_5__4)) int32_t  _bufferSize_5__4;

/// @brief Field <channel>5__3, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__channel_5__3, put=__cordl_internal_set__channel_5__3)) uint32_t  _channel_5__3;

/// @brief Field <device>5__2, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__device_5__2, put=__cordl_internal_set__device_5__2)) ::UnityEngine::XR::InputDevice  _device_5__2;

/// @brief Field <endTime>5__10, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__endTime_5__10, put=__cordl_internal_set__endTime_5__10)) float_t  _endTime_5__10;

/// @brief Field <length>5__9, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__length_5__9, put=__cordl_internal_set__length_5__9)) float_t  _length_5__9;

/// @brief Field <sampleOffset>5__7, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleOffset_5__7, put=__cordl_internal_set__sampleOffset_5__7)) int32_t  _sampleOffset_5__7;

/// @brief Field <sampleRate>5__11, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate_5__11, put=__cordl_internal_set__sampleRate_5__11)) float_t  _sampleRate_5__11;

/// @brief Field <sampleWindowSize>5__5, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleWindowSize_5__5, put=__cordl_internal_set__sampleWindowSize_5__5)) int32_t  _sampleWindowSize_5__5;

/// @brief Field <startTime>5__8, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__startTime_5__8, put=__cordl_internal_set__startTime_5__8)) float_t  _startTime_5__8;

/// @brief Field clip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_clip, put=__cordl_internal_set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

/// @brief Field forLeftController, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_forLeftController, put=__cordl_internal_set_forLeftController)) bool  forLeftController;

/// @brief Field strength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5937788, size 0x3ac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5937b34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5937b3c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5937b74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5937784, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTagger> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTagger>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__audioData_5__6() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__audioData_5__6() ;

constexpr int32_t const& __cordl_internal_get__bufferSize_5__4() const;

constexpr int32_t& __cordl_internal_get__bufferSize_5__4() ;

constexpr uint32_t const& __cordl_internal_get__channel_5__3() const;

constexpr uint32_t& __cordl_internal_get__channel_5__3() ;

constexpr ::UnityEngine::XR::InputDevice const& __cordl_internal_get__device_5__2() const;

constexpr ::UnityEngine::XR::InputDevice& __cordl_internal_get__device_5__2() ;

constexpr float_t const& __cordl_internal_get__endTime_5__10() const;

constexpr float_t& __cordl_internal_get__endTime_5__10() ;

constexpr float_t const& __cordl_internal_get__length_5__9() const;

constexpr float_t& __cordl_internal_get__length_5__9() ;

constexpr int32_t const& __cordl_internal_get__sampleOffset_5__7() const;

constexpr int32_t& __cordl_internal_get__sampleOffset_5__7() ;

constexpr float_t const& __cordl_internal_get__sampleRate_5__11() const;

constexpr float_t& __cordl_internal_get__sampleRate_5__11() ;

constexpr int32_t const& __cordl_internal_get__sampleWindowSize_5__5() const;

constexpr int32_t& __cordl_internal_get__sampleWindowSize_5__5() ;

constexpr float_t const& __cordl_internal_get__startTime_5__8() const;

constexpr float_t& __cordl_internal_get__startTime_5__8() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_clip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_clip() ;

constexpr bool const& __cordl_internal_get_forLeftController() const;

constexpr bool& __cordl_internal_get_forLeftController() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaTagger>  value) ;

constexpr void __cordl_internal_set__audioData_5__6(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__bufferSize_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__channel_5__3(uint32_t  value) ;

constexpr void __cordl_internal_set__device_5__2(::UnityEngine::XR::InputDevice  value) ;

constexpr void __cordl_internal_set__endTime_5__10(float_t  value) ;

constexpr void __cordl_internal_set__length_5__9(float_t  value) ;

constexpr void __cordl_internal_set__sampleOffset_5__7(int32_t  value) ;

constexpr void __cordl_internal_set__sampleRate_5__11(float_t  value) ;

constexpr void __cordl_internal_set__sampleWindowSize_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__startTime_5__8(float_t  value) ;

constexpr void __cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_forLeftController(bool  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x593775c, size 0x28, virtual false, abstract: false, final false
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
constexpr GorillaTagger__AudioClipHapticPulses_d__167() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger__AudioClipHapticPulses_d__167", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagger__AudioClipHapticPulses_d__167(GorillaTagger__AudioClipHapticPulses_d__167 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger__AudioClipHapticPulses_d__167", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagger__AudioClipHapticPulses_d__167(GorillaTagger__AudioClipHapticPulses_d__167 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2256};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field forLeftController, offset: 0x20, size: 0x1, def value: None
 bool  ___forLeftController;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTagger>  _____4__this;

/// @brief Field clip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___clip;

/// @brief Field strength, offset: 0x38, size: 0x4, def value: None
 float_t  ___strength;

/// @brief Field <device>5__2, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::XR::InputDevice  ____device_5__2;

/// @brief Field <channel>5__3, offset: 0x50, size: 0x4, def value: None
 uint32_t  ____channel_5__3;

/// @brief Field <bufferSize>5__4, offset: 0x54, size: 0x4, def value: None
 int32_t  ____bufferSize_5__4;

/// @brief Field <sampleWindowSize>5__5, offset: 0x58, size: 0x4, def value: None
 int32_t  ____sampleWindowSize_5__5;

/// @brief Field <audioData>5__6, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<float_t>  ____audioData_5__6;

/// @brief Field <sampleOffset>5__7, offset: 0x68, size: 0x4, def value: None
 int32_t  ____sampleOffset_5__7;

/// @brief Field <startTime>5__8, offset: 0x6c, size: 0x4, def value: None
 float_t  ____startTime_5__8;

/// @brief Field <length>5__9, offset: 0x70, size: 0x4, def value: None
 float_t  ____length_5__9;

/// @brief Field <endTime>5__10, offset: 0x74, size: 0x4, def value: None
 float_t  ____endTime_5__10;

/// @brief Field <sampleRate>5__11, offset: 0x78, size: 0x4, def value: None
 float_t  ____sampleRate_5__11;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ___forLeftController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ___clip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ___strength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____device_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____channel_5__3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____bufferSize_5__4) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____sampleWindowSize_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____audioData_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____sampleOffset_5__7) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____startTime_5__8) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____length_5__9) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____endTime_5__10) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167, ____sampleRate_5__11) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger__AudioClipHapticPulses_d__167) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagger/DebouncedBool
class CORDL_TYPE GorillaTagger_DebouncedBool : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_JustEnabled, put=set_JustEnabled)) bool  JustEnabled;

 __declspec(property(get=get_Value, put=set_Value)) bool  Value;

 __declspec(property(get=get_WasStablyEnabled, put=set_WasStablyEnabled)) bool  WasStablyEnabled;

/// @brief Field <JustEnabled>k__BackingField, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get__JustEnabled_k__BackingField, put=__cordl_internal_set__JustEnabled_k__BackingField)) bool  _JustEnabled_k__BackingField;

/// @brief Field <Value>k__BackingField, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get__Value_k__BackingField, put=__cordl_internal_set__Value_k__BackingField)) bool  _Value_k__BackingField;

/// @brief Field <WasStablyEnabled>k__BackingField, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get__WasStablyEnabled_k__BackingField, put=__cordl_internal_set__WasStablyEnabled_k__BackingField)) bool  _WasStablyEnabled_k__BackingField;

/// @brief Field _callsSinceDisable, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__callsSinceDisable, put=__cordl_internal_set__callsSinceDisable)) int32_t  _callsSinceDisable;

/// @brief Field _callsSinceEnable, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__callsSinceEnable, put=__cordl_internal_set__callsSinceEnable)) int32_t  _callsSinceEnable;

/// @brief Field _callsUntilStable, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__callsUntilStable, put=__cordl_internal_set__callsUntilStable)) int32_t  _callsUntilStable;

/// @brief Field _lastValue, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastValue, put=__cordl_internal_set__lastValue)) bool  _lastValue;

static inline ::GlobalNamespace::GorillaTagger_DebouncedBool* New_ctor(int32_t  callsUntilDisable, bool  initialValue) ;

/// @brief Method Set, addr 0x59376ec, size 0x70, virtual false, abstract: false, final false
inline void Set(bool  value) ;

constexpr bool const& __cordl_internal_get__JustEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__JustEnabled_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Value_k__BackingField() const;

constexpr bool& __cordl_internal_get__Value_k__BackingField() ;

constexpr bool const& __cordl_internal_get__WasStablyEnabled_k__BackingField() const;

constexpr bool& __cordl_internal_get__WasStablyEnabled_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__callsSinceDisable() const;

constexpr int32_t& __cordl_internal_get__callsSinceDisable() ;

constexpr int32_t const& __cordl_internal_get__callsSinceEnable() const;

constexpr int32_t& __cordl_internal_get__callsSinceEnable() ;

constexpr int32_t const& __cordl_internal_get__callsUntilStable() const;

constexpr int32_t& __cordl_internal_get__callsUntilStable() ;

constexpr bool const& __cordl_internal_get__lastValue() const;

constexpr bool& __cordl_internal_get__lastValue() ;

constexpr void __cordl_internal_set__JustEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Value_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__WasStablyEnabled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__callsSinceDisable(int32_t  value) ;

constexpr void __cordl_internal_set__callsSinceEnable(int32_t  value) ;

constexpr void __cordl_internal_set__callsUntilStable(int32_t  value) ;

constexpr void __cordl_internal_set__lastValue(bool  value) ;

/// @brief Method .ctor, addr 0x59376b8, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  callsUntilDisable, bool  initialValue) ;

/// [CompilerGenerated]
/// @brief Method get_JustEnabled, addr 0x5937698, size 0x8, virtual false, abstract: false, final false
inline bool get_JustEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_Value, addr 0x5937688, size 0x8, virtual false, abstract: false, final false
inline bool get_Value() ;

/// [CompilerGenerated]
/// @brief Method get_WasStablyEnabled, addr 0x59376a8, size 0x8, virtual false, abstract: false, final false
inline bool get_WasStablyEnabled() ;

/// [CompilerGenerated]
/// @brief Method set_JustEnabled, addr 0x59376a0, size 0x8, virtual false, abstract: false, final false
inline void set_JustEnabled(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0x5937690, size 0x8, virtual false, abstract: false, final false
inline void set_Value(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_WasStablyEnabled, addr 0x59376b0, size 0x8, virtual false, abstract: false, final false
inline void set_WasStablyEnabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagger_DebouncedBool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger_DebouncedBool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagger_DebouncedBool(GorillaTagger_DebouncedBool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagger_DebouncedBool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagger_DebouncedBool(GorillaTagger_DebouncedBool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2254};

/// @brief Field _callsUntilStable, offset: 0x10, size: 0x4, def value: None
 int32_t  ____callsUntilStable;

/// @brief Field _callsSinceDisable, offset: 0x14, size: 0x4, def value: None
 int32_t  ____callsSinceDisable;

/// @brief Field _callsSinceEnable, offset: 0x18, size: 0x4, def value: None
 int32_t  ____callsSinceEnable;

/// @brief Field _lastValue, offset: 0x1c, size: 0x1, def value: None
 bool  ____lastValue;

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x1d, size: 0x1, def value: None
 bool  ____Value_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <JustEnabled>k__BackingField, offset: 0x1e, size: 0x1, def value: None
 bool  ____JustEnabled_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WasStablyEnabled>k__BackingField, offset: 0x1f, size: 0x1, def value: None
 bool  ____WasStablyEnabled_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger_DebouncedBool, ____callsUntilStable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_DebouncedBool, ____callsSinceDisable) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_DebouncedBool, ____callsSinceEnable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_DebouncedBool, ____lastValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_DebouncedBool, ____Value_k__BackingField) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_DebouncedBool, ____JustEnabled_k__BackingField) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagger_DebouncedBool, ____WasStablyEnabled_k__BackingField) == 0x1f, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger_DebouncedBool) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
