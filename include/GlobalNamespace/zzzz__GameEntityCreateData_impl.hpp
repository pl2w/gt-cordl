#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityCreateData.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityCreateData_def.hpp"
// Ctor Parameters [CppParam { name: "entityTypeId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "createData", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "createdByEntityId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "slotIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityCreateData::GameEntityCreateData(int32_t  entityTypeId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int64_t  createData, int32_t  createdByEntityId, int32_t  slotIndex) noexcept  {
this->entityTypeId = entityTypeId;
this->position = position;
this->rotation = rotation;
this->createData = createData;
this->createdByEntityId = createdByEntityId;
this->slotIndex = slotIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityCreateData::GameEntityCreateData()   {
}
