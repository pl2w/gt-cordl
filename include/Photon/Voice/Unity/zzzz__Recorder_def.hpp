#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/Recorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "POpusCodec/Enums/zzzz__SamplingRate_def.hpp"
#include "Photon/Voice/Unity/zzzz__NativeAndroidMicrophoneSettings_def.hpp"
#include "Photon/Voice/Unity/zzzz__PhotonVoiceCreatedParams_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_InputSourceType_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_MicType_def.hpp"
#include "Photon/Voice/Unity/zzzz__Recorder_SampleTypeConv_def.hpp"
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "Photon/Voice/zzzz__OpusCodec_FrameDuration_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Recorder)
namespace GlobalNamespace {
struct OpusCodec_FrameDuration;
}
namespace GlobalNamespace {
struct Recorder_InputSourceType;
}
namespace GlobalNamespace {
struct Recorder_MicType;
}
namespace GlobalNamespace {
struct Recorder_SampleTypeConv;
}
namespace POpusCodec::Enums {
struct SamplingRate;
}
namespace Photon::Voice::Unity {
class AudioInEnumerator;
}
namespace Photon::Voice::Unity {
class MicWrapper;
}
namespace Photon::Voice::Unity {
struct NativeAndroidMicrophoneSettings;
}
namespace Photon::Voice::Unity {
class Recorder_PhotonVoiceCreatedParams;
}
namespace Photon::Voice::Unity {
class Recorder___c__DisplayClass179_0;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace Photon::Voice::Unity {
class VoiceLogger;
}
namespace Photon::Voice {
class AudioUtil_ILevelMeter;
}
namespace Photon::Voice {
class AudioUtil_IVoiceDetector;
}
namespace Photon::Voice {
struct DeviceInfo;
}
namespace Photon::Voice {
class IAudioDesc;
}
namespace Photon::Voice {
class IAudioInChangeNotifier;
}
namespace Photon::Voice {
class IDeviceEnumerator;
}
namespace Photon::Voice {
class ILocalVoiceAudio;
}
namespace Photon::Voice {
class LocalVoice;
}
namespace Photon::Voice {
class VoiceClient;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Array;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice::Unity {
class Recorder_PhotonVoiceCreatedParams;
}
namespace Photon::Voice::Unity {
class Recorder___c__DisplayClass179_0;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::Recorder*);
MARK_REF_T(::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams*);
MARK_REF_T(::Photon::Voice::Unity::Recorder___c__DisplayClass179_0*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::Recorder*, "Photon.Voice.Unity", "Recorder");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams*, "Photon.Voice.Unity", "Recorder/PhotonVoiceCreatedParams");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::Recorder___c__DisplayClass179_0*, "Photon.Voice.Unity", "Recorder/<>c__DisplayClass179_0");
// [AddComponentMenu("Photon Voice/Recorder")]
// [HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/recorder")]
// [DisallowMultipleComponent]
// Dependencies POpusCodec.Enums.SamplingRate, Photon.Voice.OpusCodec::FrameDuration, Photon.Voice.Unity.NativeAndroidMicrophoneSettings, Photon.Voice.Unity.Recorder::InputSourceType, Photon.Voice.Unity.Recorder::MicType, Photon.Voice.Unity.Recorder::SampleTypeConv, Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.Recorder
class CORDL_TYPE Recorder : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
using InputSourceType = ::GlobalNamespace::Recorder_InputSourceType;

using MicType = ::GlobalNamespace::Recorder_MicType;

using SampleTypeConv = ::GlobalNamespace::Recorder_SampleTypeConv;

using PhotonVoiceCreatedParams = ::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams;

using __c__DisplayClass179_0 = ::Photon::Voice::Unity::Recorder___c__DisplayClass179_0;

 __declspec(property(get=get_AudioClip, put=set_AudioClip)) ::UnityW<::UnityEngine::AudioClip>  AudioClip;

/// @brief [Obsolete("Use InterestGroup instead")]
 __declspec(property(get=get_AudioGroup, put=set_AudioGroup)) uint8_t  AudioGroup;

 __declspec(property(get=get_AutoStart, put=set_AutoStart)) bool  AutoStart;

 __declspec(property(get=get_Bitrate, put=set_Bitrate)) int32_t  Bitrate;

 __declspec(property(get=get_DebugEchoMode, put=set_DebugEchoMode)) bool  DebugEchoMode;

 __declspec(property(get=get_Encrypt, put=set_Encrypt)) bool  Encrypt;

 __declspec(property(get=get_FrameDuration, put=set_FrameDuration)) ::GlobalNamespace::OpusCodec_FrameDuration  FrameDuration;

 __declspec(property(get=get_InputFactory, put=set_InputFactory)) ::System::Func_1<::Photon::Voice::IAudioDesc*>*  InputFactory;

 __declspec(property(get=get_InputSource)) ::Photon::Voice::IAudioDesc*  InputSource;

 __declspec(property(get=get_InterestGroup, put=set_InterestGroup)) uint8_t  InterestGroup;

 __declspec(property(get=get_IsCurrentlyTransmitting)) bool  IsCurrentlyTransmitting;

 __declspec(property(get=get_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsRecording, put=set_IsRecording)) bool  IsRecording;

 __declspec(property(get=get_LevelMeter)) ::Photon::Voice::AudioUtil_ILevelMeter*  LevelMeter;

 __declspec(property(get=get_LoopAudioClip, put=set_LoopAudioClip)) bool  LoopAudioClip;

 __declspec(property(get=get_MicrophoneDevice, put=set_MicrophoneDevice)) ::Photon::Voice::DeviceInfo  MicrophoneDevice;

 __declspec(property(get=get_MicrophoneDeviceChangeDetected, put=set_MicrophoneDeviceChangeDetected)) bool  MicrophoneDeviceChangeDetected;

 __declspec(property(get=get_MicrophoneType, put=set_MicrophoneType)) ::GlobalNamespace::Recorder_MicType  MicrophoneType;

 __declspec(property(get=get_MicrophonesEnumerator)) ::Photon::Voice::IDeviceEnumerator*  MicrophonesEnumerator;

 __declspec(property(get=get_PhotonMicrophoneDeviceId, put=set_PhotonMicrophoneDeviceId)) int32_t  PhotonMicrophoneDeviceId;

 __declspec(property(get=get_ReactOnSystemChanges, put=set_ReactOnSystemChanges)) bool  ReactOnSystemChanges;

 __declspec(property(get=get_RecordOnlyWhenEnabled, put=set_RecordOnlyWhenEnabled)) bool  RecordOnlyWhenEnabled;

 __declspec(property(get=get_RecordOnlyWhenJoined, put=set_RecordOnlyWhenJoined)) bool  RecordOnlyWhenJoined;

 __declspec(property(get=get_ReliableMode, put=set_ReliableMode)) bool  ReliableMode;

/// @brief [Obsolete("Renamed to RequiresRestart")]
 __declspec(property(get=get_RequiresInit)) bool  RequiresInit;

 __declspec(property(get=get_RequiresRestart, put=set_RequiresRestart)) bool  RequiresRestart;

 __declspec(property(get=get_SamplingRate, put=set_SamplingRate)) ::POpusCodec::Enums::SamplingRate  SamplingRate;

 __declspec(property(get=get_SkipDeviceChangeChecks, put=set_SkipDeviceChangeChecks)) bool  SkipDeviceChangeChecks;

 __declspec(property(get=get_SourceType, put=set_SourceType)) ::GlobalNamespace::Recorder_InputSourceType  SourceType;

 __declspec(property(get=get_StopRecordingWhenPaused, put=set_StopRecordingWhenPaused)) bool  StopRecordingWhenPaused;

 __declspec(property(get=get_TransmitEnabled, put=set_TransmitEnabled)) bool  TransmitEnabled;

 __declspec(property(get=get_TrySamplingRateMatch, put=set_TrySamplingRateMatch)) bool  TrySamplingRateMatch;

