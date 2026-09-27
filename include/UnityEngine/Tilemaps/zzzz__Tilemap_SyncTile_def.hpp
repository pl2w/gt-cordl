#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap_SyncTile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Tilemap_SyncTile)
namespace UnityEngine::Tilemaps {
class TileBase;
}
// Forward declare root types
namespace GlobalNamespace {
struct Tilemap_SyncTile;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Tilemap_SyncTile);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tilemap_SyncTile, "UnityEngine.Tilemaps", "Tilemap/SyncTile");
// [RequiredByNativeCode]
// Dependencies UnityEngine.Tilemaps.TileData, UnityEngine.Vector3Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.Tilemap/SyncTile
struct CORDL_TYPE Tilemap_SyncTile {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Tilemap_SyncTile() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Tile", ty: "::UnityW<::UnityEngine::Tilemaps::TileBase>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TileData", ty: "::UnityEngine::Tilemaps::TileData", modifiers: "", def_value: None, comment: None }]
constexpr Tilemap_SyncTile(::UnityEngine::Vector3Int  m_Position, ::UnityW<::UnityEngine::Tilemaps::TileBase>  m_Tile, ::UnityEngine::Tilemaps::TileData  m_TileData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32592};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  m_Position;

/// @brief Field m_Tile, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Tilemaps::TileBase>  m_Tile;

/// @brief Field m_TileData, offset: 0x18, size: 0x60, def value: None
 ::UnityEngine::Tilemaps::TileData  m_TileData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tilemap_SyncTile, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tilemap_SyncTile, m_Tile) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tilemap_SyncTile, m_TileData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tilemap_SyncTile) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
