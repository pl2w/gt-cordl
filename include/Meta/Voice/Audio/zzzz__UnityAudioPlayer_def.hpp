#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/UnityAudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Audio/zzzz__BaseAudioPlayer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAudioPlayer)
namespace Meta::Voice::Audio {
class IAudioSourceProvider;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class UnityAudioPlayer;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::UnityAudioPlayer*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::UnityAudioPlayer*, "Meta.Voice.Audio", "UnityAudioPlayer");
// Dependencies Meta.Voice.Audio.BaseAudioPlayer
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.UnityAudioPlayer
class CORDL_TYPE UnityAudioPlayer : public ::Meta::Voice::Audio::BaseAudioPlayer {
public:
// Declarations
 __declspec(property(get=get_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  AudioSource;

 __declspec(property(get=get_CanSetElapsedSamples)) bool  CanSetElapsedSamples;

 __declspec(property(get=get_CloneAudioSource)) bool  CloneAudioSource;

 __declspec(property(get=get_ElapsedSamples)) int32_t  ElapsedSamples;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

/// @brief Field _audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _cloneAudioSource, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__cloneAudioSource, put=__cordl_internal_set__cloneAudioSource)) bool  _cloneAudioSource;

/// @brief Field _local, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__local, put=__cordl_internal_set__local)) bool  _local;

/// @brief Field _offset, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) int32_t  _offset;

/// @brief Convert operator to "::Meta::Voice::Audio::IAudioSourceProvider"
constexpr operator  ::Meta::Voice::Audio::IAudioSourceProvider*() noexcept;

/// @brief Method Awake, addr 0x9e6d4d8, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetPlaybackErrors, addr 0x9e6d930, size 0x94, virtual true, abstract: false, final false
inline ::StringW GetPlaybackErrors() ;

/// @brief Method Init, addr 0x9e6d588, size 0x3a8, virtual true, abstract: false, final false
inline void Init() ;

static inline ::Meta::Voice::Audio::UnityAudioPlayer* New_ctor() ;

/// @brief Method OnReadRawSamples, addr 0x9e6dcc0, size 0x108, virtual false, abstract: false, final false
inline void OnReadRawSamples(::ArrayW<float_t>  samples) ;

/// @brief Method OnSetRawPosition, addr 0x9e6dcb8, size 0x8, virtual false, abstract: false, final false
inline void OnSetRawPosition(int32_t  offset) ;

/// @brief Method Pause, addr 0x9e6ddc8, size 0x3c, virtual true, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x9e6d9c4, size 0x2f4, virtual true, abstract: false, final false
inline void Play(int32_t  offsetSamples) ;

/// @brief Method Resume, addr 0x9e6de04, size 0x3c, virtual true, abstract: false, final false
inline void Resume() ;

/// @brief Method Stop, addr 0x9e6de40, size 0x108, virtual true, abstract: false, final false
inline void Stop() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr bool const& __cordl_internal_get__cloneAudioSource() const;

constexpr bool& __cordl_internal_get__cloneAudioSource() ;

constexpr bool const& __cordl_internal_get__local() const;

constexpr bool& __cordl_internal_get__local() ;

constexpr int32_t const& __cordl_internal_get__offset() const;

constexpr int32_t& __cordl_internal_get__offset() ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__cloneAudioSource(bool  value) ;

constexpr void __cordl_internal_set__local(bool  value) ;

constexpr void __cordl_internal_set__offset(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e6df48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioSource, addr 0x9e6d3b0, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AudioSource> get_AudioSource() ;

/// @brief Method get_CanSetElapsedSamples, addr 0x9e6d448, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSetElapsedSamples() ;

/// @brief Method get_CloneAudioSource, addr 0x9e6d3b8, size 0x8, virtual false, abstract: false, final false
inline bool get_CloneAudioSource() ;

/// @brief Method get_ElapsedSamples, addr 0x9e6d450, size 0x88, virtual true, abstract: false, final false
inline int32_t get_ElapsedSamples() ;

/// @brief Method get_IsPlaying, addr 0x9e6d3c0, size 0x88, virtual true, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Convert to "::Meta::Voice::Audio::IAudioSourceProvider"
constexpr ::Meta::Voice::Audio::IAudioSourceProvider* i___Meta__Voice__Audio__IAudioSourceProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAudioPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAudioPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAudioPlayer(UnityAudioPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAudioPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAudioPlayer(UnityAudioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25517};

/// [Header("Playback Settings")]
/// [Tooltip("Audio source to be used for text-to-speech playback")]
/// [SerializeField]
/// @brief Field _audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [Tooltip("Duplicates audio source reference on awake instead of using it directly.")]
/// [SerializeField]
/// @brief Field _cloneAudioSource, offset: 0x38, size: 0x1, def value: None
 bool  ____cloneAudioSource;

/// @brief Field _local, offset: 0x39, size: 0x1, def value: None
 bool  ____local;

/// @brief Field _offset, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::UnityAudioPlayer, ____audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::UnityAudioPlayer, ____cloneAudioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::UnityAudioPlayer, ____local) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::UnityAudioPlayer, ____offset) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::UnityAudioPlayer) == 0x40, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
