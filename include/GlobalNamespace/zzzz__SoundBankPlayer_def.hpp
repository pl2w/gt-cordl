#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBankPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SoundBankPlayer_PlaylistEntry_def.hpp"
#include "UnityEngine/zzzz__AudioRolloffMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SoundBankPlayer)
namespace GlobalNamespace {
struct SoundBankPlayer_PlaylistEntry;
}
namespace GlobalNamespace {
class SoundBankSO;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SoundBankPlayer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SoundBankPlayer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SoundBankPlayer*, "", "SoundBankPlayer");
// Dependencies SoundBankPlayer::PlaylistEntry, UnityEngine.AudioRolloffMode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SoundBankPlayer
class CORDL_TYPE SoundBankPlayer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlaylistEntry = ::GlobalNamespace::SoundBankPlayer_PlaylistEntry;

 __declspec(property(get=get_CurrentTime)) float_t  CurrentTime;

 __declspec(property(get=get_NormalizedTime)) float_t  NormalizedTime;

/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bypassEffects, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassEffects, put=__cordl_internal_set_bypassEffects)) bool  bypassEffects;

/// @brief Field bypassListenerEffects, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassListenerEffects, put=__cordl_internal_set_bypassListenerEffects)) bool  bypassListenerEffects;

/// @brief Field bypassReverbZones, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassReverbZones, put=__cordl_internal_set_bypassReverbZones)) bool  bypassReverbZones;

/// @brief Field clipDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_clipDuration, put=__cordl_internal_set_clipDuration)) float_t  clipDuration;

/// @brief Field customRolloffCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_customRolloffCurve, put=__cordl_internal_set_customRolloffCurve)) ::UnityEngine::AnimationCurve*  customRolloffCurve;

/// @brief Field dopplerLevel, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_dopplerLevel, put=__cordl_internal_set_dopplerLevel)) float_t  dopplerLevel;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

/// @brief Field maxDistance, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field minDistance, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDistance, put=__cordl_internal_set_minDistance)) float_t  minDistance;

/// @brief Field missingSoundsAreOk, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_missingSoundsAreOk, put=__cordl_internal_set_missingSoundsAreOk)) bool  missingSoundsAreOk;

/// @brief Field nextIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextIndex, put=__cordl_internal_set_nextIndex)) int32_t  nextIndex;

/// @brief Field outputAudioMixerGroup, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputAudioMixerGroup, put=__cordl_internal_set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  outputAudioMixerGroup;

/// @brief Field playEndTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_playEndTime, put=__cordl_internal_set_playEndTime)) float_t  playEndTime;

/// @brief Field playOnEnable, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_playOnEnable, put=__cordl_internal_set_playOnEnable)) bool  playOnEnable;

/// @brief Field playStartTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_playStartTime, put=__cordl_internal_set_playStartTime)) float_t  playStartTime;

/// @brief Field playlist, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_playlist, put=__cordl_internal_set_playlist)) ::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>  playlist;

/// @brief Field priority, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_priority, put=__cordl_internal_set_priority)) int32_t  priority;

/// @brief Field reverbZoneMix, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverbZoneMix, put=__cordl_internal_set_reverbZoneMix)) float_t  reverbZoneMix;

/// @brief Field rolloffMode, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_rolloffMode, put=__cordl_internal_set_rolloffMode)) ::UnityEngine::AudioRolloffMode  rolloffMode;

/// @brief Field shuffleOrder, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_shuffleOrder, put=__cordl_internal_set_shuffleOrder)) bool  shuffleOrder;

/// @brief Field soundBank, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBank, put=__cordl_internal_set_soundBank)) ::UnityW<::GlobalNamespace::SoundBankSO>  soundBank;

/// @brief Field spatialBlend, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spatialBlend, put=__cordl_internal_set_spatialBlend)) float_t  spatialBlend;

/// @brief Field spatialize, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_spatialize, put=__cordl_internal_set_spatialize)) bool  spatialize;

/// @brief Field spatializePostEffects, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_spatializePostEffects, put=__cordl_internal_set_spatializePostEffects)) bool  spatializePostEffects;

/// @brief Field spread, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_spread, put=__cordl_internal_set_spread)) float_t  spread;

/// @brief Method Awake, addr 0x5b0ec54, size 0x464, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SoundBankPlayer* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b0f0b8, size 0x18, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Play, addr 0x5b0f0d0, size 0xc, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0x5b0f0dc, size 0x2f8, virtual false, abstract: false, final false
inline void Play(::System::Nullable_1<float_t>  volumeOverride, ::System::Nullable_1<float_t>  pitchOverride) ;

