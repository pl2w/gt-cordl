#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeakerVoiceLoudnessAudioOut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__UnityAudioOut_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SpeakerVoiceLoudnessAudioOut)
namespace GlobalNamespace {
class SpeakerVoiceToLoudness;
}
namespace Photon::Voice {
class AudioOutDelayControl_PlayDelayConfig;
}
namespace Photon::Voice {
class ILogger;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class SpeakerVoiceLoudnessAudioOut;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeakerVoiceLoudnessAudioOut*, "", "SpeakerVoiceLoudnessAudioOut");
// Dependencies Photon.Voice.Unity.UnityAudioOut
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeakerVoiceLoudnessAudioOut
class CORDL_TYPE SpeakerVoiceLoudnessAudioOut : public ::Photon::Voice::Unity::UnityAudioOut {
public:
// Declarations
/// @brief Field voiceToLoudness, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceToLoudness, put=__cordl_internal_set_voiceToLoudness)) ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  voiceToLoudness;

static inline ::GlobalNamespace::SpeakerVoiceLoudnessAudioOut* New_ctor(::GlobalNamespace::SpeakerVoiceToLoudness*  speaker, ::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

/// @brief Method OutWrite, addr 0x56adc54, size 0x180, virtual true, abstract: false, final false
inline void OutWrite(::ArrayW<float_t>  data, int32_t  offsetSamples) ;

constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness> const& __cordl_internal_get_voiceToLoudness() const;

constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>& __cordl_internal_get_voiceToLoudness() ;

constexpr void __cordl_internal_set_voiceToLoudness(::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  value) ;

/// @brief Method .ctor, addr 0x56adc10, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SpeakerVoiceToLoudness*  speaker, ::UnityEngine::AudioSource*  audioSource, ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  playDelayConfig, ::Photon::Voice::ILogger*  logger, ::StringW  logPrefix, bool  debugInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeakerVoiceLoudnessAudioOut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceLoudnessAudioOut", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeakerVoiceLoudnessAudioOut(SpeakerVoiceLoudnessAudioOut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceLoudnessAudioOut", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeakerVoiceLoudnessAudioOut(SpeakerVoiceLoudnessAudioOut const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{931};

/// @brief Field voiceToLoudness, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  ___voiceToLoudness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeakerVoiceLoudnessAudioOut, ___voiceToLoudness) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeakerVoiceLoudnessAudioOut) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
