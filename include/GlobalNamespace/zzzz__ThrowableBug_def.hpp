#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBug.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_AudioState_def.hpp"
#include "GlobalNamespace/zzzz__ThrowableBug_BugName_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableBug)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class ThrowableBugBeacon;
}
namespace GlobalNamespace {
class ThrowableBugReliableState;
}
namespace GlobalNamespace {
struct ThrowableBug_AudioState;
}
namespace GlobalNamespace {
struct ThrowableBug_BugName;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableBug;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ThrowableBug*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBug*, "", "ThrowableBug");
// Dependencies GTZone, ThrowableBug::AudioState, ThrowableBug::BugName, TransferrableObject, UnityEngine.LayerMask, UnityEngine.Quaternion, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ThrowableBug
class CORDL_TYPE ThrowableBug : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using AudioState = ::GlobalNamespace::ThrowableBug_AudioState;

using BugName = ::GlobalNamespace::ThrowableBug_BugName;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x438, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field _g_IsHeld, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__g_IsHeld, put=setStaticF__g_IsHeld)) int32_t  _g_IsHeld;

/// @brief Field animator, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field ascentRate, offset 0x3e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascentRate, put=__cordl_internal_set_ascentRate)) float_t  ascentRate;

/// @brief Field ascentSlerp, offset 0x3c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascentSlerp, put=__cordl_internal_set_ascentSlerp)) float_t  ascentSlerp;

/// @brief Field ascentSlerpRate, offset 0x3e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ascentSlerpRate, put=__cordl_internal_set_ascentSlerpRate)) float_t  ascentSlerpRate;

/// @brief Field audioSource, offset 0x410, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bobMagnintude, offset 0x354, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobMagnintude, put=__cordl_internal_set_bobMagnintude)) float_t  bobMagnintude;

/// @brief Field bobbingDefaultFrequency, offset 0x420, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobbingDefaultFrequency, put=__cordl_internal_set_bobbingDefaultFrequency)) float_t  bobbingDefaultFrequency;

/// @brief Field bobingFrequency, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobingFrequency, put=__cordl_internal_set_bobingFrequency)) float_t  bobingFrequency;

/// @brief Field bobingSpeed, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobingSpeed, put=__cordl_internal_set_bobingSpeed)) float_t  bobingSpeed;

/// @brief Field bobingState, offset 0x368, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobingState, put=__cordl_internal_set_bobingState)) float_t  bobingState;

/// @brief Field bugName, offset 0x43c, size 0x4 
 __declspec(property(get=__cordl_internal_get_bugName, put=__cordl_internal_set_bugName)) ::GlobalNamespace::ThrowableBug_BugName  bugName;

/// @brief Field bugRotationalVelocity, offset 0x390, size 0x10 
 __declspec(property(get=__cordl_internal_get_bugRotationalVelocity, put=__cordl_internal_set_bugRotationalVelocity)) ::UnityEngine::Quaternion  bugRotationalVelocity;

/// @brief Field collisionCheckMask, offset 0x374, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionCheckMask, put=__cordl_internal_set_collisionCheckMask)) ::UnityEngine::LayerMask  collisionCheckMask;

/// @brief Field collisionHitRadius, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionHitRadius, put=__cordl_internal_set_collisionHitRadius)) float_t  collisionHitRadius;

/// @brief Field currentAudioState, offset 0x428, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAudioState, put=__cordl_internal_set_currentAudioState)) ::GlobalNamespace::ThrowableBug_AudioState  currentAudioState;

/// @brief Field currentZone, offset 0x41c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentZone, put=__cordl_internal_set_currentZone)) ::GlobalNamespace::GTZone  currentZone;

/// @brief Field descentRate, offset 0x3d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_descentRate, put=__cordl_internal_set_descentRate)) float_t  descentRate;

/// @brief Field descentSlerp, offset 0x3bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_descentSlerp, put=__cordl_internal_set_descentSlerp)) float_t  descentSlerp;

