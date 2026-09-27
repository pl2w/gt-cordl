#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/WaterBubbleParticleVolumeCollector.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_TriggerModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GorillaTag/Rendering/zzzz__WaterBubbleParticleVolumeCollector_def.hpp"
//  Writing Method size for method: ::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::*)()>(&::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::Awake)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x5d546ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::*)()>(&::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::LateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d54d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector.SetEmissionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::*)(bool)>(&::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::SetEmissionState)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d54d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {"SetEmissionState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::*)()>(&::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d54e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_particleSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_particleSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSystems;
}
constexpr void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_set_particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSystems = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule>& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_particleTriggerModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleTriggerModules;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule> const& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_particleTriggerModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleTriggerModules;
}
constexpr void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_set_particleTriggerModules(::ArrayW<::GlobalNamespace::ParticleSystem_TriggerModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleTriggerModules = value;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_particleEmissionModules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEmissionModules;
}
constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule> const& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_particleEmissionModules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEmissionModules;
}
constexpr void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_set_particleEmissionModules(::ArrayW<::GlobalNamespace::ParticleSystem_EmissionModule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleEmissionModules = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_bubbleableVolumeColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleableVolumeColliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_bubbleableVolumeColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bubbleableVolumeColliders;
}
constexpr void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_set_bubbleableVolumeColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bubbleableVolumeColliders = value;
}
constexpr bool& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_emissionEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionEnabled;
}
constexpr bool const& GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_get_emissionEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionEnabled;
}
constexpr void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::__cordl_internal_set_emissionEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionEnabled = value;
}
inline void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::SetEmissionState(bool  setEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {"SetEmissionState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setEnabled);
}
inline void GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector* GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Rendering::WaterBubbleParticleVolumeCollector::WaterBubbleParticleVolumeCollector()   {
}
