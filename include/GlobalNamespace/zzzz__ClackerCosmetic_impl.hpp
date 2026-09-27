#pragma once
// IWYU pragma private; include "GlobalNamespace/ClackerCosmetic.hpp"
#include "GlobalNamespace/zzzz__ClackerCosmetic_PerArmData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__ClackerCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__ClackerCosmetic_PerArmData_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ClackerCosmetic.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClackerCosmetic::*)()>(&::GlobalNamespace::ClackerCosmetic::Start)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5647970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClackerCosmetic.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClackerCosmetic::*)()>(&::GlobalNamespace::ClackerCosmetic::Update)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x5647b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ClackerCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ClackerCosmetic::*)()>(&::GlobalNamespace::ClackerCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56485e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_parentHoldable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_parentHoldable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHoldable;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_parentHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHoldable = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_clackerArm1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clackerArm1;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_clackerArm1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clackerArm1;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_clackerArm1(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clackerArm1 = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_clackerArm2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clackerArm2;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_clackerArm2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clackerArm2;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_clackerArm2(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clackerArm2 = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_LocalCenterOfMass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalCenterOfMass;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_LocalCenterOfMass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalCenterOfMass;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_LocalCenterOfMass(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalCenterOfMass = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_LocalRotationAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRotationAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_LocalRotationAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocalRotationAxis;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_LocalRotationAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocalRotationAxis = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_RotationCorrectionEuler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrectionEuler;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_RotationCorrectionEuler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrectionEuler;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_RotationCorrectionEuler(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationCorrectionEuler = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_drag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_drag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drag;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_drag(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drag = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_gravity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_localFriction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFriction;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_localFriction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localFriction;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_localFriction(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localFriction = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_minimumClackSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumClackSpeed;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_minimumClackSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumClackSpeed;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_minimumClackSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumClackSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_lightClackAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightClackAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_lightClackAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightClackAudio;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_lightClackAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightClackAudio = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_mediumClackSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mediumClackSpeed;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_mediumClackSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mediumClackSpeed;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_mediumClackSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mediumClackSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_mediumClackAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mediumClackAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_mediumClackAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mediumClackAudio;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_mediumClackAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mediumClackAudio = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_heavyClackSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heavyClackSpeed;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_heavyClackSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heavyClackSpeed;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_heavyClackSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heavyClackSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_heavyClackAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heavyClackAudio;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_heavyClackAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heavyClackAudio;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_heavyClackAudio(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heavyClackAudio = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_collisionDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionDistance;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_collisionDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionDistance;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_collisionDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionDistance = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_centerOfMassRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassRadius;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_centerOfMassRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOfMassRadius;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_centerOfMassRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOfMassRadius = value;
}
constexpr float_t& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_pushApartStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushApartStrength;
}
constexpr float_t const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_pushApartStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pushApartStrength;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_pushApartStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pushApartStrength = value;
}
constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_arm1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arm1;
}
constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_arm1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arm1;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_arm1(::GlobalNamespace::ClackerCosmetic_PerArmData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arm1 = value;
}
constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_arm2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arm2;
}
constexpr ::GlobalNamespace::ClackerCosmetic_PerArmData const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_arm2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___arm2;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_arm2(::GlobalNamespace::ClackerCosmetic_PerArmData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___arm2 = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_RotationCorrection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrection;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::ClackerCosmetic::__cordl_internal_get_RotationCorrection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationCorrection;
}
constexpr void GlobalNamespace::ClackerCosmetic::__cordl_internal_set_RotationCorrection(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationCorrection = value;
}
inline void GlobalNamespace::ClackerCosmetic::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ClackerCosmetic::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ClackerCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ClackerCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ClackerCosmetic* GlobalNamespace::ClackerCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ClackerCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ClackerCosmetic::ClackerCosmetic()   {
}