/// @brief Field descentSlerpRate, offset 0x3d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_descentSlerpRate, put=__cordl_internal_set_descentSlerpRate)) float_t  descentSlerpRate;

/// @brief Field flyingBugAudioClip, offset 0x408, size 0x8 
 __declspec(property(get=__cordl_internal_get_flyingBugAudioClip, put=__cordl_internal_set_flyingBugAudioClip)) ::UnityW<::UnityEngine::AudioClip>  flyingBugAudioClip;

/// @brief Field followingRig, offset 0x3b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_followingRig, put=__cordl_internal_set_followingRig)) ::UnityW<::GlobalNamespace::VRRig>  followingRig;

/// @brief Field grabBugAudioClip, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabBugAudioClip, put=__cordl_internal_set_grabBugAudioClip)) ::UnityW<::UnityEngine::AudioClip>  grabBugAudioClip;

/// @brief Field isTooHighTravelingDown, offset 0x3b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTooHighTravelingDown, put=__cordl_internal_set_isTooHighTravelingDown)) bool  isTooHighTravelingDown;

/// @brief Field isTooLowTravelingUp, offset 0x3ec, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTooLowTravelingUp, put=__cordl_internal_set_isTooLowTravelingUp)) bool  isTooLowTravelingUp;

/// @brief Field locked, offset 0x448, size 0x1 
 __declspec(property(get=__cordl_internal_get_locked, put=__cordl_internal_set_locked)) bool  locked;

/// @brief Field lockedTarget, offset 0x440, size 0x8 
 __declspec(property(get=__cordl_internal_get_lockedTarget, put=__cordl_internal_set_lockedTarget)) ::UnityW<::UnityEngine::Transform>  lockedTarget;

/// @brief Field maxNaturalSpeed, offset 0x3c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNaturalSpeed, put=__cordl_internal_set_maxNaturalSpeed)) float_t  maxNaturalSpeed;

/// @brief Field maxRandFrequency, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRandFrequency, put=__cordl_internal_set_maxRandFrequency)) float_t  maxRandFrequency;

/// @brief Field maximumHeightOffOfTheGroundBeforeStartingDescent, offset 0x3cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumHeightOffOfTheGroundBeforeStartingDescent, put=__cordl_internal_set_maximumHeightOffOfTheGroundBeforeStartingDescent)) float_t  maximumHeightOffOfTheGroundBeforeStartingDescent;

/// @brief Field maximumHeightOffOfTheGroundBeforeStoppingAscent, offset 0x3e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maximumHeightOffOfTheGroundBeforeStoppingAscent, put=__cordl_internal_set_maximumHeightOffOfTheGroundBeforeStoppingAscent)) float_t  maximumHeightOffOfTheGroundBeforeStoppingAscent;

/// @brief Field minRandFrequency, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minRandFrequency, put=__cordl_internal_set_minRandFrequency)) float_t  minRandFrequency;

/// @brief Field minimumHeightOffOfTheGroundBeforeStartingAscent, offset 0x3dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumHeightOffOfTheGroundBeforeStartingAscent, put=__cordl_internal_set_minimumHeightOffOfTheGroundBeforeStartingAscent)) float_t  minimumHeightOffOfTheGroundBeforeStartingAscent;

/// @brief Field minimumHeightOffOfTheGroundBeforeStoppingDescent, offset 0x3d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumHeightOffOfTheGroundBeforeStoppingDescent, put=__cordl_internal_set_minimumHeightOffOfTheGroundBeforeStoppingDescent)) float_t  minimumHeightOffOfTheGroundBeforeStoppingDescent;

/// @brief Field rayCastNonAllocColliders, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayCastNonAllocColliders, put=__cordl_internal_set_rayCastNonAllocColliders)) ::ArrayW<::UnityEngine::RaycastHit>  rayCastNonAllocColliders;

