#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDeoccluder_ObstacleAvoidance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_FollowTargetSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineDeoccluder_ObstacleAvoidance_ResolutionStrategy_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineDeoccluder_ObstacleAvoidance)
namespace GlobalNamespace {
struct ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings;
}
namespace GlobalNamespace {
struct ObstacleAvoidance_CinemachineDeoccluder_ResolutionStrategy;
}
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineDeoccluder_ObstacleAvoidance;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, "Unity.Cinemachine", "CinemachineDeoccluder/ObstacleAvoidance");
// Dependencies Unity.Cinemachine.CinemachineDeoccluder::ObstacleAvoidance::FollowTargetSettings, Unity.Cinemachine.CinemachineDeoccluder::ObstacleAvoidance::ResolutionStrategy
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineDeoccluder/ObstacleAvoidance
struct CORDL_TYPE CinemachineDeoccluder_ObstacleAvoidance {
public:
// Declarations
using FollowTargetSettings = ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings;

using ResolutionStrategy = ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_ResolutionStrategy;

/// @brief Method get_Default, addr 0xae8d848, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDeoccluder_ObstacleAvoidance() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "DistanceLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MinimumOcclusionTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CameraRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UseFollowTarget", ty: "::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "Strategy", ty: "::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_ResolutionStrategy", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaximumEffort", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SmoothingTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Damping", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DampingWhenOccluded", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineDeoccluder_ObstacleAvoidance(bool  Enabled, float_t  DistanceLimit, float_t  MinimumOcclusionTime, float_t  CameraRadius, ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings  UseFollowTarget, ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_ResolutionStrategy  Strategy, int32_t  MaximumEffort, float_t  SmoothingTime, float_t  Damping, float_t  DampingWhenOccluded) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2c};

/// [Tooltip("When enabled, will attempt to resolve situations where the line of sight to the target is blocked by an obstacle")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("The maximum raycast distance when checking if the line of sight to this camera\'s target is clear.  If the setting is 0 or less, the current actual distance to target will be used.")]
/// @brief Field DistanceLimit, offset: 0x4, size: 0x4, def value: None
 float_t  DistanceLimit;

/// [Tooltip("Don\'t take action unless occlusion has lasted at least this long.")]
/// @brief Field MinimumOcclusionTime, offset: 0x8, size: 0x4, def value: None
 float_t  MinimumOcclusionTime;

/// [Tooltip("Camera will try to maintain this distance from any obstacle.  Try to keep this value small.  Increase it if you are seeing inside obstacles due to a large FOV on the camera.")]
/// @brief Field CameraRadius, offset: 0xc, size: 0x4, def value: None
 float_t  CameraRadius;

/// [EnabledProperty("Enabled", "")]
/// @brief Field UseFollowTarget, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_FollowTargetSettings  UseFollowTarget;

/// [Tooltip("The way in which the Deoccluder will attempt to preserve sight of the target.")]
/// @brief Field Strategy, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ObstacleAvoidance_CinemachineDeoccluder_ResolutionStrategy  Strategy;

/// [Range(1, 10)]
/// [Tooltip("Upper limit on how many obstacle hits to process.  Higher numbers may impact performance.  In most environments, 4 is enough.")]
/// @brief Field MaximumEffort, offset: 0x1c, size: 0x4, def value: None
 int32_t  MaximumEffort;

/// [Range(0, 2)]
/// [Tooltip("Smoothing to apply to obstruction resolution.  Nearest camera point is held for at least this long")]
/// @brief Field SmoothingTime, offset: 0x20, size: 0x4, def value: None
 float_t  SmoothingTime;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera returns to its normal position after having been corrected.  Higher numbers will move the camera more gradually back to normal.")]
/// @brief Field Damping, offset: 0x24, size: 0x4, def value: None
 float_t  Damping;

/// [Range(0, 10)]
/// [Tooltip("How gradually the camera moves to resolve an occlusion.  Higher numbers will move the camera more gradually.")]
/// @brief Field DampingWhenOccluded, offset: 0x28, size: 0x4, def value: None
 float_t  DampingWhenOccluded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, DistanceLimit) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, MinimumOcclusionTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, CameraRadius) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, UseFollowTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, Strategy) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, MaximumEffort) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, SmoothingTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, Damping) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance, DampingWhenOccluded) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineDeoccluder_ObstacleAvoidance) == 0x2c, "Size mismatch!");

} // namespace end def GlobalNamespace
