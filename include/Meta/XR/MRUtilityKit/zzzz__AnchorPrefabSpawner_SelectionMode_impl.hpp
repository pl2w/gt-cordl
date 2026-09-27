#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawner_SelectionMode.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_SelectionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode::AnchorPrefabSpawner_SelectionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode::AnchorPrefabSpawner_SelectionMode()   {
}
constexpr ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode  GlobalNamespace::AnchorPrefabSpawner_SelectionMode::Random{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode  GlobalNamespace::AnchorPrefabSpawner_SelectionMode::ClosestSize{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode  GlobalNamespace::AnchorPrefabSpawner_SelectionMode::Custom{static_cast<int32_t>(0x2)};