/// @brief Field rayCastNonAllocColliders2, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayCastNonAllocColliders2, put=__cordl_internal_set_rayCastNonAllocColliders2)) ::ArrayW<::UnityEngine::RaycastHit>  rayCastNonAllocColliders2;

/// @brief Field raycastFrameCounter, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastFrameCounter, put=__cordl_internal_set_raycastFrameCounter)) int32_t  raycastFrameCounter;

/// @brief Field raycastFramePeriod, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_raycastFramePeriod, put=__cordl_internal_set_raycastFramePeriod)) int32_t  raycastFramePeriod;

/// @brief Field releaseBugAudioClip, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_releaseBugAudioClip, put=__cordl_internal_set_releaseBugAudioClip)) ::UnityW<::UnityEngine::AudioClip>  releaseBugAudioClip;

/// @brief Field reliableState, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_reliableState, put=__cordl_internal_set_reliableState)) ::UnityW<::GlobalNamespace::ThrowableBugReliableState>  reliableState;

/// @brief Field shouldRandomizeFrequency, offset 0x358, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldRandomizeFrequency, put=__cordl_internal_set_shouldRandomizeFrequency)) bool  shouldRandomizeFrequency;

/// @brief Field slowdownAcceleration, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowdownAcceleration, put=__cordl_internal_set_slowdownAcceleration)) float_t  slowdownAcceleration;

/// @brief Field slowingDownProgress, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowingDownProgress, put=__cordl_internal_set_slowingDownProgress)) float_t  slowingDownProgress;

/// @brief Field speedMultiplier, offset 0x42c, size 0x4 
 __declspec(property(get=__cordl_internal_get_speedMultiplier, put=__cordl_internal_set_speedMultiplier)) float_t  speedMultiplier;

/// @brief Field startZone, offset 0x418, size 0x4 
 __declspec(property(get=__cordl_internal_get_startZone, put=__cordl_internal_set_startZone)) ::GlobalNamespace::GTZone  startZone;

/// @brief Field startingSpeed, offset 0x344, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingSpeed, put=__cordl_internal_set_startingSpeed)) float_t  startingSpeed;

/// @brief Field targetVelocity, offset 0x384, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetVelocity, put=__cordl_internal_set_targetVelocity)) ::UnityEngine::Vector3  targetVelocity;

/// @brief Field thrownVeloicity, offset 0x378, size 0xc 
 __declspec(property(get=__cordl_internal_get_thrownVeloicity, put=__cordl_internal_set_thrownVeloicity)) ::UnityEngine::Vector3  thrownVeloicity;

/// @brief Field thrownYVelocity, offset 0x36c, size 0x4 
 __declspec(property(get=__cordl_internal_get_thrownYVelocity, put=__cordl_internal_set_thrownYVelocity)) float_t  thrownYVelocity;

/// @brief Field updateMultiplier, offset 0x424, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateMultiplier, put=__cordl_internal_set_updateMultiplier)) int32_t  updateMultiplier;

/// @brief Field velocityEstimator, offset 0x430, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method LateUpdateLocal, addr 0x5b3250c, size 0x1274, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x5b32144, size 0x3c8, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::ThrowableBug* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5b339f0, size 0x2c, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x5b31890, size 0x1c4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b31110, size 0x1c4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRelease, addr 0x5b33794, size 0x25c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method RandomizeBobingFrequency, addr 0x5b33780, size 0x14, virtual false, abstract: false, final false
inline float_t RandomizeBobingFrequency() ;

/// @brief Method ShouldBeKinematic, addr 0x5b3213c, size 0x8, virtual true, abstract: false, final false
inline bool ShouldBeKinematic() ;

/// @brief Method Start, addr 0x5b31008, size 0x108, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method ThrowableBugBeacon_OnCall, addr 0x5b31f14, size 0x94, virtual false, abstract: false, final false
inline void ThrowableBugBeacon_OnCall(::GlobalNamespace::ThrowableBugBeacon*  tbb) ;

