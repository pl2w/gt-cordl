#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/WebRtcAudioDsp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRtcAudioDsp)
namespace Photon::Voice::Unity {
class AudioOutCapture;
}
namespace Photon::Voice::Unity {
class PhotonVoiceCreatedParams;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice {
class LocalVoiceAudioShort;
}
namespace Photon::Voice {
class WebRTCAudioProcessor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioListener;
}
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class WebRtcAudioDsp;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::WebRtcAudioDsp*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::WebRtcAudioDsp*, "Photon.Voice.Unity", "WebRtcAudioDsp");
// [RequireComponent(typeof(Photon.Voice.Unity.Recorder))]
// [DisallowMultipleComponent]
// Dependencies Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.WebRtcAudioDsp
class CORDL_TYPE WebRtcAudioDsp : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
 __declspec(property(get=get_AEC, put=set_AEC)) bool  AEC;

/// @brief [Obsolete("Use AEC instead on all platforms, internally according AEC will be used either mobile or not.")]
 __declspec(property(get=get_AECMobile, put=set_AECMobile)) bool  AECMobile;

/// @brief Field AECMobileComfortNoise, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_AECMobileComfortNoise, put=__cordl_internal_set_AECMobileComfortNoise)) bool  AECMobileComfortNoise;

 __declspec(property(get=get_AGC, put=set_AGC)) bool  AGC;

 __declspec(property(get=get_AecHighPass, put=set_AecHighPass)) bool  AecHighPass;

 __declspec(property(get=get_AecOnlyWhenEnabled, put=set_AecOnlyWhenEnabled)) bool  AecOnlyWhenEnabled;

 __declspec(property(get=get_AgcCompressionGain, put=set_AgcCompressionGain)) int32_t  AgcCompressionGain;

/// @brief Field AutoRestartOnAudioChannelsMismatch, offset 0x7a, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoRestartOnAudioChannelsMismatch, put=__cordl_internal_set_AutoRestartOnAudioChannelsMismatch)) bool  AutoRestartOnAudioChannelsMismatch;

 __declspec(property(get=get_Bypass, put=set_Bypass)) bool  Bypass;

/// @brief Field ForceNormalAecInMobile, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_ForceNormalAecInMobile, put=__cordl_internal_set_ForceNormalAecInMobile)) bool  ForceNormalAecInMobile;

 __declspec(property(get=get_HighPass, put=set_HighPass)) bool  HighPass;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_NoiseSuppression, put=set_NoiseSuppression)) bool  NoiseSuppression;

 __declspec(property(get=get_ReverseStreamDelayMs, put=set_ReverseStreamDelayMs)) int32_t  ReverseStreamDelayMs;

 __declspec(property(get=get_VAD, put=set_VAD)) bool  VAD;

/// @brief Field aec, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_aec, put=__cordl_internal_set_aec)) bool  aec;

/// @brief Field aecHighPass, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_aecHighPass, put=__cordl_internal_set_aecHighPass)) bool  aecHighPass;

/// @brief Field aecOnlyWhenEnabled, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get_aecOnlyWhenEnabled, put=__cordl_internal_set_aecOnlyWhenEnabled)) bool  aecOnlyWhenEnabled;

/// @brief Field aecStarted, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_aecStarted, put=__cordl_internal_set_aecStarted)) bool  aecStarted;

/// @brief Field agc, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_agc, put=__cordl_internal_set_agc)) bool  agc;

/// @brief Field agcCompressionGain, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_agcCompressionGain, put=__cordl_internal_set_agcCompressionGain)) int32_t  agcCompressionGain;

/// @brief Field audioListener, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioListener, put=__cordl_internal_set_audioListener)) ::UnityW<::UnityEngine::AudioListener>  audioListener;

/// @brief Field audioOutCapture, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioOutCapture, put=__cordl_internal_set_audioOutCapture)) ::UnityW<::Photon::Voice::Unity::AudioOutCapture>  audioOutCapture;

