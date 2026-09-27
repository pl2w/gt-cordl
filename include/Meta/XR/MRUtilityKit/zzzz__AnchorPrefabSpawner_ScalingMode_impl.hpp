#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawner_ScalingMode.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_ScalingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode::AnchorPrefabSpawner_ScalingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode::AnchorPrefabSpawner_ScalingMode()   {
}
constexpr ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  GlobalNamespace::AnchorPrefabSpawner_ScalingMode::Stretch{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  GlobalNamespace::AnchorPrefabSpawner_ScalingMode::UniformScaling{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  GlobalNamespace::AnchorPrefabSpawner_ScalingMode::UniformXZScale{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  GlobalNamespace::AnchorPrefabSpawner_ScalingMode::NoScaling{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  GlobalNamespace::AnchorPrefabSpawner_ScalingMode::Custom{static_cast<int32_t>(0x4)};
