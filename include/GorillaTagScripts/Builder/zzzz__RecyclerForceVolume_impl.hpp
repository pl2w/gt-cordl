#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/RecyclerForceVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__RecyclerForceVolume_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::RecyclerForceVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::RecyclerForceVolume::*)()>(&::GorillaTagScripts::Builder::RecyclerForceVolume::Awake)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c355c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::RecyclerForceVolume.TriggerFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Builder::RecyclerForceVolume::*)(::UnityEngine::Collider*, ::by_ref<::UnityEngine::Rigidbody*>, ::by_ref<::UnityEngine::Transform*>)>(&::GorillaTagScripts::Builder::RecyclerForceVolume::TriggerFilter)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5c35690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"TriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::RecyclerForceVolume.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::RecyclerForceVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::RecyclerForceVolume::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5c3590c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::RecyclerForceVolume.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::RecyclerForceVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::RecyclerForceVolume::OnTriggerExit)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c35afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::RecyclerForceVolume.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::RecyclerForceVolume::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Builder::RecyclerForceVolume::OnTriggerStay)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x5c35b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::RecyclerForceVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::RecyclerForceVolume::*)()>(&::GorillaTagScripts::Builder::RecyclerForceVolume::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c361f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_scaleWithSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleWithSize;
}
constexpr bool const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_scaleWithSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleWithSize;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_scaleWithSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleWithSize = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_accel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_accel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accel;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_accel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accel = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_maxDepth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_maxDepth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDepth;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_maxDepth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDepth = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr bool& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_disableGrip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip;
}
constexpr bool const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_disableGrip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableGrip;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_disableGrip(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableGrip = value;
}
constexpr bool& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_dampenLateralVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLateralVelocity;
}
constexpr bool const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_dampenLateralVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenLateralVelocity;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_dampenLateralVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenLateralVelocity = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_dampenXVelPerc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVelPerc;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_dampenXVelPerc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenXVelPerc;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_dampenXVelPerc(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenXVelPerc = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_dampenYVelPerc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenYVelPerc;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_dampenYVelPerc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dampenYVelPerc;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_dampenYVelPerc(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dampenYVelPerc = value;
}
constexpr bool& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_applyPullToCenterAcceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPullToCenterAcceleration;
}
constexpr bool const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_applyPullToCenterAcceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyPullToCenterAcceleration;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_applyPullToCenterAcceleration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyPullToCenterAcceleration = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_pullToCenterAccel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_pullToCenterAccel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterAccel;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_pullToCenterAccel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterAccel = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_pullToCenterMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_pullToCenterMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullToCenterMaxSpeed;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_pullToCenterMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullToCenterMaxSpeed = value;
}
constexpr float_t& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_pullTOCenterMinDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullTOCenterMinDistance;
}
constexpr float_t const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_pullTOCenterMinDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pullTOCenterMinDistance;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_pullTOCenterMinDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pullTOCenterMinDistance = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volume;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_volume(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_windSFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_windSFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windSFX;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_windSFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windSFX = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_windEffectRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windEffectRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_windEffectRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windEffectRenderer;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_windEffectRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windEffectRenderer = value;
}
constexpr bool& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_hasWindFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasWindFX;
}
constexpr bool const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_hasWindFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasWindFX;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_hasWindFX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasWindFX = value;
}
constexpr ::UnityEngine::Vector3& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_enterPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPos;
}
constexpr ::UnityEngine::Vector3 const& GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_get_enterPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterPos;
}
constexpr void GorillaTagScripts::Builder::RecyclerForceVolume::__cordl_internal_set_enterPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterPos = value;
}
inline void GorillaTagScripts::Builder::RecyclerForceVolume::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Builder::RecyclerForceVolume::TriggerFilter(::UnityEngine::Collider*  other, ::by_ref<::UnityEngine::Rigidbody*>  rb, ::by_ref<::UnityEngine::Transform*>  xf)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"TriggerFilter", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rigidbody*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, rb, xf);
}
inline void GorillaTagScripts::Builder::RecyclerForceVolume::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::RecyclerForceVolume::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::RecyclerForceVolume::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Builder::RecyclerForceVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::RecyclerForceVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::RecyclerForceVolume* GorillaTagScripts::Builder::RecyclerForceVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::RecyclerForceVolume*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::RecyclerForceVolume::RecyclerForceVolume()   {
}
