#pragma once
// IWYU pragma private; include "Oculus/Interaction/AudioTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__MinMaxPair_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioTrigger)
namespace Oculus::Interaction {
struct MinMaxPair;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Oculus::Interaction {
class AudioTrigger;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::AudioTrigger*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::AudioTrigger*, "Oculus.Interaction", "AudioTrigger");
// Dependencies Oculus.Interaction.MinMaxPair, UnityEngine.AudioClip, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.AudioTrigger
class CORDL_TYPE AudioTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ChanceToPlay, put=set_ChanceToPlay)) float_t  ChanceToPlay;

 __declspec(property(get=get_Loop, put=set_Loop)) bool  Loop;

 __declspec(property(get=get_Pitch, put=set_Pitch)) float_t  Pitch;

 __declspec(property(get=get_PitchRandomization, put=set_PitchRandomization)) ::Oculus::Interaction::MinMaxPair  PitchRandomization;

 __declspec(property(get=get_Spatialize, put=set_Spatialize)) bool  Spatialize;

 __declspec(property(get=get_Volume, put=set_Volume)) float_t  Volume;

 __declspec(property(get=get_VolumeRandomization, put=set_VolumeRandomization)) ::Oculus::Interaction::MinMaxPair  VolumeRandomization;

/// @brief Field _audioClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioClips, put=__cordl_internal_set__audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  _audioClips;

/// @brief Field _audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _chanceToPlay, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__chanceToPlay, put=__cordl_internal_set__chanceToPlay)) float_t  _chanceToPlay;

/// @brief Field _loop, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__loop, put=__cordl_internal_set__loop)) bool  _loop;

/// @brief Field _pitch, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__pitch, put=__cordl_internal_set__pitch)) float_t  _pitch;

/// @brief Field _pitchRandomization, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__pitchRandomization, put=__cordl_internal_set__pitchRandomization)) ::Oculus::Interaction::MinMaxPair  _pitchRandomization;

/// @brief Field _playOnStart, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__playOnStart, put=__cordl_internal_set__playOnStart)) bool  _playOnStart;

/// @brief Field _previousAudioClipIndex, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousAudioClipIndex, put=__cordl_internal_set__previousAudioClipIndex)) int32_t  _previousAudioClipIndex;

/// @brief Field _spatialize, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__spatialize, put=__cordl_internal_set__spatialize)) bool  _spatialize;

/// @brief Field _volume, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__volume, put=__cordl_internal_set__volume)) float_t  _volume;

/// @brief Field _volumeRandomization, offset 0x34, size 0xc 
 __declspec(property(get=__cordl_internal_get__volumeRandomization, put=__cordl_internal_set__volumeRandomization)) ::Oculus::Interaction::MinMaxPair  _volumeRandomization;

/// @brief Method InjectAllAudioTrigger, addr 0xa42c094, size 0x30, virtual false, abstract: false, final false
inline void InjectAllAudioTrigger(::UnityEngine::AudioSource*  audioSource, ::ArrayW<::UnityEngine::AudioClip*>  audioClips) ;

/// @brief Method InjectAudioClips, addr 0xa42c0cc, size 0x8, virtual false, abstract: false, final false
inline void InjectAudioClips(::ArrayW<::UnityEngine::AudioClip*>  audioClips) ;

/// @brief Method InjectAudioSource, addr 0xa42c0c4, size 0x8, virtual false, abstract: false, final false
inline void InjectAudioSource(::UnityEngine::AudioSource*  audioSource) ;

/// @brief Method InjectOptionalPlayOnStart, addr 0xa42c0d4, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalPlayOnStart(bool  playOnStart) ;

static inline ::Oculus::Interaction::AudioTrigger* New_ctor() ;

/// @brief Method PlayAudio, addr 0xa42bc10, size 0x118, virtual false, abstract: false, final false
inline void PlayAudio() ;

/// @brief Method RandomClipWithoutRepeat, addr 0xa42c02c, size 0x68, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> RandomClipWithoutRepeat() ;

/// @brief Method Start, addr 0xa42bf68, size 0xc4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get__audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get__audioClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr float_t const& __cordl_internal_get__chanceToPlay() const;

constexpr float_t& __cordl_internal_get__chanceToPlay() ;

constexpr bool const& __cordl_internal_get__loop() const;

constexpr bool& __cordl_internal_get__loop() ;

constexpr float_t const& __cordl_internal_get__pitch() const;

constexpr float_t& __cordl_internal_get__pitch() ;

constexpr ::Oculus::Interaction::MinMaxPair const& __cordl_internal_get__pitchRandomization() const;

constexpr ::Oculus::Interaction::MinMaxPair& __cordl_internal_get__pitchRandomization() ;

constexpr bool const& __cordl_internal_get__playOnStart() const;

constexpr bool& __cordl_internal_get__playOnStart() ;

constexpr int32_t const& __cordl_internal_get__previousAudioClipIndex() const;

constexpr int32_t& __cordl_internal_get__previousAudioClipIndex() ;

constexpr bool const& __cordl_internal_get__spatialize() const;

constexpr bool& __cordl_internal_get__spatialize() ;

constexpr float_t const& __cordl_internal_get__volume() const;

constexpr float_t& __cordl_internal_get__volume() ;

constexpr ::Oculus::Interaction::MinMaxPair const& __cordl_internal_get__volumeRandomization() const;

constexpr ::Oculus::Interaction::MinMaxPair& __cordl_internal_get__volumeRandomization() ;

constexpr void __cordl_internal_set__audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__chanceToPlay(float_t  value) ;

constexpr void __cordl_internal_set__loop(bool  value) ;

