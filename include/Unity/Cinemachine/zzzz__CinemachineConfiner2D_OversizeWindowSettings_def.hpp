#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner2D_OversizeWindowSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineConfiner2D_OversizeWindowSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineConfiner2D_OversizeWindowSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings, "Unity.Cinemachine", "CinemachineConfiner2D/OversizeWindowSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineConfiner2D/OversizeWindowSettings
struct CORDL_TYPE CinemachineConfiner2D_OversizeWindowSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineConfiner2D_OversizeWindowSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxWindowSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Padding", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineConfiner2D_OversizeWindowSettings(bool  Enabled, float_t  MaxWindowSize, float_t  Padding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22150};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// [Tooltip("Enable optimizing of computation and memory costs in the event that the window size is expected to be larger than will fit inside the confining shape.\nEnable only if needed, because it\'s costly")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("To optimize computation and memory costs, set this to the largest view size that the camera is expected to have.  The confiner will not compute a polygon cache for frustum sizes larger than this.  This refers to the size in world units of the frustum at the confiner plane (for orthographic cameras, this is just the orthographic size).  If set to 0, then this parameter is ignored and a polygon cache will be calculated for all potential window sizes.")]
/// @brief Field MaxWindowSize, offset: 0x4, size: 0x4, def value: None
 float_t  MaxWindowSize;

/// [Tooltip("For large window sizes, the confiner will potentially generate polygons with zero area.  The padding may be used to add a small amount of area to these polygons, to prevent them from being a series of disconnected dots.")]
/// [Range(0, 100)]
/// @brief Field Padding, offset: 0x8, size: 0x4, def value: None
 float_t  Padding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings, MaxWindowSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings, Padding) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
