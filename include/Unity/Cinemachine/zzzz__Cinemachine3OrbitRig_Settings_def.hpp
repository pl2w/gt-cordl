#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Cinemachine3OrbitRig_Settings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__Cinemachine3OrbitRig_Orbit_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Cinemachine3OrbitRig_Settings)
// Forward declare root types
namespace GlobalNamespace {
struct Cinemachine3OrbitRig_Settings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Cinemachine3OrbitRig_Settings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Cinemachine3OrbitRig_Settings, "Unity.Cinemachine", "Cinemachine3OrbitRig/Settings");
// Dependencies Unity.Cinemachine.Cinemachine3OrbitRig::Orbit
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.Cinemachine3OrbitRig/Settings
struct CORDL_TYPE Cinemachine3OrbitRig_Settings {
public:
// Declarations
/// @brief Method get_Default, addr 0xae9fb78, size 0x24, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Cinemachine3OrbitRig_Settings get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr Cinemachine3OrbitRig_Settings() ;

// Ctor Parameters [CppParam { name: "Top", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Orbit", modifiers: "", def_value: None, comment: None }, CppParam { name: "Center", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Orbit", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bottom", ty: "::GlobalNamespace::Cinemachine3OrbitRig_Orbit", modifiers: "", def_value: None, comment: None }, CppParam { name: "SplineCurvature", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Cinemachine3OrbitRig_Settings(::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Top, ::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Center, ::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Bottom, float_t  SplineCurvature) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22232};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// [Tooltip("Value to take at the top of the axis range")]
/// @brief Field Top, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Top;

/// [Tooltip("Value to take at the center of the axis range")]
/// @brief Field Center, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Center;

/// [Tooltip("Value to take at the bottom of the axis range")]
/// @brief Field Bottom, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::Cinemachine3OrbitRig_Orbit  Bottom;

/// [Tooltip("Controls how taut is the line that connects the rigs\' orbits, which determines final placement on the Y axis")]
/// [Range(0, 1)]
/// @brief Field SplineCurvature, offset: 0x18, size: 0x4, def value: None
 float_t  SplineCurvature;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_Settings, Top) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_Settings, Center) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_Settings, Bottom) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Cinemachine3OrbitRig_Settings, SplineCurvature) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Cinemachine3OrbitRig_Settings) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
