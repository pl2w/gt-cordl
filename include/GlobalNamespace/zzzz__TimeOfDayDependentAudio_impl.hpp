#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeOfDayDependentAudio.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_impl.hpp"
#include "GlobalNamespace/zzzz__TimeOfDayDependentAudio_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayDependentAudio.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayDependentAudio::*)()>(&::GlobalNamespace::TimeOfDayDependentAudio::Awake)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x56b0a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayDependentAudio.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayDependentAudio::*)()>(&::GlobalNamespace::TimeOfDayDependentAudio::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56b0b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayDependentAudio.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayDependentAudio::*)()>(&::GlobalNamespace::TimeOfDayDependentAudio::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x56b0b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayDependentAudio.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayDependentAudio::*)()>(&::GlobalNamespace::TimeOfDayDependentAudio::SliceUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56b0b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayDependentAudio.UpdateTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayDependentAudio::*)()>(&::GlobalNamespace::TimeOfDayDependentAudio::UpdateTimeOfDay)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x56b0b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"UpdateTimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayDependentAudio.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeOfDayDependentAudio::*)()>(&::GlobalNamespace::TimeOfDayDependentAudio::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x56b121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeOfDayDependentAudio._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeOfDayDependentAudio::*)()>(&::GlobalNamespace::TimeOfDayDependentAudio::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56b1358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_audioSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSources;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_audioSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSources;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_audioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSources = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_volumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumes;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_volumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___volumes;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_volumes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___volumes = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_currentVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVolume;
}
constexpr float_t const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_currentVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVolume;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_currentVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVolume = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_stepTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepTime;
}
constexpr float_t const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_stepTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepTime;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_stepTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stepTime = value;
}
constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_myWeather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myWeather;
}
constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_myWeather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myWeather;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_myWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myWeather = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_dependentStuff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dependentStuff;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_dependentStuff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dependentStuff;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_dependentStuff(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dependentStuff = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_timeOfDayDependent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayDependent;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_timeOfDayDependent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeOfDayDependent;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_timeOfDayDependent(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeOfDayDependent = value;
}
constexpr bool& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_includesAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includesAudio;
}
constexpr bool const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_includesAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includesAudio;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_includesAudio(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includesAudio = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_myParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_myParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myParticleSystem;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_myParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myParticleSystem = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_startingEmissionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingEmissionRate;
}
constexpr float_t const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_startingEmissionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingEmissionRate;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_startingEmissionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingEmissionRate = value;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_newCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCurve;
}
constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_newCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newCurve;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_newCurve(::GlobalNamespace::ParticleSystem_MinMaxCurve  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newCurve = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_myEmissionModule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myEmissionModule;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_myEmissionModule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myEmissionModule;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_myEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myEmissionModule = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_newRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newRate;
}
constexpr float_t const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_newRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newRate;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_newRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newRate = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_positionMultiplierSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMultiplierSet;
}
constexpr float_t const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_positionMultiplierSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMultiplierSet;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_positionMultiplierSet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionMultiplierSet = value;
}
constexpr float_t& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_positionMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMultiplier;
}
constexpr float_t const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_positionMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionMultiplier;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_positionMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionMultiplier = value;
}
constexpr bool& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_isModified()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isModified;
}
constexpr bool const& GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_get_isModified() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isModified;
}
constexpr void GlobalNamespace::TimeOfDayDependentAudio::__cordl_internal_set_isModified(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isModified = value;
}
inline void GlobalNamespace::TimeOfDayDependentAudio::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayDependentAudio::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayDependentAudio::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayDependentAudio::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayDependentAudio::UpdateTimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"UpdateTimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TimeOfDayDependentAudio::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TimeOfDayDependentAudio::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeOfDayDependentAudio*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimeOfDayDependentAudio* GlobalNamespace::TimeOfDayDependentAudio::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimeOfDayDependentAudio*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::TimeOfDayDependentAudio::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::TimeOfDayDependentAudio::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::TimeOfDayDependentAudio::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::TimeOfDayDependentAudio::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeOfDayDependentAudio::TimeOfDayDependentAudio()   {
}
