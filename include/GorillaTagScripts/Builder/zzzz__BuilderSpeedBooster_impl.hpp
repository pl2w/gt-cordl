#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderSpeedBooster.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderSpeedBooster_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)()>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::Awake)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c33298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)()>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::LateUpdate)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c33314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.TriggerFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Rigidbody*>, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::TriggerFilter)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5c333e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"TriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.CheckTableZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)()>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::CheckTableZone)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c33664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"CheckTableZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5c33780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::OnTriggerExit)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5c33984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::OnTriggerStay)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x5c33b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)()>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5c344b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::BuilderSpeedBooster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::BuilderSpeedBooster::*)()>(&::GorillaTagScripts::Builder::BuilderSpeedBooster::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c3460c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_scaleWithSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleWithSize;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_scaleWithSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleWithSize;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_scaleWithSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleWithSize = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_accel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_accel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_accel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accel = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_maxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_maxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_maxDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDepth = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_disableGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_disableGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_disableGrip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableGrip = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_dampenLateralVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLateralVelocity;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_dampenLateralVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLateralVelocity;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_dampenLateralVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenLateralVelocity = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_dampenXVelPerc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVelPerc;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_dampenXVelPerc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVelPerc;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_dampenXVelPerc(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenXVelPerc = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_dampenZVelPerc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenZVelPerc;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_dampenZVelPerc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenZVelPerc;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_dampenZVelPerc(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenZVelPerc = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_applyPullToCenterAcceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPullToCenterAcceleration;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_applyPullToCenterAcceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPullToCenterAcceleration;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_applyPullToCenterAcceleration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyPullToCenterAcceleration = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_pullToCenterAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_pullToCenterAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_pullToCenterAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterAccel = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_pullToCenterMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_pullToCenterMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_pullToCenterMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterMaxSpeed = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_pullTOCenterMinDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullTOCenterMinDistance;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_pullTOCenterMinDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullTOCenterMinDistance;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_pullTOCenterMinDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullTOCenterMinDistance = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_addedWorldUpVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addedWorldUpVelocity;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_addedWorldUpVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___addedWorldUpVelocity;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_addedWorldUpVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___addedWorldUpVelocity = value;
}
constexpr float_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_maxBoostDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBoostDuration;
}
constexpr float_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_maxBoostDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBoostDuration;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_maxBoostDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxBoostDuration = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_boosting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boosting;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_boosting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boosting;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_boosting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boosting = value;
}
constexpr double_t& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_enterTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterTime;
}
constexpr double_t const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_enterTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterTime;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_enterTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterTime = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_volume(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_exitClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_exitClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitClip;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_exitClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_windRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_windRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windRenderer;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_windRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windRenderer = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_enterPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_enterPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPos;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_enterPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterPos = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_positiveForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveForce;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_positiveForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positiveForce;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_positiveForce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positiveForce = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_ignoreMonkeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreMonkeScale;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_ignoreMonkeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreMonkeScale;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_ignoreMonkeScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreMonkeScale = value;
}
constexpr bool& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_hasCheckedZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCheckedZone;
}
constexpr bool const& GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_get_hasCheckedZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCheckedZone;
}
constexpr void GorillaTagScripts::Builder::BuilderSpeedBooster::__cordl_internal_set_hasCheckedZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCheckedZone = value;
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::BuilderSpeedBooster::TriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb, ::by_ref<::UnityEngine::Transform*>  xf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"TriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, rb, xf);
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::CheckTableZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"CheckTableZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::BuilderSpeedBooster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::BuilderSpeedBooster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::BuilderSpeedBooster* GorillaTagScripts::Builder::BuilderSpeedBooster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::BuilderSpeedBooster*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::BuilderSpeedBooster::BuilderSpeedBooster()   {
}
