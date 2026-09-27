#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPlaySpace.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPlaySpace_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPlaySpace.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaPlaySpace> (*)()>(&::GlobalNamespace::GorillaPlaySpace::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x579daa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpace*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlaySpace.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlaySpace::*)()>(&::GlobalNamespace::GorillaPlaySpace::Awake)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x579daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpace*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPlaySpace._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPlaySpace::*)()>(&::GlobalNamespace::GorillaPlaySpace::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x579dc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpace*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_headCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_headCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headCollider;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_headCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headCollider = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_bodyCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_bodyCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyCollider;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyCollider = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_rightHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_rightHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandTransform;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_rightHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_leftHandTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_leftHandTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandTransform;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_leftHandTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_headColliderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headColliderOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_headColliderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headColliderOffset;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_headColliderOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headColliderOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_bodyColliderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_bodyColliderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyColliderOffset;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_bodyColliderOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyColliderOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastLeftHandPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastLeftHandPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPosition;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_lastLeftHandPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftHandPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastRightHandPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastRightHandPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPosition;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_lastRightHandPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRightHandPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastLeftHandPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastLeftHandPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLeftHandPositionForTag;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_lastLeftHandPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLeftHandPositionForTag = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastRightHandPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastRightHandPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRightHandPositionForTag;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_lastRightHandPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRightHandPositionForTag = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastBodyPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBodyPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastBodyPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBodyPositionForTag;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_lastBodyPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBodyPositionForTag = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastHeadPositionForTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadPositionForTag;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_lastHeadPositionForTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadPositionForTag;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_lastHeadPositionForTag(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeadPositionForTag = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_playspaceRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playspaceRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_playspaceRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playspaceRigidbody;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_playspaceRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playspaceRigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_headsetTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_headsetTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headsetTransform;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headsetTransform = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_rightHandOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_rightHandOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandOffset;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_rightHandOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_leftHandOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_leftHandOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandOffset;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_leftHandOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_vrRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_vrRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRig;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrRig = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_offlineVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_offlineVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offlineVRRig;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_offlineVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offlineVRRig = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_vibrationCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_vibrationCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationCooldown;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_vibrationCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationCooldown = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_vibrationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationDuration;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_vibrationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vibrationDuration;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_vibrationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vibrationDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_leftLastTouchedSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftLastTouchedSurface;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_leftLastTouchedSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftLastTouchedSurface;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_leftLastTouchedSurface(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftLastTouchedSurface = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_rightLastTouchedSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightLastTouchedSurface;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_rightLastTouchedSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightLastTouchedSurface;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_rightLastTouchedSurface(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightLastTouchedSurface = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_myVRRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myVRRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_myVRRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myVRRig;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_myVRRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myVRRig = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_bodyHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyHeight;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_bodyHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyHeight;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_bodyHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyHeight = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tagCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tagCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCooldown;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_tagCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagCooldown = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_taggedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedTime;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_taggedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedTime;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_taggedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedTime = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_disconnectTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTime;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_disconnectTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disconnectTime;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_disconnectTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disconnectTime = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_maxStepVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStepVelocity;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_maxStepVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxStepVelocity;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_maxStepVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxStepVelocity = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_hapticWaitSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticWaitSeconds;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_hapticWaitSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticWaitSeconds;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_hapticWaitSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticWaitSeconds = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tapHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticDuration;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tapHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticDuration;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_tapHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapHapticDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tapHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tapHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapHapticStrength;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_tapHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapHapticStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tagHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticDuration;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tagHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticDuration;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_tagHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagHapticDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tagHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_tagHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagHapticStrength;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_tagHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagHapticStrength = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_taggedHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticDuration;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_taggedHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticDuration;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_taggedHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedHapticDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_taggedHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticStrength;
}
constexpr float_t const& GlobalNamespace::GorillaPlaySpace::__cordl_internal_get_taggedHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___taggedHapticStrength;
}
constexpr void GlobalNamespace::GorillaPlaySpace::__cordl_internal_set_taggedHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___taggedHapticStrength = value;
}
inline void GlobalNamespace::GorillaPlaySpace::setStaticF__instance(::UnityW<::GlobalNamespace::GorillaPlaySpace>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaPlaySpace>, "_instance", ::GlobalNamespace::GorillaPlaySpace*>(std::forward<::UnityW<::GlobalNamespace::GorillaPlaySpace>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaPlaySpace> GlobalNamespace::GorillaPlaySpace::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaPlaySpace>, "_instance", ::GlobalNamespace::GorillaPlaySpace*>();
}
inline ::UnityW<::GlobalNamespace::GorillaPlaySpace> GlobalNamespace::GorillaPlaySpace::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpace*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaPlaySpace>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaPlaySpace::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpace*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPlaySpace::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPlaySpace*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPlaySpace* GlobalNamespace::GorillaPlaySpace::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPlaySpace*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPlaySpace::GorillaPlaySpace()   {
}