/// @brief [Obsolete("No longer used. Implicit conversion is done internally when needed.")]
 __declspec(property(get=get_TypeConvert, put=set_TypeConvert)) ::GlobalNamespace::Recorder_SampleTypeConv  TypeConvert;

 __declspec(property(get=get_UnityMicrophoneDevice, put=set_UnityMicrophoneDevice)) ::StringW  UnityMicrophoneDevice;

 __declspec(property(get=get_UseMicrophoneTypeFallback, put=set_UseMicrophoneTypeFallback)) bool  UseMicrophoneTypeFallback;

 __declspec(property(get=get_UseOnAudioFilterRead, put=set_UseOnAudioFilterRead)) bool  UseOnAudioFilterRead;

 __declspec(property(get=get_UserData, put=set_UserData)) ::System::Object*  UserData;

 __declspec(property(get=get_Voice)) ::Photon::Voice::LocalVoice*  Voice;

 __declspec(property(get=get_VoiceDetection, put=set_VoiceDetection)) bool  VoiceDetection;

 __declspec(property(get=get_VoiceDetectionDelayMs, put=set_VoiceDetectionDelayMs)) int32_t  VoiceDetectionDelayMs;

 __declspec(property(get=get_VoiceDetectionThreshold, put=set_VoiceDetectionThreshold)) float_t  VoiceDetectionThreshold;

 __declspec(property(get=get_VoiceDetector)) ::Photon::Voice::AudioUtil_IVoiceDetector*  VoiceDetector;

 __declspec(property(get=get_VoiceDetectorCalibrating)) bool  VoiceDetectorCalibrating;

/// @brief Field <RequiresRestart>k__BackingField, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get__RequiresRestart_k__BackingField, put=__cordl_internal_set__RequiresRestart_k__BackingField)) bool  _RequiresRestart_k__BackingField;

/// @brief Field <TypeConvert>k__BackingField, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__TypeConvert_k__BackingField, put=__cordl_internal_set__TypeConvert_k__BackingField)) ::GlobalNamespace::Recorder_SampleTypeConv  _TypeConvert_k__BackingField;

/// @brief Field audioClip, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClip, put=__cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip>  audioClip;

/// @brief Field autoStart, offset 0xb3, size 0x1 
 __declspec(property(get=__cordl_internal_get_autoStart, put=__cordl_internal_set_autoStart)) bool  autoStart;

/// @brief Field bitrate, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_bitrate, put=__cordl_internal_set_bitrate)) int32_t  bitrate;

/// @brief Field client, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Photon::Voice::VoiceClient*  client;

/// @brief Field debugEchoMode, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugEchoMode, put=__cordl_internal_set_debugEchoMode)) bool  debugEchoMode;

/// @brief Field encrypt, offset 0x73, size 0x1 
 __declspec(property(get=__cordl_internal_get_encrypt, put=__cordl_internal_set_encrypt)) bool  encrypt;

/// @brief Field frameDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameDuration, put=__cordl_internal_set_frameDuration)) ::GlobalNamespace::OpusCodec_FrameDuration  frameDuration;

/// @brief Field inputFactory, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputFactory, put=__cordl_internal_set_inputFactory)) ::System::Func_1<::Photon::Voice::IAudioDesc*>*  inputFactory;

/// @brief Field inputSource, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputSource, put=__cordl_internal_set_inputSource)) ::Photon::Voice::IAudioDesc*  inputSource;

/// @brief Field interestGroup, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_interestGroup, put=__cordl_internal_set_interestGroup)) uint8_t  interestGroup;

/// @brief Field isPausedOrInBackground, offset 0xba, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPausedOrInBackground, put=__cordl_internal_set_isPausedOrInBackground)) bool  isPausedOrInBackground;

/// @brief Field isRecording, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_isRecording, put=__cordl_internal_set_isRecording)) bool  isRecording;

/// @brief Field loopAudioClip, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_loopAudioClip, put=__cordl_internal_set_loopAudioClip)) bool  loopAudioClip;

/// @brief Field microphoneDeviceChangeDetected, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_microphoneDeviceChangeDetected, put=__cordl_internal_set_microphoneDeviceChangeDetected)) bool  microphoneDeviceChangeDetected;

/// @brief Field microphoneDeviceChangeDetectedLock, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_microphoneDeviceChangeDetectedLock, put=__cordl_internal_set_microphoneDeviceChangeDetectedLock)) ::System::Object*  microphoneDeviceChangeDetectedLock;

/// @brief Field microphoneType, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_microphoneType, put=__cordl_internal_set_microphoneType)) ::GlobalNamespace::Recorder_MicType  microphoneType;

/// @brief Field nativeAndroidMicrophoneSettings, offset 0xb4, size 0x3 
 __declspec(property(get=__cordl_internal_get_nativeAndroidMicrophoneSettings, put=__cordl_internal_set_nativeAndroidMicrophoneSettings)) ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings  nativeAndroidMicrophoneSettings;

/// @brief Field photonMicChangeNotifier, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonMicChangeNotifier, put=__cordl_internal_set_photonMicChangeNotifier)) ::Photon::Voice::IAudioInChangeNotifier*  photonMicChangeNotifier;

/// @brief Field photonMicrophoneDeviceId, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_photonMicrophoneDeviceId, put=__cordl_internal_set_photonMicrophoneDeviceId)) int32_t  photonMicrophoneDeviceId;

/// @brief Field photonMicrophoneEnumerator, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_photonMicrophoneEnumerator, put=setStaticF_photonMicrophoneEnumerator)) ::Photon::Voice::IDeviceEnumerator*  photonMicrophoneEnumerator;

/// @brief Field photonMicrophonesEnumerator, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonMicrophonesEnumerator, put=__cordl_internal_set_photonMicrophonesEnumerator)) ::Photon::Voice::IDeviceEnumerator*  photonMicrophonesEnumerator;

/// @brief Field reactOnSystemChanges, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_reactOnSystemChanges, put=__cordl_internal_set_reactOnSystemChanges)) bool  reactOnSystemChanges;

/// @brief Field recordOnlyWhenEnabled, offset 0xb7, size 0x1 
 __declspec(property(get=__cordl_internal_get_recordOnlyWhenEnabled, put=__cordl_internal_set_recordOnlyWhenEnabled)) bool  recordOnlyWhenEnabled;

/// @brief Field recordOnlyWhenJoined, offset 0xbf, size 0x1 
 __declspec(property(get=__cordl_internal_get_recordOnlyWhenJoined, put=__cordl_internal_set_recordOnlyWhenJoined)) bool  recordOnlyWhenJoined;

/// @brief Field recordingStoppedExplicitly, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_recordingStoppedExplicitly, put=__cordl_internal_set_recordingStoppedExplicitly)) bool  recordingStoppedExplicitly;

/// @brief Field reliableMode, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_reliableMode, put=__cordl_internal_set_reliableMode)) bool  reliableMode;

/// @brief Field samplingRate, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_samplingRate, put=__cordl_internal_set_samplingRate)) ::POpusCodec::Enums::SamplingRate  samplingRate;

/// @brief Field samplingRateValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_samplingRateValues, put=setStaticF_samplingRateValues)) ::System::Array*  samplingRateValues;

/// @brief Field skipDeviceChangeChecks, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_skipDeviceChangeChecks, put=__cordl_internal_set_skipDeviceChangeChecks)) bool  skipDeviceChangeChecks;

/// @brief Field sourceType, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_sourceType, put=__cordl_internal_set_sourceType)) ::GlobalNamespace::Recorder_InputSourceType  sourceType;

/// @brief Field stopRecordingWhenPaused, offset 0xbb, size 0x1 
 __declspec(property(get=__cordl_internal_get_stopRecordingWhenPaused, put=__cordl_internal_set_stopRecordingWhenPaused)) bool  stopRecordingWhenPaused;

 __declspec(property(get=get_subscribedToSystemChanges)) bool  subscribedToSystemChanges;

/// @brief Field subscribedToSystemChangesPhoton, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscribedToSystemChangesPhoton, put=__cordl_internal_set_subscribedToSystemChangesPhoton)) bool  subscribedToSystemChangesPhoton;

/// @brief Field subscribedToSystemChangesUnity, offset 0xb2, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscribedToSystemChangesUnity, put=__cordl_internal_set_subscribedToSystemChangesUnity)) bool  subscribedToSystemChangesUnity;

/// @brief Field transmitEnabled, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_transmitEnabled, put=__cordl_internal_set_transmitEnabled)) bool  transmitEnabled;

