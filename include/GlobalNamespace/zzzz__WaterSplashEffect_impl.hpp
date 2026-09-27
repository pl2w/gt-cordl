#pragma once
// IWYU pragma private; include "GlobalNamespace/WaterSplashEffect.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__WaterSplashEffect_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)()>(&::GlobalNamespace::WaterSplashEffect::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56b62f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)()>(&::GlobalNamespace::WaterSplashEffect::Destroy)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x56b6310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"Destroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.PlayEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)(bool, bool, float_t, ::GorillaLocomotion::Swimming::WaterVolume*)>(&::GlobalNamespace::WaterSplashEffect::PlayEffect)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56b641c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"PlayEffect", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)()>(&::GlobalNamespace::WaterSplashEffect::Update)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x56b695c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.DeactivateParticleSystems
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)(::ArrayW<::UnityEngine::ParticleSystem*>)>(&::GlobalNamespace::WaterSplashEffect::DeactivateParticleSystems)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x56b63ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"DeactivateParticleSystems", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ParticleSystem*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.PlayParticleEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)(::ArrayW<::UnityEngine::ParticleSystem*>)>(&::GlobalNamespace::WaterSplashEffect::PlayParticleEffects)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56b6790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"PlayParticleEffects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ParticleSystem*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.SetParticleEffectParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)(::ArrayW<::UnityEngine::ParticleSystem*>, float_t, float_t, float_t, float_t, ::GorillaLocomotion::Swimming::WaterVolume*)>(&::GlobalNamespace::WaterSplashEffect::SetParticleEffectParameters)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x56b6540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"SetParticleEffectParameters", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ParticleSystem*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect.PlayRandomAudioClipWithoutRepeats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)(::ArrayW<::UnityEngine::AudioClip*>, ::by_ref<int32_t>)>(&::GlobalNamespace::WaterSplashEffect::PlayRandomAudioClipWithoutRepeats)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x56b681c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"PlayRandomAudioClipWithoutRepeats", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AudioClip*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WaterSplashEffect._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WaterSplashEffect::*)()>(&::GlobalNamespace::WaterSplashEffect::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56b6b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashParticleSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashParticleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashParticleSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashParticleSystems;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_bigSplashParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigSplashParticleSystems = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashParticleSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashParticleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashParticleSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashParticleSystems;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_smallSplashParticleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallSplashParticleSystems = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashBaseGravityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashBaseGravityMultiplier;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashBaseGravityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashBaseGravityMultiplier;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_bigSplashBaseGravityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigSplashBaseGravityMultiplier = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashBaseStartSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashBaseStartSpeed;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashBaseStartSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashBaseStartSpeed;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_bigSplashBaseStartSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigSplashBaseStartSpeed = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashBaseSimulationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashBaseSimulationSpeed;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashBaseSimulationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashBaseSimulationSpeed;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_bigSplashBaseSimulationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigSplashBaseSimulationSpeed = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashBaseGravityMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashBaseGravityMultiplier;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashBaseGravityMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashBaseGravityMultiplier;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_smallSplashBaseGravityMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallSplashBaseGravityMultiplier = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashBaseStartSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashBaseStartSpeed;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashBaseStartSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashBaseStartSpeed;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_smallSplashBaseStartSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallSplashBaseStartSpeed = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashBaseSimulationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashBaseSimulationSpeed;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashBaseSimulationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashBaseSimulationSpeed;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_smallSplashBaseSimulationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallSplashBaseSimulationSpeed = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_lifeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_lifeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lifeTime;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_lifeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lifeTime = value;
}
constexpr float_t& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr float_t const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startTime;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashAudioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_bigSplashAudioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigSplashAudioClips;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_bigSplashAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigSplashAudioClips = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashEntryAudioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashEntryAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashEntryAudioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashEntryAudioClips;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_smallSplashEntryAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallSplashEntryAudioClips = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashExitAudioClips()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashExitAudioClips;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_smallSplashExitAudioClips() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallSplashExitAudioClips;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_smallSplashExitAudioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallSplashExitAudioClips = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_waterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GlobalNamespace::WaterSplashEffect::__cordl_internal_get_waterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterVolume;
}
constexpr void GlobalNamespace::WaterSplashEffect::__cordl_internal_set_waterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterVolume = value;
}
inline void GlobalNamespace::WaterSplashEffect::setStaticF_lastPlayedBigSplashAudioClipIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastPlayedBigSplashAudioClipIndex", ::GlobalNamespace::WaterSplashEffect*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::WaterSplashEffect::getStaticF_lastPlayedBigSplashAudioClipIndex()  {
return ::cordl_internals::getStaticField<int32_t, "lastPlayedBigSplashAudioClipIndex", ::GlobalNamespace::WaterSplashEffect*>();
}
inline void GlobalNamespace::WaterSplashEffect::setStaticF_lastPlayedSmallSplashEntryAudioClipIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastPlayedSmallSplashEntryAudioClipIndex", ::GlobalNamespace::WaterSplashEffect*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::WaterSplashEffect::getStaticF_lastPlayedSmallSplashEntryAudioClipIndex()  {
return ::cordl_internals::getStaticField<int32_t, "lastPlayedSmallSplashEntryAudioClipIndex", ::GlobalNamespace::WaterSplashEffect*>();
}
inline void GlobalNamespace::WaterSplashEffect::setStaticF_lastPlayedSmallSplashExitAudioClipIndex(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "lastPlayedSmallSplashExitAudioClipIndex", ::GlobalNamespace::WaterSplashEffect*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::WaterSplashEffect::getStaticF_lastPlayedSmallSplashExitAudioClipIndex()  {
return ::cordl_internals::getStaticField<int32_t, "lastPlayedSmallSplashExitAudioClipIndex", ::GlobalNamespace::WaterSplashEffect*>();
}
inline void GlobalNamespace::WaterSplashEffect::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterSplashEffect::Destroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"Destroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterSplashEffect::PlayEffect(bool  isBigSplash, bool  isEntry, float_t  scale, ::GorillaLocomotion::Swimming::WaterVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"PlayEffect", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBigSplash, isEntry, scale, volume);
}
inline void GlobalNamespace::WaterSplashEffect::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::WaterSplashEffect::DeactivateParticleSystems(::ArrayW<::UnityEngine::ParticleSystem*>  particleSystems)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"DeactivateParticleSystems", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ParticleSystem*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particleSystems);
}
inline void GlobalNamespace::WaterSplashEffect::PlayParticleEffects(::ArrayW<::UnityEngine::ParticleSystem*>  particleSystems)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"PlayParticleEffects", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ParticleSystem*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particleSystems);
}
inline void GlobalNamespace::WaterSplashEffect::SetParticleEffectParameters(::ArrayW<::UnityEngine::ParticleSystem*>  particleSystems, float_t  scale, float_t  baseGravMultiplier, float_t  baseStartSpeed, float_t  baseSimulationSpeed, ::GorillaLocomotion::Swimming::WaterVolume*  waterVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"SetParticleEffectParameters", {}, {::i2c::type_of<::ArrayW<::UnityEngine::ParticleSystem*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, particleSystems, scale, baseGravMultiplier, baseStartSpeed, baseSimulationSpeed, waterVolume);
}
inline void GlobalNamespace::WaterSplashEffect::PlayRandomAudioClipWithoutRepeats(::ArrayW<::UnityEngine::AudioClip*>  audioClips, ::by_ref<int32_t>  lastPlayedAudioClipIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {"PlayRandomAudioClipWithoutRepeats", {}, {::i2c::type_of<::ArrayW<::UnityEngine::AudioClip*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClips, lastPlayedAudioClipIndex);
}
inline void GlobalNamespace::WaterSplashEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WaterSplashEffect*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::WaterSplashEffect* GlobalNamespace::WaterSplashEffect::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WaterSplashEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WaterSplashEffect::WaterSplashEffect()   {
}
