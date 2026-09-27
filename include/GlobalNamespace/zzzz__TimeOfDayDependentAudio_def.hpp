#pragma once
// IWYU pragma private; include "GlobalNamespace/TimeOfDayDependentAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TimeOfDayDependentAudio)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class TimeOfDayDependentAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TimeOfDayDependentAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeOfDayDependentAudio*, "", "TimeOfDayDependentAudio");
// Dependencies BetterDayNightManager::WeatherType, UnityEngine.AudioSource, UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::EmissionModule, UnityEngine.ParticleSystem::MinMaxCurve
namespace GlobalNamespace {
// Is value type: false
// CS Name: TimeOfDayDependentAudio
class CORDL_TYPE TimeOfDayDependentAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSources, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSources, put=__cordl_internal_set_audioSources)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  audioSources;

/// @brief Field currentVolume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentVolume, put=__cordl_internal_set_currentVolume)) float_t  currentVolume;

/// @brief Field dependentStuff, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dependentStuff, put=__cordl_internal_set_dependentStuff)) ::UnityW<::UnityEngine::GameObject>  dependentStuff;

/// @brief Field includesAudio, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_includesAudio, put=__cordl_internal_set_includesAudio)) bool  includesAudio;

/// @brief Field isModified, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isModified, put=__cordl_internal_set_isModified)) bool  isModified;

/// @brief Field myEmissionModule, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_myEmissionModule, put=__cordl_internal_set_myEmissionModule)) ::GlobalNamespace::ParticleSystem_EmissionModule  myEmissionModule;

/// @brief Field myParticleSystem, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_myParticleSystem, put=__cordl_internal_set_myParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  myParticleSystem;

/// @brief Field myWeather, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_myWeather, put=__cordl_internal_set_myWeather)) ::GlobalNamespace::BetterDayNightManager_WeatherType  myWeather;

