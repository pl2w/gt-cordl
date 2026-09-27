#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/FireInstance.hpp"
#include "GorillaTag/zzzz__GTDirectAssetRef_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "GorillaTag/Reactions/zzzz__FireInstance_def.hpp"
#include "GlobalNamespace/zzzz__ThermalSourceVolume_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GorillaTag::Reactions::FireInstance.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireInstance::*)()>(&::GorillaTag::Reactions::FireInstance::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d3d740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireInstance.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireInstance::*)()>(&::GorillaTag::Reactions::FireInstance::OnDestroy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d3d798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireInstance.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireInstance::*)()>(&::GorillaTag::Reactions::FireInstance::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d3d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireInstance.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireInstance::*)()>(&::GorillaTag::Reactions::FireInstance::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d3d848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireInstance.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireInstance::*)(::UnityEngine::Collider*)>(&::GorillaTag::Reactions::FireInstance::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d3d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::FireInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::FireInstance::*)()>(&::GorillaTag::Reactions::FireInstance::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d3d908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider = value;
}
constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__thermalVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thermalVolume;
}
constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__thermalVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____thermalVolume;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__thermalVolume(::UnityW<::GlobalNamespace::ThermalSourceVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____thermalVolume = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__particleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__particleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____particleSystem;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____particleSystem = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__loopingAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopingAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__loopingAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopingAudioSource;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__loopingAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopingAudioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__emissiveRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emissiveRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__emissiveRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emissiveRenderers;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__emissiveRenderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emissiveRenderers = value;
}
constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__extinguishSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extinguishSound;
}
constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__extinguishSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extinguishSound;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__extinguishSound(::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extinguishSound = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__extinguishSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extinguishSoundVolume;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__extinguishSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extinguishSoundVolume;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__extinguishSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extinguishSoundVolume = value;
}
constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__igniteSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____igniteSound;
}
constexpr ::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__igniteSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____igniteSound;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__igniteSound(::GorillaTag::GTDirectAssetRef_1<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____igniteSound = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__igniteSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____igniteSoundVolume;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__igniteSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____igniteSoundVolume;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__igniteSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____igniteSoundVolume = value;
}
constexpr bool& GorillaTag::Reactions::FireInstance::__cordl_internal_get__despawnOnExtinguish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____despawnOnExtinguish;
}
constexpr bool const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__despawnOnExtinguish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____despawnOnExtinguish;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__despawnOnExtinguish(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____despawnOnExtinguish = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__maxLifetime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxLifetime;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__maxLifetime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxLifetime;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__maxLifetime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxLifetime = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__reheatSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reheatSpeed;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__reheatSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reheatSpeed;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__reheatSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reheatSpeed = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__stayExtinguishedDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayExtinguishedDuration;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__stayExtinguishedDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stayExtinguishedDuration;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__stayExtinguishedDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stayExtinguishedDuration = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__defaultTemperature()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultTemperature;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__defaultTemperature() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultTemperature;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__defaultTemperature(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultTemperature = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__timeSinceExtinguished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceExtinguished;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__timeSinceExtinguished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceExtinguished;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__timeSinceExtinguished(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSinceExtinguished = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__timeSinceDyingStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceDyingStart;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__timeSinceDyingStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSinceDyingStart;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__timeSinceDyingStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSinceDyingStart = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__timeAlive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeAlive;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__timeAlive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeAlive;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__timeAlive(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeAlive = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__psDefaultEmissionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____psDefaultEmissionRate;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__psDefaultEmissionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____psDefaultEmissionRate;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__psDefaultEmissionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____psDefaultEmissionRate = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GorillaTag::Reactions::FireInstance::__cordl_internal_get__psEmissionModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____psEmissionModule;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__psEmissionModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____psEmissionModule;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__psEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____psEmissionModule = value;
}
constexpr ::UnityEngine::Vector3Int& GorillaTag::Reactions::FireInstance::__cordl_internal_get__spatialGridPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialGridPosition;
}
constexpr ::UnityEngine::Vector3Int const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__spatialGridPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spatialGridPosition;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__spatialGridPosition(::UnityEngine::Vector3Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spatialGridPosition = value;
}
constexpr bool& GorillaTag::Reactions::FireInstance::__cordl_internal_get__isDespawning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDespawning;
}
constexpr bool const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__isDespawning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDespawning;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__isDespawning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDespawning = value;
}
constexpr float_t& GorillaTag::Reactions::FireInstance::__cordl_internal_get__deathStateDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deathStateDuration;
}
constexpr float_t const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__deathStateDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____deathStateDuration;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__deathStateDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____deathStateDuration = value;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__emiRenderers_matPropBlocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emiRenderers_matPropBlocks;
}
constexpr ::ArrayW<::UnityEngine::MaterialPropertyBlock*> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__emiRenderers_matPropBlocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emiRenderers_matPropBlocks;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__emiRenderers_matPropBlocks(::ArrayW<::UnityEngine::MaterialPropertyBlock*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emiRenderers_matPropBlocks = value;
}
constexpr ::ArrayW<::UnityEngine::Color>& GorillaTag::Reactions::FireInstance::__cordl_internal_get__emiRenderers_defaultColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emiRenderers_defaultColors;
}
constexpr ::ArrayW<::UnityEngine::Color> const& GorillaTag::Reactions::FireInstance::__cordl_internal_get__emiRenderers_defaultColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emiRenderers_defaultColors;
}
constexpr void GorillaTag::Reactions::FireInstance::__cordl_internal_set__emiRenderers_defaultColors(::ArrayW<::UnityEngine::Color>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emiRenderers_defaultColors = value;
}
inline void GorillaTag::Reactions::FireInstance::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::FireInstance::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::FireInstance::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::FireInstance::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::FireInstance::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Reactions::FireInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::FireInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Reactions::FireInstance* GorillaTag::Reactions::FireInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Reactions::FireInstance*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Reactions::FireInstance::FireInstance()   {
}
