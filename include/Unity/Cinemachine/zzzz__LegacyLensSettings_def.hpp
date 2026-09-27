#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LegacyLensSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__LensSettings_OverrideModes_def.hpp"
#include "UnityEngine/zzzz__Camera_GateFitMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyLensSettings)
namespace Unity::Cinemachine {
struct LensSettings;
}
// Forward declare root types
namespace Unity::Cinemachine {
struct LegacyLensSettings;
}
// Write type traits
MARK_VAL_T(::Unity::Cinemachine::LegacyLensSettings);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::LegacyLensSettings, "Unity.Cinemachine", "LegacyLensSettings");
// [Obsolete("LegacyLensSettings is deprecated. Use LensSettings instead.")]
// Dependencies Unity.Cinemachine.LensSettings::OverrideModes, UnityEngine.Camera::GateFitMode, UnityEngine.Vector2
namespace Unity::Cinemachine {
// Is value type: true
// CS Name: Unity.Cinemachine.LegacyLensSettings
struct CORDL_TYPE LegacyLensSettings {
public:
// Declarations
/// @brief Method SetFromLensSettings, addr 0xaede1ec, size 0x8c, virtual false, abstract: false, final false
inline void SetFromLensSettings(::Unity::Cinemachine::LensSettings  src) ;

/// @brief Method ToLensSettings, addr 0xaedc644, size 0x98, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::LensSettings ToLensSettings() ;

/// @brief Method Validate, addr 0xaedca50, size 0x10c, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_Default, addr 0xaedde30, size 0xa4, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::LegacyLensSettings get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr LegacyLensSettings() ;

// Ctor Parameters [CppParam { name: "FieldOfView", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "OrthographicSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearClipPlane", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FarClipPlane", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Dutch", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModeOverride", ty: "::GlobalNamespace::LensSettings_OverrideModes", modifiers: "", def_value: None, comment: None }, CppParam { name: "GateFit", ty: "::GlobalNamespace::Camera_GateFitMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SensorSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "LensShift", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "FocusDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Iso", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShutterSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Aperture", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BladeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Curvature", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "BarrelClipping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Anamorphism", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LegacyLensSettings(float_t  FieldOfView, float_t  OrthographicSize, float_t  NearClipPlane, float_t  FarClipPlane, float_t  Dutch, ::GlobalNamespace::LensSettings_OverrideModes  ModeOverride, ::GlobalNamespace::Camera_GateFitMode  GateFit, ::UnityEngine::Vector2  m_SensorSize, ::UnityEngine::Vector2  LensShift, float_t  FocusDistance, int32_t  Iso, float_t  ShutterSpeed, float_t  Aperture, int32_t  BladeCount, ::UnityEngine::Vector2  Curvature, float_t  BarrelClipping, float_t  Anamorphism) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22451};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field FieldOfView, offset: 0x0, size: 0x4, def value: None
 float_t  FieldOfView;

/// @brief Field OrthographicSize, offset: 0x4, size: 0x4, def value: None
 float_t  OrthographicSize;

/// @brief Field NearClipPlane, offset: 0x8, size: 0x4, def value: None
 float_t  NearClipPlane;

/// @brief Field FarClipPlane, offset: 0xc, size: 0x4, def value: None
 float_t  FarClipPlane;

/// @brief Field Dutch, offset: 0x10, size: 0x4, def value: None
 float_t  Dutch;

/// @brief Field ModeOverride, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::LensSettings_OverrideModes  ModeOverride;

/// @brief Field GateFit, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::Camera_GateFitMode  GateFit;

/// [HideInInspector]
/// @brief Field m_SensorSize, offset: 0x1c, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_SensorSize;

/// @brief Field LensShift, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  LensShift;

/// @brief Field FocusDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  FocusDistance;

/// @brief Field Iso, offset: 0x30, size: 0x4, def value: None
 int32_t  Iso;

/// @brief Field ShutterSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ShutterSpeed;

/// @brief Field Aperture, offset: 0x38, size: 0x4, def value: None
 float_t  Aperture;

/// @brief Field BladeCount, offset: 0x3c, size: 0x4, def value: None
 int32_t  BladeCount;

/// @brief Field Curvature, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Vector2  Curvature;

/// @brief Field BarrelClipping, offset: 0x48, size: 0x4, def value: None
 float_t  BarrelClipping;

/// @brief Field Anamorphism, offset: 0x4c, size: 0x4, def value: None
 float_t  Anamorphism;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, FieldOfView) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, OrthographicSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, NearClipPlane) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, FarClipPlane) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, Dutch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, ModeOverride) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, GateFit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, m_SensorSize) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, LensShift) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, FocusDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, Iso) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, ShutterSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, Aperture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, BladeCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, Curvature) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, BarrelClipping) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::LegacyLensSettings, Anamorphism) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::LegacyLensSettings) == 0x50, "Size mismatch!");

} // namespace end def Unity::Cinemachine
