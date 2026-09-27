#pragma once
// IWYU pragma private; include "GlobalNamespace/CornOnCobCosmetic.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "GlobalNamespace/zzzz__CornOnCobCosmetic_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ThermalReceiver_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CornOnCobCosmetic.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CornOnCobCosmetic::*)()>(&::GlobalNamespace::CornOnCobCosmetic::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5dfdd00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CornOnCobCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CornOnCobCosmetic.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CornOnCobCosmetic::*)()>(&::GlobalNamespace::CornOnCobCosmetic::LateUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5dfddb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CornOnCobCosmetic*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CornOnCobCosmetic._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CornOnCobCosmetic::*)()>(&::GlobalNamespace::CornOnCobCosmetic::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dfdee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CornOnCobCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ThermalReceiver>& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_thermalReceiver()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalReceiver;
}
constexpr ::UnityW<::GlobalNamespace::ThermalReceiver> const& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_thermalReceiver() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thermalReceiver;
}
constexpr void GlobalNamespace::CornOnCobCosmetic::__cordl_internal_set_thermalReceiver(::UnityW<::GlobalNamespace::ThermalReceiver>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thermalReceiver = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_particleSys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSys;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_particleSys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleSys;
}
constexpr void GlobalNamespace::CornOnCobCosmetic::__cordl_internal_set_particleSys(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleSys = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_particleEmissionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEmissionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_particleEmissionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleEmissionCurve;
}
constexpr void GlobalNamespace::CornOnCobCosmetic::__cordl_internal_set_particleEmissionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleEmissionCurve = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_soundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_soundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBankPlayer;
}
constexpr void GlobalNamespace::CornOnCobCosmetic::__cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBankPlayer = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_emissionModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionModule;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_emissionModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionModule;
}
constexpr void GlobalNamespace::CornOnCobCosmetic::__cordl_internal_set_emissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionModule = value;
}
constexpr float_t& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_maxBurstProbability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBurstProbability;
}
constexpr float_t const& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_maxBurstProbability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxBurstProbability;
}
constexpr void GlobalNamespace::CornOnCobCosmetic::__cordl_internal_set_maxBurstProbability(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxBurstProbability = value;
}
constexpr int32_t& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_previousParticleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousParticleCount;
}
constexpr int32_t const& GlobalNamespace::CornOnCobCosmetic::__cordl_internal_get_previousParticleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousParticleCount;
}
constexpr void GlobalNamespace::CornOnCobCosmetic::__cordl_internal_set_previousParticleCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousParticleCount = value;
}
inline void GlobalNamespace::CornOnCobCosmetic::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CornOnCobCosmetic*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CornOnCobCosmetic::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CornOnCobCosmetic*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CornOnCobCosmetic::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CornOnCobCosmetic*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CornOnCobCosmetic* GlobalNamespace::CornOnCobCosmetic::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CornOnCobCosmetic*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CornOnCobCosmetic::CornOnCobCosmetic()   {
}
