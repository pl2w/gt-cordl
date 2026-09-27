#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetPumpBlaster.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetPumpBlaster_def.hpp"
#include "GlobalNamespace/zzzz__GameTriggerInteractable_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterType_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlaster_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetPumpBlaster::*)()>(&::GlobalNamespace::SIGadgetPumpBlaster::CheckInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57fcf3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)()>(&::GlobalNamespace::SIGadgetPumpBlaster::OnEnable)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57fcf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetPumpBlaster::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x57fd09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetPumpBlaster::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x57fd8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.SetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)()>(&::GlobalNamespace::SIGadgetPumpBlaster::SetStateShared)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57fdc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"SetStateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.AttemptFireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)(int32_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::SIGadgetPumpBlaster::AttemptFireProjectile)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x57fd5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"AttemptFireProjectile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.NetworkFireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetPumpBlaster::NetworkFireProjectile)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x57fdd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"NetworkFireProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetPumpBlaster::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57fdeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"ApplyUpgradeNodes", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetPumpBlaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetPumpBlaster::*)()>(&::GlobalNamespace::SIGadgetPumpBlaster::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57fdef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_projectilePrefab(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_idleClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_idleClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleClip;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_idleClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_cooldownClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_cooldownClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownClip;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_cooldownClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownClip = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_idleVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleVolume;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_idleVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleVolume;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_idleVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleVolume = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_cooldownVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownVolume;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_cooldownVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownVolume;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_cooldownVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_firingClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_firingClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingClip;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_firingClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingClip = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_firingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingVolume;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_firingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingVolume;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_firingVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingVolume = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_fireFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_fireFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireFX;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_fireFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireFX = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpHandlePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpHandlePosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpHandlePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpHandlePosition;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_pumpHandlePosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pumpHandlePosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpFullyClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpFullyClosed;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpFullyClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpFullyClosed;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_pumpFullyClosed(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pumpFullyClosed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpFullyOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpFullyOpen;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpFullyOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpFullyOpen;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_pumpFullyOpen(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pumpFullyOpen = value;
}
constexpr ::UnityW<::GlobalNamespace::GameTriggerInteractable>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_triggerInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerInteractable;
}
constexpr ::UnityW<::GlobalNamespace::GameTriggerInteractable> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_triggerInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerInteractable;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_triggerInteractable(::UnityW<::GlobalNamespace::GameTriggerInteractable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerInteractable = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_blaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blaster;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_blaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blaster;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_blaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blaster = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpingTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpingTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpingTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpingTransform;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_pumpingTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pumpingTransform = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_currentPumpChargeAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPumpChargeAmount;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_currentPumpChargeAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPumpChargeAmount;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_currentPumpChargeAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPumpChargeAmount = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_maxPumpCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPumpCharge;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_maxPumpCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPumpCharge;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_maxPumpCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPumpCharge = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_remotePumpChargePerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePumpChargePerSecond;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_remotePumpChargePerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remotePumpChargePerSecond;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_remotePumpChargePerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remotePumpChargePerSecond = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_maxPumpDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPumpDiff;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_maxPumpDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPumpDiff;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_maxPumpDiff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPumpDiff = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_chargePerPump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargePerPump;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_chargePerPump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargePerPump;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_chargePerPump(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargePerPump = value;
}
constexpr bool& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpFullyOpened()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpFullyOpened;
}
constexpr bool const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpFullyOpened() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpFullyOpened;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_pumpFullyOpened(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pumpFullyOpened = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpThresholdPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpThresholdPercent;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_pumpThresholdPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pumpThresholdPercent;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_pumpThresholdPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pumpThresholdPercent = value;
}
constexpr float_t& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_strokeLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strokeLength;
}
constexpr float_t const& GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_get_strokeLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___strokeLength;
}
constexpr void GlobalNamespace::SIGadgetPumpBlaster::__cordl_internal_set_strokeLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___strokeLength = value;
}
inline bool GlobalNamespace::SIGadgetPumpBlaster::CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::SetStateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"SetStateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::AttemptFireProjectile(int32_t  fireId, float_t  pumpChargeAmount, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"AttemptFireProjectile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fireId, pumpChargeAmount, position, rotation);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::NetworkFireProjectile(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"NetworkFireProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {"ApplyUpgradeNodes", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetPumpBlaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetPumpBlaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetPumpBlaster* GlobalNamespace::SIGadgetPumpBlaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetPumpBlaster*>());
}
/// @brief Convert operator to "::GlobalNamespace::SIGadgetBlasterType"
constexpr  GlobalNamespace::SIGadgetPumpBlaster::operator ::GlobalNamespace::SIGadgetBlasterType*() noexcept {
return static_cast<::GlobalNamespace::SIGadgetBlasterType*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SIGadgetBlasterType"
constexpr ::GlobalNamespace::SIGadgetBlasterType* GlobalNamespace::SIGadgetPumpBlaster::i___GlobalNamespace__SIGadgetBlasterType() noexcept {
return static_cast<::GlobalNamespace::SIGadgetBlasterType*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetPumpBlaster::SIGadgetPumpBlaster()   {
}
