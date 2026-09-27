#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDeoccluder_ObstacleAvoidance_FollowTargetSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineDeoccluder_ObstacleAvoidance_FollowTargetSettings)
// Forward declare root types
namespace GlobalNamespace {
struct ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings, "Unity.Cinemachine", "CinemachineDeoccluder/ObstacleAvoidance/FollowTargetSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineDeoccluder/ObstacleAvoidance/FollowTargetSettings
struct CORDL_TYPE ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "YOffset", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings(bool  Enabled, float_t  YOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22162};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Tooltip("Use the Follow target when resolving occlusions, instead of the LookAt target.")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("Vertical offset from the Follow target\'s root, in target local space")]
/// @brief Field YOffset, offset: 0x4, size: 0x4, def value: None
 float_t  YOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings, YOffset) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