/// @brief Field autoDestroyAudioOutCapture, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoDestroyAudioOutCapture, put=__cordl_internal_set_autoDestroyAudioOutCapture)) bool  autoDestroyAudioOutCapture;

/// @brief Field bypass, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypass, put=__cordl_internal_set_bypass)) bool  bypass;

/// @brief Field channelsMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_channelsMap, put=setStaticF_channelsMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>*  channelsMap;

/// @brief Field highPass, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get_highPass, put=__cordl_internal_set_highPass)) bool  highPass;

/// @brief Field localVoice, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_localVoice, put=__cordl_internal_set_localVoice)) ::Photon::Voice::LocalVoiceAudioShort*  localVoice;

/// @brief Field noiseSuppression, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get_noiseSuppression, put=__cordl_internal_set_noiseSuppression)) bool  noiseSuppression;

/// @brief Field outputSampleRate, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_outputSampleRate, put=__cordl_internal_set_outputSampleRate)) int32_t  outputSampleRate;

/// @brief Field proc, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_proc, put=__cordl_internal_set_proc)) ::Photon::Voice::WebRTCAudioProcessor*  proc;

/// @brief Field recorder, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_recorder, put=__cordl_internal_set_recorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  recorder;

/// @brief Field reverseChannels, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverseChannels, put=__cordl_internal_set_reverseChannels)) int32_t  reverseChannels;

/// @brief Field reverseStreamDelayMs, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_reverseStreamDelayMs, put=__cordl_internal_set_reverseStreamDelayMs)) int32_t  reverseStreamDelayMs;

/// @brief Field threadSafety, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_threadSafety, put=__cordl_internal_set_threadSafety)) ::System::Object*  threadSafety;

/// @brief Field vad, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_vad, put=__cordl_internal_set_vad)) bool  vad;

/// @brief Method AudioListenerChecks, addr 0xa787b10, size 0x348, virtual false, abstract: false, final false
inline bool AudioListenerChecks(::UnityEngine::AudioListener*  listener, bool  log) ;

/// @brief Method AudioOutCaptureChecks, addr 0xa785640, size 0x368, virtual false, abstract: false, final false
inline bool AudioOutCaptureChecks(::Photon::Voice::Unity::AudioOutCapture*  capture, bool  listenerChecks, bool  log) ;

/// @brief Method Awake, addr 0xa784654, size 0x20c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Init, addr 0xa78734c, size 0x304, virtual false, abstract: false, final false
inline bool Init() ;

/// @brief Method InitAudioOutCapture, addr 0xa7850ac, size 0x594, virtual false, abstract: false, final false
inline bool InitAudioOutCapture() ;

static inline ::Photon::Voice::Unity::WebRtcAudioDsp* New_ctor() ;

/// @brief Method OnAudioConfigurationChanged, addr 0xa785ea4, size 0x4e4, virtual false, abstract: false, final false
inline void OnAudioConfigurationChanged(bool  deviceWasChanged) ;

/// @brief Method OnAudioOutFrameFloat, addr 0xa786904, size 0x418, virtual false, abstract: false, final false
inline void OnAudioOutFrameFloat(::ArrayW<float_t>  data, int32_t  outChannels) ;

/// @brief Method OnDestroy, addr 0xa787754, size 0x88, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa784a50, size 0xd0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa784868, size 0x1e8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PhotonVoiceCreated, addr 0xa786d1c, size 0x630, virtual false, abstract: false, final false
inline void PhotonVoiceCreated(::Photon::Voice::Unity::PhotonVoiceCreatedParams*  p) ;

/// @brief Method PhotonVoiceRemoved, addr 0xa787650, size 0x4, virtual false, abstract: false, final false
inline void PhotonVoiceRemoved() ;

/// @brief Method Restart, addr 0xa786388, size 0x57c, virtual false, abstract: false, final false
inline void Restart() ;

