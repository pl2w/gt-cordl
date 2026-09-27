#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/PlanetZoneSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__BasicGravityZoneSettings_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlanetZoneSettings)
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class PlanetZoneSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::PlanetZoneSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::PlanetZoneSettings*, "GT_CustomMapSupportRuntime", "PlanetZoneSettings");
// Dependencies GT_CustomMapSupportRuntime.BasicGravityZoneSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.PlanetZoneSettings
class CORDL_TYPE PlanetZoneSettings : public ::GT_CustomMapSupportRuntime::BasicGravityZoneSettings {
public:
// Declarations
/// @brief Field alwaysRotate, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysRotate, put=__cordl_internal_set_alwaysRotate)) bool  alwaysRotate;

/// @brief Field gravityCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityCurve, put=__cordl_internal_set_gravityCurve)) ::UnityEngine::AnimationCurve*  gravityCurve;

/// @brief Field rotationDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotationDistance, put=__cordl_internal_set_rotationDistance)) float_t  rotationDistance;

/// @brief Field useGravityCurve, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGravityCurve, put=__cordl_internal_set_useGravityCurve)) bool  useGravityCurve;

static inline ::GT_CustomMapSupportRuntime::PlanetZoneSettings* New_ctor() ;

constexpr bool const& __cordl_internal_get_alwaysRotate() const;

constexpr bool& __cordl_internal_get_alwaysRotate() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_gravityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_gravityCurve() ;

constexpr float_t const& __cordl_internal_get_rotationDistance() const;

constexpr float_t& __cordl_internal_get_rotationDistance() ;

constexpr bool const& __cordl_internal_get_useGravityCurve() const;

constexpr bool& __cordl_internal_get_useGravityCurve() ;

constexpr void __cordl_internal_set_alwaysRotate(bool  value) ;

constexpr void __cordl_internal_set_gravityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_rotationDistance(float_t  value) ;

constexpr void __cordl_internal_set_useGravityCurve(bool  value) ;

/// @brief Method .ctor, addr 0x9cb6bb8, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlanetZoneSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlanetZoneSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlanetZoneSettings(PlanetZoneSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlanetZoneSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlanetZoneSettings(PlanetZoneSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30921};

/// [Tooltip("how close to the center of the zone to enable rotating the player")]
/// @brief Field rotationDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ___rotationDistance;

/// [Tooltip("if enabled, always rotates the player")]
/// @brief Field alwaysRotate, offset: 0x3c, size: 0x1, def value: None
 bool  ___alwaysRotate;

/// [Tooltip("if enabled, gravity strength is read from the curve below using distance from the zone\'s center, instead of the constant gravityStrength")]
/// @brief Field useGravityCurve, offset: 0x3d, size: 0x1, def value: None
 bool  ___useGravityCurve;

/// [Nullable(1)]
/// [Tooltip("Maps distance from the zone\'s center (x) to gravity strength (y). Negative y pulls toward center, positive y expels.")]
/// [SerializeField]
/// @brief Field gravityCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___gravityCurve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::PlanetZoneSettings, ___rotationDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::PlanetZoneSettings, ___alwaysRotate) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::PlanetZoneSettings, ___useGravityCurve) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::PlanetZoneSettings, ___gravityCurve) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::PlanetZoneSettings) == 0x48, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
