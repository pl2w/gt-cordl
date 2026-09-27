#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSpeakerLoudness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaSpeakerLoudness)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ISpeakerLoudness;
}
namespace GlobalNamespace {
class RigContainer;
}
namespace GlobalNamespace {
class SpeakerVoiceToLoudness;
}
namespace GorillaTag::Audio {
class VoiceToLoudness;
}
namespace GorillaTag {
class IDynamicFloat;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSpeakerLoudness;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSpeakerLoudness*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSpeakerLoudness*, "", "GorillaSpeakerLoudness");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSpeakerLoudness
class CORDL_TYPE GorillaSpeakerLoudness : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsMicEnabled)) bool  IsMicEnabled;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Loudness)) float_t  Loudness;

 __declspec(property(get=get_LoudnessNormalized)) float_t  LoudnessNormalized;

 __declspec(property(get=get_SmoothedLoudness)) float_t  SmoothedLoudness;

/// @brief Field deltaTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_floatValue)) float_t  floatValue;

/// @brief Field isMicEnabled, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isMicEnabled, put=__cordl_internal_set_isMicEnabled)) bool  isMicEnabled;

/// @brief Field isSpeaking, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSpeaking, put=__cordl_internal_set_isSpeaking)) bool  isSpeaking;

/// @brief Field lastLoudness, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastLoudness, put=__cordl_internal_set_lastLoudness)) float_t  lastLoudness;

/// @brief Field loudness, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudness, put=__cordl_internal_set_loudness)) float_t  loudness;

/// @brief Field loudnessBlendStrength, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudnessBlendStrength, put=__cordl_internal_set_loudnessBlendStrength)) float_t  loudnessBlendStrength;

/// @brief Field loudnessUpdateCheckRate, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudnessUpdateCheckRate, put=__cordl_internal_set_loudnessUpdateCheckRate)) float_t  loudnessUpdateCheckRate;

/// @brief Field micConnected, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_micConnected, put=__cordl_internal_set_micConnected)) bool  micConnected;

/// @brief Field normalizedMax, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_normalizedMax, put=__cordl_internal_set_normalizedMax)) float_t  normalizedMax;

/// @brief Field offlineMic, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineMic, put=__cordl_internal_set_offlineMic)) ::UnityW<::UnityEngine::AudioClip>  offlineMic;

/// @brief Field permission, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_permission, put=__cordl_internal_set_permission)) bool  permission;

/// @brief Field recorder, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_recorder, put=__cordl_internal_set_recorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  recorder;

/// @brief Field rigContainer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigContainer, put=__cordl_internal_set_rigContainer)) ::UnityW<::GlobalNamespace::RigContainer>  rigContainer;

/// @brief Field smoothedLoudness, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothedLoudness, put=__cordl_internal_set_smoothedLoudness)) float_t  smoothedLoudness;

/// @brief Field speaker, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_speaker, put=__cordl_internal_set_speaker)) ::UnityW<::Photon::Voice::Unity::Speaker>  speaker;

/// @brief Field speakerVoiceToLoudness, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakerVoiceToLoudness, put=__cordl_internal_set_speakerVoiceToLoudness)) ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  speakerVoiceToLoudness;

/// @brief Field timeLastUpdated, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastUpdated, put=__cordl_internal_set_timeLastUpdated)) float_t  timeLastUpdated;

/// @brief Field timeSinceLoudnessChange, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSinceLoudnessChange, put=__cordl_internal_set_timeSinceLoudnessChange)) float_t  timeSinceLoudnessChange;

/// @brief Field voiceSampleBuffer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSampleBuffer, put=__cordl_internal_set_voiceSampleBuffer)) ::ArrayW<float_t>  voiceSampleBuffer;

/// @brief Field voiceToLoudness, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceToLoudness, put=__cordl_internal_set_voiceToLoudness)) ::UnityW<::GorillaTag::Audio::VoiceToLoudness>  voiceToLoudness;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ISpeakerLoudness"
constexpr operator  ::GlobalNamespace::ISpeakerLoudness*() noexcept;

/// @brief Convert operator to "::GorillaTag::IDynamicFloat"
constexpr operator  ::GorillaTag::IDynamicFloat*() noexcept;

/// @brief Method CheckMicConnection, addr 0x5925700, size 0x88, virtual false, abstract: false, final false
inline bool CheckMicConnection() ;

static inline ::GlobalNamespace::GorillaSpeakerLoudness* New_ctor() ;