/// @brief Method ThrowableBugBeacon_OnChangeSpeedMultiplier, addr 0x5b32114, size 0x28, virtual false, abstract: false, final false
inline void ThrowableBugBeacon_OnChangeSpeedMultiplier(::GlobalNamespace::ThrowableBugBeacon*  tbb, float_t  f) ;

/// @brief Method ThrowableBugBeacon_OnDismiss, addr 0x5b32060, size 0x98, virtual false, abstract: false, final false
inline void ThrowableBugBeacon_OnDismiss(::GlobalNamespace::ThrowableBugBeacon*  tbb) ;

/// @brief Method ThrowableBugBeacon_OnLock, addr 0x5b31fa8, size 0xb8, virtual false, abstract: false, final false
inline void ThrowableBugBeacon_OnLock(::GlobalNamespace::ThrowableBugBeacon*  tbb) ;

/// @brief Method ThrowableBugBeacon_OnUnlock, addr 0x5b320f8, size 0x1c, virtual false, abstract: false, final false
inline void ThrowableBugBeacon_OnUnlock(::GlobalNamespace::ThrowableBugBeacon*  tbb) ;

/// @brief Method Tick, addr 0x5b33a1c, size 0x4c, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_ascentRate() const;

constexpr float_t& __cordl_internal_get_ascentRate() ;

constexpr float_t const& __cordl_internal_get_ascentSlerp() const;

constexpr float_t& __cordl_internal_get_ascentSlerp() ;

constexpr float_t const& __cordl_internal_get_ascentSlerpRate() const;

constexpr float_t& __cordl_internal_get_ascentSlerpRate() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_bobMagnintude() const;

constexpr float_t& __cordl_internal_get_bobMagnintude() ;

constexpr float_t const& __cordl_internal_get_bobbingDefaultFrequency() const;

constexpr float_t& __cordl_internal_get_bobbingDefaultFrequency() ;

constexpr float_t const& __cordl_internal_get_bobingFrequency() const;

constexpr float_t& __cordl_internal_get_bobingFrequency() ;

constexpr float_t const& __cordl_internal_get_bobingSpeed() const;

constexpr float_t& __cordl_internal_get_bobingSpeed() ;

constexpr float_t const& __cordl_internal_get_bobingState() const;

constexpr float_t& __cordl_internal_get_bobingState() ;

constexpr ::GlobalNamespace::ThrowableBug_BugName const& __cordl_internal_get_bugName() const;

constexpr ::GlobalNamespace::ThrowableBug_BugName& __cordl_internal_get_bugName() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_bugRotationalVelocity() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_bugRotationalVelocity() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionCheckMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionCheckMask() ;

constexpr float_t const& __cordl_internal_get_collisionHitRadius() const;

constexpr float_t& __cordl_internal_get_collisionHitRadius() ;

constexpr ::GlobalNamespace::ThrowableBug_AudioState const& __cordl_internal_get_currentAudioState() const;

constexpr ::GlobalNamespace::ThrowableBug_AudioState& __cordl_internal_get_currentAudioState() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_currentZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_currentZone() ;

constexpr float_t const& __cordl_internal_get_descentRate() const;

constexpr float_t& __cordl_internal_get_descentRate() ;

constexpr float_t const& __cordl_internal_get_descentSlerp() const;

constexpr float_t& __cordl_internal_get_descentSlerp() ;

constexpr float_t const& __cordl_internal_get_descentSlerpRate() const;

constexpr float_t& __cordl_internal_get_descentSlerpRate() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_flyingBugAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_flyingBugAudioClip() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_followingRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_followingRig() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_grabBugAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_grabBugAudioClip() ;

constexpr bool const& __cordl_internal_get_isTooHighTravelingDown() const;

constexpr bool& __cordl_internal_get_isTooHighTravelingDown() ;

constexpr bool const& __cordl_internal_get_isTooLowTravelingUp() const;

