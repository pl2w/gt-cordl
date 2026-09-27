#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDecollider_TerrainSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineDecollider_TerrainSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineDecollider_TerrainSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineDecollider_TerrainSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineDecollider_TerrainSettings, "Unity.Cinemachine", "CinemachineDecollider/TerrainSettings");
// Dependencies UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineDecollider/TerrainSettings
struct CORDL_TYPE CinemachineDecollider_TerrainSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDecollider_TerrainSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "TerrainLayers", ty: "::UnityEngine::LayerMask", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaximumRaycast", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Damping", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineDecollider_TerrainSettings(bool  Enabled, ::UnityEngine::LayerMask  TerrainLayers, float_t  MaximumRaycast, float_t  Damping) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22158};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("When enabled, will attempt to place the camera on top of terrain layers")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("Colliders on these layers will be detected")]
/// @brief Field TerrainLayers, offset: 0x4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  TerrainLayers;

/// [Tooltip("Specifies the maximum length of a raycast used to find terrain colliders")]
/// @brief Field MaximumRaycast, offset: 0x8, size: 0x4, def value: None
 float_t  MaximumRaycast;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera returns to its normal position after having been corrected.  Higher numbers will move the camera more gradually back to normal.")]
/// @brief Field Damping, offset: 0xc, size: 0x4, def value: None
 float_t  Damping;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_TerrainSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_TerrainSettings, TerrainLayers) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_TerrainSettings, MaximumRaycast) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDecollider_TerrainSettings, Damping) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineDecollider_TerrainSettings) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
