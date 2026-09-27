#pragma once
// IWYU pragma private; include "GlobalNamespace/SpeakerVoiceToLoudness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpeakerVoiceToLoudness)
namespace GlobalNamespace {
class SpeakerVoiceToLoudness___c__DisplayClass3_0;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace Photon::Voice {
class AudioOutDelayControl_PlayDelayConfig;
}
namespace Photon::Voice {
template<typename T>
class IAudioOut_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SpeakerVoiceToLoudness;
}
namespace GlobalNamespace {
class SpeakerVoiceToLoudness___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpeakerVoiceToLoudness*);
MARK_REF_T(::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeakerVoiceToLoudness*, "", "SpeakerVoiceToLoudness");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0*, "", "SpeakerVoiceToLoudness/<>c__DisplayClass3_0");
// [RequireComponent(typeof(Photon.Voice.Unity.Speaker))]
// Dependencies Photon.Voice.Unity.PlaybackDelaySettings, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeakerVoiceToLoudness
class CORDL_TYPE SpeakerVoiceToLoudness : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass3_0 = ::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0;

/// @brief Field loudness, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loudness, put=__cordl_internal_set_loudness)) float_t  loudness;

/// @brief Field playbackDelaySettings, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_playbackDelaySettings, put=__cordl_internal_set_playbackDelaySettings)) ::Photon::Voice::Unity::PlaybackDelaySettings  playbackDelaySettings;

/// @brief Method Awake, addr 0x56ad94c, size 0x70, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetVolumeTracking, addr 0x56ad9bc, size 0x11c, virtual false, abstract: false, final false
inline ::System::Func_1<::Photon::Voice::IAudioOut_1<float_t>*>* GetVolumeTracking(::Photon::Voice::Unity::Speaker*  speaker) ;

static inline ::GlobalNamespace::SpeakerVoiceToLoudness* New_ctor() ;

constexpr float_t const& __cordl_internal_get_loudness() const;

constexpr float_t& __cordl_internal_get_loudness() ;

constexpr ::Photon::Voice::Unity::PlaybackDelaySettings const& __cordl_internal_get_playbackDelaySettings() const;

constexpr ::Photon::Voice::Unity::PlaybackDelaySettings& __cordl_internal_get_playbackDelaySettings() ;

constexpr void __cordl_internal_set_loudness(float_t  value) ;

constexpr void __cordl_internal_set_playbackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  value) ;

/// @brief Method .ctor, addr 0x56adae0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeakerVoiceToLoudness() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceToLoudness", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeakerVoiceToLoudness(SpeakerVoiceToLoudness && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceToLoudness", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeakerVoiceToLoudness(SpeakerVoiceToLoudness const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{930};

/// [SerializeField]
/// @brief Field playbackDelaySettings, offset: 0x20, size: 0xc, def value: None
 ::Photon::Voice::Unity::PlaybackDelaySettings  ___playbackDelaySettings;

/// @brief Field loudness, offset: 0x2c, size: 0x4, def value: None
 float_t  ___loudness;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeakerVoiceToLoudness, ___playbackDelaySettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeakerVoiceToLoudness, ___loudness) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeakerVoiceToLoudness) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpeakerVoiceToLoudness/<>c__DisplayClass3_0
class CORDL_TYPE SpeakerVoiceToLoudness___c__DisplayClass3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  __4__this;

/// @brief Field pdc, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pdc, put=__cordl_internal_set_pdc)) ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  pdc;

/// @brief Field speaker, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_speaker, put=__cordl_internal_set_speaker)) ::UnityW<::Photon::Voice::Unity::Speaker>  speaker;

static inline ::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0* New_ctor() ;

/// @brief Method <GetVolumeTracking>b__0, addr 0x56adafc, size 0x114, virtual false, abstract: false, final false
inline ::Photon::Voice::IAudioOut_1<float_t>* _GetVolumeTracking_b__0() ;

constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>& __cordl_internal_get___4__this() ;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig* const& __cordl_internal_get_pdc() const;

constexpr ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*& __cordl_internal_get_pdc() ;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& __cordl_internal_get_speaker() const;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& __cordl_internal_get_speaker() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  value) ;

constexpr void __cordl_internal_set_pdc(::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  value) ;

constexpr void __cordl_internal_set_speaker(::UnityW<::Photon::Voice::Unity::Speaker>  value) ;

/// @brief Method .ctor, addr 0x56adad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpeakerVoiceToLoudness___c__DisplayClass3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceToLoudness___c__DisplayClass3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpeakerVoiceToLoudness___c__DisplayClass3_0(SpeakerVoiceToLoudness___c__DisplayClass3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpeakerVoiceToLoudness___c__DisplayClass3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpeakerVoiceToLoudness___c__DisplayClass3_0(SpeakerVoiceToLoudness___c__DisplayClass3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{929};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SpeakerVoiceToLoudness>  _____4__this;

/// @brief Field speaker, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Speaker>  ___speaker;

/// @brief Field pdc, offset: 0x20, size: 0x8, def value: None
 ::Photon::Voice::AudioOutDelayControl_PlayDelayConfig*  ___pdc;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0, ___speaker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0, ___pdc) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpeakerVoiceToLoudness___c__DisplayClass3_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