/// @brief Method OnDisable, addr 0x5924cb4, size 0x8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5924cac, size 0x8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SliceUpdate, addr 0x5924cbc, size 0x44, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x5924c38, size 0x74, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateLoudness, addr 0x5924dc0, size 0x7e8, virtual false, abstract: false, final false
inline void UpdateLoudness() ;

/// @brief Method UpdateMicEnabled, addr 0x5924d00, size 0xc0, virtual false, abstract: false, final false
inline void UpdateMicEnabled() ;

/// @brief Method UpdateSmoothedLoudness, addr 0x59255a8, size 0x158, virtual false, abstract: false, final false
inline void UpdateSmoothedLoudness() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr bool const& __cordl_internal_get_isMicEnabled() const;

constexpr bool& __cordl_internal_get_isMicEnabled() ;

constexpr bool const& __cordl_internal_get_isSpeaking() const;

constexpr bool& __cordl_internal_get_isSpeaking() ;

constexpr float_t const& __cordl_internal_get_lastLoudness() const;

constexpr float_t& __cordl_internal_get_lastLoudness() ;

constexpr float_t const& __cordl_internal_get_loudness() const;

constexpr float_t& __cordl_internal_get_loudness() ;

constexpr float_t const& __cordl_internal_get_loudnessBlendStrength() const;

constexpr float_t& __cordl_internal_get_loudnessBlendStrength() ;

constexpr float_t const& __cordl_internal_get_loudnessUpdateCheckRate() const;

constexpr float_t& __cordl_internal_get_loudnessUpdateCheckRate() ;

constexpr bool const& __cordl_internal_get_micConnected() const;

constexpr bool& __cordl_internal_get_micConnected() ;

constexpr float_t const& __cordl_internal_get_normalizedMax() const;

constexpr float_t& __cordl_internal_get_normalizedMax() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_offlineMic() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_offlineMic() ;

constexpr bool const& __cordl_internal_get_permission() const;

constexpr bool& __cordl_internal_get_permission() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_recorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_recorder() ;

constexpr ::UnityW<::GlobalNamespace::RigContainer> const& __cordl_internal_get_rigContainer() const;

constexpr ::UnityW<::GlobalNamespace::RigContainer>& __cordl_internal_get_rigContainer() ;

constexpr float_t const& __cordl_internal_get_smoothedLoudness() const;

constexpr float_t& __cordl_internal_get_smoothedLoudness() ;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& __cordl_internal_get_speaker() const;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& __cordl_internal_get_speaker() ;

constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness> const& __cordl_internal_get_speakerVoiceToLoudness() const;

constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>& __cordl_internal_get_speakerVoiceToLoudness() ;

constexpr float_t const& __cordl_internal_get_timeLastUpdated() const;

constexpr float_t& __cordl_internal_get_timeLastUpdated() ;

constexpr float_t const& __cordl_internal_get_timeSinceLoudnessChange() const;

constexpr float_t& __cordl_internal_get_timeSinceLoudnessChange() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_voiceSampleBuffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_voiceSampleBuffer() ;

constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness> const& __cordl_internal_get_voiceToLoudness() const;

constexpr ::UnityW<::GorillaTag::Audio::VoiceToLoudness>& __cordl_internal_get_voiceToLoudness() ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_isMicEnabled(bool  value) ;

constexpr void __cordl_internal_set_isSpeaking(bool  value) ;

constexpr void __cordl_internal_set_lastLoudness(float_t  value) ;

constexpr void __cordl_internal_set_loudness(float_t  value) ;

constexpr void __cordl_internal_set_loudnessBlendStrength(float_t  value) ;

constexpr void __cordl_internal_set_loudnessUpdateCheckRate(float_t  value) ;

constexpr void __cordl_internal_set_micConnected(bool  value) ;

constexpr void __cordl_internal_set_normalizedMax(float_t  value) ;

