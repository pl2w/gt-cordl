#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitData.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
// Ctor Parameters [CppParam { name: "hitEntityId", ty: "::GlobalNamespace::GameEntityId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitByEntityId", ty: "::GlobalNamespace::GameEntityId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitTypeId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitEntityPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitImpulse", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hitAmount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hittablePoint", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameHitData::GameHitData(::GlobalNamespace::GameEntityId  hitEntityId, ::GlobalNamespace::GameEntityId  hitByEntityId, int32_t  hitTypeId, ::UnityEngine::Vector3  hitEntityPosition, ::UnityEngine::Vector3  hitPosition, ::UnityEngine::Vector3  hitImpulse, int32_t  hitAmount, int32_t  hittablePoint) noexcept  {
this->hitEntityId = hitEntityId;
this->hitByEntityId = hitByEntityId;
this->hitTypeId = hitTypeId;
this->hitEntityPosition = hitEntityPosition;
this->hitPosition = hitPosition;
this->hitImpulse = hitImpulse;
this->hitAmount = hitAmount;
this->hittablePoint = hittablePoint;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameHitData::GameHitData()   {
}
