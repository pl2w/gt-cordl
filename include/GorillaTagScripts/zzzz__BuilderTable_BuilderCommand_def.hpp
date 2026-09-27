#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_BuilderCommand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPiece_State_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_BuilderCommandType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTable_BuilderCommand)
namespace GlobalNamespace {
class NetPlayer;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_BuilderCommand;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_BuilderCommand);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_BuilderCommand, "GorillaTagScripts", "BuilderTable/BuilderCommand");
// Dependencies BuilderPiece::State, GorillaTagScripts.BuilderTable::BuilderCommandType, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/BuilderCommand
struct CORDL_TYPE BuilderTable_BuilderCommand {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_BuilderCommand() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderTable_BuilderCommandType", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachPieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentPieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetX", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetZ", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeft", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "player", ty: "::GlobalNamespace::NetPlayer*", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::BuilderPiece_State", modifiers: "", def_value: None, comment: None }, CppParam { name: "isQueued", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "canRollback", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "localCommandId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "serverTimeStamp", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_BuilderCommand(::GlobalNamespace::BuilderTable_BuilderCommandType  type, int32_t  pieceType, int32_t  pieceId, int32_t  attachPieceId, int32_t  parentPieceId, int32_t  parentAttachIndex, int32_t  attachIndex, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, uint8_t  twist, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, bool  isLeft, int32_t  materialType, ::GlobalNamespace::NetPlayer*  player, ::GlobalNamespace::BuilderPiece_State  state, bool  isQueued, bool  canRollback, int32_t  localCommandId, int32_t  serverTimeStamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3945};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderTable_BuilderCommandType  type;

/// @brief Field pieceType, offset: 0x4, size: 0x4, def value: None
 int32_t  pieceType;

/// @brief Field pieceId, offset: 0x8, size: 0x4, def value: None
 int32_t  pieceId;

/// @brief Field attachPieceId, offset: 0xc, size: 0x4, def value: None
 int32_t  attachPieceId;

/// @brief Field parentPieceId, offset: 0x10, size: 0x4, def value: None
 int32_t  parentPieceId;

/// @brief Field parentAttachIndex, offset: 0x14, size: 0x4, def value: None
 int32_t  parentAttachIndex;

/// @brief Field attachIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  attachIndex;

/// @brief Field localPosition, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localRotation, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localRotation;

/// @brief Field twist, offset: 0x38, size: 0x1, def value: None
 uint8_t  twist;

/// @brief Field bumpOffsetX, offset: 0x39, size: 0x1, def value: None
 int8_t  bumpOffsetX;

/// @brief Field bumpOffsetZ, offset: 0x3a, size: 0x1, def value: None
 int8_t  bumpOffsetZ;

/// @brief Field velocity, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field angVelocity, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  angVelocity;

/// @brief Field isLeft, offset: 0x54, size: 0x1, def value: None
 bool  isLeft;

/// @brief Field materialType, offset: 0x58, size: 0x4, def value: None
 int32_t  materialType;

/// @brief Field player, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  player;

/// @brief Field state, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPiece_State  state;

/// @brief Field isQueued, offset: 0x6c, size: 0x1, def value: None
 bool  isQueued;

/// @brief Field canRollback, offset: 0x6d, size: 0x1, def value: None
 bool  canRollback;

/// @brief Field localCommandId, offset: 0x70, size: 0x4, def value: None
 int32_t  localCommandId;

/// @brief Field serverTimeStamp, offset: 0x74, size: 0x4, def value: None
 int32_t  serverTimeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, pieceType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, pieceId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, attachPieceId) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, parentPieceId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, parentAttachIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, attachIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, localPosition) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, localRotation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, twist) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, bumpOffsetX) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, bumpOffsetZ) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, velocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, angVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, isLeft) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, materialType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, player) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, state) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, isQueued) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, canRollback) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, localCommandId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_BuilderCommand, serverTimeStamp) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_BuilderCommand) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
