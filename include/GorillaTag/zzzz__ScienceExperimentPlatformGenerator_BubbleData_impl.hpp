#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentPlatformGenerator_BubbleData.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentPlatformGenerator_BubbleData_def.hpp"
#include "GlobalNamespace/zzzz__SodaBubble_def.hpp"
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "direction", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spawnSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lifetime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "spawnTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isTrail", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bubble", ty: "::UnityW<::GlobalNamespace::SodaBubble>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData::ScienceExperimentPlatformGenerator_BubbleData(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  direction, float_t  spawnSize, float_t  lifetime, double_t  spawnTime, bool  isTrail, ::UnityW<::GlobalNamespace::SodaBubble>  bubble) noexcept  {
this->position = position;
this->direction = direction;
this->spawnSize = spawnSize;
this->lifetime = lifetime;
this->spawnTime = spawnTime;
this->isTrail = isTrail;
this->bubble = bubble;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScienceExperimentPlatformGenerator_BubbleData::ScienceExperimentPlatformGenerator_BubbleData()   {
}