constexpr bool& __cordl_internal_get_isTooLowTravelingUp() ;

constexpr bool const& __cordl_internal_get_locked() const;

constexpr bool& __cordl_internal_get_locked() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lockedTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lockedTarget() ;

constexpr float_t const& __cordl_internal_get_maxNaturalSpeed() const;

constexpr float_t& __cordl_internal_get_maxNaturalSpeed() ;

constexpr float_t const& __cordl_internal_get_maxRandFrequency() const;

constexpr float_t& __cordl_internal_get_maxRandFrequency() ;

constexpr float_t const& __cordl_internal_get_maximumHeightOffOfTheGroundBeforeStartingDescent() const;

constexpr float_t& __cordl_internal_get_maximumHeightOffOfTheGroundBeforeStartingDescent() ;

constexpr float_t const& __cordl_internal_get_maximumHeightOffOfTheGroundBeforeStoppingAscent() const;

constexpr float_t& __cordl_internal_get_maximumHeightOffOfTheGroundBeforeStoppingAscent() ;

constexpr float_t const& __cordl_internal_get_minRandFrequency() const;

constexpr float_t& __cordl_internal_get_minRandFrequency() ;

constexpr float_t const& __cordl_internal_get_minimumHeightOffOfTheGroundBeforeStartingAscent() const;

constexpr float_t& __cordl_internal_get_minimumHeightOffOfTheGroundBeforeStartingAscent() ;

constexpr float_t const& __cordl_internal_get_minimumHeightOffOfTheGroundBeforeStoppingDescent() const;

constexpr float_t& __cordl_internal_get_minimumHeightOffOfTheGroundBeforeStoppingDescent() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_rayCastNonAllocColliders() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_rayCastNonAllocColliders() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_rayCastNonAllocColliders2() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_rayCastNonAllocColliders2() ;

constexpr int32_t const& __cordl_internal_get_raycastFrameCounter() const;

constexpr int32_t& __cordl_internal_get_raycastFrameCounter() ;

constexpr int32_t const& __cordl_internal_get_raycastFramePeriod() const;

constexpr int32_t& __cordl_internal_get_raycastFramePeriod() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_releaseBugAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_releaseBugAudioClip() ;

constexpr ::UnityW<::GlobalNamespace::ThrowableBugReliableState> const& __cordl_internal_get_reliableState() const;

constexpr ::UnityW<::GlobalNamespace::ThrowableBugReliableState>& __cordl_internal_get_reliableState() ;

constexpr bool const& __cordl_internal_get_shouldRandomizeFrequency() const;

constexpr bool& __cordl_internal_get_shouldRandomizeFrequency() ;

constexpr float_t const& __cordl_internal_get_slowdownAcceleration() const;

constexpr float_t& __cordl_internal_get_slowdownAcceleration() ;

constexpr float_t const& __cordl_internal_get_slowingDownProgress() const;

constexpr float_t& __cordl_internal_get_slowingDownProgress() ;

constexpr float_t const& __cordl_internal_get_speedMultiplier() const;

constexpr float_t& __cordl_internal_get_speedMultiplier() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_startZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_startZone() ;

constexpr float_t const& __cordl_internal_get_startingSpeed() const;

constexpr float_t& __cordl_internal_get_startingSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_thrownVeloicity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_thrownVeloicity() ;

constexpr float_t const& __cordl_internal_get_thrownYVelocity() const;

constexpr float_t& __cordl_internal_get_thrownYVelocity() ;

constexpr int32_t const& __cordl_internal_get_updateMultiplier() const;

constexpr int32_t& __cordl_internal_get_updateMultiplier() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_ascentRate(float_t  value) ;

constexpr void __cordl_internal_set_ascentSlerp(float_t  value) ;

