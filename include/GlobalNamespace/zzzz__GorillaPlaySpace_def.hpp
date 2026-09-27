#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlaySpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaPlaySpace)
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPlaySpace;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPlaySpace*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPlaySpace*, "", "GorillaPlaySpace");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPlaySpace
class CORDL_TYPE GorillaPlaySpace : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::GorillaPlaySpace>  _instance;

/// @brief Field bodyCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::Collider>  bodyCollider;

/// @brief Field bodyColliderOffset, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_bodyColliderOffset, put=__cordl_internal_set_bodyColliderOffset)) ::UnityEngine::Vector3  bodyColliderOffset;

/// @brief Field bodyHeight, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bodyHeight, put=__cordl_internal_set_bodyHeight)) float_t  bodyHeight;

/// @brief Field disconnectTime, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_disconnectTime, put=__cordl_internal_set_disconnectTime)) float_t  disconnectTime;

/// @brief Field hapticWaitSeconds, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticWaitSeconds, put=__cordl_internal_set_hapticWaitSeconds)) float_t  hapticWaitSeconds;

/// @brief Field headCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_headCollider, put=__cordl_internal_set_headCollider)) ::UnityW<::UnityEngine::Collider>  headCollider;

/// @brief Field headColliderOffset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_headColliderOffset, put=__cordl_internal_set_headColliderOffset)) ::UnityEngine::Vector3  headColliderOffset;

/// @brief Field headsetTransform, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_headsetTransform, put=__cordl_internal_set_headsetTransform)) ::UnityW<::UnityEngine::Transform>  headsetTransform;

/// @brief Field lastBodyPositionForTag, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastBodyPositionForTag, put=__cordl_internal_set_lastBodyPositionForTag)) ::UnityEngine::Vector3  lastBodyPositionForTag;

/// @brief Field lastHeadPositionForTag, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastHeadPositionForTag, put=__cordl_internal_set_lastHeadPositionForTag)) ::UnityEngine::Vector3  lastHeadPositionForTag;

/// @brief Field lastLeftHandPosition, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLeftHandPosition, put=__cordl_internal_set_lastLeftHandPosition)) ::UnityEngine::Vector3  lastLeftHandPosition;

/// @brief Field lastLeftHandPositionForTag, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastLeftHandPositionForTag, put=__cordl_internal_set_lastLeftHandPositionForTag)) ::UnityEngine::Vector3  lastLeftHandPositionForTag;

/// @brief Field lastRightHandPosition, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRightHandPosition, put=__cordl_internal_set_lastRightHandPosition)) ::UnityEngine::Vector3  lastRightHandPosition;

/// @brief Field lastRightHandPositionForTag, offset 0x7c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastRightHandPositionForTag, put=__cordl_internal_set_lastRightHandPositionForTag)) ::UnityEngine::Vector3  lastRightHandPositionForTag;

/// @brief Field leftHandOffset, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_leftHandOffset, put=__cordl_internal_set_leftHandOffset)) ::UnityEngine::Vector3  leftHandOffset;

/// @brief Field leftHandTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandTransform, put=__cordl_internal_set_leftHandTransform)) ::UnityW<::UnityEngine::Transform>  leftHandTransform;

/// @brief Field leftLastTouchedSurface, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_leftLastTouchedSurface, put=__cordl_internal_set_leftLastTouchedSurface)) float_t  leftLastTouchedSurface;

/// @brief Field maxStepVelocity, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxStepVelocity, put=__cordl_internal_set_maxStepVelocity)) float_t  maxStepVelocity;

/// @brief Field myVRRig, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_myVRRig, put=__cordl_internal_set_myVRRig)) ::UnityW<::GlobalNamespace::VRRig>  myVRRig;

/// @brief Field offlineVRRig, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineVRRig, put=__cordl_internal_set_offlineVRRig)) ::UnityW<::GlobalNamespace::VRRig>  offlineVRRig;

/// @brief Field playspaceRigidbody, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playspaceRigidbody, put=__cordl_internal_set_playspaceRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  playspaceRigidbody;

/// @brief Field rightHandOffset, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_rightHandOffset, put=__cordl_internal_set_rightHandOffset)) ::UnityEngine::Vector3  rightHandOffset;

/// @brief Field rightHandTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandTransform, put=__cordl_internal_set_rightHandTransform)) ::UnityW<::UnityEngine::Transform>  rightHandTransform;

/// @brief Field rightLastTouchedSurface, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rightLastTouchedSurface, put=__cordl_internal_set_rightLastTouchedSurface)) float_t  rightLastTouchedSurface;

/// @brief Field tagCooldown, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagCooldown, put=__cordl_internal_set_tagCooldown)) float_t  tagCooldown;

/// @brief Field tagHapticDuration, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagHapticDuration, put=__cordl_internal_set_tagHapticDuration)) float_t  tagHapticDuration;

/// @brief Field tagHapticStrength, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_tagHapticStrength, put=__cordl_internal_set_tagHapticStrength)) float_t  tagHapticStrength;