/// @brief Field trySamplingRateMatch, offset 0xbd, size 0x1 
 __declspec(property(get=__cordl_internal_get_trySamplingRateMatch, put=__cordl_internal_set_trySamplingRateMatch)) bool  trySamplingRateMatch;

/// @brief Field unityMicrophoneDevice, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityMicrophoneDevice, put=__cordl_internal_set_unityMicrophoneDevice)) ::StringW  unityMicrophoneDevice;

/// @brief Field unityMicrophonesEnumerator, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityMicrophonesEnumerator, put=__cordl_internal_set_unityMicrophonesEnumerator)) ::Photon::Voice::Unity::AudioInEnumerator*  unityMicrophonesEnumerator;

/// @brief Field useMicrophoneTypeFallback, offset 0xbe, size 0x1 
 __declspec(property(get=__cordl_internal_get_useMicrophoneTypeFallback, put=__cordl_internal_set_useMicrophoneTypeFallback)) bool  useMicrophoneTypeFallback;

/// @brief Field useOnAudioFilterRead, offset 0xbc, size 0x1 
 __declspec(property(get=__cordl_internal_get_useOnAudioFilterRead, put=__cordl_internal_set_useOnAudioFilterRead)) bool  useOnAudioFilterRead;

/// @brief Field userData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_userData, put=__cordl_internal_set_userData)) ::System::Object*  userData;

/// @brief Field voice, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_voice, put=__cordl_internal_set_voice)) ::Photon::Voice::LocalVoice*  voice;

 __declspec(property(get=get_voiceAudio)) ::Photon::Voice::ILocalVoiceAudio*  voiceAudio;

/// @brief Field voiceConnection, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceConnection, put=__cordl_internal_set_voiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  voiceConnection;

/// @brief Field voiceDetection, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceDetection, put=__cordl_internal_set_voiceDetection)) bool  voiceDetection;

/// @brief Field voiceDetectionDelayMs, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_voiceDetectionDelayMs, put=__cordl_internal_set_voiceDetectionDelayMs)) int32_t  voiceDetectionDelayMs;

/// @brief Field voiceDetectionThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_voiceDetectionThreshold, put=__cordl_internal_set_voiceDetectionThreshold)) float_t  voiceDetectionThreshold;

/// @brief Field wasRecordingBeforePause, offset 0xb9, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasRecordingBeforePause, put=__cordl_internal_set_wasRecordingBeforePause)) bool  wasRecordingBeforePause;

/// @brief Method CheckAndAutoStart, addr 0xa76b530, size 0x8, virtual false, abstract: false, final false
inline void CheckAndAutoStart() ;

/// @brief Method CheckAndAutoStart, addr 0xa76f9e0, size 0x740, virtual false, abstract: false, final false
inline void CheckAndAutoStart(bool  autoStartFlag) ;

/// @brief Method CheckAndSetSamplingRate, addr 0xa769508, size 0x8, virtual false, abstract: false, final false
inline void CheckAndSetSamplingRate() ;

/// @brief Method CheckAndSetSamplingRate, addr 0xa769f9c, size 0x26c, virtual false, abstract: false, final false
inline void CheckAndSetSamplingRate(::POpusCodec::Enums::SamplingRate  sR) ;

/// @brief Method CheckIfMicrophoneIdIsValid, addr 0xa7701c4, size 0x3c8, virtual false, abstract: false, final false
static inline bool CheckIfMicrophoneIdIsValid(::Photon::Voice::IDeviceEnumerator*  audioInEnumerator, int32_t  id) ;

/// @brief Method CheckIfThereIsAtLeastOneMic, addr 0xa76ead8, size 0x70, virtual false, abstract: false, final false
inline bool CheckIfThereIsAtLeastOneMic() ;

/// @brief Method CompareUnityMicNames, addr 0xa769460, size 0xa8, virtual false, abstract: false, final false
static inline bool CompareUnityMicNames(::StringW  mic1, ::StringW  mic2) ;

/// @brief Method CreateLocalVoiceAudioAndSource, addr 0xa76d6f4, size 0x13e4, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* CreateLocalVoiceAudioAndSource() ;

/// @brief Method CreateMicWrapper, addr 0xa76eee0, size 0x74, virtual true, abstract: false, final false
inline ::Photon::Voice::Unity::MicWrapper* CreateMicWrapper(::StringW  micDev, int32_t  samplingRateInt, ::Photon::Voice::Unity::VoiceLogger*  logger) ;

/// @brief Method CreatePhotonDeviceEnumerator, addr 0xa767888, size 0x2c0, virtual false, abstract: false, final false
static inline ::Photon::Voice::IDeviceEnumerator* CreatePhotonDeviceEnumerator(::Photon::Voice::Unity::VoiceLogger*  voiceLogger) ;

/// @brief Method GetActivityDelayFromDetector, addr 0xa768a34, size 0x2e4, virtual false, abstract: false, final false
inline void GetActivityDelayFromDetector() ;

/// @brief Method GetDeviceById, addr 0xa76be3c, size 0x380, virtual false, abstract: false, final false
inline ::Photon::Voice::DeviceInfo GetDeviceById(::StringW  id) ;

/// @brief Method GetDeviceById, addr 0xa7711e0, size 0x388, virtual false, abstract: false, final false
inline ::Photon::Voice::DeviceInfo GetDeviceById(int32_t  id) ;

/// @brief Method GetMicrophonesEnumerator, addr 0xa76baa0, size 0x2c0, virtual false, abstract: false, final false
inline ::Photon::Voice::IDeviceEnumerator* GetMicrophonesEnumerator(::GlobalNamespace::Recorder_MicType  micType) ;

/// @brief Method GetStatusFromDetector, addr 0xa767f10, size 0x2e4, virtual false, abstract: false, final false
inline void GetStatusFromDetector() ;

/// @brief Method GetSupportedSamplingRate, addr 0xa770d18, size 0x3c0, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::SamplingRate GetSupportedSamplingRate(::POpusCodec::Enums::SamplingRate  requested, int32_t  minFreq, int32_t  maxFreq) ;

/// @brief Method GetSupportedSamplingRate, addr 0xa76eb48, size 0x398, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::SamplingRate GetSupportedSamplingRate(int32_t  requested) ;

/// @brief Method GetSupportedSamplingRate, addr 0xa7710d8, size 0x108, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::SamplingRate GetSupportedSamplingRate(::POpusCodec::Enums::SamplingRate  sR) ;

/// @brief Method GetSupportedSamplingRateForUnityMicrophone, addr 0xa770cd4, size 0x44, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::SamplingRate GetSupportedSamplingRateForUnityMicrophone(::POpusCodec::Enums::SamplingRate  requested) ;

/// @brief Method GetThresholdFromDetector, addr 0xa7683ac, size 0x48c, virtual false, abstract: false, final false
inline void GetThresholdFromDetector() ;

/// @brief Method HandleApplicationPause, addr 0xa7706b8, size 0x4ec, virtual false, abstract: false, final false
inline void HandleApplicationPause(bool  paused) ;

/// @brief Method HandleDeviceChange, addr 0xa76f614, size 0x3cc, virtual false, abstract: false, final false
inline void HandleDeviceChange() ;

/// @brief Method Init, addr 0xa76c304, size 0x3b4, virtual false, abstract: false, final false
inline void Init(::Photon::Voice::Unity::VoiceConnection*  connection) ;

/// @brief Method IsDefaultUnityMic, addr 0xa76d278, size 0x74, virtual false, abstract: false, final false
static inline bool IsDefaultUnityMic(::StringW  mic) ;

/// @brief Method IsValidPhotonMic, addr 0xa770144, size 0x8, virtual false, abstract: false, final false
inline bool IsValidPhotonMic() ;

/// @brief Method IsValidPhotonMic, addr 0xa77014c, size 0x78, virtual false, abstract: false, final false
inline bool IsValidPhotonMic(int32_t  id) ;

/// @brief Method IsValidUnityMic, addr 0xa769168, size 0x70, virtual false, abstract: false, final false
static inline bool IsValidUnityMic(::StringW  mic) ;

static inline ::Photon::Voice::Unity::Recorder* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0xa770ba4, size 0x130, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focused) ;

