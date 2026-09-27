#pragma once
// IWYU pragma private; include "GlobalNamespace/HatcheryEventFlashlight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HatcheryEventFlashlight)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HatcheryEventFlashlight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HatcheryEventFlashlight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HatcheryEventFlashlight*, "", "HatcheryEventFlashlight");
// Dependencies GameLight, MonoBehaviourTick, UnityEngine.Light, UnityEngine.RaycastHit, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: HatcheryEventFlashlight
class CORDL_TYPE HatcheryEventFlashlight : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
/// @brief Field clickSource, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_clickSource, put=__cordl_internal_set_clickSource)) ::UnityW<::UnityEngine::AudioSource>  clickSource;

/// @brief Field currentEnergy, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentEnergy, put=__cordl_internal_set_currentEnergy)) float_t  currentEnergy;

/// @brief Field flashlight, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_flashlight, put=__cordl_internal_set_flashlight)) ::UnityW<::UnityEngine::Transform>  flashlight;

/// @brief Field gameLightComponents, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameLightComponents, put=__cordl_internal_set_gameLightComponents)) ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  gameLightComponents;

/// @brief Field hits, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hits, put=__cordl_internal_set_hits)) ::ArrayW<::UnityEngine::RaycastHit>  hits;

/// @brief Field lastUpdated, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdated, put=__cordl_internal_set_lastUpdated)) float_t  lastUpdated;

/// @brief Field lightComponents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightComponents, put=__cordl_internal_set_lightComponents)) ::ArrayW<::UnityW<::UnityEngine::Light>>  lightComponents;

/// @brief Field lightStart, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightStart, put=__cordl_internal_set_lightStart)) ::UnityW<::UnityEngine::Transform>  lightStart;

/// @brief Field lights, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lights, put=__cordl_internal_set_lights)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  lights;

/// @brief Field lightsParent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lightsParent, put=__cordl_internal_set_lightsParent)) ::UnityW<::UnityEngine::Transform>  lightsParent;

/// @brief Field parentRig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentRig, put=__cordl_internal_set_parentRig)) ::UnityW<::GlobalNamespace::VRRig>  parentRig;

/// @brief Field playerLight, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_playerLight, put=__cordl_internal_set_playerLight)) bool  playerLight;

/// @brief Field startingBrightness, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingBrightness, put=__cordl_internal_set_startingBrightness)) float_t  startingBrightness;

/// @brief Field wasLightEnabled, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasLightEnabled, put=__cordl_internal_set_wasLightEnabled)) bool  wasLightEnabled;

/// @brief Field wasLightSwitchedOn, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasLightSwitchedOn, put=__cordl_internal_set_wasLightSwitchedOn)) bool  wasLightSwitchedOn;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x564088c, size 0x250, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method MaxEnergy, addr 0x5640b3c, size 0xc4, virtual false, abstract: false, final false
inline float_t MaxEnergy() ;

static inline ::GlobalNamespace::HatcheryEventFlashlight* New_ctor() ;

/// @brief Method OnDisable, addr 0x5640b0c, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5640adc, size 0x30, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5640c10, size 0x234, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Tick, addr 0x5640c00, size 0x10, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdateLightBrightness, addr 0x5641068, size 0xb4, virtual false, abstract: false, final false
inline void UpdateLightBrightness(float_t  _maxEnergy) ;

/// @brief Method UpdateLightPositioning, addr 0x5640e44, size 0x224, virtual false, abstract: false, final false
inline void UpdateLightPositioning() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_clickSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_clickSource() ;

constexpr float_t const& __cordl_internal_get_currentEnergy() const;

constexpr float_t& __cordl_internal_get_currentEnergy() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_flashlight() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_flashlight() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>> const& __cordl_internal_get_gameLightComponents() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>& __cordl_internal_get_gameLightComponents() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_hits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_hits() ;

constexpr float_t const& __cordl_internal_get_lastUpdated() const;

constexpr float_t& __cordl_internal_get_lastUpdated() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Light>> const& __cordl_internal_get_lightComponents() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Light>>& __cordl_internal_get_lightComponents() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lightStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lightStart() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_lights() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_lights() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lightsParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lightsParent() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_parentRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_parentRig() ;

