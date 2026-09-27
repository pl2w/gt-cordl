#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tilemap_SyncTileCallbackSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(Tilemap_SyncTileCallbackSettings)
// Forward declare root types
namespace GlobalNamespace {
struct Tilemap_SyncTileCallbackSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Tilemap_SyncTileCallbackSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Tilemap_SyncTileCallbackSettings, "UnityEngine.Tilemaps", "Tilemap/SyncTileCallbackSettings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Tilemaps.Tilemap/SyncTileCallbackSettings
struct CORDL_TYPE Tilemap_SyncTileCallbackSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Tilemap_SyncTileCallbackSettings() ;

// Ctor Parameters [CppParam { name: "hasSyncTileCallback", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hasPositionsChangedCallback", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isBufferSyncTile", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr Tilemap_SyncTileCallbackSettings(bool  hasSyncTileCallback, bool  hasPositionsChangedCallback, bool  isBufferSyncTile) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32593};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3};

/// @brief Field hasSyncTileCallback, offset: 0x0, size: 0x1, def value: None
 bool  hasSyncTileCallback;

/// @brief Field hasPositionsChangedCallback, offset: 0x1, size: 0x1, def value: None
 bool  hasPositionsChangedCallback;

/// @brief Field isBufferSyncTile, offset: 0x2, size: 0x1, def value: None
 bool  isBufferSyncTile;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Tilemap_SyncTileCallbackSettings, hasSyncTileCallback) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tilemap_SyncTileCallbackSettings, hasPositionsChangedCallback) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Tilemap_SyncTileCallbackSettings, isBufferSyncTile) == 0x2, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Tilemap_SyncTileCallbackSettings) == 0x3, "Size mismatch!");

} // namespace end def GlobalNamespace