/// @brief Method OnApplicationPause, addr 0xa77058c, size 0x12c, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  paused) ;

/// @brief Method OnAudioConfigChanged, addr 0xa76f3ec, size 0x138, virtual false, abstract: false, final false
inline void OnAudioConfigChanged(bool  deviceWasChanged) ;

/// @brief Method OnDestroy, addr 0xa76f010, size 0x110, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa77012c, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa770120, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PhotonMicrophoneChangeDetected, addr 0xa76f524, size 0xf0, virtual false, abstract: false, final false
inline void PhotonMicrophoneChangeDetected() ;

/// [Obsolete("Renamed to RestartRecording")]
/// @brief Method ReInit, addr 0xa76c7b4, size 0x8, virtual false, abstract: false, final false
inline void ReInit() ;

/// @brief Method RemoveVoice, addr 0xa76f120, size 0x274, virtual false, abstract: false, final false
inline void RemoveVoice() ;

/// @brief Method ResetLocalAudio, addr 0xa76d028, size 0x250, virtual false, abstract: false, final false
inline bool ResetLocalAudio() ;

/// @brief Method RestartRecording, addr 0xa76c7bc, size 0x250, virtual false, abstract: false, final false
inline void RestartRecording(bool  force) ;

/// @brief Method SendPhotonVoiceCreatedMessage, addr 0xa76ef54, size 0xbc, virtual true, abstract: false, final false
inline void SendPhotonVoiceCreatedMessage() ;

/// @brief Method SetAndroidNativeMicrophoneSettings, addr 0xa76cd58, size 0x2d0, virtual false, abstract: false, final false
inline bool SetAndroidNativeMicrophoneSettings(bool  aec, bool  agc, bool  ns) ;

/// @brief Method SetAndroidNativeMicrophoneSettings, addr 0xa76cd48, size 0x10, virtual false, abstract: false, final false
inline bool SetAndroidNativeMicrophoneSettings(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings  nams) ;

/// @brief Method Setup, addr 0xa76d2ec, size 0x408, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method StartRecording, addr 0xa76a730, size 0x2f0, virtual false, abstract: false, final false
inline void StartRecording() ;

/// @brief Method StartRecordingInternal, addr 0xa76cc54, size 0xf4, virtual false, abstract: false, final false
inline void StartRecordingInternal() ;

/// @brief Method StopRecording, addr 0xa76a624, size 0x10c, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method StopRecordingInternal, addr 0xa76b59c, size 0x114, virtual false, abstract: false, final false
inline void StopRecordingInternal() ;

/// @brief Method SubscribeToSystemChanges, addr 0xa76aa28, size 0x7a8, virtual false, abstract: false, final false
inline void SubscribeToSystemChanges() ;

/// @brief Method UnsubscribeFromSystemChanges, addr 0xa76b1d0, size 0x33c, virtual false, abstract: false, final false
inline void UnsubscribeFromSystemChanges() ;

/// @brief Method VoiceDetectorCalibrate, addr 0xa76ca0c, size 0x240, virtual false, abstract: false, final false
inline void VoiceDetectorCalibrate(int32_t  durationMs, ::System::Action_1<float_t>*  detectionEndedCallback) ;

constexpr bool const& __cordl_internal_get__RequiresRestart_k__BackingField() const;

constexpr bool& __cordl_internal_get__RequiresRestart_k__BackingField() ;

constexpr ::GlobalNamespace::Recorder_SampleTypeConv const& __cordl_internal_get__TypeConvert_k__BackingField() const;

constexpr ::GlobalNamespace::Recorder_SampleTypeConv& __cordl_internal_get__TypeConvert_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip() ;

constexpr bool const& __cordl_internal_get_autoStart() const;

constexpr bool& __cordl_internal_get_autoStart() ;

constexpr int32_t const& __cordl_internal_get_bitrate() const;

constexpr int32_t& __cordl_internal_get_bitrate() ;

constexpr ::Photon::Voice::VoiceClient* const& __cordl_internal_get_client() const;

constexpr ::Photon::Voice::VoiceClient*& __cordl_internal_get_client() ;

constexpr bool const& __cordl_internal_get_debugEchoMode() const;

constexpr bool& __cordl_internal_get_debugEchoMode() ;

constexpr bool const& __cordl_internal_get_encrypt() const;

constexpr bool& __cordl_internal_get_encrypt() ;

constexpr ::GlobalNamespace::OpusCodec_FrameDuration const& __cordl_internal_get_frameDuration() const;

constexpr ::GlobalNamespace::OpusCodec_FrameDuration& __cordl_internal_get_frameDuration() ;

constexpr ::System::Func_1<::Photon::Voice::IAudioDesc*>* const& __cordl_internal_get_inputFactory() const;

constexpr ::System::Func_1<::Photon::Voice::IAudioDesc*>*& __cordl_internal_get_inputFactory() ;

constexpr ::Photon::Voice::IAudioDesc* const& __cordl_internal_get_inputSource() const;

constexpr ::Photon::Voice::IAudioDesc*& __cordl_internal_get_inputSource() ;

constexpr uint8_t const& __cordl_internal_get_interestGroup() const;

constexpr uint8_t& __cordl_internal_get_interestGroup() ;

constexpr bool const& __cordl_internal_get_isPausedOrInBackground() const;

constexpr bool& __cordl_internal_get_isPausedOrInBackground() ;

constexpr bool const& __cordl_internal_get_isRecording() const;

constexpr bool& __cordl_internal_get_isRecording() ;

constexpr bool const& __cordl_internal_get_loopAudioClip() const;

constexpr bool& __cordl_internal_get_loopAudioClip() ;

constexpr bool const& __cordl_internal_get_microphoneDeviceChangeDetected() const;

constexpr bool& __cordl_internal_get_microphoneDeviceChangeDetected() ;

constexpr ::System::Object* const& __cordl_internal_get_microphoneDeviceChangeDetectedLock() const;

constexpr ::System::Object*& __cordl_internal_get_microphoneDeviceChangeDetectedLock() ;

constexpr ::GlobalNamespace::Recorder_MicType const& __cordl_internal_get_microphoneType() const;

constexpr ::GlobalNamespace::Recorder_MicType& __cordl_internal_get_microphoneType() ;

constexpr ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings const& __cordl_internal_get_nativeAndroidMicrophoneSettings() const;

constexpr ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings& __cordl_internal_get_nativeAndroidMicrophoneSettings() ;

constexpr ::Photon::Voice::IAudioInChangeNotifier* const& __cordl_internal_get_photonMicChangeNotifier() const;

constexpr ::Photon::Voice::IAudioInChangeNotifier*& __cordl_internal_get_photonMicChangeNotifier() ;

constexpr int32_t const& __cordl_internal_get_photonMicrophoneDeviceId() const;

constexpr int32_t& __cordl_internal_get_photonMicrophoneDeviceId() ;

constexpr ::Photon::Voice::IDeviceEnumerator* const& __cordl_internal_get_photonMicrophonesEnumerator() const;

constexpr ::Photon::Voice::IDeviceEnumerator*& __cordl_internal_get_photonMicrophonesEnumerator() ;

constexpr bool const& __cordl_internal_get_reactOnSystemChanges() const;

constexpr bool& __cordl_internal_get_reactOnSystemChanges() ;

constexpr bool const& __cordl_internal_get_recordOnlyWhenEnabled() const;

constexpr bool& __cordl_internal_get_recordOnlyWhenEnabled() ;

constexpr bool const& __cordl_internal_get_recordOnlyWhenJoined() const;

constexpr bool& __cordl_internal_get_recordOnlyWhenJoined() ;

constexpr bool const& __cordl_internal_get_recordingStoppedExplicitly() const;

constexpr bool& __cordl_internal_get_recordingStoppedExplicitly() ;

constexpr bool const& __cordl_internal_get_reliableMode() const;

constexpr bool& __cordl_internal_get_reliableMode() ;

constexpr ::POpusCodec::Enums::SamplingRate const& __cordl_internal_get_samplingRate() const;

constexpr ::POpusCodec::Enums::SamplingRate& __cordl_internal_get_samplingRate() ;

constexpr bool const& __cordl_internal_get_skipDeviceChangeChecks() const;

constexpr bool& __cordl_internal_get_skipDeviceChangeChecks() ;

