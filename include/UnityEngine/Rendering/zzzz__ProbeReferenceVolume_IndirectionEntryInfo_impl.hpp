#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_IndirectionEntryInfo.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_IndirectionEntryInfo_def.hpp"
// Ctor Parameters [CppParam { name: "positionInBricks", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minBrickPos", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxBrickPosPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasMinMax", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo::ProbeReferenceVolume_IndirectionEntryInfo(::UnityEngine::Vector3Int  positionInBricks, int32_t  minSubdiv, ::UnityEngine::Vector3Int  minBrickPos, ::UnityEngine::Vector3Int  maxBrickPosPlusOne, bool  hasMinMax, bool  hasOnlyBiggerBricks) noexcept  {
this->positionInBricks = positionInBricks;
this->minSubdiv = minSubdiv;
this->minBrickPos = minBrickPos;
this->maxBrickPosPlusOne = maxBrickPosPlusOne;
this->hasMinMax = hasMinMax;
this->hasOnlyBiggerBricks = hasOnlyBiggerBricks;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeReferenceVolume_IndirectionEntryInfo::ProbeReferenceVolume_IndirectionEntryInfo()   {
}
