#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetCooldownBlaster.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SIGadgetCooldownBlaster_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterProjectile_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterType_def.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlaster_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.CheckInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIGadgetCooldownBlaster::*)()>(&::GlobalNamespace::SIGadgetCooldownBlaster::CheckInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57fc420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)()>(&::GlobalNamespace::SIGadgetCooldownBlaster::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x57fc434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetCooldownBlaster::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x57fc53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)(float_t)>(&::GlobalNamespace::SIGadgetCooldownBlaster::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57fc95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.SetStateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)()>(&::GlobalNamespace::SIGadgetCooldownBlaster::SetStateShared)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x57fc970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"SetStateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.FireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)(int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::SIGadgetCooldownBlaster::FireProjectile)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x57fc680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"FireProjectile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.NetworkFireProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)(::ArrayW<::System::Object*>)>(&::GlobalNamespace::SIGadgetCooldownBlaster::NetworkFireProjectile)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x57fc9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"NetworkFireProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster.ApplyUpgradeNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)(::GlobalNamespace::SIUpgradeSet)>(&::GlobalNamespace::SIGadgetCooldownBlaster::ApplyUpgradeNodes)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57fcbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"ApplyUpgradeNodes", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIGadgetCooldownBlaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIGadgetCooldownBlaster::*)()>(&::GlobalNamespace::SIGadgetCooldownBlaster::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57fcc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_projectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_projectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectilePrefab;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_projectilePrefab(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectilePrefab = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_fireCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_fireCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireCooldown;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_fireCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireCooldown = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_fireRateGracePercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireRateGracePercentage;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_fireRateGracePercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireRateGracePercentage;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_fireRateGracePercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireRateGracePercentage = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_availableToFireHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableToFireHapticStrength;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_availableToFireHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableToFireHapticStrength;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_availableToFireHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableToFireHapticStrength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_availableToFireHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableToFireHapticDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_availableToFireHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableToFireHapticDuration;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_availableToFireHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableToFireHapticDuration = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingHapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingHapticStrength;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingHapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingHapticStrength;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_firingHapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingHapticStrength = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingHapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingHapticDuration;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingHapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingHapticDuration;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_firingHapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingHapticDuration = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingClip;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_firingClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingClip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_cooldownClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_cooldownClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownClip;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_cooldownClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownClip = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingVolume;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_firingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firingVolume;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_firingVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firingVolume = value;
}
constexpr float_t& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_cooldownVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownVolume;
}
constexpr float_t const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_cooldownVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownVolume;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_cooldownVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownVolume = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_fireFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireFX;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_fireFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireFX;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_fireFX(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireFX = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_cooldownIndicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownIndicator;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_cooldownIndicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldownIndicator;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_cooldownIndicator(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldownIndicator = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_readyToFireMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToFireMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_readyToFireMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___readyToFireMaterial;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_readyToFireMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___readyToFireMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_onCooldownMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCooldownMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_onCooldownMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCooldownMaterial;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_onCooldownMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCooldownMaterial = value;
}
constexpr bool& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_triggerHeldDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerHeldDown;
}
constexpr bool const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_triggerHeldDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerHeldDown;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_triggerHeldDown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerHeldDown = value;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster>& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_blaster()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blaster;
}
constexpr ::UnityW<::GlobalNamespace::SIGadgetBlaster> const& GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_get_blaster() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___blaster;
}
constexpr void GlobalNamespace::SIGadgetCooldownBlaster::__cordl_internal_set_blaster(::UnityW<::GlobalNamespace::SIGadgetBlaster>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___blaster = value;
}
inline bool GlobalNamespace::SIGadgetCooldownBlaster::CheckInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"CheckInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::SetStateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"SetStateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::FireProjectile(int32_t  fireId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"FireProjectile", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fireId, position, rotation);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::NetworkFireProjectile(::ArrayW<::System::Object*>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"NetworkFireProjectile", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::ApplyUpgradeNodes(::GlobalNamespace::SIUpgradeSet  withUpgrades)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {"ApplyUpgradeNodes", {}, {::i2c::type_of<::GlobalNamespace::SIUpgradeSet>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, withUpgrades);
}
inline void GlobalNamespace::SIGadgetCooldownBlaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIGadgetCooldownBlaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIGadgetCooldownBlaster* GlobalNamespace::SIGadgetCooldownBlaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIGadgetCooldownBlaster*>());
}
/// @brief Convert operator to "::GlobalNamespace::SIGadgetBlasterType"
constexpr  GlobalNamespace::SIGadgetCooldownBlaster::operator ::GlobalNamespace::SIGadgetBlasterType*() noexcept {
return static_cast<::GlobalNamespace::SIGadgetBlasterType*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::SIGadgetBlasterType"
constexpr ::GlobalNamespace::SIGadgetBlasterType* GlobalNamespace::SIGadgetCooldownBlaster::i___GlobalNamespace__SIGadgetBlasterType() noexcept {
return static_cast<::GlobalNamespace::SIGadgetBlasterType*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetCooldownBlaster::SIGadgetCooldownBlaster()   {
}