constexpr ::GlobalNamespace::Recorder_InputSourceType const& __cordl_internal_get_sourceType() const;

constexpr ::GlobalNamespace::Recorder_InputSourceType& __cordl_internal_get_sourceType() ;

constexpr bool const& __cordl_internal_get_stopRecordingWhenPaused() const;

constexpr bool& __cordl_internal_get_stopRecordingWhenPaused() ;

constexpr bool const& __cordl_internal_get_subscribedToSystemChangesPhoton() const;

constexpr bool& __cordl_internal_get_subscribedToSystemChangesPhoton() ;

constexpr bool const& __cordl_internal_get_subscribedToSystemChangesUnity() const;

constexpr bool& __cordl_internal_get_subscribedToSystemChangesUnity() ;

constexpr bool const& __cordl_internal_get_transmitEnabled() const;

constexpr bool& __cordl_internal_get_transmitEnabled() ;

constexpr bool const& __cordl_internal_get_trySamplingRateMatch() const;

constexpr bool& __cordl_internal_get_trySamplingRateMatch() ;

constexpr ::StringW const& __cordl_internal_get_unityMicrophoneDevice() const;

constexpr ::StringW& __cordl_internal_get_unityMicrophoneDevice() ;

constexpr ::Photon::Voice::Unity::AudioInEnumerator* const& __cordl_internal_get_unityMicrophonesEnumerator() const;

constexpr ::Photon::Voice::Unity::AudioInEnumerator*& __cordl_internal_get_unityMicrophonesEnumerator() ;

constexpr bool const& __cordl_internal_get_useMicrophoneTypeFallback() const;

constexpr bool& __cordl_internal_get_useMicrophoneTypeFallback() ;

constexpr bool const& __cordl_internal_get_useOnAudioFilterRead() const;

constexpr bool& __cordl_internal_get_useOnAudioFilterRead() ;

constexpr ::System::Object* const& __cordl_internal_get_userData() const;

constexpr ::System::Object*& __cordl_internal_get_userData() ;

constexpr ::Photon::Voice::LocalVoice* const& __cordl_internal_get_voice() const;

constexpr ::Photon::Voice::LocalVoice*& __cordl_internal_get_voice() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_voiceConnection() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_voiceConnection() ;

constexpr bool const& __cordl_internal_get_voiceDetection() const;

constexpr bool& __cordl_internal_get_voiceDetection() ;

constexpr int32_t const& __cordl_internal_get_voiceDetectionDelayMs() const;

constexpr int32_t& __cordl_internal_get_voiceDetectionDelayMs() ;

constexpr float_t const& __cordl_internal_get_voiceDetectionThreshold() const;

constexpr float_t& __cordl_internal_get_voiceDetectionThreshold() ;

constexpr bool const& __cordl_internal_get_wasRecordingBeforePause() const;

constexpr bool& __cordl_internal_get_wasRecordingBeforePause() ;

constexpr void __cordl_internal_set__RequiresRestart_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TypeConvert_k__BackingField(::GlobalNamespace::Recorder_SampleTypeConv  value) ;

constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_autoStart(bool  value) ;

constexpr void __cordl_internal_set_bitrate(int32_t  value) ;

constexpr void __cordl_internal_set_client(::Photon::Voice::VoiceClient*  value) ;

constexpr void __cordl_internal_set_debugEchoMode(bool  value) ;

constexpr void __cordl_internal_set_encrypt(bool  value) ;

constexpr void __cordl_internal_set_frameDuration(::GlobalNamespace::OpusCodec_FrameDuration  value) ;

constexpr void __cordl_internal_set_inputFactory(::System::Func_1<::Photon::Voice::IAudioDesc*>*  value) ;

constexpr void __cordl_internal_set_inputSource(::Photon::Voice::IAudioDesc*  value) ;

constexpr void __cordl_internal_set_interestGroup(uint8_t  value) ;

constexpr void __cordl_internal_set_isPausedOrInBackground(bool  value) ;

constexpr void __cordl_internal_set_isRecording(bool  value) ;

constexpr void __cordl_internal_set_loopAudioClip(bool  value) ;

constexpr void __cordl_internal_set_microphoneDeviceChangeDetected(bool  value) ;

constexpr void __cordl_internal_set_microphoneDeviceChangeDetectedLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_microphoneType(::GlobalNamespace::Recorder_MicType  value) ;

constexpr void __cordl_internal_set_nativeAndroidMicrophoneSettings(::Photon::Voice::Unity::NativeAndroidMicrophoneSettings  value) ;

constexpr void __cordl_internal_set_photonMicChangeNotifier(::Photon::Voice::IAudioInChangeNotifier*  value) ;

constexpr void __cordl_internal_set_photonMicrophoneDeviceId(int32_t  value) ;

constexpr void __cordl_internal_set_photonMicrophonesEnumerator(::Photon::Voice::IDeviceEnumerator*  value) ;

constexpr void __cordl_internal_set_reactOnSystemChanges(bool  value) ;

constexpr void __cordl_internal_set_recordOnlyWhenEnabled(bool  value) ;

constexpr void __cordl_internal_set_recordOnlyWhenJoined(bool  value) ;

constexpr void __cordl_internal_set_recordingStoppedExplicitly(bool  value) ;

constexpr void __cordl_internal_set_reliableMode(bool  value) ;

constexpr void __cordl_internal_set_samplingRate(::POpusCodec::Enums::SamplingRate  value) ;

constexpr void __cordl_internal_set_skipDeviceChangeChecks(bool  value) ;

constexpr void __cordl_internal_set_sourceType(::GlobalNamespace::Recorder_InputSourceType  value) ;

constexpr void __cordl_internal_set_stopRecordingWhenPaused(bool  value) ;

constexpr void __cordl_internal_set_subscribedToSystemChangesPhoton(bool  value) ;

constexpr void __cordl_internal_set_subscribedToSystemChangesUnity(bool  value) ;

constexpr void __cordl_internal_set_transmitEnabled(bool  value) ;

constexpr void __cordl_internal_set_trySamplingRateMatch(bool  value) ;

constexpr void __cordl_internal_set_unityMicrophoneDevice(::StringW  value) ;

constexpr void __cordl_internal_set_unityMicrophonesEnumerator(::Photon::Voice::Unity::AudioInEnumerator*  value) ;

constexpr void __cordl_internal_set_useMicrophoneTypeFallback(bool  value) ;

constexpr void __cordl_internal_set_useOnAudioFilterRead(bool  value) ;

constexpr void __cordl_internal_set_userData(::System::Object*  value) ;

constexpr void __cordl_internal_set_voice(::Photon::Voice::LocalVoice*  value) ;

constexpr void __cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

constexpr void __cordl_internal_set_voiceDetection(bool  value) ;

constexpr void __cordl_internal_set_voiceDetectionDelayMs(int32_t  value) ;

constexpr void __cordl_internal_set_voiceDetectionThreshold(float_t  value) ;

constexpr void __cordl_internal_set_wasRecordingBeforePause(bool  value) ;

/// @brief Method .ctor, addr 0xa771568, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Voice::IDeviceEnumerator* getStaticF_photonMicrophoneEnumerator() ;

static inline ::System::Array* getStaticF_samplingRateValues() ;

/// @brief Method get_AudioClip, addr 0xa769cd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_AudioClip() ;

/// @brief Method get_AudioGroup, addr 0xa769714, size 0x4, virtual false, abstract: false, final false
inline uint8_t get_AudioGroup() ;

/// @brief Method get_AutoStart, addr 0xa76b50c, size 0x8, virtual false, abstract: false, final false
inline bool get_AutoStart() ;

/// @brief Method get_Bitrate, addr 0xa76a33c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Bitrate() ;

/// @brief Method get_DebugEchoMode, addr 0xa767c58, size 0x5c, virtual false, abstract: false, final false
inline bool get_DebugEchoMode() ;

/// @brief Method get_Encrypt, addr 0xa767c24, size 0x8, virtual false, abstract: false, final false
inline bool get_Encrypt() ;

/// @brief Method get_FrameDuration, addr 0xa76a208, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpusCodec_FrameDuration get_FrameDuration() ;

/// @brief Method get_InputFactory, addr 0xa768e4c, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<::Photon::Voice::IAudioDesc*>* get_InputFactory() ;

