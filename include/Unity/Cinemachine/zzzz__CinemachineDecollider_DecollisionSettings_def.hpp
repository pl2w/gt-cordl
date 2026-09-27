#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDecollider_DecollisionSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineDecollider_DecollisionSettings_FollowTargetSettings_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineDecollider_DecollisionSettings)
namespace GlobalNamespace {
struct DecollisionSettings_CinemachineDecollider_FollowTargetSettings;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineDecollider_DecollisionSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineDecollider_DecollisionSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineDecollider_DecollisionSettings, "Unity.Cinemachine", "CinemachineDecollider/DecollisionSettings");
// Dependencies Unity.Cinemachine.CinemachineDecollider::DecollisionSettings::FollowTargetSettings, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineDecollider/DecollisionSettings
struct CORDL_TYPE CinemachineDecollider_DecollisionSettings {
public:
// Declarations
using FollowTargetSettings = ::GlobalNamespace::DecollisionSettings_CinemachineDecollider_FollowTargetSettings;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDecollider_DecollisionSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "ObstacleLayers", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "UseFollowTarget", ty: "::GlobalNamespace::DecollisionSettings_CinemachineDecollider_FollowTargetSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "Damping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SmoothingTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineDecollider_DecollisionSettings(bool  Enabled, ::UnityEngine::LayerMask  ObstacleLayers, ::GlobalNamespace::DecollisionSettings_CinemachineDecollider_FollowTargetSettings  UseFollowTarget, float_t  Damping, float_t  SmoothingTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Tooltip("When enabled, will attempt to push the camera out of intersecting objects")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("Objects on these layers will be detected")]
/// @brief Field ObstacleLayers, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ObstacleLayers;

/// [EnabledProperty("Enabled", "")]
/// @brief Field UseFollowTarget, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::DecollisionSettings_CinemachineDecollider_FollowTargetSettings  UseFollowTarget;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera returns to its normal position after having been corrected.  Higher numbers will move the camera more gradually back to normal.")]
/// @brief Field Damping, offset: 0x10, size: 0x4, def value: None
 float_t  Damping;

/// [Range(0, 2)]
/// [Tooltip("Smoothing to apply to obstruction resolution.  Nearest camera point is held for at least this long")]
/// @brief Field SmoothingTime, offset: 0x14, size: 0x4, def value: None
 float_t  SmoothingTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_DecollisionSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_DecollisionSettings, ObstacleLayers) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_DecollisionSettings, UseFollowTarget) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_DecollisionSettings, Damping) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_DecollisionSettings, SmoothingTime) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineDecollider_DecollisionSettings) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
