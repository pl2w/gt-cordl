#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderActions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderActions)
namespace GlobalNamespace {
struct BuilderAction;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BuilderActions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BuilderActions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderActions*, "", "BuilderActions");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BuilderActions
class CORDL_TYPE BuilderActions : public ::System::Object {
public:
// Declarations
/// @brief Method CreateAttachToPiece, addr 0x57b5414, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateAttachToPiece(int32_t  cmdId, int32_t  pieceId, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  actorNumber, int32_t  timeStamp) ;

/// @brief Method CreateAttachToPieceRollback, addr 0x57b546c, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateAttachToPieceRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  piece, int32_t  actorNumber) ;

/// @brief Method CreateAttachToPlayer, addr 0x57b52f0, size 0x3c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateAttachToPlayer(int32_t  cmdId, int32_t  pieceId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, int32_t  actorNumber, bool  leftHand) ;

/// @brief Method CreateAttachToPlayerRollback, addr 0x57b532c, size 0xc0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateAttachToPlayerRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method CreateAttachToShelfRollback, addr 0x57b582c, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateAttachToShelfRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  piece, int32_t  shelfID, bool  isConveyor, int32_t  timestamp, float_t  splineTime) ;

/// @brief Method CreateDetachFromPiece, addr 0x57b5548, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateDetachFromPiece(int32_t  cmdId, int32_t  pieceId, int32_t  actorNumber) ;

/// @brief Method CreateDetachFromPlayer, addr 0x57b53ec, size 0x28, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateDetachFromPlayer(int32_t  cmdId, int32_t  pieceId, int32_t  actorNumber) ;

/// @brief Method CreateDropPiece, addr 0x57b55a0, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateDropPiece(int32_t  cmdId, int32_t  pieceId, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, int32_t  actorNumber) ;

/// @brief Method CreateDropPieceRollback, addr 0x57b55f8, size 0x234, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateDropPieceRollback(int32_t  cmdId, ::GlobalNamespace::BuilderPiece*  rootPiece, int32_t  actorNumber) ;

/// @brief Method CreateMakeRoot, addr 0x57b5570, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderAction CreateMakeRoot(int32_t  cmdId, int32_t  pieceId) ;

static inline ::GlobalNamespace::BuilderActions* New_ctor() ;

/// @brief Method .ctor, addr 0x57b5918, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderActions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderActions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderActions(BuilderActions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderActions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderActions(BuilderActions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BuilderActions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
