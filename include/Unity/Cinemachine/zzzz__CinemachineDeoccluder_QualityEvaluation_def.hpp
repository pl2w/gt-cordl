#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineDeoccluder_QualityEvaluation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(CinemachineDeoccluder_QualityEvaluation)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineDeoccluder_QualityEvaluation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation, "Unity.Cinemachine", "CinemachineDeoccluder/QualityEvaluation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineDeoccluder/QualityEvaluation
struct CORDL_TYPE CinemachineDeoccluder_QualityEvaluation {
public:
// Declarations
/// @brief Method get_Default, addr 0xae8d884, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation get_Default() ;

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineDeoccluder_QualityEvaluation() ;

// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "OptimalDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NearLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FarLimit", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxQualityBoost", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineDeoccluder_QualityEvaluation(bool  Enabled, float_t  OptimalDistance, float_t  NearLimit, float_t  FarLimit, float_t  MaxQualityBoost) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22165};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// [Tooltip("If enabled, will evaluate shot quality based on target distance and occlusion")]
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
static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation, Enabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation, OptimalDistance) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation, NearLimit) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation, FarLimit) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation, MaxQualityBoost) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineDeoccluder_QualityEvaluation) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