/// @brief Method get_InputSource, addr 0xa767774, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::IAudioDesc* get_InputSource() ;

/// @brief Method get_InterestGroup, addr 0xa767cb4, size 0x4c, virtual false, abstract: false, final false
inline uint8_t get_InterestGroup() ;

/// @brief Method get_IsCurrentlyTransmitting, addr 0xa769864, size 0x30, virtual false, abstract: false, final false
inline bool get_IsCurrentlyTransmitting() ;

/// @brief Method get_IsInitialized, addr 0xa767b48, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// @brief Method get_IsRecording, addr 0xa76a5fc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsRecording() ;

/// @brief Method get_LevelMeter, addr 0xa769894, size 0xc4, virtual false, abstract: false, final false
inline ::Photon::Voice::AudioUtil_ILevelMeter* get_LevelMeter() ;

/// @brief Method get_LoopAudioClip, addr 0xa769e6c, size 0x8, virtual false, abstract: false, final false
inline bool get_LoopAudioClip() ;

/// @brief Method get_MicrophoneDevice, addr 0xa76bd60, size 0xdc, virtual false, abstract: false, final false
inline ::Photon::Voice::DeviceInfo get_MicrophoneDevice() ;

/// @brief Method get_MicrophoneDeviceChangeDetected, addr 0xa767328, size 0xc8, virtual false, abstract: false, final false
inline bool get_MicrophoneDeviceChangeDetected() ;

/// @brief Method get_MicrophoneType, addr 0xa769b74, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Recorder_MicType get_MicrophoneType() ;

/// @brief Method get_MicrophonesEnumerator, addr 0xa76ba98, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::IDeviceEnumerator* get_MicrophonesEnumerator() ;

/// @brief Method get_PhotonMicrophoneDeviceId, addr 0xa769510, size 0x108, virtual false, abstract: false, final false
inline int32_t get_PhotonMicrophoneDeviceId() ;

/// @brief Method get_PhotonMicrophoneEnumerator, addr 0xa76779c, size 0xec, virtual false, abstract: false, final false
static inline ::Photon::Voice::IDeviceEnumerator* get_PhotonMicrophoneEnumerator() ;

/// @brief Method get_ReactOnSystemChanges, addr 0xa76aa20, size 0x8, virtual false, abstract: false, final false
inline bool get_ReactOnSystemChanges() ;

/// @brief Method get_RecordOnlyWhenEnabled, addr 0xa76b538, size 0x8, virtual false, abstract: false, final false
inline bool get_RecordOnlyWhenEnabled() ;

/// @brief Method get_RecordOnlyWhenJoined, addr 0xa76b828, size 0x8, virtual false, abstract: false, final false
inline bool get_RecordOnlyWhenJoined() ;

/// @brief Method get_ReliableMode, addr 0xa767e5c, size 0x8, virtual false, abstract: false, final false
inline bool get_ReliableMode() ;

/// @brief Method get_RequiresInit, addr 0xa767b58, size 0x8, virtual false, abstract: false, final false
inline bool get_RequiresInit() ;

/// [CompilerGenerated]
/// @brief Method get_RequiresRestart, addr 0xa767b60, size 0x8, virtual false, abstract: false, final false
inline bool get_RequiresRestart() ;

/// @brief Method get_SamplingRate, addr 0xa769f90, size 0x8, virtual false, abstract: false, final false
inline ::POpusCodec::Enums::SamplingRate get_SamplingRate() ;

/// @brief Method get_SkipDeviceChangeChecks, addr 0xa76b6b0, size 0x8, virtual false, abstract: false, final false
inline bool get_SkipDeviceChangeChecks() ;

/// @brief Method get_SourceType, addr 0xa769a28, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Recorder_InputSourceType get_SourceType() ;

/// @brief Method get_StopRecordingWhenPaused, addr 0xa76b6c0, size 0x8, virtual false, abstract: false, final false
inline bool get_StopRecordingWhenPaused() ;

/// @brief Method get_TransmitEnabled, addr 0xa767b70, size 0x8, virtual false, abstract: false, final false
inline bool get_TransmitEnabled() ;

/// @brief Method get_TrySamplingRateMatch, addr 0xa76b7ec, size 0x8, virtual false, abstract: false, final false
inline bool get_TrySamplingRateMatch() ;

/// [CompilerGenerated]
/// @brief Method get_TypeConvert, addr 0xa769cc8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Recorder_SampleTypeConv get_TypeConvert() ;

/// @brief Method get_UnityMicrophoneDevice, addr 0xa768fec, size 0x17c, virtual false, abstract: false, final false
inline ::StringW get_UnityMicrophoneDevice() ;

/// @brief Method get_UseMicrophoneTypeFallback, addr 0xa76b818, size 0x8, virtual false, abstract: false, final false
inline bool get_UseMicrophoneTypeFallback() ;

/// @brief Method get_UseOnAudioFilterRead, addr 0xa76b6d0, size 0x8, virtual false, abstract: false, final false
inline bool get_UseOnAudioFilterRead() ;

/// @brief Method get_UserData, addr 0xa768df4, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_UserData() ;

/// @brief Method get_Voice, addr 0xa76776c, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Voice::LocalVoice* get_Voice() ;

/// @brief Method get_VoiceDetection, addr 0xa767ef8, size 0x18, virtual false, abstract: false, final false
inline bool get_VoiceDetection() ;

/// @brief Method get_VoiceDetectionDelayMs, addr 0xa768a1c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_VoiceDetectionDelayMs() ;

/// @brief Method get_VoiceDetectionThreshold, addr 0xa768394, size 0x18, virtual false, abstract: false, final false
inline float_t get_VoiceDetectionThreshold() ;

/// @brief Method get_VoiceDetector, addr 0xa7682d4, size 0xc0, virtual false, abstract: false, final false
inline ::Photon::Voice::AudioUtil_IVoiceDetector* get_VoiceDetector() ;

/// @brief Method get_VoiceDetectorCalibrating, addr 0xa769958, size 0xd0, virtual false, abstract: false, final false
inline bool get_VoiceDetectorCalibrating() ;

/// @brief Method get_subscribedToSystemChanges, addr 0xa76777c, size 0x20, virtual false, abstract: false, final false
inline bool get_subscribedToSystemChanges() ;

/// @brief Method get_voiceAudio, addr 0xa768fa4, size 0x48, virtual false, abstract: false, final false
inline ::Photon::Voice::ILocalVoiceAudio* get_voiceAudio() ;

static inline void setStaticF_photonMicrophoneEnumerator(::Photon::Voice::IDeviceEnumerator*  value) ;

static inline void setStaticF_samplingRateValues(::System::Array*  value) ;

/// @brief Method set_AudioClip, addr 0xa769ce0, size 0x18c, virtual false, abstract: false, final false
inline void set_AudioClip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_AudioGroup, addr 0xa769718, size 0x4, virtual false, abstract: false, final false
inline void set_AudioGroup(uint8_t  value) ;

/// @brief Method set_AutoStart, addr 0xa76b514, size 0x1c, virtual false, abstract: false, final false
inline void set_AutoStart(bool  value) ;

/// @brief Method set_Bitrate, addr 0xa76a344, size 0x2b8, virtual false, abstract: false, final false
inline void set_Bitrate(int32_t  value) ;

/// @brief Method set_DebugEchoMode, addr 0xa767d00, size 0x15c, virtual false, abstract: false, final false
inline void set_DebugEchoMode(bool  value) ;

/// @brief Method set_Encrypt, addr 0xa767c2c, size 0x2c, virtual false, abstract: false, final false
inline void set_Encrypt(bool  value) ;

/// @brief Method set_FrameDuration, addr 0xa76a210, size 0x12c, virtual false, abstract: false, final false
inline void set_FrameDuration(::GlobalNamespace::OpusCodec_FrameDuration  value) ;

/// @brief Method set_InputFactory, addr 0xa768e54, size 0x150, virtual false, abstract: false, final false
inline void set_InputFactory(::System::Func_1<::Photon::Voice::IAudioDesc*>*  value) ;

/// @brief Method set_InterestGroup, addr 0xa76971c, size 0x148, virtual false, abstract: false, final false
inline void set_InterestGroup(uint8_t  value) ;