constexpr void __cordl_internal_set_ascentSlerpRate(float_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bobMagnintude(float_t  value) ;

constexpr void __cordl_internal_set_bobbingDefaultFrequency(float_t  value) ;

constexpr void __cordl_internal_set_bobingFrequency(float_t  value) ;

constexpr void __cordl_internal_set_bobingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_bobingState(float_t  value) ;

constexpr void __cordl_internal_set_bugName(::GlobalNamespace::ThrowableBug_BugName  value) ;

constexpr void __cordl_internal_set_bugRotationalVelocity(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_collisionCheckMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_collisionHitRadius(float_t  value) ;

constexpr void __cordl_internal_set_currentAudioState(::GlobalNamespace::ThrowableBug_AudioState  value) ;

constexpr void __cordl_internal_set_currentZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_descentRate(float_t  value) ;

constexpr void __cordl_internal_set_descentSlerp(float_t  value) ;

constexpr void __cordl_internal_set_descentSlerpRate(float_t  value) ;

constexpr void __cordl_internal_set_flyingBugAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_followingRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_grabBugAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_isTooHighTravelingDown(bool  value) ;

constexpr void __cordl_internal_set_isTooLowTravelingUp(bool  value) ;

constexpr void __cordl_internal_set_locked(bool  value) ;

constexpr void __cordl_internal_set_lockedTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxNaturalSpeed(float_t  value) ;

constexpr void __cordl_internal_set_maxRandFrequency(float_t  value) ;

constexpr void __cordl_internal_set_maximumHeightOffOfTheGroundBeforeStartingDescent(float_t  value) ;

constexpr void __cordl_internal_set_maximumHeightOffOfTheGroundBeforeStoppingAscent(float_t  value) ;

constexpr void __cordl_internal_set_minRandFrequency(float_t  value) ;

constexpr void __cordl_internal_set_minimumHeightOffOfTheGroundBeforeStartingAscent(float_t  value) ;

constexpr void __cordl_internal_set_minimumHeightOffOfTheGroundBeforeStoppingDescent(float_t  value) ;

constexpr void __cordl_internal_set_rayCastNonAllocColliders(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_rayCastNonAllocColliders2(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_raycastFrameCounter(int32_t  value) ;

constexpr void __cordl_internal_set_raycastFramePeriod(int32_t  value) ;

constexpr void __cordl_internal_set_releaseBugAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_reliableState(::UnityW<::GlobalNamespace::ThrowableBugReliableState>  value) ;

constexpr void __cordl_internal_set_shouldRandomizeFrequency(bool  value) ;

constexpr void __cordl_internal_set_slowdownAcceleration(float_t  value) ;

constexpr void __cordl_internal_set_slowingDownProgress(float_t  value) ;

constexpr void __cordl_internal_set_speedMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_startZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_startingSpeed(float_t  value) ;

constexpr void __cordl_internal_set_targetVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_thrownVeloicity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_thrownYVelocity(float_t  value) ;

constexpr void __cordl_internal_set_updateMultiplier(int32_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5b33a68, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__g_IsHeld() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5b30ff8, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Method isValid, addr 0x5b31dfc, size 0x118, virtual false, abstract: false, final false
inline bool isValid(::GlobalNamespace::ThrowableBugBeacon*  tbb) ;

static inline void setStaticF__g_IsHeld(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5b31000, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBug() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBug", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowableBug(ThrowableBug && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowableBug", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowableBug(ThrowableBug const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3662};

/// @brief Field reliableState, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThrowableBugReliableState>  ___reliableState;

/// @brief Field slowingDownProgress, offset: 0x340, size: 0x4, def value: None
 float_t  ___slowingDownProgress;

/// @brief Field startingSpeed, offset: 0x344, size: 0x4, def value: None
 float_t  ___startingSpeed;

/// @brief Field raycastFramePeriod, offset: 0x348, size: 0x4, def value: None
 int32_t  ___raycastFramePeriod;

/// @brief Field raycastFrameCounter, offset: 0x34c, size: 0x4, def value: None
 int32_t  ___raycastFrameCounter;

/// @brief Field bobingSpeed, offset: 0x350, size: 0x4, def value: None
 float_t  ___bobingSpeed;

/// @brief Field bobMagnintude, offset: 0x354, size: 0x4, def value: None
 float_t  ___bobMagnintude;

/// @brief Field shouldRandomizeFrequency, offset: 0x358, size: 0x1, def value: None
 bool  ___shouldRandomizeFrequency;

/// @brief Field minRandFrequency, offset: 0x35c, size: 0x4, def value: None
 float_t  ___minRandFrequency;

/// @brief Field maxRandFrequency, offset: 0x360, size: 0x4, def value: None
 float_t  ___maxRandFrequency;

/// @brief Field bobingFrequency, offset: 0x364, size: 0x4, def value: None
 float_t  ___bobingFrequency;

/// @brief Field bobingState, offset: 0x368, size: 0x4, def value: None
 float_t  ___bobingState;

/// @brief Field thrownYVelocity, offset: 0x36c, size: 0x4, def value: None
 float_t  ___thrownYVelocity;

/// @brief Field collisionHitRadius, offset: 0x370, size: 0x4, def value: None
 float_t  ___collisionHitRadius;

/// @brief Field collisionCheckMask, offset: 0x374, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collisionCheckMask;

/// @brief Field thrownVeloicity, offset: 0x378, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___thrownVeloicity;

/// @brief Field targetVelocity, offset: 0x384, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetVelocity;

/// @brief Field bugRotationalVelocity, offset: 0x390, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___bugRotationalVelocity;

/// @brief Field rayCastNonAllocColliders, offset: 0x3a0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___rayCastNonAllocColliders;

/// @brief Field rayCastNonAllocColliders2, offset: 0x3a8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___rayCastNonAllocColliders2;

/// @brief Field followingRig, offset: 0x3b0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___followingRig;

/// @brief Field isTooHighTravelingDown, offset: 0x3b8, size: 0x1, def value: None
 bool  ___isTooHighTravelingDown;

/// @brief Field descentSlerp, offset: 0x3bc, size: 0x4, def value: None
 float_t  ___descentSlerp;

/// @brief Field ascentSlerp, offset: 0x3c0, size: 0x4, def value: None
 float_t  ___ascentSlerp;

/// @brief Field maxNaturalSpeed, offset: 0x3c4, size: 0x4, def value: None
 float_t  ___maxNaturalSpeed;

/// @brief Field slowdownAcceleration, offset: 0x3c8, size: 0x4, def value: None
 float_t  ___slowdownAcceleration;

/// @brief Field maximumHeightOffOfTheGroundBeforeStartingDescent, offset: 0x3cc, size: 0x4, def value: None
 float_t  ___maximumHeightOffOfTheGroundBeforeStartingDescent;

/// @brief Field minimumHeightOffOfTheGroundBeforeStoppingDescent, offset: 0x3d0, size: 0x4, def value: None
 float_t  ___minimumHeightOffOfTheGroundBeforeStoppingDescent;

/// @brief Field descentRate, offset: 0x3d4, size: 0x4, def value: None
 float_t  ___descentRate;

/// @brief Field descentSlerpRate, offset: 0x3d8, size: 0x4, def value: None
 float_t  ___descentSlerpRate;

/// @brief Field minimumHeightOffOfTheGroundBeforeStartingAscent, offset: 0x3dc, size: 0x4, def value: None
 float_t  ___minimumHeightOffOfTheGroundBeforeStartingAscent;

/// @brief Field maximumHeightOffOfTheGroundBeforeStoppingAscent, offset: 0x3e0, size: 0x4, def value: None
 float_t  ___maximumHeightOffOfTheGroundBeforeStoppingAscent;

/// @brief Field ascentRate, offset: 0x3e4, size: 0x4, def value: None
 float_t  ___ascentRate;

/// @brief Field ascentSlerpRate, offset: 0x3e8, size: 0x4, def value: None
 float_t  ___ascentSlerpRate;

/// @brief Field isTooLowTravelingUp, offset: 0x3ec, size: 0x1, def value: None
 bool  ___isTooLowTravelingUp;

/// @brief Field animator, offset: 0x3f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// [FormerlySerializedAs("grabBugAudioSource")]
/// @brief Field grabBugAudioClip, offset: 0x3f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___grabBugAudioClip;

/// [FormerlySerializedAs("releaseBugAudioSource")]
/// @brief Field releaseBugAudioClip, offset: 0x400, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___releaseBugAudioClip;

/// [FormerlySerializedAs("flyingBugAudioSource")]
/// @brief Field flyingBugAudioClip, offset: 0x408, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___flyingBugAudioClip;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x410, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field startZone, offset: 0x418, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___startZone;

/// @brief Field currentZone, offset: 0x41c, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___currentZone;

/// @brief Field bobbingDefaultFrequency, offset: 0x420, size: 0x4, def value: None
 float_t  ___bobbingDefaultFrequency;

/// @brief Field updateMultiplier, offset: 0x424, size: 0x4, def value: None
 int32_t  ___updateMultiplier;

/// @brief Field currentAudioState, offset: 0x428, size: 0x4, def value: None
 ::GlobalNamespace::ThrowableBug_AudioState  ___currentAudioState;

/// @brief Field speedMultiplier, offset: 0x42c, size: 0x4, def value: None
 float_t  ___speedMultiplier;

/// @brief Field velocityEstimator, offset: 0x430, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x438, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// [SerializeField]
/// @brief Field bugName, offset: 0x43c, size: 0x4, def value: None
 ::GlobalNamespace::ThrowableBug_BugName  ___bugName;

/// @brief Field lockedTarget, offset: 0x440, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lockedTarget;

/// @brief Field locked, offset: 0x448, size: 0x1, def value: None
 bool  ___locked;

/// @brief Size padding 0x480 - 0x450 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___reliableState) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___slowingDownProgress) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___startingSpeed) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___raycastFramePeriod) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___raycastFrameCounter) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___bobingSpeed) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___bobMagnintude) == 0x354, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___shouldRandomizeFrequency) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___minRandFrequency) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___maxRandFrequency) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___bobingFrequency) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___bobingState) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___thrownYVelocity) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___collisionHitRadius) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___collisionCheckMask) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___thrownVeloicity) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___targetVelocity) == 0x384, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___bugRotationalVelocity) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___rayCastNonAllocColliders) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___rayCastNonAllocColliders2) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___followingRig) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___isTooHighTravelingDown) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___descentSlerp) == 0x3bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___ascentSlerp) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___maxNaturalSpeed) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___slowdownAcceleration) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___maximumHeightOffOfTheGroundBeforeStartingDescent) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___minimumHeightOffOfTheGroundBeforeStoppingDescent) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___descentRate) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___descentSlerpRate) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___minimumHeightOffOfTheGroundBeforeStartingAscent) == 0x3dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___maximumHeightOffOfTheGroundBeforeStoppingAscent) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___ascentRate) == 0x3e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___ascentSlerpRate) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___isTooLowTravelingUp) == 0x3ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___animator) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___grabBugAudioClip) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___releaseBugAudioClip) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___flyingBugAudioClip) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___audioSource) == 0x410, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___startZone) == 0x418, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___currentZone) == 0x41c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___bobbingDefaultFrequency) == 0x420, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___updateMultiplier) == 0x424, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___currentAudioState) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___speedMultiplier) == 0x42c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___velocityEstimator) == 0x430, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ____TickRunning_k__BackingField) == 0x438, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___bugName) == 0x43c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___lockedTarget) == 0x440, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableBug, ___locked) == 0x448, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ThrowableBug) == 0x480, "Size mismatch!");

} // namespace end def GlobalNamespace