/// @brief Method RestartSequence, addr 0x5b0f3d4, size 0x8, virtual false, abstract: false, final false
inline void RestartSequence() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_bypassEffects() const;

constexpr bool& __cordl_internal_get_bypassEffects() ;

constexpr bool const& __cordl_internal_get_bypassListenerEffects() const;

constexpr bool& __cordl_internal_get_bypassListenerEffects() ;

constexpr bool const& __cordl_internal_get_bypassReverbZones() const;

constexpr bool& __cordl_internal_get_bypassReverbZones() ;

constexpr float_t const& __cordl_internal_get_clipDuration() const;

constexpr float_t& __cordl_internal_get_clipDuration() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_customRolloffCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_customRolloffCurve() ;

constexpr float_t const& __cordl_internal_get_dopplerLevel() const;

constexpr float_t& __cordl_internal_get_dopplerLevel() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr float_t const& __cordl_internal_get_minDistance() const;

constexpr float_t& __cordl_internal_get_minDistance() ;

constexpr bool const& __cordl_internal_get_missingSoundsAreOk() const;

constexpr bool& __cordl_internal_get_missingSoundsAreOk() ;

constexpr int32_t const& __cordl_internal_get_nextIndex() const;

constexpr int32_t& __cordl_internal_get_nextIndex() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_outputAudioMixerGroup() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_outputAudioMixerGroup() ;

constexpr float_t const& __cordl_internal_get_playEndTime() const;

constexpr float_t& __cordl_internal_get_playEndTime() ;

constexpr bool const& __cordl_internal_get_playOnEnable() const;

constexpr bool& __cordl_internal_get_playOnEnable() ;

constexpr float_t const& __cordl_internal_get_playStartTime() const;

constexpr float_t& __cordl_internal_get_playStartTime() ;

constexpr ::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry> const& __cordl_internal_get_playlist() const;

constexpr ::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>& __cordl_internal_get_playlist() ;

constexpr int32_t const& __cordl_internal_get_priority() const;

constexpr int32_t& __cordl_internal_get_priority() ;

constexpr float_t const& __cordl_internal_get_reverbZoneMix() const;

constexpr float_t& __cordl_internal_get_reverbZoneMix() ;

constexpr ::UnityEngine::AudioRolloffMode const& __cordl_internal_get_rolloffMode() const;

constexpr ::UnityEngine::AudioRolloffMode& __cordl_internal_get_rolloffMode() ;

constexpr bool const& __cordl_internal_get_shuffleOrder() const;

constexpr bool& __cordl_internal_get_shuffleOrder() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankSO> const& __cordl_internal_get_soundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankSO>& __cordl_internal_get_soundBank() ;

constexpr float_t const& __cordl_internal_get_spatialBlend() const;

constexpr float_t& __cordl_internal_get_spatialBlend() ;

constexpr bool const& __cordl_internal_get_spatialize() const;

constexpr bool& __cordl_internal_get_spatialize() ;

constexpr bool const& __cordl_internal_get_spatializePostEffects() const;

constexpr bool& __cordl_internal_get_spatializePostEffects() ;

constexpr float_t const& __cordl_internal_get_spread() const;

constexpr float_t& __cordl_internal_get_spread() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bypassEffects(bool  value) ;

constexpr void __cordl_internal_set_bypassListenerEffects(bool  value) ;

constexpr void __cordl_internal_set_bypassReverbZones(bool  value) ;

constexpr void __cordl_internal_set_clipDuration(float_t  value) ;