/// @brief Method SetOrSwitchAudioListener, addr 0xa7880d4, size 0xdc, virtual false, abstract: false, final false
inline bool SetOrSwitchAudioListener(::UnityEngine::AudioListener*  listener) ;

/// @brief Method SetOrSwitchAudioListener, addr 0xa7877dc, size 0x334, virtual false, abstract: false, final false
inline bool SetOrSwitchAudioListener(::UnityEngine::AudioListener*  listener, bool  extraChecks, bool  log) ;

/// @brief Method SetOrSwitchAudioOutCapture, addr 0xa7881b0, size 0xec, virtual false, abstract: false, final false
inline bool SetOrSwitchAudioOutCapture(::Photon::Voice::Unity::AudioOutCapture*  capture) ;

/// @brief Method SetOrSwitchAudioOutCapture, addr 0xa787e58, size 0x27c, virtual false, abstract: false, final false
inline bool SetOrSwitchAudioOutCapture(::Photon::Voice::Unity::AudioOutCapture*  capture, bool  extraChecks, bool  log) ;

/// @brief Method StartAec, addr 0xa7859a8, size 0x1c8, virtual false, abstract: false, final false
inline void StartAec() ;

/// @brief Method StopAllProcessing, addr 0xa787654, size 0x100, virtual false, abstract: false, final false
inline void StopAllProcessing() ;

/// @brief Method SupportedPlatformCheck, addr 0xa784860, size 0x8, virtual false, abstract: false, final false
inline bool SupportedPlatformCheck() ;

/// @brief Method ToggleAec, addr 0xa783af0, size 0x2f8, virtual false, abstract: false, final false
inline void ToggleAec() ;

/// @brief Method ToggleAecOutputListener, addr 0xa784b20, size 0x58c, virtual false, abstract: false, final false
inline bool ToggleAecOutputListener(bool  on) ;

/// @brief Method UnsubscribeFromAudioOutCapture, addr 0xa785b70, size 0x334, virtual false, abstract: false, final false
inline bool UnsubscribeFromAudioOutCapture(bool  destroy) ;

constexpr bool const& __cordl_internal_get_AECMobileComfortNoise() const;

constexpr bool& __cordl_internal_get_AECMobileComfortNoise() ;

constexpr bool const& __cordl_internal_get_AutoRestartOnAudioChannelsMismatch() const;

constexpr bool& __cordl_internal_get_AutoRestartOnAudioChannelsMismatch() ;

constexpr bool const& __cordl_internal_get_ForceNormalAecInMobile() const;

constexpr bool& __cordl_internal_get_ForceNormalAecInMobile() ;

constexpr bool const& __cordl_internal_get_aec() const;

constexpr bool& __cordl_internal_get_aec() ;

constexpr bool const& __cordl_internal_get_aecHighPass() const;

constexpr bool& __cordl_internal_get_aecHighPass() ;

constexpr bool const& __cordl_internal_get_aecOnlyWhenEnabled() const;

constexpr bool& __cordl_internal_get_aecOnlyWhenEnabled() ;

constexpr bool const& __cordl_internal_get_aecStarted() const;

constexpr bool& __cordl_internal_get_aecStarted() ;

constexpr bool const& __cordl_internal_get_agc() const;

constexpr bool& __cordl_internal_get_agc() ;

constexpr int32_t const& __cordl_internal_get_agcCompressionGain() const;

constexpr int32_t& __cordl_internal_get_agcCompressionGain() ;

constexpr ::UnityW<::UnityEngine::AudioListener> const& __cordl_internal_get_audioListener() const;

constexpr ::UnityW<::UnityEngine::AudioListener>& __cordl_internal_get_audioListener() ;

constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture> const& __cordl_internal_get_audioOutCapture() const;

constexpr ::UnityW<::Photon::Voice::Unity::AudioOutCapture>& __cordl_internal_get_audioOutCapture() ;

