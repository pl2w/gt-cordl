#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityManager_AttachmentData.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_AttachmentData_def.hpp"
// Ctor Parameters [CppParam { name: "entityNetId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachToEntityNetId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameEntityManager_AttachmentData::GameEntityManager_AttachmentData(int32_t  entityNetId, int32_t  attachToEntityNetId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) noexcept  {
this->entityNetId = entityNetId;
this->attachToEntityNetId = attachToEntityNetId;
this->localPosition = localPosition;
this->localRotation = localRotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntityManager_AttachmentData::GameEntityManager_AttachmentData()   {
}
