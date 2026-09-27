#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSeedExtractor_SeedProcessingVisualState.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_SeedProcessingVisualState_def.hpp"
// Ctor Parameters [CppParam { name: "poolIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rollAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rampProgress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dropProgress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState::GRSeedExtractor_SeedProcessingVisualState(int32_t  poolIndex, float_t  speed, float_t  rollAngle, float_t  rampProgress, float_t  dropProgress) noexcept  {
this->poolIndex = poolIndex;
this->speed = speed;
this->rollAngle = rollAngle;
this->rampProgress = rampProgress;
this->dropProgress = dropProgress;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSeedExtractor_SeedProcessingVisualState::GRSeedExtractor_SeedProcessingVisualState()   {
}
