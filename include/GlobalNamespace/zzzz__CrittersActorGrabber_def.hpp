#pragma once
// IWYU pragma private; include "GlobalNamespace/CrittersActorGrabber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CrittersActorGrabber)
namespace GlobalNamespace {
class CrittersActorGrabber__PlayHapticsOnLoop_d__40;
}
namespace GlobalNamespace {
class CrittersActor;
}
namespace GlobalNamespace {
class CrittersGrabber;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
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
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class CapsuleCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Quaternion;
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
class CrittersActorGrabber;
}
namespace GlobalNamespace {
class CrittersActorGrabber__PlayHapticsOnLoop_d__40;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CrittersActorGrabber*);
MARK_REF_T(::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActorGrabber*, "", "CrittersActorGrabber");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40*, "", "CrittersActorGrabber/<PlayHapticsOnLoop>d__40");
// [DefaultExecutionOrder(9999)]
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersActorGrabber
class CORDL_TYPE CrittersActorGrabber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _PlayHapticsOnLoop_d__40 = ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40;

/// @brief Field actorsStillPresent, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_actorsStillPresent, put=__cordl_internal_set_actorsStillPresent)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  actorsStillPresent;

/// @brief Field colliders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field estimator, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_estimator, put=__cordl_internal_set_estimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  estimator;

/// @brief Field grabBreakRadius, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabBreakRadius, put=__cordl_internal_set_grabBreakRadius)) float_t  grabBreakRadius;

/// @brief Field grabDetachFromBagDist, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabDetachFromBagDist, put=__cordl_internal_set_grabDetachFromBagDist)) float_t  grabDetachFromBagDist;

/// @brief Field grabDuration, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabDuration, put=__cordl_internal_set_grabDuration)) float_t  grabDuration;

/// @brief Field grabRadius, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabRadius, put=__cordl_internal_set_grabRadius)) float_t  grabRadius;

/// @brief Field grabber, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabber, put=__cordl_internal_set_grabber)) ::UnityW<::GlobalNamespace::CrittersGrabber>  grabber;

/// @brief Field haptics, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_haptics, put=__cordl_internal_set_haptics)) ::UnityEngine::Coroutine*  haptics;

/// @brief Field hapticsClip, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_hapticsClip, put=__cordl_internal_set_hapticsClip)) ::UnityW<::UnityEngine::AudioClip>  hapticsClip;

/// @brief Field hapticsLength, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticsLength, put=__cordl_internal_set_hapticsLength)) float_t  hapticsLength;

/// @brief Field hapticsStrength, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticsStrength, put=__cordl_internal_set_hapticsStrength)) float_t  hapticsStrength;

/// @brief Field isGrabbing, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGrabbing, put=__cordl_internal_set_isGrabbing)) bool  isGrabbing;

/// @brief Field isHandGrabbingDisabled, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHandGrabbingDisabled, put=__cordl_internal_set_isHandGrabbingDisabled)) bool  isHandGrabbingDisabled;

/// @brief Field isLeft, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeft, put=__cordl_internal_set_isLeft)) bool  isLeft;

/// @brief Field lastHover, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastHover, put=__cordl_internal_set_lastHover)) ::UnityW<::GlobalNamespace::CrittersActor>  lastHover;

/// @brief Field localGrabOffset, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_localGrabOffset, put=__cordl_internal_set_localGrabOffset)) ::UnityEngine::Vector3  localGrabOffset;

/// @brief Field otherHand, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherHand, put=__cordl_internal_set_otherHand)) ::UnityW<::GlobalNamespace::CrittersActorGrabber>  otherHand;

/// @brief Field playingHaptics, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_playingHaptics, put=__cordl_internal_set_playingHaptics)) bool  playingHaptics;

/// @brief Field queuedGrab, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_queuedGrab, put=__cordl_internal_set_queuedGrab)) ::UnityW<::GlobalNamespace::CrittersActor>  queuedGrab;

/// @brief Field queuedRelativeGrabOffset, offset 0xc8, size 0xc 
 __declspec(property(get=__cordl_internal_get_queuedRelativeGrabOffset, put=__cordl_internal_set_queuedRelativeGrabOffset)) ::UnityEngine::Vector3  queuedRelativeGrabOffset;

/// @brief Field queuedRelativeGrabRotation, offset 0xd4, size 0x10 
 __declspec(property(get=__cordl_internal_get_queuedRelativeGrabRotation, put=__cordl_internal_set_queuedRelativeGrabRotation)) ::UnityEngine::Quaternion  queuedRelativeGrabRotation;

