#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_BuilderCommand.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_State_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_BuilderCommandType_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_BuilderCommand_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderTable_BuilderCommandType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachPieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentPieceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetX", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bumpOffsetZ", ty: "int8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isLeft", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "materialType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "player", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::BuilderPiece_State", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isQueued", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canRollback", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localCommandId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "serverTimeStamp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderTable_BuilderCommand::BuilderTable_BuilderCommand(::GlobalNamespace::BuilderTable_BuilderCommandType  type, int32_t  pieceType, int32_t  pieceId, int32_t  attachPieceId, int32_t  parentPieceId, int32_t  parentAttachIndex, int32_t  attachIndex, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, uint8_t  twist, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, bool  isLeft, int32_t  materialType, ::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::BuilderPiece_State  state, bool  isQueued, bool  canRollback, int32_t  localCommandId, int32_t  serverTimeStamp) noexcept  {
this->type = type;
this->pieceType = pieceType;
this->pieceId = pieceId;
this->attachPieceId = attachPieceId;
this->parentPieceId = parentPieceId;
this->parentAttachIndex = parentAttachIndex;
this->attachIndex = attachIndex;
this->localPosition = localPosition;
this->localRotation = localRotation;
this->twist = twist;
this->bumpOffsetX = bumpOffsetX;
this->bumpOffsetZ = bumpOffsetZ;
this->velocity = velocity;
this->angVelocity = angVelocity;
this->isLeft = isLeft;
this->materialType = materialType;
this->player = player;
this->state = state;
this->isQueued = isQueued;
this->canRollback = canRollback;
this->localCommandId = localCommandId;
this->serverTimeStamp = serverTimeStamp;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderTable_BuilderCommand::BuilderTable_BuilderCommand()   {
}
