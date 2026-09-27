#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap_SyncTile.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_SyncTile_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_def.hpp"
// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Tile", ty: "::UnityW<::UnityEngine::Tilemaps::TileBase>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TileData", ty: "::UnityEngine::Tilemaps::TileData", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Tilemap_SyncTile::Tilemap_SyncTile(::UnityEngine::Vector3Int  m_Position, ::UnityW<::UnityEngine::Tilemaps::TileBase>  m_Tile, ::UnityEngine::Tilemaps::TileData  m_TileData) noexcept  {
this->m_Position = m_Position;
this->m_Tile = m_Tile;
this->m_TileData = m_TileData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tilemap_SyncTile::Tilemap_SyncTile()   {
}