constexpr void __cordl_internal_set_offlineMic(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_permission(bool  value) ;

constexpr void __cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_rigContainer(::UnityW<::GlobalNamespace::RigContainer>  value) ;

constexpr void __cordl_internal_set_smoothedLoudness(float_t  value) ;

constexpr void __cordl_internal_set_speaker(::UnityW<::Photon::Voice::Unity::Speaker>  value) ;

constexpr void __cordl_internal_set_speakerVoiceToLoudness(::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  value) ;

constexpr void __cordl_internal_set_timeLastUpdated(float_t  value) ;

constexpr void __cordl_internal_set_timeSinceLoudnessChange(float_t  value) ;

constexpr void __cordl_internal_set_voiceSampleBuffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_voiceToLoudness(::UnityW<::GorillaTag::Audio::VoiceToLoudness>  value) ;

/// @brief Method .ctor, addr 0x5925788, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsMicEnabled, addr 0x5924c28, size 0x8, virtual true, abstract: false, final true
inline bool get_IsMicEnabled() ;

/// @brief Method get_IsSpeaking, addr 0x5924bf0, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpeaking() ;

/// @brief Method get_Loudness, addr 0x5924bf8, size 0x8, virtual true, abstract: false, final true
inline float_t get_Loudness() ;

/// @brief Method get_LoudnessNormalized, addr 0x5924c00, size 0x14, virtual false, abstract: false, final false
inline float_t get_LoudnessNormalized() ;

/// @brief Method get_SmoothedLoudness, addr 0x5924c30, size 0x8, virtual false, abstract: false, final false
inline float_t get_SmoothedLoudness() ;

/// @brief Method get_floatValue, addr 0x5924c14, size 0x14, virtual true, abstract: false, final true
inline float_t get_floatValue() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GlobalNamespace::ISpeakerLoudness"
constexpr ::GlobalNamespace::ISpeakerLoudness* i___GlobalNamespace__ISpeakerLoudness() noexcept;

/// @brief Convert to "::GorillaTag::IDynamicFloat"
constexpr ::GorillaTag::IDynamicFloat* i___GorillaTag__IDynamicFloat() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSpeakerLoudness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSpeakerLoudness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSpeakerLoudness(GorillaSpeakerLoudness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSpeakerLoudness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSpeakerLoudness(GorillaSpeakerLoudness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2217};

/// @brief Field isSpeaking, offset: 0x20, size: 0x1, def value: None
 bool  ___isSpeaking;

/// @brief Field loudness, offset: 0x24, size: 0x4, def value: None
 float_t  ___loudness;

/// [SerializeField]
/// @brief Field normalizedMax, offset: 0x28, size: 0x4, def value: None
 float_t  ___normalizedMax;

/// @brief Field isMicEnabled, offset: 0x2c, size: 0x1, def value: None
 bool  ___isMicEnabled;

/// @brief Field rigContainer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigContainer>  ___rigContainer;

/// @brief Field speaker, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Speaker>  ___speaker;

/// @brief Field speakerVoiceToLoudness, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  ___speakerVoiceToLoudness;

/// @brief Field recorder, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___recorder;

/// @brief Field voiceToLoudness, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Audio::VoiceToLoudness>  ___voiceToLoudness;

/// @brief Field smoothedLoudness, offset: 0x58, size: 0x4, def value: None
 float_t  ___smoothedLoudness;

/// @brief Field lastLoudness, offset: 0x5c, size: 0x4, def value: None
 float_t  ___lastLoudness;

/// @brief Field timeSinceLoudnessChange, offset: 0x60, size: 0x4, def value: None
 float_t  ___timeSinceLoudnessChange;

/// @brief Field loudnessUpdateCheckRate, offset: 0x64, size: 0x4, def value: None
 float_t  ___loudnessUpdateCheckRate;

/// @brief Field loudnessBlendStrength, offset: 0x68, size: 0x4, def value: None
 float_t  ___loudnessBlendStrength;

/// @brief Field permission, offset: 0x6c, size: 0x1, def value: None
 bool  ___permission;

/// @brief Field micConnected, offset: 0x6d, size: 0x1, def value: None
 bool  ___micConnected;

/// @brief Field timeLastUpdated, offset: 0x70, size: 0x4, def value: None
 float_t  ___timeLastUpdated;

/// @brief Field deltaTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field offlineMic, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___offlineMic;

/// @brief Field voiceSampleBuffer, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<float_t>  ___voiceSampleBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___isSpeaking) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___loudness) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___normalizedMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___isMicEnabled) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___rigContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___speaker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___speakerVoiceToLoudness) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___recorder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___voiceToLoudness) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___smoothedLoudness) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___lastLoudness) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___timeSinceLoudnessChange) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___loudnessUpdateCheckRate) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___loudnessBlendStrength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___permission) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___micConnected) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___timeLastUpdated) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___deltaTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___offlineMic) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSpeakerLoudness, ___voiceSampleBuffer) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSpeakerLoudness) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
