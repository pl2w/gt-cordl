#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineShotQualityEvaluator_DistanceEvaluationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineShotQualityEvaluator_DistanceEvaluationSettings)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineShotQualityEvaluator_DistanceEvaluationSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings, "Unity.Cinemachine", "CinemachineShotQualityEvaluator/DistanceEvaluationSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineShotQualityEvaluator/DistanceEvaluationSettings
struct CORDL_TYPE CinemachineShotQualityEvaluator_DistanceEvaluationSettings {
public:
// Declarations
/// @brief Method get_Default, addr 0xae979e0, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineShotQualityEvaluator_DistanceEvaluationSettings() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "OptimalDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FarLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxQualityBoost", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineShotQualityEvaluator_DistanceEvaluationSettings(bool  Enabled, float_t  OptimalDistance, float_t  NearLimit, float_t  FarLimit, float_t  MaxQualityBoost) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// [Tooltip("If enabled, will evaluate shot quality based on target distance")]
/// @brief Field Enabled, offset: 0x0, size: 0x1, def value: None
 bool  Enabled;

/// [Tooltip("If greater than zero, maximum quality boost will occur when target is this far from the camera")]
/// @brief Field OptimalDistance, offset: 0x4, size: 0x4, def value: None
 float_t  OptimalDistance;

/// [Tooltip("Shots with targets closer to the camera than this will not get a quality boost")]
/// @brief Field NearLimit, offset: 0x8, size: 0x4, def value: None
 float_t  NearLimit;

/// [Tooltip("Shots with targets farther from the camera than this will not get a quality boost")]
/// @brief Field FarLimit, offset: 0xc, size: 0x4, def value: None
 float_t  FarLimit;

/// [Tooltip("High quality shots will be boosted by this fraction of their normal quality")]
/// @brief Field MaxQualityBoost, offset: 0x10, size: 0x4, def value: None
 float_t  MaxQualityBoost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings, OptimalDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings, NearLimit) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings, FarLimit) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings, MaxQualityBoost) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineShotQualityEvaluator_DistanceEvaluationSettings) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
