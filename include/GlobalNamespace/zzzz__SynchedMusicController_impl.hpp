#pragma once
// IWYU pragma private; include "GlobalNamespace/SynchedMusicController.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_SyncedSongInfo_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__AudioSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_AudioSourcePickMode_def.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_SyncedSongInfo_def.hpp"
#include "GlobalNamespace/zzzz__SynchedMusicController_SyncedSongLayerInfo_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::Start)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5987aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::SliceUpdate)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x5988624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.StartPlayingSong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)(int64_t, int64_t)>(&::GlobalNamespace::SynchedMusicController::StartPlayingSong)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5989160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StartPlayingSong", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.StartPlayingSongs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)(int64_t, int64_t)>(&::GlobalNamespace::SynchedMusicController::StartPlayingSongs)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5989020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StartPlayingSongs", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.StartPlayingSong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)(int64_t, int64_t, ::UnityEngine::AudioClip*, ::UnityEngine::AudioSource*)>(&::GlobalNamespace::SynchedMusicController::StartPlayingSong)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59890c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StartPlayingSong", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.GenerateSongStartRandomTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::GenerateSongStartRandomTimes)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x59882c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"GenerateSongStartRandomTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.MuteAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)(::GlobalNamespace::GorillaPressableButton*)>(&::GlobalNamespace::SynchedMusicController::MuteAudio)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x59891cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"MuteAudio", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.New_Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::New_Start)> {
  constexpr static std::size_t size = 0x5a4;
  constexpr static std::size_t addrs = 0x5987d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::OnEnable)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5989be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5989bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.StopAllAudioSources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::StopAllAudioSources)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5989c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StopAllAudioSources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.New_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::New_Update)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x5988bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.New_Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::New_Validate)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5989490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController.New_GeneratePlaylistArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::New_GeneratePlaylistArrays)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5989860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_GeneratePlaylistArrays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SynchedMusicController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SynchedMusicController::*)()>(&::GlobalNamespace::SynchedMusicController::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5989c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SynchedMusicController::__cordl_internal_get_usingNewSyncedSongsCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingNewSyncedSongsCode;
}
constexpr bool const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_usingNewSyncedSongsCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingNewSyncedSongsCode;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_usingNewSyncedSongsCode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usingNewSyncedSongsCode = value;
}
constexpr bool& GlobalNamespace::SynchedMusicController::__cordl_internal_get_shufflePlaylist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shufflePlaylist;
}
constexpr bool const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_shufflePlaylist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shufflePlaylist;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_shufflePlaylist(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shufflePlaylist = value;
}
constexpr ::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_syncedSongs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedSongs;
}
constexpr ::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_syncedSongs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedSongs;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_syncedSongs(::ArrayW<::GlobalNamespace::SynchedMusicController_SyncedSongInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedSongs = value;
}
constexpr int32_t& GlobalNamespace::SynchedMusicController::__cordl_internal_get_mySeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySeed;
}
constexpr int32_t const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_mySeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySeed;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_mySeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySeed = value;
}
constexpr ::System::Random*& GlobalNamespace::SynchedMusicController::__cordl_internal_get_randomNumberGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomNumberGenerator;
}
constexpr ::System::Random* const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_randomNumberGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomNumberGenerator;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_randomNumberGenerator(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomNumberGenerator = value;
}
constexpr int64_t& GlobalNamespace::SynchedMusicController::__cordl_internal_get_minimumWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumWait;
}
constexpr int64_t const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_minimumWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minimumWait;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_minimumWait(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minimumWait = value;
}
constexpr int32_t& GlobalNamespace::SynchedMusicController::__cordl_internal_get_randomInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomInterval;
}
constexpr int32_t const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_randomInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomInterval;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_randomInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomInterval = value;
}
constexpr ::ArrayW<int64_t>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_songStartTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songStartTimes;
}
constexpr ::ArrayW<int64_t> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_songStartTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songStartTimes;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_songStartTimes(::ArrayW<int64_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___songStartTimes = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioSourcesForPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourcesForPlaying;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioSourcesForPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourcesForPlaying;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_audioSourcesForPlaying(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourcesForPlaying = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioClipsForPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClipsForPlaying;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioClipsForPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioClipsForPlaying;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_audioClipsForPlaying(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioClipsForPlaying = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioSourceArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioSource>> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_audioSourceArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSourceArray;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_audioSourceArray(::ArrayW<::UnityW<::UnityEngine::AudioSource>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSourceArray = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_songsArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songsArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_songsArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___songsArray;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_songsArray(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___songsArray = value;
}
constexpr int32_t& GlobalNamespace::SynchedMusicController::__cordl_internal_get_lastPlayIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayIndex;
}
constexpr int32_t const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_lastPlayIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPlayIndex;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_lastPlayIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPlayIndex = value;
}
constexpr int64_t& GlobalNamespace::SynchedMusicController::__cordl_internal_get_currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr int64_t const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_currentTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTime = value;
}
constexpr int64_t& GlobalNamespace::SynchedMusicController::__cordl_internal_get_totalLoopTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLoopTime;
}
constexpr int64_t const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_totalLoopTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalLoopTime;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_totalLoopTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalLoopTime = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_muteButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteButton;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPressableButton> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_muteButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteButton;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_muteButton(::UnityW<::GlobalNamespace::GorillaPressableButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteButton = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& GlobalNamespace::SynchedMusicController::__cordl_internal_get_muteButtons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteButtons;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_muteButtons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___muteButtons;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_muteButtons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___muteButtons = value;
}
constexpr bool& GlobalNamespace::SynchedMusicController::__cordl_internal_get_usingMultipleSongs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingMultipleSongs;
}
constexpr bool const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_usingMultipleSongs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingMultipleSongs;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_usingMultipleSongs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usingMultipleSongs = value;
}
constexpr bool& GlobalNamespace::SynchedMusicController::__cordl_internal_get_usingMultipleSources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingMultipleSources;
}
constexpr bool const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_usingMultipleSources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___usingMultipleSources;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_usingMultipleSources(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___usingMultipleSources = value;
}
constexpr bool& GlobalNamespace::SynchedMusicController::__cordl_internal_get_isPlayingCurrently()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayingCurrently;
}
constexpr bool const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_isPlayingCurrently() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPlayingCurrently;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_isPlayingCurrently(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPlayingCurrently = value;
}
constexpr bool& GlobalNamespace::SynchedMusicController::__cordl_internal_get_testPlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPlay;
}
constexpr bool const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_testPlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testPlay;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_testPlay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testPlay = value;
}
constexpr bool& GlobalNamespace::SynchedMusicController::__cordl_internal_get_twoLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoLayer;
}
constexpr bool const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_twoLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___twoLayer;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_twoLayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___twoLayer = value;
}
constexpr ::StringW& GlobalNamespace::SynchedMusicController::__cordl_internal_get_locationName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationName;
}
constexpr ::StringW const& GlobalNamespace::SynchedMusicController::__cordl_internal_get_locationName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locationName;
}
constexpr void GlobalNamespace::SynchedMusicController::__cordl_internal_set_locationName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locationName = value;
}
inline void GlobalNamespace::SynchedMusicController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::StartPlayingSong(int64_t  timeStarted, int64_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StartPlayingSong", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeStarted, currentTime);
}
inline void GlobalNamespace::SynchedMusicController::StartPlayingSongs(int64_t  timeStarted, int64_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StartPlayingSongs", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeStarted, currentTime);
}
inline void GlobalNamespace::SynchedMusicController::StartPlayingSong(int64_t  timeStarted, int64_t  currentTime, ::UnityEngine::AudioClip*  clipToPlay, ::UnityEngine::AudioSource*  sourceToPlay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StartPlayingSong", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeStarted, currentTime, clipToPlay, sourceToPlay);
}
inline void GlobalNamespace::SynchedMusicController::GenerateSongStartRandomTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"GenerateSongStartRandomTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::MuteAudio(::GlobalNamespace::GorillaPressableButton*  pressedButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"MuteAudio", {}, {::i2c::type_of<::GlobalNamespace::GorillaPressableButton*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pressedButton);
}
inline void GlobalNamespace::SynchedMusicController::New_Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::StopAllAudioSources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"StopAllAudioSources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::New_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::SynchedMusicController::New_Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::New_GeneratePlaylistArrays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {"New_GeneratePlaylistArrays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SynchedMusicController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SynchedMusicController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SynchedMusicController* GlobalNamespace::SynchedMusicController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SynchedMusicController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::SynchedMusicController::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::SynchedMusicController::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SynchedMusicController::SynchedMusicController()   {
}