constexpr bool const& __cordl_internal_get_autoDestroyAudioOutCapture() const;

constexpr bool& __cordl_internal_get_autoDestroyAudioOutCapture() ;

constexpr bool const& __cordl_internal_get_bypass() const;

constexpr bool& __cordl_internal_get_bypass() ;

constexpr bool const& __cordl_internal_get_highPass() const;

constexpr bool& __cordl_internal_get_highPass() ;

constexpr ::Photon::Voice::LocalVoiceAudioShort* const& __cordl_internal_get_localVoice() const;

constexpr ::Photon::Voice::LocalVoiceAudioShort*& __cordl_internal_get_localVoice() ;

constexpr bool const& __cordl_internal_get_noiseSuppression() const;

constexpr bool& __cordl_internal_get_noiseSuppression() ;

constexpr int32_t const& __cordl_internal_get_outputSampleRate() const;

constexpr int32_t& __cordl_internal_get_outputSampleRate() ;

constexpr ::Photon::Voice::WebRTCAudioProcessor* const& __cordl_internal_get_proc() const;

constexpr ::Photon::Voice::WebRTCAudioProcessor*& __cordl_internal_get_proc() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_recorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_recorder() ;

constexpr int32_t const& __cordl_internal_get_reverseChannels() const;

constexpr int32_t& __cordl_internal_get_reverseChannels() ;

constexpr int32_t const& __cordl_internal_get_reverseStreamDelayMs() const;

constexpr int32_t& __cordl_internal_get_reverseStreamDelayMs() ;

constexpr ::System::Object* const& __cordl_internal_get_threadSafety() const;

constexpr ::System::Object*& __cordl_internal_get_threadSafety() ;

constexpr bool const& __cordl_internal_get_vad() const;

constexpr bool& __cordl_internal_get_vad() ;

constexpr void __cordl_internal_set_AECMobileComfortNoise(bool  value) ;

constexpr void __cordl_internal_set_AutoRestartOnAudioChannelsMismatch(bool  value) ;

constexpr void __cordl_internal_set_ForceNormalAecInMobile(bool  value) ;

constexpr void __cordl_internal_set_aec(bool  value) ;

constexpr void __cordl_internal_set_aecHighPass(bool  value) ;

constexpr void __cordl_internal_set_aecOnlyWhenEnabled(bool  value) ;

constexpr void __cordl_internal_set_aecStarted(bool  value) ;

constexpr void __cordl_internal_set_agc(bool  value) ;

constexpr void __cordl_internal_set_agcCompressionGain(int32_t  value) ;

constexpr void __cordl_internal_set_audioListener(::UnityW<::UnityEngine::AudioListener>  value) ;

constexpr void __cordl_internal_set_audioOutCapture(::UnityW<::Photon::Voice::Unity::AudioOutCapture>  value) ;

constexpr void __cordl_internal_set_autoDestroyAudioOutCapture(bool  value) ;

constexpr void __cordl_internal_set_bypass(bool  value) ;

constexpr void __cordl_internal_set_highPass(bool  value) ;

constexpr void __cordl_internal_set_localVoice(::Photon::Voice::LocalVoiceAudioShort*  value) ;

constexpr void __cordl_internal_set_noiseSuppression(bool  value) ;

constexpr void __cordl_internal_set_outputSampleRate(int32_t  value) ;

constexpr void __cordl_internal_set_proc(::Photon::Voice::WebRTCAudioProcessor*  value) ;

constexpr void __cordl_internal_set_recorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_reverseChannels(int32_t  value) ;

constexpr void __cordl_internal_set_reverseStreamDelayMs(int32_t  value) ;

constexpr void __cordl_internal_set_threadSafety(::System::Object*  value) ;

constexpr void __cordl_internal_set_vad(bool  value) ;

/// @brief Method .ctor, addr 0xa78829c, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>* getStaticF_channelsMap() ;

