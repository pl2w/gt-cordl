#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickIndex_IndirectionEntryUpdateInfo.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_IndirectionEntryUpdateInfo_def.hpp"
// Ctor Parameters [CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numberOfChunks", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minSubdivInCell", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minValidBrickIndexForCellAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxValidBrickIndexForCellAtMaxResPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "entryPositionInBricksAtMaxRes", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo::ProbeBrickIndex_IndirectionEntryUpdateInfo(int32_t  firstChunkIndex, int32_t  numberOfChunks, int32_t  minSubdivInCell, ::UnityEngine::Vector3Int  minValidBrickIndexForCellAtMaxRes, ::UnityEngine::Vector3Int  maxValidBrickIndexForCellAtMaxResPlusOne, ::UnityEngine::Vector3Int  entryPositionInBricksAtMaxRes, bool  hasOnlyBiggerBricks) noexcept  {
this->firstChunkIndex = firstChunkIndex;
this->numberOfChunks = numberOfChunks;
this->minSubdivInCell = minSubdivInCell;
this->minValidBrickIndexForCellAtMaxRes = minValidBrickIndexForCellAtMaxRes;
this->maxValidBrickIndexForCellAtMaxResPlusOne = maxValidBrickIndexForCellAtMaxResPlusOne;
this->entryPositionInBricksAtMaxRes = entryPositionInBricksAtMaxRes;
this->hasOnlyBiggerBricks = hasOnlyBiggerBricks;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeBrickIndex_IndirectionEntryUpdateInfo::ProbeBrickIndex_IndirectionEntryUpdateInfo()   {
}
