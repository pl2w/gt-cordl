#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDolly_DampingSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineSplineDolly_DampingSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineSplineDolly_DampingSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineSplineDolly_DampingSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineSplineDolly_DampingSettings, "Unity.Cinemachine", "CinemachineSplineDolly/DampingSettings");
// Dependencies UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineSplineDolly/DampingSettings
struct CORDL_TYPE CinemachineSplineDolly_DampingSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineDolly_DampingSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Angular", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineSplineDolly_DampingSettings(bool  Enabled, ::UnityEngine::Vector3  Position, float_t  Angular) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22243};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// [Tooltip("Enables damping, which causes the camera to move gradually towards the desired spline position")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("How aggressively the camera tries to maintain the offset along the x, y, or z directions in spline local space. \n- x represents the axis that is perpendicular to the spline. Use this to smooth out imperfections in the path. This may move the camera off the spline.\n- y represents the axis that is defined by the spline-local up direction. Use this to smooth out imperfections in the path. This may move the camera off the spline.\n- z represents the axis that is parallel to the spline. This won\'t move the camera off the spline.\n\nSmaller numbers are more responsive, larger numbers give a heavier more slowly responding camera. Using different settings per axis can yield a wide range of camera behaviors.")]
/// @brief Field Position, offset: 0x4, size: 0xc, def value: None
 ::UnityEngine::Vector3  Position;

/// [Range(0, 20)]
/// [Tooltip("How aggressively the camera tries to maintain the desired rotation.  This is only used if Camera Rotation is not Default.")]
/// @brief Field Angular, offset: 0x10, size: 0x4, def value: None
 float_t  Angular;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineSplineDolly_DampingSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineSplineDolly_DampingSettings, Position) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineSplineDolly_DampingSettings, Angular) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineSplineDolly_DampingSettings) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