/// @brief Method set_IsRecording, addr 0xa76a604, size 0x20, virtual false, abstract: false, final false
inline void set_IsRecording(bool  value) ;

/// @brief Method set_LoopAudioClip, addr 0xa769e74, size 0x11c, virtual false, abstract: false, final false
inline void set_LoopAudioClip(bool  value) ;

/// @brief Method set_MicrophoneDevice, addr 0xa76c1bc, size 0x148, virtual false, abstract: false, final false
inline void set_MicrophoneDevice(::Photon::Voice::DeviceInfo  value) ;

/// @brief Method set_MicrophoneDeviceChangeDetected, addr 0xa766598, size 0x1dc, virtual false, abstract: false, final false
inline void set_MicrophoneDeviceChangeDetected(bool  value) ;

/// @brief Method set_MicrophoneType, addr 0xa769b7c, size 0x14c, virtual false, abstract: false, final false
inline void set_MicrophoneType(::GlobalNamespace::Recorder_MicType  value) ;

/// @brief Method set_PhotonMicrophoneDeviceId, addr 0xa769618, size 0xfc, virtual false, abstract: false, final false
inline void set_PhotonMicrophoneDeviceId(int32_t  value) ;

/// @brief Method set_ReactOnSystemChanges, addr 0xa765b00, size 0x48, virtual false, abstract: false, final false
inline void set_ReactOnSystemChanges(bool  value) ;

/// @brief Method set_RecordOnlyWhenEnabled, addr 0xa76b540, size 0x5c, virtual false, abstract: false, final false
inline void set_RecordOnlyWhenEnabled(bool  value) ;

/// @brief Method set_RecordOnlyWhenJoined, addr 0xa76b830, size 0x7c, virtual false, abstract: false, final false
inline void set_RecordOnlyWhenJoined(bool  value) ;

/// @brief Method set_ReliableMode, addr 0xa767e64, size 0x94, virtual false, abstract: false, final false
inline void set_ReliableMode(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_RequiresRestart, addr 0xa767b68, size 0x8, virtual false, abstract: false, final false
inline void set_RequiresRestart(bool  value) ;

/// @brief Method set_SamplingRate, addr 0xa769f98, size 0x4, virtual false, abstract: false, final false
inline void set_SamplingRate(::POpusCodec::Enums::SamplingRate  value) ;

/// @brief Method set_SkipDeviceChangeChecks, addr 0xa76b6b8, size 0x8, virtual false, abstract: false, final false
inline void set_SkipDeviceChangeChecks(bool  value) ;

/// @brief Method set_SourceType, addr 0xa769a30, size 0x144, virtual false, abstract: false, final false
inline void set_SourceType(::GlobalNamespace::Recorder_InputSourceType  value) ;

/// @brief Method set_StopRecordingWhenPaused, addr 0xa76b6c8, size 0x8, virtual false, abstract: false, final false
inline void set_StopRecordingWhenPaused(bool  value) ;

/// @brief Method set_TransmitEnabled, addr 0xa767b78, size 0xac, virtual false, abstract: false, final false
inline void set_TransmitEnabled(bool  value) ;

/// @brief Method set_TrySamplingRateMatch, addr 0xa76b7f4, size 0x24, virtual false, abstract: false, final false
inline void set_TrySamplingRateMatch(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TypeConvert, addr 0xa769cd0, size 0x8, virtual false, abstract: false, final false
inline void set_TypeConvert(::GlobalNamespace::Recorder_SampleTypeConv  value) ;

/// @brief Method set_UnityMicrophoneDevice, addr 0xa7691d8, size 0x288, virtual false, abstract: false, final false
inline void set_UnityMicrophoneDevice(::StringW  value) ;

/// @brief Method set_UseMicrophoneTypeFallback, addr 0xa76b820, size 0x8, virtual false, abstract: false, final false
inline void set_UseMicrophoneTypeFallback(bool  value) ;

/// @brief Method set_UseOnAudioFilterRead, addr 0xa76b6d8, size 0x114, virtual false, abstract: false, final false
inline void set_UseOnAudioFilterRead(bool  value) ;

/// @brief Method set_UserData, addr 0xa768dfc, size 0x50, virtual false, abstract: false, final false
inline void set_UserData(::System::Object*  value) ;

/// @brief Method set_VoiceDetection, addr 0xa7681f4, size 0xe0, virtual false, abstract: false, final false
inline void set_VoiceDetection(bool  value) ;

/// @brief Method set_VoiceDetectionDelayMs, addr 0xa768d18, size 0xdc, virtual false, abstract: false, final false
inline void set_VoiceDetectionDelayMs(int32_t  value) ;

/// @brief Method set_VoiceDetectionThreshold, addr 0xa768838, size 0x1e4, virtual false, abstract: false, final false
inline void set_VoiceDetectionThreshold(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Recorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Recorder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Recorder(Recorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Recorder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Recorder(Recorder const& ) = delete;

/// @brief Field MAX_OPUS_BITRATE offset 0xffffffff size 0x4
static constexpr int32_t  MAX_OPUS_BITRATE{static_cast<int32_t>(0x7c830)};

/// @brief Field MIN_OPUS_BITRATE offset 0xffffffff size 0x4
static constexpr int32_t  MIN_OPUS_BITRATE{static_cast<int32_t>(0x1770)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28884};

/// [SerializeField]
/// @brief Field voiceDetection, offset: 0x2a, size: 0x1, def value: None
 bool  ___voiceDetection;

/// [SerializeField]
/// @brief Field voiceDetectionThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___voiceDetectionThreshold;

/// [SerializeField]
/// @brief Field voiceDetectionDelayMs, offset: 0x30, size: 0x4, def value: None
 int32_t  ___voiceDetectionDelayMs;

/// @brief Field userData, offset: 0x38, size: 0x8, def value: None
 ::System::Object*  ___userData;

/// @brief Field voice, offset: 0x40, size: 0x8, def value: None
 ::Photon::Voice::LocalVoice*  ___voice;

/// @brief Field unityMicrophoneDevice, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___unityMicrophoneDevice;

/// @brief Field photonMicrophoneDeviceId, offset: 0x50, size: 0x4, def value: None
 int32_t  ___photonMicrophoneDeviceId;

/// @brief Field inputSource, offset: 0x58, size: 0x8, def value: None
 ::Photon::Voice::IAudioDesc*  ___inputSource;

/// @brief Field client, offset: 0x60, size: 0x8, def value: None
 ::Photon::Voice::VoiceClient*  ___client;

/// @brief Field voiceConnection, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___voiceConnection;

/// [SerializeField]
/// [FormerlySerializedAs("audioGroup")]
/// @brief Field interestGroup, offset: 0x70, size: 0x1, def value: None
 uint8_t  ___interestGroup;

/// [SerializeField]
/// @brief Field debugEchoMode, offset: 0x71, size: 0x1, def value: None
 bool  ___debugEchoMode;

/// [SerializeField]
/// @brief Field reliableMode, offset: 0x72, size: 0x1, def value: None
 bool  ___reliableMode;

/// [SerializeField]
/// @brief Field encrypt, offset: 0x73, size: 0x1, def value: None
 bool  ___encrypt;

/// [SerializeField]
/// @brief Field transmitEnabled, offset: 0x74, size: 0x1, def value: None
 bool  ___transmitEnabled;

/// [SerializeField]
/// @brief Field samplingRate, offset: 0x78, size: 0x4, def value: None
 ::POpusCodec::Enums::SamplingRate  ___samplingRate;

/// [SerializeField]
/// @brief Field frameDuration, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::OpusCodec_FrameDuration  ___frameDuration;

/// [SerializeField]
/// [Range(6000, 510000)]
/// @brief Field bitrate, offset: 0x80, size: 0x4, def value: None
 int32_t  ___bitrate;

/// [SerializeField]
/// @brief Field sourceType, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::Recorder_InputSourceType  ___sourceType;

/// [SerializeField]
/// @brief Field microphoneType, offset: 0x88, size: 0x4, def value: None
 ::GlobalNamespace::Recorder_MicType  ___microphoneType;

/// [SerializeField]
/// @brief Field audioClip, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioClip;

/// [SerializeField]
/// @brief Field loopAudioClip, offset: 0x98, size: 0x1, def value: None
 bool  ___loopAudioClip;

/// @brief Field isRecording, offset: 0x99, size: 0x1, def value: None
 bool  ___isRecording;

/// @brief Field inputFactory, offset: 0xa0, size: 0x8, def value: None
 ::System::Func_1<::Photon::Voice::IAudioDesc*>*  ___inputFactory;

/// @brief Field photonMicChangeNotifier, offset: 0xa8, size: 0x8, def value: None
 ::Photon::Voice::IAudioInChangeNotifier*  ___photonMicChangeNotifier;

/// [SerializeField]
/// @brief Field reactOnSystemChanges, offset: 0xb0, size: 0x1, def value: None
 bool  ___reactOnSystemChanges;

/// @brief Field subscribedToSystemChangesPhoton, offset: 0xb1, size: 0x1, def value: None
 bool  ___subscribedToSystemChangesPhoton;

/// @brief Field subscribedToSystemChangesUnity, offset: 0xb2, size: 0x1, def value: None
 bool  ___subscribedToSystemChangesUnity;

/// [SerializeField]
/// @brief Field autoStart, offset: 0xb3, size: 0x1, def value: None
 bool  ___autoStart;

/// [SerializeField]
/// @brief Field nativeAndroidMicrophoneSettings, offset: 0xb4, size: 0x3, def value: None
 ::Photon::Voice::Unity::NativeAndroidMicrophoneSettings  ___nativeAndroidMicrophoneSettings;

/// [SerializeField]
/// @brief Field recordOnlyWhenEnabled, offset: 0xb7, size: 0x1, def value: None
 bool  ___recordOnlyWhenEnabled;

/// [SerializeField]
/// @brief Field skipDeviceChangeChecks, offset: 0xb8, size: 0x1, def value: None
 bool  ___skipDeviceChangeChecks;

/// @brief Field wasRecordingBeforePause, offset: 0xb9, size: 0x1, def value: None
 bool  ___wasRecordingBeforePause;

/// @brief Field isPausedOrInBackground, offset: 0xba, size: 0x1, def value: None
 bool  ___isPausedOrInBackground;

/// [SerializeField]
/// @brief Field stopRecordingWhenPaused, offset: 0xbb, size: 0x1, def value: None
 bool  ___stopRecordingWhenPaused;

/// [SerializeField]
/// @brief Field useOnAudioFilterRead, offset: 0xbc, size: 0x1, def value: None
 bool  ___useOnAudioFilterRead;

/// [SerializeField]
/// @brief Field trySamplingRateMatch, offset: 0xbd, size: 0x1, def value: None
 bool  ___trySamplingRateMatch;

/// [SerializeField]
/// @brief Field useMicrophoneTypeFallback, offset: 0xbe, size: 0x1, def value: None
 bool  ___useMicrophoneTypeFallback;

/// [SerializeField]
/// @brief Field recordOnlyWhenJoined, offset: 0xbf, size: 0x1, def value: None
 bool  ___recordOnlyWhenJoined;

/// @brief Field recordingStoppedExplicitly, offset: 0xc0, size: 0x1, def value: None
 bool  ___recordingStoppedExplicitly;

/// @brief Field photonMicrophonesEnumerator, offset: 0xc8, size: 0x8, def value: None
 ::Photon::Voice::IDeviceEnumerator*  ___photonMicrophonesEnumerator;

/// @brief Field unityMicrophonesEnumerator, offset: 0xd0, size: 0x8, def value: None
 ::Photon::Voice::Unity::AudioInEnumerator*  ___unityMicrophonesEnumerator;

/// @brief Field microphoneDeviceChangeDetectedLock, offset: 0xd8, size: 0x8, def value: None
 ::System::Object*  ___microphoneDeviceChangeDetectedLock;

/// @brief Field microphoneDeviceChangeDetected, offset: 0xe0, size: 0x1, def value: None
 bool  ___microphoneDeviceChangeDetected;

/// [CompilerGenerated]
/// @brief Field <RequiresRestart>k__BackingField, offset: 0xe1, size: 0x1, def value: None
 bool  ____RequiresRestart_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TypeConvert>k__BackingField, offset: 0xe4, size: 0x4, def value: None
 ::GlobalNamespace::Recorder_SampleTypeConv  ____TypeConvert_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___voiceDetection) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___voiceDetectionThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___voiceDetectionDelayMs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___userData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___voice) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___unityMicrophoneDevice) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___photonMicrophoneDeviceId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___inputSource) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___client) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___voiceConnection) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___interestGroup) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___debugEchoMode) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___reliableMode) == 0x72, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___encrypt) == 0x73, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___transmitEnabled) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___samplingRate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___frameDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___bitrate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___sourceType) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___microphoneType) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___audioClip) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___loopAudioClip) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___isRecording) == 0x99, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___inputFactory) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___photonMicChangeNotifier) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___reactOnSystemChanges) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___subscribedToSystemChangesPhoton) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___subscribedToSystemChangesUnity) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___autoStart) == 0xb3, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___nativeAndroidMicrophoneSettings) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___recordOnlyWhenEnabled) == 0xb7, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___skipDeviceChangeChecks) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___wasRecordingBeforePause) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___isPausedOrInBackground) == 0xba, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___stopRecordingWhenPaused) == 0xbb, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___useOnAudioFilterRead) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___trySamplingRateMatch) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___useMicrophoneTypeFallback) == 0xbe, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___recordOnlyWhenJoined) == 0xbf, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___recordingStoppedExplicitly) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___photonMicrophonesEnumerator) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___unityMicrophonesEnumerator) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___microphoneDeviceChangeDetectedLock) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ___microphoneDeviceChangeDetected) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ____RequiresRestart_k__BackingField) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder, ____TypeConvert_k__BackingField) == 0xe4, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::Recorder) == 0xe8, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.Recorder/<>c__DisplayClass179_0
