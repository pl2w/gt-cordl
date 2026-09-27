#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SimplexDistribution_PointSamplingConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(SimplexDistribution_PointSamplingConfig)
// Forward declare root types
namespace GlobalNamespace {
struct SimplexDistribution_PointSamplingConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimplexDistribution_PointSamplingConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimplexDistribution_PointSamplingConfig, "Meta.XR.MRUtilityKit.SceneDecorator", "SimplexDistribution/PointSamplingConfig");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SimplexDistribution/PointSamplingConfig
struct CORDL_TYPE SimplexDistribution_PointSamplingConfig {
public:
// Declarations
/// @brief Field DefaultConfig, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_DefaultConfig, put=setStaticF_DefaultConfig)) ::GlobalNamespace::SimplexDistribution_PointSamplingConfig  DefaultConfig;

static inline ::GlobalNamespace::SimplexDistribution_PointSamplingConfig getStaticF_DefaultConfig() ;

static inline void setStaticF_DefaultConfig(::GlobalNamespace::SimplexDistribution_PointSamplingConfig  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimplexDistribution_PointSamplingConfig() ;

// Ctor Parameters [CppParam { name: "pointsPerUnitX", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pointsPerUnitY", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "noiseOffsetRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr SimplexDistribution_PointSamplingConfig(float_t  pointsPerUnitX, float_t  pointsPerUnitY, float_t  noiseOffsetRadius) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25915};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field pointsPerUnitX, offset: 0x0, size: 0x4, def value: None
 float_t  pointsPerUnitX;

/// @brief Field pointsPerUnitY, offset: 0x4, size: 0x4, def value: None
 float_t  pointsPerUnitY;

/// @brief Field noiseOffsetRadius, offset: 0x8, size: 0x4, def value: None
 float_t  noiseOffsetRadius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimplexDistribution_PointSamplingConfig, pointsPerUnitX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimplexDistribution_PointSamplingConfig, pointsPerUnitY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SimplexDistribution_PointSamplingConfig, noiseOffsetRadius) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimplexDistribution_PointSamplingConfig) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
