#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LensSettings_PhysicalSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Camera_GateFitMode_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LensSettings_PhysicalSettings)
// Forward declare root types
namespace GlobalNamespace {
struct LensSettings_PhysicalSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LensSettings_PhysicalSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LensSettings_PhysicalSettings, "Unity.Cinemachine", "LensSettings/PhysicalSettings");
// [Tooltip("These are settings that are used only if IsPhysicalCamera is true")]
// Dependencies UnityEngine.Camera::GateFitMode, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.LensSettings/PhysicalSettings
struct CORDL_TYPE LensSettings_PhysicalSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr LensSettings_PhysicalSettings() ;

// Ctor Parameters [CppParam { name: "GateFit", ty: "::GlobalNamespace::Camera_GateFitMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "SensorSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "LensShift", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "FocusDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Iso", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ShutterSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Aperture", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BladeCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Curvature", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "BarrelClipping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Anamorphism", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LensSettings_PhysicalSettings(::GlobalNamespace::Camera_GateFitMode  GateFit, ::UnityEngine::Vector2  SensorSize, ::UnityEngine::Vector2  LensShift, float_t  FocusDistance, int32_t  Iso, float_t  ShutterSpeed, float_t  Aperture, int32_t  BladeCount, ::UnityEngine::Vector2  Curvature, float_t  BarrelClipping, float_t  Anamorphism) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22343};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// [Tooltip("How the image is fitted to the sensor if the aspect ratios differ")]
/// @brief Field GateFit, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::Camera_GateFitMode  GateFit;

/// [SensorSizeProperty]
/// [Tooltip("This is the actual size of the image sensor (in mm)")]
/// @brief Field SensorSize, offset: 0x4, size: 0x8, def value: None
 ::UnityEngine::Vector2  SensorSize;

/// [Tooltip("Position of the gate relative to the film back")]
/// @brief Field LensShift, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  LensShift;

/// [Tooltip("Distance from the camera lens at which focus is sharpest.  The Depth of Field Volume override uses this value if you set FocusDistanceMode to Camera")]
/// @brief Field FocusDistance, offset: 0x14, size: 0x4, def value: None
 float_t  FocusDistance;

/// [Tooltip("The sensor sensitivity (ISO)")]
/// @brief Field Iso, offset: 0x18, size: 0x4, def value: None
 int32_t  Iso;

/// [Tooltip("The exposure time, in seconds")]
/// @brief Field ShutterSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ShutterSpeed;

/// [Tooltip("The aperture number, in f-stop")]
/// [Range(0.7, 32)]
/// @brief Field Aperture, offset: 0x20, size: 0x4, def value: None
 float_t  Aperture;

/// [Tooltip("The number of diaphragm blades")]
/// [Range(3, 11)]
/// @brief Field BladeCount, offset: 0x24, size: 0x4, def value: None
 int32_t  BladeCount;

/// [Tooltip("Maps an aperture range to blade curvature")]
/// [MinMaxRangeSlider(0.7, 32)]
/// @brief Field Curvature, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  Curvature;

/// [Tooltip("The strength of the \"cat-eye\" effect on bokeh (optical vignetting)")]
/// [Range(0, 1)]
/// @brief Field BarrelClipping, offset: 0x30, size: 0x4, def value: None
 float_t  BarrelClipping;

/// [Tooltip("Stretches the sensor to simulate an anamorphic look.  Positive values distort the camera vertically, negative values distort the camera horizontally")]
/// [Range(-1, 1)]
/// @brief Field Anamorphism, offset: 0x34, size: 0x4, def value: None
 float_t  Anamorphism;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, GateFit) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, SensorSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, LensShift) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, FocusDistance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, Iso) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, ShutterSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, Aperture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, BladeCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, Curvature) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, BarrelClipping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LensSettings_PhysicalSettings, Anamorphism) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LensSettings_PhysicalSettings) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