constexpr void __cordl_internal_set__pitch(float_t  value) ;

constexpr void __cordl_internal_set__pitchRandomization(::Oculus::Interaction::MinMaxPair  value) ;

constexpr void __cordl_internal_set__playOnStart(bool  value) ;

constexpr void __cordl_internal_set__previousAudioClipIndex(int32_t  value) ;

constexpr void __cordl_internal_set__spatialize(bool  value) ;

constexpr void __cordl_internal_set__volume(float_t  value) ;

constexpr void __cordl_internal_set__volumeRandomization(::Oculus::Interaction::MinMaxPair  value) ;

/// @brief Method .ctor, addr 0xa42c0dc, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ChanceToPlay, addr 0xa42bf58, size 0x8, virtual false, abstract: false, final false
inline float_t get_ChanceToPlay() ;

/// @brief Method get_Loop, addr 0xa42bf48, size 0x8, virtual false, abstract: false, final false
inline bool get_Loop() ;

/// @brief Method get_Pitch, addr 0xa42bf0c, size 0x8, virtual false, abstract: false, final false
inline float_t get_Pitch() ;

/// @brief Method get_PitchRandomization, addr 0xa42bf1c, size 0x10, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MinMaxPair get_PitchRandomization() ;

/// @brief Method get_Spatialize, addr 0xa42bf38, size 0x8, virtual false, abstract: false, final false
inline bool get_Spatialize() ;

/// @brief Method get_Volume, addr 0xa42bee0, size 0x8, virtual false, abstract: false, final false
inline float_t get_Volume() ;

/// @brief Method get_VolumeRandomization, addr 0xa42bef0, size 0x10, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MinMaxPair get_VolumeRandomization() ;

/// @brief Method set_ChanceToPlay, addr 0xa42bf60, size 0x8, virtual false, abstract: false, final false
inline void set_ChanceToPlay(float_t  value) ;

/// @brief Method set_Loop, addr 0xa42bf50, size 0x8, virtual false, abstract: false, final false
inline void set_Loop(bool  value) ;

/// @brief Method set_Pitch, addr 0xa42bf14, size 0x8, virtual false, abstract: false, final false
inline void set_Pitch(float_t  value) ;

/// @brief Method set_PitchRandomization, addr 0xa42bf2c, size 0xc, virtual false, abstract: false, final false
inline void set_PitchRandomization(::Oculus::Interaction::MinMaxPair  value) ;

/// @brief Method set_Spatialize, addr 0xa42bf40, size 0x8, virtual false, abstract: false, final false
inline void set_Spatialize(bool  value) ;

/// @brief Method set_Volume, addr 0xa42bee8, size 0x8, virtual false, abstract: false, final false
inline void set_Volume(float_t  value) ;

/// @brief Method set_VolumeRandomization, addr 0xa42bf00, size 0xc, virtual false, abstract: false, final false
inline void set_VolumeRandomization(::Oculus::Interaction::MinMaxPair  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioTrigger(AudioTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioTrigger(AudioTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28258};

/// [SerializeField]
/// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [Tooltip("Audio clip arrays with a value greater than 1 will have randomized playback.")]
/// [SerializeField]
/// @brief Field _audioClips, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ____audioClips;

/// [Tooltip("Volume set here will override the volume set on the attached sound source component.")]
/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field _volume, offset: 0x30, size: 0x4, def value: None
 float_t  ____volume;

/// [Tooltip("Check the \'Use Random Range\' bool and adjust the min and max slider values for randomized volume level playback.")]
/// [SerializeField]
/// @brief Field _volumeRandomization, offset: 0x34, size: 0xc, def value: None
 ::Oculus::Interaction::MinMaxPair  ____volumeRandomization;

/// [Tooltip("Pitch set here will override the volume set on the attached sound source component.")]
/// [SerializeField]
/// [Range(-3, 3)]
/// [Space(10)]
/// @brief Field _pitch, offset: 0x40, size: 0x4, def value: None
 float_t  ____pitch;

/// [Tooltip("Check the \'Use Random Range\' bool and adjust the min and max slider values for randomized volume level playback.")]
/// [SerializeField]
/// @brief Field _pitchRandomization, offset: 0x44, size: 0xc, def value: None
 ::Oculus::Interaction::MinMaxPair  ____pitchRandomization;

/// [Tooltip("True by default. Set to false for sounds to bypass the spatializer plugin. Will override settings on attached audio source.")]
/// [SerializeField]
/// [Space(10)]
/// @brief Field _spatialize, offset: 0x50, size: 0x1, def value: None
 bool  ____spatialize;

/// [Tooltip("False by default. Set to true to enable looping on this sound. Will override settings on attached audio source.")]
/// [SerializeField]
/// @brief Field _loop, offset: 0x51, size: 0x1, def value: None
 bool  ____loop;

/// [Tooltip("100% by default. Sets likelihood sample will actually play when called.")]
/// [SerializeField]
/// @brief Field _chanceToPlay, offset: 0x54, size: 0x4, def value: None
 float_t  ____chanceToPlay;

/// [Tooltip("If enabled, audio will play automatically when this gameobject is enabled.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _playOnStart, offset: 0x58, size: 0x1, def value: None
 bool  ____playOnStart;

/// @brief Field _previousAudioClipIndex, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____previousAudioClipIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____audioClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____volume) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____volumeRandomization) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____pitch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____pitchRandomization) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____spatialize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____loop) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____chanceToPlay) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____playOnStart) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::AudioTrigger, ____previousAudioClipIndex) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::AudioTrigger) == 0x60, "Size mismatch!");

} // namespace end def Oculus::Interaction
