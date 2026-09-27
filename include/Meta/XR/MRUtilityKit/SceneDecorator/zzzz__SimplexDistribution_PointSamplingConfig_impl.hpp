#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SimplexDistribution_PointSamplingConfig.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SimplexDistribution_PointSamplingConfig_def.hpp"
inline void GlobalNamespace::SimplexDistribution_PointSamplingConfig::setStaticF_DefaultConfig(::GlobalNamespace::SimplexDistribution_PointSamplingConfig  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SimplexDistribution_PointSamplingConfig, "DefaultConfig", ::GlobalNamespace::SimplexDistribution_PointSamplingConfig>(std::forward<::GlobalNamespace::SimplexDistribution_PointSamplingConfig>(value));
}
inline ::GlobalNamespace::SimplexDistribution_PointSamplingConfig GlobalNamespace::SimplexDistribution_PointSamplingConfig::getStaticF_DefaultConfig()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SimplexDistribution_PointSamplingConfig, "DefaultConfig", ::GlobalNamespace::SimplexDistribution_PointSamplingConfig>();
}
// Ctor Parameters [CppParam { name: "pointsPerUnitX", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pointsPerUnitY", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "noiseOffsetRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimplexDistribution_PointSamplingConfig::SimplexDistribution_PointSamplingConfig(float_t  pointsPerUnitX, float_t  pointsPerUnitY, float_t  noiseOffsetRadius) noexcept  {
this->pointsPerUnitX = pointsPerUnitX;
this->pointsPerUnitY = pointsPerUnitY;
this->noiseOffsetRadius = noiseOffsetRadius;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimplexDistribution_PointSamplingConfig::SimplexDistribution_PointSamplingConfig()   {
}
