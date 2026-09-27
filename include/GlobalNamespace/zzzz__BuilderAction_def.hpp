#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderActionType_def.hpp"
#include "GlobalNamespace/zzzz__SnapBounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderAction)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderAction, "", "BuilderAction");
// Dependencies BuilderActionType, SnapBounds, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderAction
struct CORDL_TYPE BuilderAction {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderAction() ;

// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::BuilderActionType", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentPieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "twist", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetx", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bumpOffsetz", ty: "int8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentAttachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "attachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentAttachBounds", ty: "::GlobalNamespace::SnapBounds", modifiers: "", def_value: None, comment: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "angVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localCommandId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeStamp", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderAction(::GlobalNamespace::BuilderActionType  type, int32_t  pieceId, int32_t  parentPieceId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, uint8_t  twist, int8_t  bumpOffsetx, int8_t  bumpOffsetz, bool  isLeftHand, int32_t  playerActorNumber, int32_t  parentAttachIndex, int32_t  attachIndex, ::GlobalNamespace::SnapBounds  attachBounds, ::GlobalNamespace::SnapBounds  parentAttachBounds, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, int32_t  localCommandId, int32_t  timeStamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1578};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderActionType  type;

/// @brief Field pieceId, offset: 0x4, size: 0x4, def value: None
 int32_t  pieceId;

/// @brief Field parentPieceId, offset: 0x8, size: 0x4, def value: None
 int32_t  parentPieceId;

/// @brief Field localPosition, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localRotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localRotation;

/// @brief Field twist, offset: 0x28, size: 0x1, def value: None
 uint8_t  twist;

/// @brief Field bumpOffsetx, offset: 0x29, size: 0x1, def value: None
 int8_t  bumpOffsetx;

/// @brief Field bumpOffsetz, offset: 0x2a, size: 0x1, def value: None
 int8_t  bumpOffsetz;

/// @brief Field isLeftHand, offset: 0x2b, size: 0x1, def value: None
 bool  isLeftHand;

/// @brief Field playerActorNumber, offset: 0x2c, size: 0x4, def value: None
 int32_t  playerActorNumber;

/// @brief Field parentAttachIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  parentAttachIndex;

/// @brief Field attachIndex, offset: 0x34, size: 0x4, def value: None
 int32_t  attachIndex;

/// @brief Field attachBounds, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  attachBounds;

/// @brief Field parentAttachBounds, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::SnapBounds  parentAttachBounds;

/// @brief Field velocity, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  velocity;

/// @brief Field angVelocity, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  angVelocity;

/// @brief Field localCommandId, offset: 0x70, size: 0x4, def value: None
 int32_t  localCommandId;

/// @brief Field timeStamp, offset: 0x74, size: 0x4, def value: None
 int32_t  timeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderAction, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, pieceId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, parentPieceId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, localPosition) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, localRotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, twist) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, bumpOffsetx) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, bumpOffsetz) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, isLeftHand) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, playerActorNumber) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, parentAttachIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, attachIndex) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, attachBounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, parentAttachBounds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, velocity) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, angVelocity) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, localCommandId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderAction, timeStamp) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderAction) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
