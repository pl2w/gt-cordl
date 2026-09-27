#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchedMusicController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_SyncedSongInfo_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SynchedMusicController)
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct SynchedMusicController_AudioSourcePickMode;
}
namespace GlobalNamespace {
struct SynchedMusicController_SyncedSongInfo;
}
namespace GlobalNamespace {
struct SynchedMusicController_SyncedSongLayerInfo;
}
namespace System {
class Random;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SynchedMusicController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SynchedMusicController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynchedMusicController*, "", "SynchedMusicController");
// Dependencies GorillaPressableButton, SynchedMusicController::SyncedSongInfo, UnityEngine.AudioClip, UnityEngine.AudioSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynchedMusicController
class CORDL_TYPE SynchedMusicController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AudioSourcePickMode = ::GlobalNamespace::SynchedMusicController_AudioSourcePickMode;

using SyncedSongInfo = ::GlobalNamespace::SynchedMusicController_SyncedSongInfo;

using SyncedSongLayerInfo = ::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo;

/// @brief Field audioClipsForPlaying, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClipsForPlaying, put=__cordl_internal_set_audioClipsForPlaying)) ::ArrayW<int32_t>  audioClipsForPlaying;

/// @brief Field audioSource, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field audioSourceArray, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSourceArray, put=__cordl_internal_set_audioSourceArray)) ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  audioSourceArray;

/// @brief Field audioSourcesForPlaying, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSourcesForPlaying, put=__cordl_internal_set_audioSourcesForPlaying)) ::ArrayW<int32_t>  audioSourcesForPlaying;

/// @brief Field currentTime, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTime, put=__cordl_internal_set_currentTime)) int64_t  currentTime;

/// @brief Field isPlayingCurrently, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlayingCurrently, put=__cordl_internal_set_isPlayingCurrently)) bool  isPlayingCurrently;

/// @brief Field lastPlayIndex, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPlayIndex, put=__cordl_internal_set_lastPlayIndex)) int32_t  lastPlayIndex;

/// @brief Field locationName, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_locationName, put=__cordl_internal_set_locationName)) ::StringW  locationName;

/// @brief Field minimumWait, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_minimumWait, put=__cordl_internal_set_minimumWait)) int64_t  minimumWait;

/// @brief Field muteButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteButton, put=__cordl_internal_set_muteButton)) ::UnityW<::GlobalNamespace::GorillaPressableButton>  muteButton;

/// @brief Field muteButtons, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_muteButtons, put=__cordl_internal_set_muteButtons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  muteButtons;

/// @brief Field mySeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_mySeed, put=__cordl_internal_set_mySeed)) int32_t  mySeed;

/// @brief Field randomInterval, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_randomInterval, put=__cordl_internal_set_randomInterval)) int32_t  randomInterval;

/// @brief Field randomNumberGenerator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomNumberGenerator, put=__cordl_internal_set_randomNumberGenerator)) ::System::Random*  randomNumberGenerator;

/// @brief Field shufflePlaylist, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_shufflePlaylist, put=__cordl_internal_set_shufflePlaylist)) bool  shufflePlaylist;

/// @brief Field songStartTimes, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_songStartTimes, put=__cordl_internal_set_songStartTimes)) ::ArrayW<int64_t>  songStartTimes;

/// @brief Field songsArray, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_songsArray, put=__cordl_internal_set_songsArray)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  songsArray;

/// @brief Field syncedSongs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_syncedSongs, put=__cordl_internal_set_syncedSongs)) ::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>  syncedSongs;

/// @brief Field testPlay, offset 0xab, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPlay, put=__cordl_internal_set_testPlay)) bool  testPlay;

/// @brief Field totalLoopTime, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalLoopTime, put=__cordl_internal_set_totalLoopTime)) int64_t  totalLoopTime;

/// @brief Field twoLayer, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_twoLayer, put=__cordl_internal_set_twoLayer)) bool  twoLayer;

/// @brief Field usingMultipleSongs, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_usingMultipleSongs, put=__cordl_internal_set_usingMultipleSongs)) bool  usingMultipleSongs;

/// @brief Field usingMultipleSources, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_usingMultipleSources, put=__cordl_internal_set_usingMultipleSources)) bool  usingMultipleSources;

/// @brief Field usingNewSyncedSongsCode, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_usingNewSyncedSongsCode, put=__cordl_internal_set_usingNewSyncedSongsCode)) bool  usingNewSyncedSongsCode;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method GenerateSongStartRandomTimes, addr 0x59882c0, size 0x364, virtual false, abstract: false, final false
inline void GenerateSongStartRandomTimes() ;

/// @brief Method MuteAudio, addr 0x59891cc, size 0x2c4, virtual false, abstract: false, final false
inline void MuteAudio(::GlobalNamespace::GorillaPressableButton*  pressedButton) ;

/// @brief Method New_GeneratePlaylistArrays, addr 0x5989860, size 0x388, virtual false, abstract: false, final false
inline void New_GeneratePlaylistArrays() ;

/// @brief Method New_Start, addr 0x5987d1c, size 0x5a4, virtual false, abstract: false, final false
inline void New_Start() ;