/// @brief Field rb, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field remainingGrabDuration, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingGrabDuration, put=__cordl_internal_set_remainingGrabDuration)) float_t  remainingGrabDuration;

/// @brief Field transformToFollow, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformToFollow, put=__cordl_internal_set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

/// @brief Field triggerCollider, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerCollider, put=__cordl_internal_set_triggerCollider)) ::UnityW<::UnityEngine::CapsuleCollider>  triggerCollider;

/// @brief Field validGrabTarget, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_validGrabTarget, put=__cordl_internal_set_validGrabTarget)) ::UnityW<::GlobalNamespace::CrittersActor>  validGrabTarget;

/// @brief Field vibrationEndDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_vibrationEndDistance, put=__cordl_internal_set_vibrationEndDistance)) float_t  vibrationEndDistance;

/// @brief Field vibrationStartDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_vibrationStartDistance, put=__cordl_internal_set_vibrationStartDistance)) float_t  vibrationStartDistance;

/// @brief Method ActivateJoints, addr 0x55f9cd0, size 0xd0, virtual false, abstract: false, final false
inline void ActivateJoints(::GlobalNamespace::CrittersActor*  rigidJoint, ::GlobalNamespace::CrittersActor*  softJoint) ;

/// @brief Method AddGrabberPhysicsTrigger, addr 0x55f964c, size 0xbc, virtual false, abstract: false, final false
inline void AddGrabberPhysicsTrigger(::GlobalNamespace::CrittersActor*  actor) ;

/// @brief Method ApplyGrab, addr 0x55f9360, size 0x204, virtual false, abstract: false, final false
inline void ApplyGrab(::GlobalNamespace::CrittersActor*  grabTarget, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  localOffset) ;

/// @brief Method Awake, addr 0x55f75c0, size 0x13c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckApplyQueuedGrab, addr 0x55f8e84, size 0x28c, virtual false, abstract: false, final false
inline void CheckApplyQueuedGrab() ;

/// @brief Method DoGrab, addr 0x55f9110, size 0x250, virtual false, abstract: false, final false
inline void DoGrab() ;

/// @brief Method DoHover, addr 0x55f8a6c, size 0x28, virtual false, abstract: false, final false
inline void DoHover() ;

/// @brief Method DoRelease, addr 0x55f8a94, size 0x3f0, virtual false, abstract: false, final false
inline void DoRelease() ;

/// @brief Method DoesActorActivateJoint, addr 0x55f9a2c, size 0x2a4, virtual false, abstract: false, final false
inline bool DoesActorActivateJoint(::GlobalNamespace::CrittersActor*  potentialBagActor, ::by_ref<::GlobalNamespace::CrittersActor*>  heldStorableActor) ;

/// @brief Method FindGrabTargets, addr 0x55f85d8, size 0x494, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::CrittersActor> FindGrabTargets() ;

/// @brief Method LateUpdate, addr 0x55f76fc, size 0x658, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method NewJointMethod, addr 0x55f7d54, size 0x720, virtual false, abstract: false, final false
inline void NewJointMethod() ;

static inline ::GlobalNamespace::CrittersActorGrabber* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x55f9948, size 0xe4, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method PlayHaptics, addr 0x55f9708, size 0xf4, virtual false, abstract: false, final false
inline void PlayHaptics(::UnityEngine::AudioClip*  clip, float_t  strength) ;

/// [IteratorStateMachine(typeof(CrittersActorGrabber::<PlayHapticsOnLoop>d__40))]
/// @brief Method PlayHapticsOnLoop, addr 0x55f98d4, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* PlayHapticsOnLoop() ;

/// @brief Method RemoveGrabberPhysicsTrigger, addr 0x55f9564, size 0xe8, virtual false, abstract: false, final false
inline void RemoveGrabberPhysicsTrigger() ;

/// @brief Method StopHaptics, addr 0x55f97fc, size 0xd8, virtual false, abstract: false, final false
inline void StopHaptics() ;

/// @brief Method VerifyExistingGrab, addr 0x55f8474, size 0x164, virtual false, abstract: false, final false
inline void VerifyExistingGrab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>* const& __cordl_internal_get_actorsStillPresent() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*& __cordl_internal_get_actorsStillPresent() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_estimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_estimator() ;

constexpr float_t const& __cordl_internal_get_grabBreakRadius() const;

constexpr float_t& __cordl_internal_get_grabBreakRadius() ;

constexpr float_t const& __cordl_internal_get_grabDetachFromBagDist() const;

constexpr float_t& __cordl_internal_get_grabDetachFromBagDist() ;

constexpr float_t const& __cordl_internal_get_grabDuration() const;

constexpr float_t& __cordl_internal_get_grabDuration() ;

constexpr float_t const& __cordl_internal_get_grabRadius() const;

constexpr float_t& __cordl_internal_get_grabRadius() ;

constexpr ::UnityW<::GlobalNamespace::CrittersGrabber> const& __cordl_internal_get_grabber() const;

constexpr ::UnityW<::GlobalNamespace::CrittersGrabber>& __cordl_internal_get_grabber() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_haptics() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_haptics() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_hapticsClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_hapticsClip() ;

constexpr float_t const& __cordl_internal_get_hapticsLength() const;

constexpr float_t& __cordl_internal_get_hapticsLength() ;

constexpr float_t const& __cordl_internal_get_hapticsStrength() const;

constexpr float_t& __cordl_internal_get_hapticsStrength() ;

constexpr bool const& __cordl_internal_get_isGrabbing() const;

constexpr bool& __cordl_internal_get_isGrabbing() ;

constexpr bool const& __cordl_internal_get_isHandGrabbingDisabled() const;

constexpr bool& __cordl_internal_get_isHandGrabbingDisabled() ;

constexpr bool const& __cordl_internal_get_isLeft() const;

constexpr bool& __cordl_internal_get_isLeft() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_lastHover() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_lastHover() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localGrabOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localGrabOffset() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber> const& __cordl_internal_get_otherHand() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber>& __cordl_internal_get_otherHand() ;

constexpr bool const& __cordl_internal_get_playingHaptics() const;

constexpr bool& __cordl_internal_get_playingHaptics() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_queuedGrab() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_queuedGrab() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_queuedRelativeGrabOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_queuedRelativeGrabOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_queuedRelativeGrabRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_queuedRelativeGrabRotation() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_remainingGrabDuration() const;

constexpr float_t& __cordl_internal_get_remainingGrabDuration() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformToFollow() ;

constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& __cordl_internal_get_triggerCollider() const;

constexpr ::UnityW<::UnityEngine::CapsuleCollider>& __cordl_internal_get_triggerCollider() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActor> const& __cordl_internal_get_validGrabTarget() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActor>& __cordl_internal_get_validGrabTarget() ;

constexpr float_t const& __cordl_internal_get_vibrationEndDistance() const;

constexpr float_t& __cordl_internal_get_vibrationEndDistance() ;

constexpr float_t const& __cordl_internal_get_vibrationStartDistance() const;

constexpr float_t& __cordl_internal_get_vibrationStartDistance() ;

constexpr void __cordl_internal_set_actorsStillPresent(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  value) ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_estimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

constexpr void __cordl_internal_set_grabBreakRadius(float_t  value) ;

constexpr void __cordl_internal_set_grabDetachFromBagDist(float_t  value) ;

constexpr void __cordl_internal_set_grabDuration(float_t  value) ;

constexpr void __cordl_internal_set_grabRadius(float_t  value) ;

constexpr void __cordl_internal_set_grabber(::UnityW<::GlobalNamespace::CrittersGrabber>  value) ;