/// @brief Method get_AEC, addr 0xa7838e8, size 0x128, virtual false, abstract: false, final false
inline bool get_AEC() ;

/// @brief Method get_AECMobile, addr 0xa783de8, size 0x4, virtual false, abstract: false, final false
inline bool get_AECMobile() ;

/// @brief Method get_AGC, addr 0xa7841c4, size 0x8, virtual false, abstract: false, final false
inline bool get_AGC() ;

/// @brief Method get_AecHighPass, addr 0xa783df0, size 0x8, virtual false, abstract: false, final false
inline bool get_AecHighPass() ;

/// @brief Method get_AecOnlyWhenEnabled, addr 0xa78457c, size 0x8, virtual false, abstract: false, final false
inline bool get_AecOnlyWhenEnabled() ;

/// @brief Method get_AgcCompressionGain, addr 0xa7842ac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_AgcCompressionGain() ;

/// @brief Method get_Bypass, addr 0xa78418c, size 0x8, virtual false, abstract: false, final false
inline bool get_Bypass() ;

/// @brief Method get_HighPass, addr 0xa7840a4, size 0x8, virtual false, abstract: false, final false
inline bool get_HighPass() ;

/// @brief Method get_IsInitialized, addr 0xa783a10, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_NoiseSuppression, addr 0xa783fbc, size 0x8, virtual false, abstract: false, final false
inline bool get_NoiseSuppression() ;

/// @brief Method get_ReverseStreamDelayMs, addr 0xa783ed8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ReverseStreamDelayMs() ;

/// @brief Method get_VAD, addr 0xa784494, size 0x8, virtual false, abstract: false, final false
inline bool get_VAD() ;

static inline void setStaticF_channelsMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::AudioSpeakerMode,int32_t>*  value) ;

/// @brief Method set_AEC, addr 0xa783a20, size 0xd0, virtual false, abstract: false, final false
inline void set_AEC(bool  value) ;

/// @brief Method set_AECMobile, addr 0xa783dec, size 0x4, virtual false, abstract: false, final false
inline void set_AECMobile(bool  value) ;

/// @brief Method set_AGC, addr 0xa7841cc, size 0xe0, virtual false, abstract: false, final false
inline void set_AGC(bool  value) ;

/// @brief Method set_AecHighPass, addr 0xa783df8, size 0xe0, virtual false, abstract: false, final false
inline void set_AecHighPass(bool  value) ;

/// @brief Method set_AecOnlyWhenEnabled, addr 0xa784584, size 0xd0, virtual false, abstract: false, final false
inline void set_AecOnlyWhenEnabled(bool  value) ;

/// @brief Method set_AgcCompressionGain, addr 0xa7842b4, size 0x1e0, virtual false, abstract: false, final false
inline void set_AgcCompressionGain(int32_t  value) ;

/// @brief Method set_Bypass, addr 0xa784194, size 0x30, virtual false, abstract: false, final false
inline void set_Bypass(bool  value) ;

/// @brief Method set_HighPass, addr 0xa7840ac, size 0xe0, virtual false, abstract: false, final false
inline void set_HighPass(bool  value) ;

/// @brief Method set_NoiseSuppression, addr 0xa783fc4, size 0xe0, virtual false, abstract: false, final false
inline void set_NoiseSuppression(bool  value) ;

/// @brief Method set_ReverseStreamDelayMs, addr 0xa783ee0, size 0xdc, virtual false, abstract: false, final false
inline void set_ReverseStreamDelayMs(int32_t  value) ;

