#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableBall.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ContactPoint_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableBall_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableBall_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaHandClimber_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.TriggeredLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)()>(&::GlobalNamespace::TransferrableBall::TriggeredLateUpdate)> {
  constexpr static std::size_t size = 0x1e84;
  constexpr static std::size_t addrs = 0x5763fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableBall*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.TakeOwnershipAndEnablePhysics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)()>(&::GlobalNamespace::TransferrableBall::TakeOwnershipAndEnablePhysics)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5766cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"TakeOwnershipAndEnablePhysics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.CheckCollisionWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableBall::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GlobalNamespace::TransferrableBall::CheckCollisionWithHand)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5765ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"CheckCollisionWithHand", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.CheckCollisionWithHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableBall::*)(::UnityEngine::SphereCollider*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::GlobalNamespace::TransferrableBall::CheckCollisionWithHead)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5766b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"CheckCollisionWithHead", {}, {::i2c::type_of<::UnityEngine::SphereCollider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.ApplyHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableBall::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::TransferrableBall::ApplyHit)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x5766464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"ApplyHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.PlayHitSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)(float_t)>(&::GlobalNamespace::TransferrableBall::PlayHitSound)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5766e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"PlayHitSound", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)()>(&::GlobalNamespace::TransferrableBall::FixedUpdate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5766fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::TransferrableBall::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x576709c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::TransferrableBall::OnTriggerExit)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x576727c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::TransferrableBall::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57673b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::TransferrableBall::OnCollisionStay)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5767454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall::*)()>(&::GlobalNamespace::TransferrableBall::_ctor)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x576759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_ballRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballRadius;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_ballRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballRadius;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_ballRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballRadius = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_depenetrationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depenetrationSpeed;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_depenetrationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depenetrationSpeed;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_depenetrationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depenetrationSpeed = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSpeedThreshold;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSpeedThreshold;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSpeedThreshold = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_maxHitSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHitSpeed;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_maxHitSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHitSpeed;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_maxHitSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHitSpeed = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSpeedToHitMultiplierMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSpeedToHitMultiplierMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSpeedToHitMultiplierMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSpeedToHitMultiplierMinMax;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSpeedToHitMultiplierMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSpeedToHitMultiplierMinMax = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitMultiplierCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitMultiplierCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitMultiplierCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitMultiplierCurve;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitMultiplierCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitMultiplierCurve = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitTorqueMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitTorqueMultiplier;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitTorqueMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitTorqueMultiplier;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitTorqueMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitTorqueMultiplier = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_reflectOffHandAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectOffHandAmount;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_reflectOffHandAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectOffHandAmount;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_reflectOffHandAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflectOffHandAmount = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_minHitSpeedThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitSpeedThreshold;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_minHitSpeedThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHitSpeedThreshold;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_minHitSpeedThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHitSpeedThreshold = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_surfaceGripDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceGripDistance;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_surfaceGripDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceGripDistance;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_surfaceGripDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceGripDistance = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::TransferrableBall::__cordl_internal_get_reflectOffHandSpeedInputMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectOffHandSpeedInputMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_reflectOffHandSpeedInputMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectOffHandSpeedInputMinMax;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_reflectOffHandSpeedInputMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflectOffHandSpeedInputMinMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::TransferrableBall::__cordl_internal_get_reflectOffHandAmountOutputMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectOffHandAmountOutputMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_reflectOffHandAmountOutputMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reflectOffHandAmountOutputMinMax;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_reflectOffHandAmountOutputMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reflectOffHandAmountOutputMinMax = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundBank;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundBank = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSpeedToAudioMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSpeedToAudioMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSpeedToAudioMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSpeedToAudioMinMax;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSpeedToAudioMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSpeedToAudioMinMax = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_handHitAudioMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handHitAudioMultiplier;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_handHitAudioMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handHitAudioMultiplier;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_handHitAudioMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handHitAudioMultiplier = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundPitchMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundPitchMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundPitchMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundPitchMinMax;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSoundPitchMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundPitchMinMax = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundVolumeMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundVolumeMinMax;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundVolumeMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundVolumeMinMax;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSoundVolumeMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundVolumeMinMax = value;
}
constexpr bool& GlobalNamespace::TransferrableBall::__cordl_internal_get_allowHeadButting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowHeadButting;
}
constexpr bool const& GlobalNamespace::TransferrableBall::__cordl_internal_get_allowHeadButting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowHeadButting;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_allowHeadButting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowHeadButting = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_headButtRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headButtRadius;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_headButtRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headButtRadius;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_headButtRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headButtRadius = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_headButtHitMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headButtHitMultiplier;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_headButtHitMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headButtHitMultiplier;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_headButtHitMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headButtHitMultiplier = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_gravityCounterAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCounterAmount;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_gravityCounterAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityCounterAmount;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_gravityCounterAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityCounterAmount = value;
}
constexpr bool& GlobalNamespace::TransferrableBall::__cordl_internal_get_debugDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr bool const& GlobalNamespace::TransferrableBall::__cordl_internal_get_debugDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_debugDraw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDraw = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>*& GlobalNamespace::TransferrableBall::__cordl_internal_get_handClimberMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handClimberMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>* const& GlobalNamespace::TransferrableBall::__cordl_internal_get_handClimberMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handClimberMap;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_handClimberMap(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handClimberMap = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& GlobalNamespace::TransferrableBall::__cordl_internal_get_playerHeadCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHeadCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& GlobalNamespace::TransferrableBall::__cordl_internal_get_playerHeadCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHeadCollider;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_playerHeadCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerHeadCollider = value;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint>& GlobalNamespace::TransferrableBall::__cordl_internal_get_collisionContacts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionContacts;
}
constexpr ::ArrayW<::UnityEngine::ContactPoint> const& GlobalNamespace::TransferrableBall::__cordl_internal_get_collisionContacts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionContacts;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_collisionContacts(::ArrayW<::UnityEngine::ContactPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionContacts = value;
}
constexpr int32_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_collisionContactsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionContactsCount;
}
constexpr int32_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_collisionContactsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionContactsCount;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_collisionContactsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionContactsCount = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_handRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRadius;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_handRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handRadius;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_handRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handRadius = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_depenetrationBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depenetrationBias;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_depenetrationBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depenetrationBias;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_depenetrationBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depenetrationBias = value;
}
constexpr bool& GlobalNamespace::TransferrableBall::__cordl_internal_get_leftHandOverlapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandOverlapping;
}
constexpr bool const& GlobalNamespace::TransferrableBall::__cordl_internal_get_leftHandOverlapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandOverlapping;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_leftHandOverlapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandOverlapping = value;
}
constexpr bool& GlobalNamespace::TransferrableBall::__cordl_internal_get_rightHandOverlapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandOverlapping;
}
constexpr bool const& GlobalNamespace::TransferrableBall::__cordl_internal_get_rightHandOverlapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandOverlapping;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_rightHandOverlapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandOverlapping = value;
}
constexpr bool& GlobalNamespace::TransferrableBall::__cordl_internal_get_headOverlapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headOverlapping;
}
constexpr bool const& GlobalNamespace::TransferrableBall::__cordl_internal_get_headOverlapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headOverlapping;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_headOverlapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headOverlapping = value;
}
constexpr bool& GlobalNamespace::TransferrableBall::__cordl_internal_get_onGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGround;
}
constexpr bool const& GlobalNamespace::TransferrableBall::__cordl_internal_get_onGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onGround;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_onGround(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onGround = value;
}
constexpr ::UnityEngine::ContactPoint& GlobalNamespace::TransferrableBall::__cordl_internal_get_groundContact()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundContact;
}
constexpr ::UnityEngine::ContactPoint const& GlobalNamespace::TransferrableBall::__cordl_internal_get_groundContact() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundContact;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_groundContact(::UnityEngine::ContactPoint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundContact = value;
}
constexpr bool& GlobalNamespace::TransferrableBall::__cordl_internal_get_applyFrictionHolding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyFrictionHolding;
}
constexpr bool const& GlobalNamespace::TransferrableBall::__cordl_internal_get_applyFrictionHolding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyFrictionHolding;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_applyFrictionHolding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyFrictionHolding = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalPosLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalPosLeft;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalPosLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalPosLeft;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_frictionHoldLocalPosLeft(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frictionHoldLocalPosLeft = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalRotLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalRotLeft;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalRotLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalRotLeft;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_frictionHoldLocalRotLeft(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frictionHoldLocalRotLeft = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalPosRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalPosRight;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalPosRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalPosRight;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_frictionHoldLocalPosRight(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frictionHoldLocalPosRight = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalRotRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalRotRight;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransferrableBall::__cordl_internal_get_frictionHoldLocalRotRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frictionHoldLocalRotRight;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_frictionHoldLocalRotRight(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frictionHoldLocalRotRight = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamLastHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamLastHitTime;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamLastHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamLastHitTime;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSoundSpamLastHitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundSpamLastHitTime = value;
}
constexpr int32_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamCount;
}
constexpr int32_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamCount;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSoundSpamCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundSpamCount = value;
}
constexpr int32_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamLimit;
}
constexpr int32_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamLimit;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSoundSpamLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundSpamLimit = value;
}
constexpr float_t& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamCooldownResetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamCooldownResetTime;
}
constexpr float_t const& GlobalNamespace::TransferrableBall::__cordl_internal_get_hitSoundSpamCooldownResetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitSoundSpamCooldownResetTime;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_hitSoundSpamCooldownResetTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitSoundSpamCooldownResetTime = value;
}
constexpr ::StringW& GlobalNamespace::TransferrableBall::__cordl_internal_get_gorillaHeadTriggerTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaHeadTriggerTag;
}
constexpr ::StringW const& GlobalNamespace::TransferrableBall::__cordl_internal_get_gorillaHeadTriggerTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaHeadTriggerTag;
}
constexpr void GlobalNamespace::TransferrableBall::__cordl_internal_set_gorillaHeadTriggerTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaHeadTriggerTag = value;
}
inline void GlobalNamespace::TransferrableBall::TriggeredLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableBall*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableBall::TakeOwnershipAndEnablePhysics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"TakeOwnershipAndEnablePhysics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableBall::CheckCollisionWithHand(::UnityEngine::Vector3  handCenter, ::UnityEngine::Quaternion  handRotation, ::UnityEngine::Vector3  palmForward, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  hitNormal, ::by_ref<float_t>  penetrationDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"CheckCollisionWithHand", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, handCenter, handRotation, palmForward, hitPoint, hitNormal, penetrationDist);
}
inline bool GlobalNamespace::TransferrableBall::CheckCollisionWithHead(::UnityEngine::SphereCollider*  headCollider, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  hitNormal, ::by_ref<float_t>  penetrationDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"CheckCollisionWithHead", {}, {::i2c::type_of<::UnityEngine::SphereCollider*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, headCollider, hitPoint, hitNormal, penetrationDist);
}
inline bool GlobalNamespace::TransferrableBall::ApplyHit(::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitDir, float_t  hitSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"ApplyHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hitPoint, hitDir, hitSpeed);
}
inline void GlobalNamespace::TransferrableBall::PlayHitSound(float_t  hitSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"PlayHitSound", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitSpeed);
}
inline void GlobalNamespace::TransferrableBall::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableBall::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TransferrableBall::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TransferrableBall::OnCollisionEnter(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::TransferrableBall::OnCollisionStay(::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {"OnCollisionStay", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collision);
}
inline void GlobalNamespace::TransferrableBall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableBall* GlobalNamespace::TransferrableBall::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableBall*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableBall::TransferrableBall()   {
}
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall___c::*)()>(&::GlobalNamespace::TransferrableBall___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576782c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableBall___c._TakeOwnershipAndEnablePhysics_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableBall___c::*)()>(&::GlobalNamespace::TransferrableBall___c::_TakeOwnershipAndEnablePhysics_b__44_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5767834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall___c*>(),
                        {"<TakeOwnershipAndEnablePhysics>b__44_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TransferrableBall___c::setStaticF___9(::GlobalNamespace::TransferrableBall___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TransferrableBall___c*, "<>9", ::GlobalNamespace::TransferrableBall___c*>(std::forward<::GlobalNamespace::TransferrableBall___c*>(value));
}
inline ::GlobalNamespace::TransferrableBall___c* GlobalNamespace::TransferrableBall___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TransferrableBall___c*, "<>9", ::GlobalNamespace::TransferrableBall___c*>();
}
inline void GlobalNamespace::TransferrableBall___c::setStaticF___9__44_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__44_0", ::GlobalNamespace::TransferrableBall___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::TransferrableBall___c::getStaticF___9__44_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__44_0", ::GlobalNamespace::TransferrableBall___c*>();
}
inline void GlobalNamespace::TransferrableBall___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableBall___c::_TakeOwnershipAndEnablePhysics_b__44_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableBall___c*>(),
                        {"<TakeOwnershipAndEnablePhysics>b__44_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableBall___c* GlobalNamespace::TransferrableBall___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableBall___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableBall___c::TransferrableBall___c()   {
}