/// @brief Field taggedHapticDuration, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_taggedHapticDuration, put=__cordl_internal_set_taggedHapticDuration)) float_t  taggedHapticDuration;

/// @brief Field taggedHapticStrength, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_taggedHapticStrength, put=__cordl_internal_set_taggedHapticStrength)) float_t  taggedHapticStrength;

/// @brief Field taggedTime, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_taggedTime, put=__cordl_internal_set_taggedTime)) float_t  taggedTime;

/// @brief Field tapHapticDuration, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapHapticDuration, put=__cordl_internal_set_tapHapticDuration)) float_t  tapHapticDuration;

/// @brief Field tapHapticStrength, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_tapHapticStrength, put=__cordl_internal_set_tapHapticStrength)) float_t  tapHapticStrength;

/// @brief Field vibrationCooldown, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_vibrationCooldown, put=__cordl_internal_set_vibrationCooldown)) float_t  vibrationCooldown;

/// @brief Field vibrationDuration, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_vibrationDuration, put=__cordl_internal_set_vibrationDuration)) float_t  vibrationDuration;

/// @brief Field vrRig, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrRig, put=__cordl_internal_set_vrRig)) ::UnityW<::GlobalNamespace::VRRig>  vrRig;

/// @brief Method Awake, addr 0x579daf0, size 0x110, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GorillaPlaySpace* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_bodyCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bodyColliderOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bodyColliderOffset() ;

constexpr float_t const& __cordl_internal_get_bodyHeight() const;

constexpr float_t& __cordl_internal_get_bodyHeight() ;

constexpr float_t const& __cordl_internal_get_disconnectTime() const;

constexpr float_t& __cordl_internal_get_disconnectTime() ;

constexpr float_t const& __cordl_internal_get_hapticWaitSeconds() const;

constexpr float_t& __cordl_internal_get_hapticWaitSeconds() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_headCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_headCollider() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headColliderOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headColliderOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headsetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headsetTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastBodyPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastBodyPositionForTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastHeadPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastHeadPositionForTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLeftHandPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLeftHandPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLeftHandPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLeftHandPositionForTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRightHandPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRightHandPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastRightHandPositionForTag() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastRightHandPositionForTag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftHandOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftHandOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandTransform() ;

constexpr float_t const& __cordl_internal_get_leftLastTouchedSurface() const;

constexpr float_t& __cordl_internal_get_leftLastTouchedSurface() ;

constexpr float_t const& __cordl_internal_get_maxStepVelocity() const;

constexpr float_t& __cordl_internal_get_maxStepVelocity() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myVRRig() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_offlineVRRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_offlineVRRig() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_playspaceRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_playspaceRigidbody() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightHandOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightHandOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandTransform() ;

constexpr float_t const& __cordl_internal_get_rightLastTouchedSurface() const;

constexpr float_t& __cordl_internal_get_rightLastTouchedSurface() ;

constexpr float_t const& __cordl_internal_get_tagCooldown() const;

constexpr float_t& __cordl_internal_get_tagCooldown() ;

constexpr float_t const& __cordl_internal_get_tagHapticDuration() const;

constexpr float_t& __cordl_internal_get_tagHapticDuration() ;

constexpr float_t const& __cordl_internal_get_tagHapticStrength() const;

constexpr float_t& __cordl_internal_get_tagHapticStrength() ;

constexpr float_t const& __cordl_internal_get_taggedHapticDuration() const;

constexpr float_t& __cordl_internal_get_taggedHapticDuration() ;

constexpr float_t const& __cordl_internal_get_taggedHapticStrength() const;

constexpr float_t& __cordl_internal_get_taggedHapticStrength() ;

constexpr float_t const& __cordl_internal_get_taggedTime() const;

constexpr float_t& __cordl_internal_get_taggedTime() ;

constexpr float_t const& __cordl_internal_get_tapHapticDuration() const;

constexpr float_t& __cordl_internal_get_tapHapticDuration() ;

constexpr float_t const& __cordl_internal_get_tapHapticStrength() const;

constexpr float_t& __cordl_internal_get_tapHapticStrength() ;

constexpr float_t const& __cordl_internal_get_vibrationCooldown() const;

constexpr float_t& __cordl_internal_get_vibrationCooldown() ;

constexpr float_t const& __cordl_internal_get_vibrationDuration() const;

constexpr float_t& __cordl_internal_get_vibrationDuration() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_vrRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_vrRig() ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_bodyColliderOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bodyHeight(float_t  value) ;

constexpr void __cordl_internal_set_disconnectTime(float_t  value) ;

constexpr void __cordl_internal_set_hapticWaitSeconds(float_t  value) ;