constexpr void __cordl_internal_set_haptics(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_hapticsClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_hapticsLength(float_t  value) ;

constexpr void __cordl_internal_set_hapticsStrength(float_t  value) ;

constexpr void __cordl_internal_set_isGrabbing(bool  value) ;

constexpr void __cordl_internal_set_isHandGrabbingDisabled(bool  value) ;

constexpr void __cordl_internal_set_isLeft(bool  value) ;

constexpr void __cordl_internal_set_lastHover(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_localGrabOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_otherHand(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value) ;

constexpr void __cordl_internal_set_playingHaptics(bool  value) ;

constexpr void __cordl_internal_set_queuedGrab(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_queuedRelativeGrabOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_queuedRelativeGrabRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_remainingGrabDuration(float_t  value) ;

constexpr void __cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_triggerCollider(::UnityW<::UnityEngine::CapsuleCollider>  value) ;

constexpr void __cordl_internal_set_validGrabTarget(::UnityW<::GlobalNamespace::CrittersActor>  value) ;

constexpr void __cordl_internal_set_vibrationEndDistance(float_t  value) ;

constexpr void __cordl_internal_set_vibrationStartDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x55f9da0, size 0x36c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrittersActorGrabber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorGrabber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActorGrabber(CrittersActorGrabber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorGrabber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActorGrabber(CrittersActorGrabber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{77};

/// @brief Field isGrabbing, offset: 0x20, size: 0x1, def value: None
 bool  ___isGrabbing;

/// @brief Field colliders, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field isLeft, offset: 0x30, size: 0x1, def value: None
 bool  ___isLeft;

/// @brief Field grabRadius, offset: 0x34, size: 0x4, def value: None
 float_t  ___grabRadius;

/// @brief Field grabBreakRadius, offset: 0x38, size: 0x4, def value: None
 float_t  ___grabBreakRadius;

/// @brief Field grabDetachFromBagDist, offset: 0x3c, size: 0x4, def value: None
 float_t  ___grabDetachFromBagDist;

/// @brief Field transformToFollow, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformToFollow;

/// @brief Field estimator, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___estimator;

/// @brief Field grabber, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersGrabber>  ___grabber;

/// @brief Field vibrationStartDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ___vibrationStartDistance;

/// @brief Field vibrationEndDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___vibrationEndDistance;

/// @brief Field otherHand, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActorGrabber>  ___otherHand;

/// @brief Field isHandGrabbingDisabled, offset: 0x68, size: 0x1, def value: None
 bool  ___isHandGrabbingDisabled;

/// @brief Field grabDuration, offset: 0x6c, size: 0x4, def value: None
 float_t  ___grabDuration;

/// @brief Field remainingGrabDuration, offset: 0x70, size: 0x4, def value: None
 float_t  ___remainingGrabDuration;

/// @brief Field playingHaptics, offset: 0x74, size: 0x1, def value: None
 bool  ___playingHaptics;

/// @brief Field hapticsClip, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___hapticsClip;

/// @brief Field hapticsStrength, offset: 0x80, size: 0x4, def value: None
 float_t  ___hapticsStrength;

/// @brief Field hapticsLength, offset: 0x84, size: 0x4, def value: None
 float_t  ___hapticsLength;

/// @brief Field haptics, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___haptics;

/// @brief Field triggerCollider, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CapsuleCollider>  ___triggerCollider;

/// @brief Field rb, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field validGrabTarget, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___validGrabTarget;

/// @brief Field lastHover, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___lastHover;

/// @brief Field localGrabOffset, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localGrabOffset;

/// @brief Field queuedGrab, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActor>  ___queuedGrab;

/// @brief Field queuedRelativeGrabOffset, offset: 0xc8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___queuedRelativeGrabOffset;

/// @brief Field queuedRelativeGrabRotation, offset: 0xd4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___queuedRelativeGrabRotation;

/// @brief Field actorsStillPresent, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CrittersActor>>*  ___actorsStillPresent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___isGrabbing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___colliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___isLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___grabRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___grabBreakRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___grabDetachFromBagDist) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___transformToFollow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___estimator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___grabber) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___vibrationStartDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___vibrationEndDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___otherHand) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___isHandGrabbingDisabled) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___grabDuration) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___remainingGrabDuration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___playingHaptics) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___hapticsClip) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___hapticsStrength) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___hapticsLength) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___haptics) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___triggerCollider) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___rb) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___validGrabTarget) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___lastHover) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___localGrabOffset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___queuedGrab) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___queuedRelativeGrabOffset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___queuedRelativeGrabRotation) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber, ___actorsStillPresent) == 0xe8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActorGrabber) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CrittersActorGrabber/<PlayHapticsOnLoop>d__40
class CORDL_TYPE CrittersActorGrabber__PlayHapticsOnLoop_d__40 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::CrittersActorGrabber>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x55fa138, size 0x124, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x55fa25c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x55fa264, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x55fa29c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x55fa134, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x55fa10c, size 0x28, virtual false, abstract: false, final false
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
constexpr CrittersActorGrabber__PlayHapticsOnLoop_d__40() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorGrabber__PlayHapticsOnLoop_d__40", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrittersActorGrabber__PlayHapticsOnLoop_d__40(CrittersActorGrabber__PlayHapticsOnLoop_d__40 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrittersActorGrabber__PlayHapticsOnLoop_d__40", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrittersActorGrabber__PlayHapticsOnLoop_d__40(CrittersActorGrabber__PlayHapticsOnLoop_d__40 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{76};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActorGrabber>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CrittersActorGrabber__PlayHapticsOnLoop_d__40) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
