#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyProjectile.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__StickyProjectile_def.hpp"
#include "GlobalNamespace/zzzz__FlagEvents_1_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__PlayerColoredCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__StickyProjectile_StickFlags_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__RigidbodyWaterInteraction_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IProjectile_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)()>(&::GlobalNamespace::StickyProjectile::Awake)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x578facc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::StickyProjectile::Launch)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x578fc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.StickTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::StickyProjectile::StickTo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5790018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"StickTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::StickyProjectile::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5790170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::StickyProjectile::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x5790334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)()>(&::GlobalNamespace::StickyProjectile::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5790a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)()>(&::GlobalNamespace::StickyProjectile::OnDisable)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5790a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StickyProjectile::*)()>(&::GlobalNamespace::StickyProjectile::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5790a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)(bool)>(&::GlobalNamespace::StickyProjectile::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5790a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)()>(&::GlobalNamespace::StickyProjectile::Tick)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5790a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StickyProjectile._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StickyProjectile::*)()>(&::GlobalNamespace::StickyProjectile::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5790acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPart;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPart;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_stickyPart(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyPart = value;
}
constexpr bool& GlobalNamespace::StickyProjectile::__cordl_internal_get_faceVelocityWhileAirborne()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceVelocityWhileAirborne;
}
constexpr bool const& GlobalNamespace::StickyProjectile::__cordl_internal_get_faceVelocityWhileAirborne() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceVelocityWhileAirborne;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_faceVelocityWhileAirborne(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceVelocityWhileAirborne = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::StickyProjectile::__cordl_internal_get_launchRandomSpinSpeedMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchRandomSpinSpeedMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::StickyProjectile::__cordl_internal_get_launchRandomSpinSpeedMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___launchRandomSpinSpeedMinMax;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_launchRandomSpinSpeedMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___launchRandomSpinSpeedMinMax = value;
}
constexpr bool& GlobalNamespace::StickyProjectile::__cordl_internal_get_alignToHitNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignToHitNormal;
}
constexpr bool const& GlobalNamespace::StickyProjectile::__cordl_internal_get_alignToHitNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alignToHitNormal;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_alignToHitNormal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alignToHitNormal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::StickyProjectile::__cordl_internal_get_OnReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReset;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::StickyProjectile::__cordl_internal_get_OnReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReset;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_OnReset(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReset = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::StickyProjectile::__cordl_internal_get_OnLaunch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunch;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::StickyProjectile::__cordl_internal_get_OnLaunch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLaunch;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_OnLaunch(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLaunch = value;
}
constexpr float_t& GlobalNamespace::StickyProjectile::__cordl_internal_get_scaleOnLocalHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOnLocalHead;
}
constexpr float_t const& GlobalNamespace::StickyProjectile::__cordl_internal_get_scaleOnLocalHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOnLocalHead;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_scaleOnLocalHead(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleOnLocalHead = value;
}
constexpr float_t& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZoneRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZoneRadius;
}
constexpr float_t const& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZoneRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZoneRadius;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_headZoneRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headZoneRadius = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZonePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZonePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZonePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZonePosition;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_headZonePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headZonePosition = value;
}
constexpr float_t& GlobalNamespace::StickyProjectile::__cordl_internal_get_scaleOnLocalHeadZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOnLocalHeadZone;
}
constexpr float_t const& GlobalNamespace::StickyProjectile::__cordl_internal_get_scaleOnLocalHeadZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleOnLocalHeadZone;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_scaleOnLocalHeadZone(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleOnLocalHeadZone = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyProjectile::__cordl_internal_get_localHeadZonePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHeadZonePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyProjectile::__cordl_internal_get_localHeadZonePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHeadZonePosition;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_localHeadZonePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localHeadZonePosition = value;
}
constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>*& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickEvents;
}
constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>* const& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickEvents;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_stickEvents(::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickEvents = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::StickyProjectile::__cordl_internal_get_INVERSE_HEAD_ROTATION()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___INVERSE_HEAD_ROTATION;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::StickyProjectile::__cordl_internal_get_INVERSE_HEAD_ROTATION() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___INVERSE_HEAD_ROTATION;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_INVERSE_HEAD_ROTATION(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___INVERSE_HEAD_ROTATION = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZoneInversePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZoneInversePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZoneInversePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZoneInversePosition;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_headZoneInversePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headZoneInversePosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZoneInverseLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZoneInverseLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyProjectile::__cordl_internal_get_headZoneInverseLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headZoneInverseLocalPosition;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_headZoneInverseLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headZoneInverseLocalPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPartLocalPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPartLocalPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPartLocalPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPartLocalPosition;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_stickyPartLocalPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyPartLocalPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPartLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPartLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPartLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPartLocalRotation;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_stickyPartLocalRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyPartLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPartLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPartLocalScale;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::StickyProjectile::__cordl_internal_get_stickyPartLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stickyPartLocalScale;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_stickyPartLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stickyPartLocalScale = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::StickyProjectile::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::StickyProjectile::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>& GlobalNamespace::StickyProjectile::__cordl_internal_get_rbwi()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rbwi;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction> const& GlobalNamespace::StickyProjectile::__cordl_internal_get_rbwi() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rbwi;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_rbwi(::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rbwi = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::StickyProjectile::__cordl_internal_get_collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::StickyProjectile::__cordl_internal_get_collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collider;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collider = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>& GlobalNamespace::StickyProjectile::__cordl_internal_get_pcc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pcc;
}
constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic> const& GlobalNamespace::StickyProjectile::__cordl_internal_get_pcc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pcc;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_pcc(::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pcc = value;
}
constexpr int32_t& GlobalNamespace::StickyProjectile::__cordl_internal_get_triggerLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLayer;
}
constexpr int32_t const& GlobalNamespace::StickyProjectile::__cordl_internal_get_triggerLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerLayer;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set_triggerLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerLayer = value;
}
constexpr bool& GlobalNamespace::StickyProjectile::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::StickyProjectile::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::StickyProjectile::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::StickyProjectile::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyProjectile::Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"Launch", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, startRotation, velocity, chargeFrac, ownerRig, progress);
}
inline void GlobalNamespace::StickyProjectile::StickTo(::UnityEngine::Transform*  otherTransform, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"StickTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherTransform, position, rotation);
}
inline void GlobalNamespace::StickyProjectile::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::StickyProjectile::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::StickyProjectile::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyProjectile::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::StickyProjectile::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StickyProjectile::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StickyProjectile::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StickyProjectile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::StickyProjectile*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StickyProjectile* GlobalNamespace::StickyProjectile::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StickyProjectile*>());
}
/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr  GlobalNamespace::StickyProjectile::operator ::GorillaTag::Cosmetics::IProjectile*() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* GlobalNamespace::StickyProjectile::i___GorillaTag__Cosmetics__IProjectile() noexcept {
return static_cast<::GorillaTag::Cosmetics::IProjectile*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::StickyProjectile::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::StickyProjectile::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StickyProjectile::StickyProjectile()   {
}
