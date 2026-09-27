#pragma once
// IWYU pragma private; include "GlobalNamespace/PieceFallbackInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PieceFallbackInfo)
namespace GlobalNamespace {
class BuilderPiece;
}
// Forward declare root types
namespace GlobalNamespace {
struct PieceFallbackInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PieceFallbackInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PieceFallbackInfo, "", "PieceFallbackInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PieceFallbackInfo
struct CORDL_TYPE PieceFallbackInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PieceFallbackInfo() ;

// Ctor Parameters [CppParam { name: "materialSwapThisPrefab", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefab", ty: "::UnityW<::GlobalNamespace::BuilderPiece>", modifiers: "", def_value: None, comment: None }]
constexpr PieceFallbackInfo(bool  materialSwapThisPrefab, ::UnityW<::GlobalNamespace::BuilderPiece>  prefab) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1601};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("Check if the piece has Material Options set and the default material is in a starter set")]
/// @brief Field materialSwapThisPrefab, offset: 0x0, size: 0x1, def value: None
 bool  materialSwapThisPrefab;

/// [Tooltip("A piece in a starter set with the same builder attach grid configuration\n(check BuilderSetManager _starterPieceSets for pieces in starter sets)")]
/// @brief Field prefab, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  prefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PieceFallbackInfo, materialSwapThisPrefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PieceFallbackInfo, prefab) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PieceFallbackInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