/// @brief Method New_Update, addr 0x5988bcc, size 0x454, virtual false, abstract: false, final false
inline void New_Update() ;

/// @brief Method New_Validate, addr 0x5989490, size 0x3d0, virtual false, abstract: false, final false
inline ::StringW New_Validate() ;

static inline ::GlobalNamespace::SynchedMusicController* New_ctor() ;

/// @brief Method OnDisable, addr 0x5989bfc, size 0x20, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5989be8, size 0x14, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5988624, size 0x5a8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5987aa4, size 0x278, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartPlayingSong, addr 0x5989160, size 0x6c, virtual false, abstract: false, final false
inline void StartPlayingSong(int64_t  timeStarted, int64_t  currentTime) ;

/// @brief Method StartPlayingSong, addr 0x59890c4, size 0x9c, virtual false, abstract: false, final false
inline void StartPlayingSong(int64_t  timeStarted, int64_t  currentTime, ::UnityEngine::AudioClip*  clipToPlay, ::UnityEngine::AudioSource*  sourceToPlay) ;

/// @brief Method StartPlayingSongs, addr 0x5989020, size 0xa4, virtual false, abstract: false, final false
inline void StartPlayingSongs(int64_t  timeStarted, int64_t  currentTime) ;

/// @brief Method StopAllAudioSources, addr 0x5989c1c, size 0x60, virtual false, abstract: false, final false
inline void StopAllAudioSources() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_audioClipsForPlaying() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_audioClipsForPlaying() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& __cordl_internal_get_audioSourceArray() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& __cordl_internal_get_audioSourceArray() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_audioSourcesForPlaying() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_audioSourcesForPlaying() ;

constexpr int64_t const& __cordl_internal_get_currentTime() const;

constexpr int64_t& __cordl_internal_get_currentTime() ;

constexpr bool const& __cordl_internal_get_isPlayingCurrently() const;

constexpr bool& __cordl_internal_get_isPlayingCurrently() ;

constexpr int32_t const& __cordl_internal_get_lastPlayIndex() const;

constexpr int32_t& __cordl_internal_get_lastPlayIndex() ;

constexpr ::StringW const& __cordl_internal_get_locationName() const;

constexpr ::StringW& __cordl_internal_get_locationName() ;

constexpr int64_t const& __cordl_internal_get_minimumWait() const;

constexpr int64_t& __cordl_internal_get_minimumWait() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& __cordl_internal_get_muteButton() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& __cordl_internal_get_muteButton() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& __cordl_internal_get_muteButtons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& __cordl_internal_get_muteButtons() ;

constexpr int32_t const& __cordl_internal_get_mySeed() const;

constexpr int32_t& __cordl_internal_get_mySeed() ;

constexpr int32_t const& __cordl_internal_get_randomInterval() const;

constexpr int32_t& __cordl_internal_get_randomInterval() ;

constexpr ::System::Random* const& __cordl_internal_get_randomNumberGenerator() const;

constexpr ::System::Random*& __cordl_internal_get_randomNumberGenerator() ;

constexpr bool const& __cordl_internal_get_shufflePlaylist() const;

constexpr bool& __cordl_internal_get_shufflePlaylist() ;

constexpr ::ArrayW<int64_t> const& __cordl_internal_get_songStartTimes() const;

constexpr ::ArrayW<int64_t>& __cordl_internal_get_songStartTimes() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_songsArray() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_songsArray() ;

constexpr ::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo> const& __cordl_internal_get_syncedSongs() const;

constexpr ::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>& __cordl_internal_get_syncedSongs() ;

constexpr bool const& __cordl_internal_get_testPlay() const;

constexpr bool& __cordl_internal_get_testPlay() ;

constexpr int64_t const& __cordl_internal_get_totalLoopTime() const;

constexpr int64_t& __cordl_internal_get_totalLoopTime() ;

constexpr bool const& __cordl_internal_get_twoLayer() const;

constexpr bool& __cordl_internal_get_twoLayer() ;

constexpr bool const& __cordl_internal_get_usingMultipleSongs() const;

constexpr bool& __cordl_internal_get_usingMultipleSongs() ;

constexpr bool const& __cordl_internal_get_usingMultipleSources() const;

constexpr bool& __cordl_internal_get_usingMultipleSources() ;

constexpr bool const& __cordl_internal_get_usingNewSyncedSongsCode() const;

constexpr bool& __cordl_internal_get_usingNewSyncedSongsCode() ;

constexpr void __cordl_internal_set_audioClipsForPlaying(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_audioSourceArray(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value) ;

constexpr void __cordl_internal_set_audioSourcesForPlaying(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_currentTime(int64_t  value) ;

constexpr void __cordl_internal_set_isPlayingCurrently(bool  value) ;

constexpr void __cordl_internal_set_lastPlayIndex(int32_t  value) ;

constexpr void __cordl_internal_set_locationName(::StringW  value) ;

constexpr void __cordl_internal_set_minimumWait(int64_t  value) ;

constexpr void __cordl_internal_set_muteButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value) ;

constexpr void __cordl_internal_set_muteButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value) ;