constexpr void __cordl_internal_set_customRolloffCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_dopplerLevel(float_t  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_minDistance(float_t  value) ;

constexpr void __cordl_internal_set_missingSoundsAreOk(bool  value) ;

constexpr void __cordl_internal_set_nextIndex(int32_t  value) ;

constexpr void __cordl_internal_set_outputAudioMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_playEndTime(float_t  value) ;

constexpr void __cordl_internal_set_playOnEnable(bool  value) ;

constexpr void __cordl_internal_set_playStartTime(float_t  value) ;

constexpr void __cordl_internal_set_playlist(::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>  value) ;

constexpr void __cordl_internal_set_priority(int32_t  value) ;

constexpr void __cordl_internal_set_reverbZoneMix(float_t  value) ;

constexpr void __cordl_internal_set_rolloffMode(::UnityEngine::AudioRolloffMode  value) ;

constexpr void __cordl_internal_set_shuffleOrder(bool  value) ;

constexpr void __cordl_internal_set_soundBank(::UnityW<::GlobalNamespace::SoundBankSO>  value) ;

constexpr void __cordl_internal_set_spatialBlend(float_t  value) ;

constexpr void __cordl_internal_set_spatialize(bool  value) ;

constexpr void __cordl_internal_set_spatializePostEffects(bool  value) ;

constexpr void __cordl_internal_set_spread(float_t  value) ;

/// @brief Method .ctor, addr 0x5b0f3dc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentTime, addr 0x5b0ec34, size 0x20, virtual false, abstract: false, final false
inline float_t get_CurrentTime() ;

/// @brief Method get_NormalizedTime, addr 0x5b0ebe0, size 0x54, virtual false, abstract: false, final false
inline float_t get_NormalizedTime() ;

/// @brief Method get_isPlaying, addr 0x5b0ebbc, size 0x24, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoundBankPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoundBankPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoundBankPlayer(SoundBankPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoundBankPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoundBankPlayer(SoundBankPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3546};

/// [Tooltip("Optional. AudioSource Settings will be used if this is not defined.")]
/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field playOnEnable, offset: 0x28, size: 0x1, def value: None
 bool  ___playOnEnable;

/// @brief Field shuffleOrder, offset: 0x29, size: 0x1, def value: None
 bool  ___shuffleOrder;

/// @brief Field missingSoundsAreOk, offset: 0x2a, size: 0x1, def value: None
 bool  ___missingSoundsAreOk;

/// @brief Field soundBank, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankSO>  ___soundBank;

/// @brief Field outputAudioMixerGroup, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___outputAudioMixerGroup;

/// @brief Field spatialize, offset: 0x40, size: 0x1, def value: None
 bool  ___spatialize;

/// @brief Field spatializePostEffects, offset: 0x41, size: 0x1, def value: None
 bool  ___spatializePostEffects;

/// @brief Field bypassEffects, offset: 0x42, size: 0x1, def value: None
 bool  ___bypassEffects;

/// @brief Field bypassListenerEffects, offset: 0x43, size: 0x1, def value: None
 bool  ___bypassListenerEffects;

/// @brief Field bypassReverbZones, offset: 0x44, size: 0x1, def value: None
 bool  ___bypassReverbZones;

/// @brief Field priority, offset: 0x48, size: 0x4, def value: None
 int32_t  ___priority;

/// [Range(0, 1)]
/// @brief Field spatialBlend, offset: 0x4c, size: 0x4, def value: None
 float_t  ___spatialBlend;

/// @brief Field reverbZoneMix, offset: 0x50, size: 0x4, def value: None
 float_t  ___reverbZoneMix;

/// @brief Field dopplerLevel, offset: 0x54, size: 0x4, def value: None
 float_t  ___dopplerLevel;

/// @brief Field spread, offset: 0x58, size: 0x4, def value: None
 float_t  ___spread;

/// @brief Field rolloffMode, offset: 0x5c, size: 0x4, def value: None
 ::UnityEngine::AudioRolloffMode  ___rolloffMode;

/// @brief Field minDistance, offset: 0x60, size: 0x4, def value: None
 float_t  ___minDistance;

/// @brief Field maxDistance, offset: 0x64, size: 0x4, def value: None
 float_t  ___maxDistance;

/// @brief Field customRolloffCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___customRolloffCurve;

/// @brief Field nextIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ___nextIndex;

/// @brief Field playStartTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___playStartTime;

/// @brief Field playEndTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___playEndTime;

/// @brief Field clipDuration, offset: 0x7c, size: 0x4, def value: None
 float_t  ___clipDuration;

/// @brief Field playlist, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>  ___playlist;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___playOnEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___shuffleOrder) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___missingSoundsAreOk) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___soundBank) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___outputAudioMixerGroup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___spatialize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___spatializePostEffects) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___bypassEffects) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___bypassListenerEffects) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___bypassReverbZones) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___priority) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___spatialBlend) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___reverbZoneMix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___dopplerLevel) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___spread) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___rolloffMode) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___minDistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___maxDistance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___customRolloffCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___nextIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___playStartTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___playEndTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___clipDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SoundBankPlayer, ___playlist) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SoundBankPlayer) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
