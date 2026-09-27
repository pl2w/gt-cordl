#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex_IndirectionEntryUpdateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickIndex_IndirectionEntryUpdateInfo)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeBrickIndex_IndirectionEntryUpdateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, "UnityEngine.Rendering", "ProbeBrickIndex/IndirectionEntryUpdateInfo");
// Dependencies UnityEngine.Vector3Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickIndex/IndirectionEntryUpdateInfo
struct CORDL_TYPE ProbeBrickIndex_IndirectionEntryUpdateInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ProbeBrickIndex_IndirectionEntryUpdateInfo() ;

// Ctor Parameters [CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numberOfChunks", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minSubdivInCell", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minValidBrickIndexForCellAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxValidBrickIndexForCellAtMaxResPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "entryPositionInBricksAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ProbeBrickIndex_IndirectionEntryUpdateInfo(int32_t  firstChunkIndex, int32_t  numberOfChunks, int32_t  minSubdivInCell, ::UnityEngine::Vector3Int  minValidBrickIndexForCellAtMaxRes, ::UnityEngine::Vector3Int  maxValidBrickIndexForCellAtMaxResPlusOne, ::UnityEngine::Vector3Int  entryPositionInBricksAtMaxRes, bool  hasOnlyBiggerBricks) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16799};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field firstChunkIndex, offset: 0x0, size: 0x4, def value: None
 int32_t  firstChunkIndex;

/// @brief Field numberOfChunks, offset: 0x4, size: 0x4, def value: None
 int32_t  numberOfChunks;

/// @brief Field minSubdivInCell, offset: 0x8, size: 0x4, def value: None
 int32_t  minSubdivInCell;

/// @brief Field minValidBrickIndexForCellAtMaxRes, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  minValidBrickIndexForCellAtMaxRes;

/// @brief Field maxValidBrickIndexForCellAtMaxResPlusOne, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  maxValidBrickIndexForCellAtMaxResPlusOne;

/// @brief Field entryPositionInBricksAtMaxRes, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  entryPositionInBricksAtMaxRes;

/// @brief Field hasOnlyBiggerBricks, offset: 0x30, size: 0x1, def value: None
 bool  hasOnlyBiggerBricks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, firstChunkIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, numberOfChunks) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, minSubdivInCell) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, minValidBrickIndexForCellAtMaxRes) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, maxValidBrickIndexForCellAtMaxResPlusOne) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, entryPositionInBricksAtMaxRes) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo, hasOnlyBiggerBricks) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo) == 0x34, "Size mismatch!");

} // namespace end def GlobalNamespace