class CORDL_TYPE Recorder___c__DisplayClass179_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Photon::Voice::Unity::Recorder>  __4__this;

/// @brief Field detectionEndedCallback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_detectionEndedCallback, put=__cordl_internal_set_detectionEndedCallback)) ::System::Action_1<float_t>*  detectionEndedCallback;

static inline ::Photon::Voice::Unity::Recorder___c__DisplayClass179_0* New_ctor() ;

/// @brief Method <VoiceDetectorCalibrate>b__0, addr 0xa771714, size 0x48, virtual false, abstract: false, final false
inline void _VoiceDetectorCalibrate_b__0(float_t  newThreshold) ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<float_t>* const& __cordl_internal_get_detectionEndedCallback() const;

constexpr ::System::Action_1<float_t>*& __cordl_internal_get_detectionEndedCallback() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_detectionEndedCallback(::System::Action_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xa76cc4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Recorder___c__DisplayClass179_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Recorder___c__DisplayClass179_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Recorder___c__DisplayClass179_0(Recorder___c__DisplayClass179_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Recorder___c__DisplayClass179_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Recorder___c__DisplayClass179_0(Recorder___c__DisplayClass179_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28883};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  _____4__this;

/// @brief Field detectionEndedCallback, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<float_t>*  ___detectionEndedCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::Recorder___c__DisplayClass179_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::Recorder___c__DisplayClass179_0, ___detectionEndedCallback) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::Recorder___c__DisplayClass179_0) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// [Obsolete("Use Photon.Voice.Unity.PhotonVoiceCreatedParams")]
// Dependencies Photon.Voice.Unity.PhotonVoiceCreatedParams
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.Recorder/PhotonVoiceCreatedParams
class CORDL_TYPE Recorder_PhotonVoiceCreatedParams : public ::Photon::Voice::Unity::PhotonVoiceCreatedParams {
public:
// Declarations
static inline ::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams* New_ctor() ;

/// @brief Method .ctor, addr 0xa77170c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Recorder_PhotonVoiceCreatedParams() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Recorder_PhotonVoiceCreatedParams", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Recorder_PhotonVoiceCreatedParams(Recorder_PhotonVoiceCreatedParams && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Recorder_PhotonVoiceCreatedParams", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Recorder_PhotonVoiceCreatedParams(Recorder_PhotonVoiceCreatedParams const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28882};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::Recorder_PhotonVoiceCreatedParams) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
