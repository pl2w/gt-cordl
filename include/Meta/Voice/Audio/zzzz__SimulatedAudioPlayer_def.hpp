#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/SimulatedAudioPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Audio/zzzz__BaseAudioPlayer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulatedAudioPlayer)
namespace Meta::Voice::Logging {
class IVLogger;
}
// Forward declare root types
namespace Meta::Voice::Audio {
class SimulatedAudioPlayer;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Audio::SimulatedAudioPlayer*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Audio::SimulatedAudioPlayer*, "Meta.Voice.Audio", "SimulatedAudioPlayer");
// [LogCategory((Meta.Voice.Logging.LogCategory)25)]
// Dependencies Meta.Voice.Audio.BaseAudioPlayer
namespace Meta::Voice::Audio {
// Is value type: false
// CS Name: Meta.Voice.Audio.SimulatedAudioPlayer
class CORDL_TYPE SimulatedAudioPlayer : public ::Meta::Voice::Audio::BaseAudioPlayer {
public:
// Declarations
 __declspec(property(get=get_CanSetElapsedSamples)) bool  CanSetElapsedSamples;

 __declspec(property(get=get_ElapsedSamples)) int32_t  ElapsedSamples;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field <Logger>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field _elapsedTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsedTime, put=__cordl_internal_set__elapsedTime)) float_t  _elapsedTime;

/// @brief Field _playing, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__playing, put=__cordl_internal_set__playing)) bool  _playing;

/// @brief Method GetPlaybackErrors, addr 0x9e6cdf0, size 0x18, virtual true, abstract: false, final false
inline ::StringW GetPlaybackErrors() ;

/// @brief Method GetSamplesFromSeconds, addr 0x9e6cc60, size 0x184, virtual false, abstract: false, final false
inline int32_t GetSamplesFromSeconds(float_t  elapsedSeconds) ;

/// @brief Method GetSecondsFromSamples, addr 0x9e6cf84, size 0x12c, virtual false, abstract: false, final false
inline float_t GetSecondsFromSamples(int32_t  samples) ;

/// @brief Method Init, addr 0x9e6cdec, size 0x4, virtual true, abstract: false, final false
inline void Init() ;

static inline ::Meta::Voice::Audio::SimulatedAudioPlayer* New_ctor() ;

/// @brief Method Pause, addr 0x9e6d0b0, size 0x28, virtual true, abstract: false, final false
inline void Pause() ;

/// @brief Method Play, addr 0x9e6ce08, size 0x17c, virtual true, abstract: false, final false
inline void Play(int32_t  offsetSamples) ;

/// @brief Method Resume, addr 0x9e6d0d8, size 0x2c, virtual true, abstract: false, final false
inline void Resume() ;

/// @brief Method Stop, addr 0x9e6d104, size 0x34, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method Update, addr 0x9e6d138, size 0x158, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__elapsedTime() const;

constexpr float_t& __cordl_internal_get__elapsedTime() ;

constexpr bool const& __cordl_internal_get__playing() const;

constexpr bool& __cordl_internal_get__playing() ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__elapsedTime(float_t  value) ;

constexpr void __cordl_internal_set__playing(bool  value) ;

/// @brief Method .ctor, addr 0x9e6d290, size 0x120, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanSetElapsedSamples, addr 0x9e6cc40, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSetElapsedSamples() ;

/// @brief Method get_ElapsedSamples, addr 0x9e6cc48, size 0x18, virtual true, abstract: false, final false
inline int32_t get_ElapsedSamples() ;

/// @brief Method get_IsPlaying, addr 0x9e6cc38, size 0x8, virtual true, abstract: false, final false
inline bool get_IsPlaying() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e6cde4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulatedAudioPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulatedAudioPlayer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulatedAudioPlayer(SimulatedAudioPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedAudioPlayer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulatedAudioPlayer(SimulatedAudioPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25516};

/// @brief Field _elapsedTime, offset: 0x30, size: 0x4, def value: None
 float_t  ____elapsedTime;

/// @brief Field _playing, offset: 0x34, size: 0x1, def value: None
 bool  ____playing;

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Audio::SimulatedAudioPlayer, ____elapsedTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::SimulatedAudioPlayer, ____playing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Audio::SimulatedAudioPlayer, ____Logger_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Audio::SimulatedAudioPlayer) == 0x40, "Size mismatch!");

} // namespace end def Meta::Voice::Audio
