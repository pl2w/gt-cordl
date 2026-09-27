#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_ScenePlacedRecord.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_ScenePlacedRecord_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
// Ctor Parameters [CppParam { name: "entity", ty: "::UnityW<::GlobalNamespace::GameEntity>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uniformScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityManager_ScenePlacedRecord::GameEntityManager_ScenePlacedRecord(::UnityW<::GlobalNamespace::GameEntity>  entity, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, float_t  uniformScale) noexcept  {
this->entity = entity;
this->position = position;
this->rotation = rotation;
this->uniformScale = uniformScale;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_ScenePlacedRecord::GameEntityManager_ScenePlacedRecord()   {
}
