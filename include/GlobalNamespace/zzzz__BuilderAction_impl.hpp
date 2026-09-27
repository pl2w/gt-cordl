#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderAction.hpp"
#include "GlobalNamespace/zzzz__BuilderActionType_impl.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderAction_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderActionType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentPieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetx", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetz", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerActorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentAttachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localCommandId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timeStamp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderAction::BuilderAction(::GlobalNamespace::BuilderActionType  type, int32_t  pieceId, int32_t  parentPieceId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, uint8_t  twist, int8_t  bumpOffsetx, int8_t  bumpOffsetz, bool  isLeftHand, int32_t  playerActorNumber, int32_t  parentAttachIndex, int32_t  attachIndex, ::GlobalNamespace::SnapBounds  attachBounds, ::GlobalNamespace::SnapBounds  parentAttachBounds, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, int32_t  localCommandId, int32_t  timeStamp) noexcept  {
this->type = type;
this->pieceId = pieceId;
this->parentPieceId = parentPieceId;
this->localPosition = localPosition;
this->localRotation = localRotation;
this->twist = twist;
this->bumpOffsetx = bumpOffsetx;
this->bumpOffsetz = bumpOffsetz;
this->isLeftHand = isLeftHand;
this->playerActorNumber = playerActorNumber;
this->parentAttachIndex = parentAttachIndex;
this->attachIndex = attachIndex;
this->attachBounds = attachBounds;
this->parentAttachBounds = parentAttachBounds;
this->velocity = velocity;
this->angVelocity = angVelocity;
this->localCommandId = localCommandId;
this->timeStamp = timeStamp;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderAction::BuilderAction()   {
}