/// @brief Method set_VAD, addr 0xa78449c, size 0xe0, virtual false, abstract: false, final false
inline void set_VAD(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRtcAudioDsp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRtcAudioDsp", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRtcAudioDsp(WebRtcAudioDsp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRtcAudioDsp", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRtcAudioDsp(WebRtcAudioDsp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28894};

/// [SerializeField]
/// @brief Field aec, offset: 0x2a, size: 0x1, def value: None
 bool  ___aec;

/// [SerializeField]
/// @brief Field aecHighPass, offset: 0x2b, size: 0x1, def value: None
 bool  ___aecHighPass;

/// [SerializeField]
/// @brief Field agc, offset: 0x2c, size: 0x1, def value: None
 bool  ___agc;

/// [SerializeField]
/// @brief Field agcCompressionGain, offset: 0x30, size: 0x4, def value: None
 int32_t  ___agcCompressionGain;

/// [SerializeField]
/// @brief Field vad, offset: 0x34, size: 0x1, def value: None
 bool  ___vad;

/// [SerializeField]
/// @brief Field highPass, offset: 0x35, size: 0x1, def value: None
 bool  ___highPass;

/// [SerializeField]
/// @brief Field bypass, offset: 0x36, size: 0x1, def value: None
 bool  ___bypass;

/// [SerializeField]
/// @brief Field noiseSuppression, offset: 0x37, size: 0x1, def value: None
 bool  ___noiseSuppression;

/// [SerializeField]
/// @brief Field reverseStreamDelayMs, offset: 0x38, size: 0x4, def value: None
 int32_t  ___reverseStreamDelayMs;

/// @brief Field reverseChannels, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___reverseChannels;

/// @brief Field proc, offset: 0x40, size: 0x8, def value: None
 ::Photon::Voice::WebRTCAudioProcessor*  ___proc;

/// @brief Field audioListener, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioListener>  ___audioListener;

/// @brief Field audioOutCapture, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::AudioOutCapture>  ___audioOutCapture;

/// @brief Field aecStarted, offset: 0x58, size: 0x1, def value: None
 bool  ___aecStarted;

/// @brief Field autoDestroyAudioOutCapture, offset: 0x59, size: 0x1, def value: None
 bool  ___autoDestroyAudioOutCapture;

/// @brief Field localVoice, offset: 0x60, size: 0x8, def value: None
 ::Photon::Voice::LocalVoiceAudioShort*  ___localVoice;

/// @brief Field outputSampleRate, offset: 0x68, size: 0x4, def value: None
 int32_t  ___outputSampleRate;

/// @brief Field recorder, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___recorder;

/// [FormerlySerializedAs("forceNormalAecInMobile")]
/// @brief Field ForceNormalAecInMobile, offset: 0x78, size: 0x1, def value: None
 bool  ___ForceNormalAecInMobile;

/// [SerializeField]
/// @brief Field aecOnlyWhenEnabled, offset: 0x79, size: 0x1, def value: None
 bool  ___aecOnlyWhenEnabled;

/// @brief Field AutoRestartOnAudioChannelsMismatch, offset: 0x7a, size: 0x1, def value: None
 bool  ___AutoRestartOnAudioChannelsMismatch;

/// @brief Field threadSafety, offset: 0x80, size: 0x8, def value: None
 ::System::Object*  ___threadSafety;

/// [Obsolete("Obsolete as it\'s not recommended to set this to true. https://forum.photonengine.com/discussion/comment/48017/#Comment_48017")]
/// @brief Field AECMobileComfortNoise, offset: 0x88, size: 0x1, def value: None
 bool  ___AECMobileComfortNoise;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___aec) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___aecHighPass) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___agc) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___agcCompressionGain) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___vad) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___highPass) == 0x35, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___bypass) == 0x36, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___noiseSuppression) == 0x37, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___reverseStreamDelayMs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___reverseChannels) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___proc) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___audioListener) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___audioOutCapture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___aecStarted) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___autoDestroyAudioOutCapture) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___localVoice) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___outputSampleRate) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___recorder) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___ForceNormalAecInMobile) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___aecOnlyWhenEnabled) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___AutoRestartOnAudioChannelsMismatch) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___threadSafety) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::WebRtcAudioDsp, ___AECMobileComfortNoise) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::WebRtcAudioDsp) == 0x90, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
