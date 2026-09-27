#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchedMusicController_SyncedSongInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SynchedMusicController_SyncedSongLayerInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SynchedMusicController_SyncedSongInfo)
namespace GlobalNamespace {
struct SynchedMusicController_SyncedSongLayerInfo;
}
// Forward declare root types
namespace GlobalNamespace {
struct SynchedMusicController_SyncedSongInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SynchedMusicController_SyncedSongInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynchedMusicController_SyncedSongInfo, "", "SynchedMusicController/SyncedSongInfo");
// Dependencies SynchedMusicController::SyncedSongLayerInfo
namespace GlobalNamespace {
// Is value type: true
// CS Name: SynchedMusicController/SyncedSongInfo
struct CORDL_TYPE SynchedMusicController_SyncedSongInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SynchedMusicController_SyncedSongInfo() ;

// Ctor Parameters [CppParam { name: "songLayers", ty: "::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo>", modifiers: "", def_value: None, comment: None }]
constexpr SynchedMusicController_SyncedSongInfo(::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo>  songLayers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2555};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [Tooltip("A layer for a song. For no layers, just add a single entry.")]
/// [RequiredListLength(1, null)]
/// @brief Field songLayers, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo>  songLayers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynchedMusicController_SyncedSongInfo, songLayers) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynchedMusicController_SyncedSongInfo) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
