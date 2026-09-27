#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPieceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPiece_State_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceData)
namespace GlobalNamespace {
class BuilderPiece;
}
// Forward declare root types
namespace GorillaTagScripts {
struct BuilderPieceData;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::BuilderPieceData);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPieceData, "GorillaTagScripts", "BuilderPieceData");
// Dependencies BuilderPiece::State
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderPieceData
struct CORDL_TYPE BuilderPieceData {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ba9da0, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BuilderPiece*  piece) ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceData() ;

// Ctor Parameters [CppParam { name: "pieceId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "parentPieceIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "requestedParentPieceIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "heldByActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "preventSnapUntilMoved", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isBuiltIntoTable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::BuilderPiece_State", modifiers: "", def_value: None, comment: None }, CppParam { name: "privatePlotIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isArmPiece", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceData(int32_t  pieceId, int32_t  pieceIndex, int32_t  parentPieceIndex, int32_t  requestedParentPieceIndex, int32_t  heldByActorNumber, int32_t  preventSnapUntilMoved, bool  isBuiltIntoTable, ::GlobalNamespace::BuilderPiece_State  state, int32_t  privatePlotIndex, bool  isArmPiece) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3951};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field pieceId, offset: 0x0, size: 0x4, def value: None
 int32_t  pieceId;

/// @brief Field pieceIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  pieceIndex;

/// @brief Field parentPieceIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  parentPieceIndex;

/// @brief Field requestedParentPieceIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  requestedParentPieceIndex;

/// @brief Field heldByActorNumber, offset: 0x10, size: 0x4, def value: None
 int32_t  heldByActorNumber;

/// @brief Field preventSnapUntilMoved, offset: 0x14, size: 0x4, def value: None
 int32_t  preventSnapUntilMoved;

/// @brief Field isBuiltIntoTable, offset: 0x18, size: 0x1, def value: None
 bool  isBuiltIntoTable;

/// @brief Field state, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPiece_State  state;

/// @brief Field privatePlotIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  privatePlotIndex;

/// @brief Field isArmPiece, offset: 0x24, size: 0x1, def value: None
 bool  isArmPiece;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, pieceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, pieceIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, parentPieceIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, requestedParentPieceIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, heldByActorNumber) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, preventSnapUntilMoved) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, isBuiltIntoTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, state) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, privatePlotIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPieceData, isArmPiece) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPieceData) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
