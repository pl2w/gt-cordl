#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetChargeBlaster.hpp"
#include "GlobalNamespace/zzzz__SIGadgetChargeBlaster_BlasterChargeLevel_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetChargeBlaster_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterType_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlaster_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetChargeBlaster_BlasterChargeLevel_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetChargeBlaster::*)()>(&::GlobalNamespace::SIGadgetChargeBlaster::CheckInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57fb6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)()>(&::GlobalNamespace::SIGadgetChargeBlaster::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x57fb6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetChargeBlaster::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x57fb730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetChargeBlaster::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57fc028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.SetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)()>(&::GlobalNamespace::SIGadgetChargeBlaster::SetStateShared)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57fc084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"SetStateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.FireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)(float_t, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::SIGadgetChargeBlaster::FireProjectile)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x57fb988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"FireProjectile", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.UpdateChargingVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)()>(&::GlobalNamespace::SIGadgetChargeBlaster::UpdateChargingVisuals)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x57fbdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"UpdateChargingVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.NetworkFireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetChargeBlaster::NetworkFireProjectile)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x57fc18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"NetworkFireProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetChargeBlaster::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57fc408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"ApplyUpgradeNodes", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster.CurrentBlasterChargeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SIGadgetChargeBlaster::*)()>(&::GlobalNamespace::SIGadgetChargeBlaster::CurrentBlasterChargeLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57fbfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"CurrentBlasterChargeLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetChargeBlaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetChargeBlaster::*)()>(&::GlobalNamespace::SIGadgetChargeBlaster::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57fc40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_fireCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr float_t const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_fireCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_fireCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireCooldown = value;
}
constexpr float_t& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_chargeRatePerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRatePerSecond;
}
constexpr float_t const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_chargeRatePerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeRatePerSecond;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_chargeRatePerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeRatePerSecond = value;
}
constexpr float_t& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_fireRateGracePercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireRateGracePercentage;
}
constexpr float_t const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_fireRateGracePercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireRateGracePercentage;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_fireRateGracePercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireRateGracePercentage = value;
}
constexpr float_t& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_maxChargeDiff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargeDiff;
}
constexpr float_t const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_maxChargeDiff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxChargeDiff;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_maxChargeDiff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxChargeDiff = value;
}
constexpr float_t& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_currentCharge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCharge;
}
constexpr float_t const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_currentCharge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCharge;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_currentCharge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCharge = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_chargingClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargingClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_chargingClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargingClip;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_chargingClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargingClip = value;
}
constexpr ::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_chargeLevels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeLevels;
}
constexpr ::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel> const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_chargeLevels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chargeLevels;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_chargeLevels(::ArrayW<::GlobalNamespace::SIGadgetChargeBlaster_BlasterChargeLevel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chargeLevels = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_blaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blaster;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_get_blaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blaster;
}
constexpr void GlobalNamespace::SIGadgetChargeBlaster::__cordl_internal_set_blaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blaster = value;
}
inline bool GlobalNamespace::SIGadgetChargeBlaster::CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::SetStateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"SetStateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::FireProjectile(float_t  firedAtChargeLevel, int32_t  fireId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"FireProjectile", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firedAtChargeLevel, fireId, position, rotation);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::UpdateChargingVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"UpdateChargingVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::NetworkFireProjectile(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"NetworkFireProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"ApplyUpgradeNodes", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline int32_t GlobalNamespace::SIGadgetChargeBlaster::CurrentBlasterChargeLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {"CurrentBlasterChargeLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetChargeBlaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetChargeBlaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetChargeBlaster* GlobalNamespace::SIGadgetChargeBlaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetChargeBlaster*>());
}
/// @brief Convert operator to "::GlobalNamespace::SIGadgetBlasterType"
constexpr  GlobalNamespace::SIGadgetChargeBlaster::operator ::GlobalNamespace::SIGadgetBlasterType*() noexcept {
return static_cast<::GlobalNamespace::SIGadgetBlasterType*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SIGadgetBlasterType"
constexpr ::GlobalNamespace::SIGadgetBlasterType* GlobalNamespace::SIGadgetChargeBlaster::i___GlobalNamespace__SIGadgetBlasterType() noexcept {
return static_cast<::GlobalNamespace::SIGadgetBlasterType*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetChargeBlaster::SIGadgetChargeBlaster()   {
}
