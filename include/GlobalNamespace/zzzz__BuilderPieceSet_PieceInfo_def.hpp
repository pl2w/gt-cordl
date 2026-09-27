#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceSet_PieceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BuilderPieceSet_PieceInfo)
namespace GlobalNamespace {
class BuilderPiece;
}
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceSet_PieceInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceSet_PieceInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceSet_PieceInfo, "", "BuilderPieceSet/PieceInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderPieceSet/PieceInfo
struct CORDL_TYPE BuilderPieceSet_PieceInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceSet_PieceInfo() ;

// Ctor Parameters [CppParam { name: "piecePrefab", ty: "::UnityW<::GlobalNamespace::BuilderPiece>", modifiers: "", def_value: None, comment: None }, CppParam { name: "overrideSetMaterial", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "pieceMaterialTypes", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceSet_PieceInfo(::UnityW<::GlobalNamespace::BuilderPiece>  piecePrefab, bool  overrideSetMaterial, ::ArrayW<::StringW>  pieceMaterialTypes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1614};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field piecePrefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  piecePrefab;

/// [Tooltip("(Optional) should this piece use a materialID other than the set\'s materialID")]
/// @brief Field overrideSetMaterial, offset: 0x8, size: 0x1, def value: None
 bool  overrideSetMaterial;

/// [Tooltip("material type string should match an entry in this prefab\'s BuilderMaterialOptions\nIf multiple are in the list the piece will cycle through materials when spawned\nTo have each variant on the shelf create a new pieceInfo for each color")]
/// @brief Field pieceMaterialTypes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  pieceMaterialTypes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_PieceInfo, piecePrefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_PieceInfo, overrideSetMaterial) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_PieceInfo, pieceMaterialTypes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceSet_PieceInfo) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