constexpr bool const& __cordl_internal_get_playerLight() const;

constexpr bool& __cordl_internal_get_playerLight() ;

constexpr float_t const& __cordl_internal_get_startingBrightness() const;

constexpr float_t& __cordl_internal_get_startingBrightness() ;

constexpr bool const& __cordl_internal_get_wasLightEnabled() const;

constexpr bool& __cordl_internal_get_wasLightEnabled() ;

constexpr bool const& __cordl_internal_get_wasLightSwitchedOn() const;

constexpr bool& __cordl_internal_get_wasLightSwitchedOn() ;

constexpr void __cordl_internal_set_clickSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_currentEnergy(float_t  value) ;

constexpr void __cordl_internal_set_flashlight(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gameLightComponents(::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  value) ;

constexpr void __cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_lastUpdated(float_t  value) ;

constexpr void __cordl_internal_set_lightComponents(::ArrayW<::UnityW<::UnityEngine::Light>>  value) ;

constexpr void __cordl_internal_set_lightStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lights(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_lightsParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_parentRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_playerLight(bool  value) ;

constexpr void __cordl_internal_set_startingBrightness(float_t  value) ;

constexpr void __cordl_internal_set_wasLightEnabled(bool  value) ;

constexpr void __cordl_internal_set_wasLightSwitchedOn(bool  value) ;

/// @brief Method .ctor, addr 0x564111c, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HatcheryEventFlashlight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HatcheryEventFlashlight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HatcheryEventFlashlight(HatcheryEventFlashlight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HatcheryEventFlashlight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HatcheryEventFlashlight(HatcheryEventFlashlight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{649};

/// @brief Field enableThresholdCurl offset 0xffffffff size 0x4
static constexpr float_t  enableThresholdCurl{static_cast<float_t>(0.33f)};

/// @brief Field energyChargeRate offset 0xffffffff size 0x4
static constexpr float_t  energyChargeRate{static_cast<float_t>(0.66f)};

/// @brief Field energyUsageRate offset 0xffffffff size 0x4
static constexpr float_t  energyUsageRate{static_cast<float_t>(1.0f)};

/// @brief Field lightMaxDistance offset 0xffffffff size 0x4
static constexpr float_t  lightMaxDistance{static_cast<float_t>(6.0f)};

/// @brief Field maxEnergy offset 0xffffffff size 0x4
static constexpr float_t  maxEnergy{static_cast<float_t>(10.0f)};

/// @brief Field surfaceOffset offset 0xffffffff size 0x4
static constexpr float_t  surfaceOffset{static_cast<float_t>(1.0f)};

/// @brief Field hits, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___hits;

/// @brief Field lightComponents, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Light>>  ___lightComponents;

/// @brief Field gameLightComponents, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  ___gameLightComponents;

/// @brief Field parentRig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___parentRig;

/// @brief Field currentEnergy, offset: 0x48, size: 0x4, def value: None
 float_t  ___currentEnergy;

/// @brief Field startingBrightness, offset: 0x4c, size: 0x4, def value: None
 float_t  ___startingBrightness;

/// @brief Field lastUpdated, offset: 0x50, size: 0x4, def value: None
 float_t  ___lastUpdated;

/// @brief Field playerLight, offset: 0x54, size: 0x1, def value: None
 bool  ___playerLight;

/// @brief Field wasLightEnabled, offset: 0x55, size: 0x1, def value: None
 bool  ___wasLightEnabled;

/// @brief Field wasLightSwitchedOn, offset: 0x56, size: 0x1, def value: None
 bool  ___wasLightSwitchedOn;

/// @brief Field lightStart, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lightStart;

/// @brief Field lightsParent, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lightsParent;

/// @brief Field flashlight, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___flashlight;

/// @brief Field lights, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___lights;

/// @brief Field clickSource, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___clickSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___hits) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___lightComponents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___gameLightComponents) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___parentRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___currentEnergy) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___startingBrightness) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___lastUpdated) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___playerLight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___wasLightEnabled) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___wasLightSwitchedOn) == 0x56, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___lightStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___lightsParent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___flashlight) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___lights) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HatcheryEventFlashlight, ___clickSource) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HatcheryEventFlashlight) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
