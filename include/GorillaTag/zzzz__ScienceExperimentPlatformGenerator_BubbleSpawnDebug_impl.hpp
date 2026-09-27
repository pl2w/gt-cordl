#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentPlatformGenerator_BubbleSpawnDebug.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentPlatformGenerator_BubbleSpawnDebug_def.hpp"
// Ctor Parameters [CppParam { name: "initialPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "initialDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spawnPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "edgeCorrectionAngle", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spawnTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug::ScienceExperimentPlatformGenerator_BubbleSpawnDebug(::UnityEngine::Vector3  initialPosition, ::UnityEngine::Vector3  initialDirection, ::UnityEngine::Vector3  spawnPosition, float_t  minAngle, float_t  maxAngle, float_t  edgeCorrectionAngle, double_t  spawnTime) noexcept  {
this->initialPosition = initialPosition;
this->initialDirection = initialDirection;
this->spawnPosition = spawnPosition;
this->minAngle = minAngle;
this->maxAngle = maxAngle;
this->edgeCorrectionAngle = edgeCorrectionAngle;
this->spawnTime = spawnTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleSpawnDebug::ScienceExperimentPlatformGenerator_BubbleSpawnDebug()   {
}
