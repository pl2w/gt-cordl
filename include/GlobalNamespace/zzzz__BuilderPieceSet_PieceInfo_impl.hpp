#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceSet_PieceInfo.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceSet_PieceInfo_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
// Ctor Parameters [CppParam { name: "piecePrefab", ty: "::UnityW<::GlobalNamespace::BuilderPiece>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overrideSetMaterial", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pieceMaterialTypes", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo::BuilderPieceSet_PieceInfo(::UnityW<::GlobalNamespace::BuilderPiece>  piecePrefab, bool  overrideSetMaterial, ::ArrayW<::StringW>  pieceMaterialTypes) noexcept  {
this->piecePrefab = piecePrefab;
this->overrideSetMaterial = overrideSetMaterial;
this->pieceMaterialTypes = pieceMaterialTypes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceSet_PieceInfo::BuilderPieceSet_PieceInfo()   {
}