constexpr void __cordl_internal_set_mySeed(int32_t  value) ;

constexpr void __cordl_internal_set_randomInterval(int32_t  value) ;

constexpr void __cordl_internal_set_randomNumberGenerator(::System::Random*  value) ;

constexpr void __cordl_internal_set_shufflePlaylist(bool  value) ;

constexpr void __cordl_internal_set_songStartTimes(::ArrayW<int64_t>  value) ;

constexpr void __cordl_internal_set_songsArray(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_syncedSongs(::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>  value) ;

constexpr void __cordl_internal_set_testPlay(bool  value) ;

constexpr void __cordl_internal_set_totalLoopTime(int64_t  value) ;

constexpr void __cordl_internal_set_twoLayer(bool  value) ;

constexpr void __cordl_internal_set_usingMultipleSongs(bool  value) ;

constexpr void __cordl_internal_set_usingMultipleSources(bool  value) ;

constexpr void __cordl_internal_set_usingNewSyncedSongsCode(bool  value) ;

/// @brief Method .ctor, addr 0x5989c7c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynchedMusicController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynchedMusicController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynchedMusicController(SynchedMusicController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynchedMusicController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynchedMusicController(SynchedMusicController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2558};

/// @brief Field kPlaylistLength offset 0xffffffff size 0x4
static constexpr int32_t  kPlaylistLength{static_cast<int32_t>(0x100)};

/// [SerializeField]
/// @brief Field usingNewSyncedSongsCode, offset: 0x20, size: 0x1, def value: None
 bool  ___usingNewSyncedSongsCode;

/// [SerializeField]
/// @brief Field shufflePlaylist, offset: 0x21, size: 0x1, def value: None
 bool  ___shufflePlaylist;

/// [SerializeField]
/// @brief Field syncedSongs, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>  ___syncedSongs;

/// [Tooltip("This should be unique per sound post. Sound posts that share the same seed and the same song count will play songs a the same times.")]
/// @brief Field mySeed, offset: 0x30, size: 0x4, def value: None
 int32_t  ___mySeed;

/// @brief Field randomNumberGenerator, offset: 0x38, size: 0x8, def value: None
 ::System::Random*  ___randomNumberGenerator;

/// [Tooltip("In milliseconds.")]
/// @brief Field minimumWait, offset: 0x40, size: 0x8, def value: None
 int64_t  ___minimumWait;

/// [Tooltip("In milliseconds. A random value between 0 and this will be picked. The max wait time is randomInterval + minimumWait.")]
/// @brief Field randomInterval, offset: 0x48, size: 0x4, def value: None
 int32_t  ___randomInterval;

/// [DebugReadout]
/// @brief Field songStartTimes, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<int64_t>  ___songStartTimes;

/// [DebugReadout]
/// @brief Field audioSourcesForPlaying, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___audioSourcesForPlaying;

/// [DebugReadout]
/// @brief Field audioClipsForPlaying, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___audioClipsForPlaying;

/// @brief Field audioSource, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field audioSourceArray, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioSource>>  ___audioSourceArray;

/// @brief Field songsArray, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___songsArray;

/// [DebugReadout]
/// @brief Field lastPlayIndex, offset: 0x80, size: 0x4, def value: None
 int32_t  ___lastPlayIndex;

/// [DebugReadout]
/// @brief Field currentTime, offset: 0x88, size: 0x8, def value: None
 int64_t  ___currentTime;

/// [DebugReadout]
/// @brief Field totalLoopTime, offset: 0x90, size: 0x8, def value: None
 int64_t  ___totalLoopTime;

/// @brief Field muteButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPressableButton>  ___muteButton;

/// @brief Field muteButtons, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  ___muteButtons;

/// @brief Field usingMultipleSongs, offset: 0xa8, size: 0x1, def value: None
 bool  ___usingMultipleSongs;

/// @brief Field usingMultipleSources, offset: 0xa9, size: 0x1, def value: None
 bool  ___usingMultipleSources;

/// [DebugReadout]
/// @brief Field isPlayingCurrently, offset: 0xaa, size: 0x1, def value: None
 bool  ___isPlayingCurrently;

/// [DebugReadout]
/// @brief Field testPlay, offset: 0xab, size: 0x1, def value: None
 bool  ___testPlay;

/// @brief Field twoLayer, offset: 0xac, size: 0x1, def value: None
 bool  ___twoLayer;

/// [Tooltip("Used to store the muted sound posts in player prefs.")]
/// @brief Field locationName, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___locationName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___usingNewSyncedSongsCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___shufflePlaylist) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___syncedSongs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___mySeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___randomNumberGenerator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___minimumWait) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___randomInterval) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___songStartTimes) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___audioSourcesForPlaying) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___audioClipsForPlaying) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___audioSource) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___audioSourceArray) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___songsArray) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___lastPlayIndex) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___currentTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___totalLoopTime) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___muteButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___muteButtons) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___usingMultipleSongs) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___usingMultipleSources) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___isPlayingCurrently) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___testPlay) == 0xab, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___twoLayer) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynchedMusicController, ___locationName) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynchedMusicController) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