constexpr void __cordl_internal_set_headCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_headColliderOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastBodyPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastHeadPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastLeftHandPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastLeftHandPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRightHandPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastRightHandPositionForTag(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftLastTouchedSurface(float_t  value) ;

constexpr void __cordl_internal_set_maxStepVelocity(float_t  value) ;

constexpr void __cordl_internal_set_myVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_offlineVRRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_playspaceRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rightHandOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightLastTouchedSurface(float_t  value) ;

constexpr void __cordl_internal_set_tagCooldown(float_t  value) ;

constexpr void __cordl_internal_set_tagHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_tagHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_taggedHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_taggedHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_taggedTime(float_t  value) ;

constexpr void __cordl_internal_set_tapHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_tapHapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_vibrationCooldown(float_t  value) ;

constexpr void __cordl_internal_set_vibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x579dc00, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaPlaySpace> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x579daa8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaPlaySpace> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::GorillaPlaySpace>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPlaySpace() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlaySpace", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPlaySpace(GorillaPlaySpace && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPlaySpace", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPlaySpace(GorillaPlaySpace const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1504};

/// @brief Field headCollider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___headCollider;

/// @brief Field bodyCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___bodyCollider;

/// @brief Field rightHandTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandTransform;

/// @brief Field leftHandTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandTransform;

/// @brief Field headColliderOffset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headColliderOffset;

/// @brief Field bodyColliderOffset, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bodyColliderOffset;

/// @brief Field lastLeftHandPosition, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLeftHandPosition;

/// @brief Field lastRightHandPosition, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRightHandPosition;

/// @brief Field lastLeftHandPositionForTag, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastLeftHandPositionForTag;

/// @brief Field lastRightHandPositionForTag, offset: 0x7c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastRightHandPositionForTag;

/// @brief Field lastBodyPositionForTag, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastBodyPositionForTag;

/// @brief Field lastHeadPositionForTag, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastHeadPositionForTag;

/// @brief Field playspaceRigidbody, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___playspaceRigidbody;

/// @brief Field headsetTransform, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headsetTransform;

/// @brief Field rightHandOffset, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rightHandOffset;

/// @brief Field leftHandOffset, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___leftHandOffset;

/// @brief Field vrRig, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___vrRig;

/// @brief Field offlineVRRig, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___offlineVRRig;

/// @brief Field vibrationCooldown, offset: 0xd8, size: 0x4, def value: None
 float_t  ___vibrationCooldown;

/// @brief Field vibrationDuration, offset: 0xdc, size: 0x4, def value: None
 float_t  ___vibrationDuration;

/// @brief Field leftLastTouchedSurface, offset: 0xe0, size: 0x4, def value: None
 float_t  ___leftLastTouchedSurface;

/// @brief Field rightLastTouchedSurface, offset: 0xe4, size: 0x4, def value: None
 float_t  ___rightLastTouchedSurface;

/// @brief Field myVRRig, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myVRRig;

/// @brief Field bodyHeight, offset: 0xf0, size: 0x4, def value: None
 float_t  ___bodyHeight;

/// @brief Field tagCooldown, offset: 0xf4, size: 0x4, def value: None
 float_t  ___tagCooldown;

/// @brief Field taggedTime, offset: 0xf8, size: 0x4, def value: None
 float_t  ___taggedTime;

/// @brief Field disconnectTime, offset: 0xfc, size: 0x4, def value: None
 float_t  ___disconnectTime;

/// @brief Field maxStepVelocity, offset: 0x100, size: 0x4, def value: None
 float_t  ___maxStepVelocity;

/// @brief Field hapticWaitSeconds, offset: 0x104, size: 0x4, def value: None
 float_t  ___hapticWaitSeconds;

/// @brief Field tapHapticDuration, offset: 0x108, size: 0x4, def value: None
 float_t  ___tapHapticDuration;

/// @brief Field tapHapticStrength, offset: 0x10c, size: 0x4, def value: None
 float_t  ___tapHapticStrength;

/// @brief Field tagHapticDuration, offset: 0x110, size: 0x4, def value: None
 float_t  ___tagHapticDuration;

/// @brief Field tagHapticStrength, offset: 0x114, size: 0x4, def value: None
 float_t  ___tagHapticStrength;

/// @brief Field taggedHapticDuration, offset: 0x118, size: 0x4, def value: None
 float_t  ___taggedHapticDuration;

/// @brief Field taggedHapticStrength, offset: 0x11c, size: 0x4, def value: None
 float_t  ___taggedHapticStrength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___headCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___bodyCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___rightHandTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___leftHandTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___headColliderOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___bodyColliderOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___lastLeftHandPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___lastRightHandPosition) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___lastLeftHandPositionForTag) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___lastRightHandPositionForTag) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___lastBodyPositionForTag) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___lastHeadPositionForTag) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___playspaceRigidbody) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___headsetTransform) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___rightHandOffset) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___leftHandOffset) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___vrRig) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___offlineVRRig) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___vibrationCooldown) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___vibrationDuration) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___leftLastTouchedSurface) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___rightLastTouchedSurface) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___myVRRig) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___bodyHeight) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___tagCooldown) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___taggedTime) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___disconnectTime) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___maxStepVelocity) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___hapticWaitSeconds) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___tapHapticDuration) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___tapHapticStrength) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___tagHapticDuration) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___tagHapticStrength) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___taggedHapticDuration) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPlaySpace, ___taggedHapticStrength) == 0x11c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPlaySpace) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace
