#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchedMusicController_SyncedSongLayerInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SynchedMusicController_AudioSourcePickMode_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SynchedMusicController_SyncedSongLayerInfo)
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
struct SynchedMusicController_SyncedSongLayerInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo, "", "SynchedMusicController/SyncedSongLayerInfo");
// Dependencies SynchedMusicController::AudioSourcePickMode, UnityEngine.AudioSource
namespace GlobalNamespace {
// Is value type: true
// CS Name: SynchedMusicController/SyncedSongLayerInfo
struct CORDL_TYPE SynchedMusicController_SyncedSongLayerInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SynchedMusicController_SyncedSongLayerInfo() ;

// Ctor Parameters [CppParam { name: "audioClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioSourcePickMode", ty: "::GlobalNamespace::SynchedMusicController_AudioSourcePickMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "audioSources", ty: "::ArrayW<::UnityW<::UnityEngine::AudioSource>>", modifiers: "", def_value: None, comment: None }]
constexpr SynchedMusicController_SyncedSongLayerInfo(::UnityW<::UnityEngine::AudioClip>  audioClip, ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode  audioSourcePickMode, ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  audioSources) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2556};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [Tooltip("The clip that will be played.")]
/// @brief Field audioClip, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  audioClip;

/// @brief Field audioSourcePickMode, offset: 0x8, size: 0x4, def value: None
 ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode  audioSourcePickMode;

/// [Tooltip("The audio sources that should play the audio clip.")]
/// @brief Field audioSources, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  audioSources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo, audioClip) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo, audioSourcePickMode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo, audioSources) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