/// @brief Field newCurve, offset 0x68, size 0x20 
 __declspec(property(get=__cordl_internal_get_newCurve, put=__cordl_internal_set_newCurve)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  newCurve;

/// @brief Field newRate, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_newRate, put=__cordl_internal_set_newRate)) float_t  newRate;

/// @brief Field positionMultiplier, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionMultiplier, put=__cordl_internal_set_positionMultiplier)) float_t  positionMultiplier;

/// @brief Field positionMultiplierSet, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_positionMultiplierSet, put=__cordl_internal_set_positionMultiplierSet)) float_t  positionMultiplierSet;

/// @brief Field startingEmissionRate, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingEmissionRate, put=__cordl_internal_set_startingEmissionRate)) float_t  startingEmissionRate;

/// @brief Field stepTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_stepTime, put=__cordl_internal_set_stepTime)) float_t  stepTime;

/// @brief Field timeOfDayDependent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeOfDayDependent, put=__cordl_internal_set_timeOfDayDependent)) ::UnityW<::UnityEngine::GameObject>  timeOfDayDependent;

/// @brief Field volumes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_volumes, put=__cordl_internal_set_volumes)) ::ArrayW<float_t>  volumes;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x56b0a20, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildValidationCheck, addr 0x56b121c, size 0x13c, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

static inline ::GlobalNamespace::TimeOfDayDependentAudio* New_ctor() ;

/// @brief Method OnDisable, addr 0x56b0b4c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56b0b40, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x56b0b58, size 0x8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method UpdateTimeOfDay, addr 0x56b0b60, size 0x6bc, virtual false, abstract: false, final false
inline void UpdateTimeOfDay() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_audioSources() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_audioSources() ;

constexpr float_t const& __cordl_internal_get_currentVolume() const;

constexpr float_t& __cordl_internal_get_currentVolume() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dependentStuff() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dependentStuff() ;

constexpr bool const& __cordl_internal_get_includesAudio() const;

constexpr bool& __cordl_internal_get_includesAudio() ;

constexpr bool const& __cordl_internal_get_isModified() const;

constexpr bool& __cordl_internal_get_isModified() ;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& __cordl_internal_get_myEmissionModule() const;

constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& __cordl_internal_get_myEmissionModule() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_myParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_myParticleSystem() ;

constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType const& __cordl_internal_get_myWeather() const;

constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType& __cordl_internal_get_myWeather() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_newCurve() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_newCurve() ;

constexpr float_t const& __cordl_internal_get_newRate() const;

constexpr float_t& __cordl_internal_get_newRate() ;

constexpr float_t const& __cordl_internal_get_positionMultiplier() const;

constexpr float_t& __cordl_internal_get_positionMultiplier() ;

constexpr float_t const& __cordl_internal_get_positionMultiplierSet() const;

constexpr float_t& __cordl_internal_get_positionMultiplierSet() ;

constexpr float_t const& __cordl_internal_get_startingEmissionRate() const;

constexpr float_t& __cordl_internal_get_startingEmissionRate() ;

constexpr float_t const& __cordl_internal_get_stepTime() const;

constexpr float_t& __cordl_internal_get_stepTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_timeOfDayDependent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_timeOfDayDependent() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_volumes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_volumes() ;

constexpr void __cordl_internal_set_audioSources(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_currentVolume(float_t  value) ;

constexpr void __cordl_internal_set_dependentStuff(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_includesAudio(bool  value) ;

constexpr void __cordl_internal_set_isModified(bool  value) ;

constexpr void __cordl_internal_set_myEmissionModule(::GlobalNamespace::ParticleSystem_EmissionModule  value) ;

constexpr void __cordl_internal_set_myParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_myWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  value) ;

constexpr void __cordl_internal_set_newCurve(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_newRate(float_t  value) ;

constexpr void __cordl_internal_set_positionMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_positionMultiplierSet(float_t  value) ;

constexpr void __cordl_internal_set_startingEmissionRate(float_t  value) ;

constexpr void __cordl_internal_set_stepTime(float_t  value) ;

constexpr void __cordl_internal_set_timeOfDayDependent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_volumes(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x56b1358, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeOfDayDependentAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDayDependentAudio", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeOfDayDependentAudio(TimeOfDayDependentAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeOfDayDependentAudio", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeOfDayDependentAudio(TimeOfDayDependentAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{939};

/// @brief Field audioSources, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___audioSources;

/// @brief Field volumes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ___volumes;

/// @brief Field currentVolume, offset: 0x30, size: 0x4, def value: None
 float_t  ___currentVolume;

/// @brief Field stepTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___stepTime;

/// @brief Field myWeather, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::BetterDayNightManager_WeatherType  ___myWeather;

/// @brief Field dependentStuff, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___dependentStuff;

/// @brief Field timeOfDayDependent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___timeOfDayDependent;

/// @brief Field includesAudio, offset: 0x50, size: 0x1, def value: None
 bool  ___includesAudio;

/// @brief Field myParticleSystem, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___myParticleSystem;

/// @brief Field startingEmissionRate, offset: 0x60, size: 0x4, def value: None
 float_t  ___startingEmissionRate;

/// @brief Field newCurve, offset: 0x68, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___newCurve;

/// @brief Field myEmissionModule, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_EmissionModule  ___myEmissionModule;

/// @brief Field newRate, offset: 0x90, size: 0x4, def value: None
 float_t  ___newRate;

/// @brief Field positionMultiplierSet, offset: 0x94, size: 0x4, def value: None
 float_t  ___positionMultiplierSet;

/// @brief Field positionMultiplier, offset: 0x98, size: 0x4, def value: None
 float_t  ___positionMultiplier;

/// @brief Field isModified, offset: 0x9c, size: 0x1, def value: None
 bool  ___isModified;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___audioSources) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___volumes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___currentVolume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___stepTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___myWeather) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___dependentStuff) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___timeOfDayDependent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___includesAudio) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___myParticleSystem) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___startingEmissionRate) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___newCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___myEmissionModule) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___newRate) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___positionMultiplierSet) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___positionMultiplier) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeOfDayDependentAudio, ___isModified) == 0x9c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeOfDayDependentAudio) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
