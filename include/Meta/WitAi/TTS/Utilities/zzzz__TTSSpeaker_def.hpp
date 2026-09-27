#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeakerTextPostprocessor_def.hpp"
#include "Meta/WitAi/TTS/Interfaces/zzzz__ISpeakerTextPreprocessor_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TTSSpeaker)
namespace GlobalNamespace {
struct TTSSpeaker__LoadClip_d__125;
}
namespace GlobalNamespace {
struct TTSSpeaker__Load_d__122;
}
namespace GlobalNamespace {
struct TTSSpeaker__Load_d__124;
}
namespace Meta::Voice::Audio {
class IAudioPlayer;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi::Speech {
class VoiceSpeechEvents;
}
namespace Meta::WitAi::TTS::Data {
class TTSClipData;
}
namespace Meta::WitAi::TTS::Data {
class TTSDiskCacheSettings;
}
namespace Meta::WitAi::TTS::Data {
class TTSEventContainer;
}
namespace Meta::WitAi::TTS::Data {
class TTSVoiceSettings;
}
namespace Meta::WitAi::TTS::Integrations {
class TTSWitVoiceSettings;
}
namespace Meta::WitAi::TTS::Interfaces {
class ISpeaker;
}
namespace Meta::WitAi::TTS::Interfaces {
class ITTSEventPlayer;
}
namespace Meta::WitAi::TTS::Interfaces {
class TTSEventSampleDelegate;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerClipEvents;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeakerEvents;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker_TTSSpeakerRequestData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__69;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__70;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__71;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__72;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__97;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__98;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__99;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__104;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__105;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__106;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__107;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__83;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__84;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__85;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__86;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__WaitForPlaybackComplete_d__131;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass104_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass121_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass122_0;
}
namespace Meta::WitAi::TTS::Utilities {
template<typename T>
class TTSSpeaker___c__DisplayClass154_0_1;
}
namespace Meta::WitAi::TTS::Utilities {
template<typename T1,typename T2>
class TTSSpeaker___c__DisplayClass155_0_2;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass69_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass83_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass97_0;
}
namespace Meta::WitAi::TTS {
class TTSService;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker_TTSSpeakerRequestData;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__69;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__70;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__71;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__72;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__97;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__98;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakAsync_d__99;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__104;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__105;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__106;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__107;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__83;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__84;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__85;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__SpeakQueuedAsync_d__86;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker__WaitForPlaybackComplete_d__131;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass104_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass121_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass122_0;
}
namespace Meta::WitAi::TTS::Utilities {
template<typename T>
class TTSSpeaker___c__DisplayClass154_0_1;
}
namespace Meta::WitAi::TTS::Utilities {
template<typename T1,typename T2>
class TTSSpeaker___c__DisplayClass155_0_2;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass69_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass83_0;
}
namespace Meta::WitAi::TTS::Utilities {
class TTSSpeaker___c__DisplayClass97_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*);
MARK_GEN_REF_T_PTR(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1);
MARK_GEN_REF_T_PTR(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0*);
MARK_REF_T(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/TTSSpeakerRequestData");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__69");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__70");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__71");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__72");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__97");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__98");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakAsync>d__99");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__104");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__105");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__106");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__107");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__83");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__84");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__85");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<SpeakQueuedAsync>d__86");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<WaitForPlaybackComplete>d__131");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass104_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass121_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass122_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass154_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass155_0`2");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass69_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass83_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass97_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)8)]
// Dependencies Meta.WitAi.TTS.Interfaces.ISpeakerTextPostprocessor, Meta.WitAi.TTS.Interfaces.ISpeakerTextPreprocessor, UnityEngine.MonoBehaviour
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker
class CORDL_TYPE TTSSpeaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _LoadClip_d__125 = ::GlobalNamespace::TTSSpeaker__LoadClip_d__125;

using _Load_d__122 = ::GlobalNamespace::TTSSpeaker__Load_d__122;

using _Load_d__124 = ::GlobalNamespace::TTSSpeaker__Load_d__124;

using TTSSpeakerRequestData = ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData;

using _SpeakAsync_d__69 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69;

using _SpeakAsync_d__70 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70;

using _SpeakAsync_d__71 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71;

using _SpeakAsync_d__72 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72;

using _SpeakAsync_d__97 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97;

using _SpeakAsync_d__98 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98;

using _SpeakAsync_d__99 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99;

using _SpeakQueuedAsync_d__104 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104;

using _SpeakQueuedAsync_d__105 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105;

using _SpeakQueuedAsync_d__106 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106;

using _SpeakQueuedAsync_d__107 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107;

using _SpeakQueuedAsync_d__83 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83;

using _SpeakQueuedAsync_d__84 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84;

using _SpeakQueuedAsync_d__85 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85;

using _SpeakQueuedAsync_d__86 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86;

using _WaitForPlaybackComplete_d__131 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131;

using __c__DisplayClass104_0 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0;

using __c__DisplayClass121_0 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0;

using __c__DisplayClass122_0 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0;

template<typename T>
using __c__DisplayClass154_0_1 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>;

template<typename T1,typename T2>
using __c__DisplayClass155_0_2 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1, T2>;

using __c__DisplayClass69_0 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0;

using __c__DisplayClass83_0 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0;

using __c__DisplayClass97_0 = ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0;

/// @brief Field AppendedText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppendedText, put=__cordl_internal_set_AppendedText)) ::StringW  AppendedText;

 __declspec(property(get=get_AudioPlayer)) ::Meta::Voice::Audio::IAudioPlayer*  AudioPlayer;

 __declspec(property(get=get_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  AudioSource;

 __declspec(property(get=get_CurrentEvents)) ::Meta::WitAi::TTS::Data::TTSEventContainer*  CurrentEvents;

 __declspec(property(get=get_ElapsedSamples)) int32_t  ElapsedSamples;

 __declspec(property(get=get_Events)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*  Events;

 __declspec(property(get=get_IsActive)) bool  IsActive;

 __declspec(property(get=get_IsLoading)) bool  IsLoading;

 __declspec(property(get=get_IsPaused, put=set_IsPaused)) bool  IsPaused;

 __declspec(property(get=get_IsPreparing)) bool  IsPreparing;

 __declspec(property(get=get_IsSpeaking)) bool  IsSpeaking;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

 __declspec(property(get=get_OnSampleUpdated, put=set_OnSampleUpdated)) ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*  OnSampleUpdated;

/// @brief Field PrependedText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_PrependedText, put=__cordl_internal_set_PrependedText)) ::StringW  PrependedText;

 __declspec(property(get=get_QueuedClips)) ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  QueuedClips;

 __declspec(property(get=get_SpeakingClip)) ::Meta::WitAi::TTS::Data::TTSClipData*  SpeakingClip;

 __declspec(property(get=get_SpeechEvents)) ::Meta::WitAi::Speech::VoiceSpeechEvents*  SpeechEvents;

 __declspec(property(get=get_TTSService)) ::UnityW<::Meta::WitAi::TTS::TTSService>  TTSService;

 __declspec(property(get=get_TotalSamples)) int32_t  TotalSamples;

 __declspec(property(get=get_VoiceID, put=set_VoiceID)) ::StringW  VoiceID;

 __declspec(property(get=get_VoiceSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  VoiceSettings;

/// @brief Field <IsPaused>k__BackingField, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsPaused_k__BackingField, put=__cordl_internal_set__IsPaused_k__BackingField)) bool  _IsPaused_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <OnSampleUpdated>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnSampleUpdated_k__BackingField, put=__cordl_internal_set__OnSampleUpdated_k__BackingField)) ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*  _OnSampleUpdated_k__BackingField;

/// @brief Field _audioPlayer, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioPlayer, put=__cordl_internal_set__audioPlayer)) ::Meta::Voice::Audio::IAudioPlayer*  _audioPlayer;

/// @brief Field _elapsedPlayTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsedPlayTime, put=__cordl_internal_set__elapsedPlayTime)) float_t  _elapsedPlayTime;

/// @brief Field _events, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*  _events;

/// @brief Field _hasQueue, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasQueue, put=__cordl_internal_set__hasQueue)) bool  _hasQueue;

/// @brief Field _isPlaying, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPlaying, put=__cordl_internal_set__isPlaying)) bool  _isPlaying;

/// @brief Field _overrideVoiceSettings, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__overrideVoiceSettings, put=__cordl_internal_set__overrideVoiceSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  _overrideVoiceSettings;

/// @brief Field _queueNotYetComplete, offset 0x81, size 0x1 
 __declspec(property(get=__cordl_internal_get__queueNotYetComplete, put=__cordl_internal_set__queueNotYetComplete)) bool  _queueNotYetComplete;

/// @brief Field _queuedRequests, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__queuedRequests, put=__cordl_internal_set__queuedRequests)) ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>*  _queuedRequests;

/// @brief Field _speakingRequest, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__speakingRequest, put=__cordl_internal_set__speakingRequest)) ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  _speakingRequest;

/// @brief Field _textPostprocessors, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__textPostprocessors, put=__cordl_internal_set__textPostprocessors)) ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>  _textPostprocessors;

/// @brief Field _textPreprocessors, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__textPreprocessors, put=__cordl_internal_set__textPreprocessors)) ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>  _textPreprocessors;

/// @brief Field _ttsService, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__ttsService, put=__cordl_internal_set__ttsService)) ::UnityW<::Meta::WitAi::TTS::TTSService>  _ttsService;

/// @brief Field _waitForCompletion, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__waitForCompletion, put=__cordl_internal_set__waitForCompletion)) ::UnityEngine::Coroutine*  _waitForCompletion;

/// @brief Field customWitVoiceSettings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_customWitVoiceSettings, put=__cordl_internal_set_customWitVoiceSettings)) ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*  customWitVoiceSettings;

/// @brief Field presetVoiceID, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_presetVoiceID, put=__cordl_internal_set_presetVoiceID)) ::StringW  presetVoiceID;

/// @brief Field verboseLogging, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_verboseLogging, put=__cordl_internal_set_verboseLogging)) bool  verboseLogging;

/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ISpeaker"
constexpr operator  ::Meta::WitAi::TTS::Interfaces::ISpeaker*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer"
constexpr operator  ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer*() noexcept;

/// @brief Method ClearVoiceOverride, addr 0x9e5dbac, size 0xc, virtual false, abstract: false, final false
inline void ClearVoiceOverride() ;

/// @brief Method CreateRequest, addr 0x9e5e854, size 0x360, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* CreateRequest(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::Json::WitResponseNode*  speechNode, bool  clearQueue, bool  add) ;

/// @brief Method DecodeTts, addr 0x9e5e81c, size 0x38, virtual false, abstract: false, final false
inline bool DecodeTts(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::by_ref<::StringW>  textToSpeak, ::by_ref<::Meta::WitAi::TTS::Data::TTSVoiceSettings*>  voiceSettings) ;

/// @brief Method EndTextBlock, addr 0x9e5fd3c, size 0x4, virtual true, abstract: false, final true
inline void EndTextBlock() ;

/// @brief Method Error, addr 0x9e60340, size 0xbc, virtual false, abstract: false, final false
inline void Error(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method FinalizeLoadedClip, addr 0x9e5f214, size 0x154, virtual false, abstract: false, final false
inline void FinalizeLoadedClip(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  error) ;

/// @brief Method FindAndUnloadRequests, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool FindAndUnloadRequests(::System::Func_3<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*,T,bool>*  findMethod, T  findParameter) ;

/// @brief Method GetFinalText, addr 0x9e5cccc, size 0x33c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetFinalText(::StringW  textToSpeak) ;

/// @brief Method GetFinalTextFormatted, addr 0x9e5d008, size 0x1c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* GetFinalTextFormatted(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak) ;

/// @brief Method GetFirstQueuedRequest, addr 0x9e5c760, size 0x168, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* GetFirstQueuedRequest(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method GetFirstQueuedRequest, addr 0x9e5c8c8, size 0x15c, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* GetFirstQueuedRequest(::StringW  textToSpeak) ;

/// @brief Method GetFormattedText, addr 0x9e5d024, size 0x98, virtual false, abstract: false, final false
inline ::StringW GetFormattedText(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak) ;

/// @brief Method HandlePlaybackComplete, addr 0x9e5fa84, size 0x2a0, virtual true, abstract: false, final false
inline void HandlePlaybackComplete(bool  stopped) ;

/// @brief Method IsClipRequestActive, addr 0x9e5cc10, size 0x4c, virtual false, abstract: false, final false
inline bool IsClipRequestActive(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method IsClipRequestLoading, addr 0x9e5cc5c, size 0x58, virtual false, abstract: false, final false
inline bool IsClipRequestLoading(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method IsClipRequestSpeaking, addr 0x9e5ccb4, size 0x18, virtual false, abstract: false, final false
inline bool IsClipRequestSpeaking(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method IsPlaybackComplete, addr 0x9e5f3dc, size 0x234, virtual true, abstract: false, final false
inline bool IsPlaybackComplete() ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<Load>d__122))]
/// @brief Method Load, addr 0x9e5d544, size 0x134, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Load(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, bool  clearQueue) ;

/// @brief Method Load, addr 0x9e5d0f0, size 0xd0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Load(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::Json::WitResponseNode*  speechNode, bool  clearQueue, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestPlaceholder) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<Load>d__124))]
/// @brief Method Load, addr 0x9e5d990, size 0x184, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Load(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::Json::WitResponseNode*  speechNode, bool  clearQueue, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestPlaceholder) ;

/// [AsyncStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<LoadClip>d__125))]
/// @brief Method LoadClip, addr 0x9e5ebb4, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadClip(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method Log, addr 0x9e5ff54, size 0xd4, virtual false, abstract: false, final false
inline void Log(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method LogRequest, addr 0x9e603fc, size 0x468, virtual false, abstract: false, final false
inline void LogRequest(::StringW  comment, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  error) ;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e5c2a8, size 0x138, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9e5c648, size 0x104, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e5c3e0, size 0x268, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Pause, addr 0x9e501f4, size 0x14, virtual true, abstract: false, final true
inline void Pause() ;

/// @brief Method PrepareToSpeak, addr 0x9e5fd34, size 0x4, virtual true, abstract: false, final true
inline void PrepareToSpeak() ;

/// @brief Method RaiseEvents, addr 0x9e5cb50, size 0xc0, virtual false, abstract: false, final false
inline void RaiseEvents(::System::Action*  events) ;

/// @brief Method RaiseEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void RaiseEvents(::System::Action_1<T>*  events, T  parameter) ;

/// @brief Method RaiseEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
inline void RaiseEvents(::System::Action_2<T1,T2>*  events, T1  parameter1, T2  parameter2) ;

/// @brief Method RaiseOnBegin, addr 0x9e60a14, size 0xf8, virtual false, abstract: false, final false
inline void RaiseOnBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RaiseOnComplete, addr 0x9e60dd8, size 0x120, virtual false, abstract: false, final false
inline void RaiseOnComplete(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RaiseOnLoadAborted, addr 0x9e60c88, size 0x150, virtual false, abstract: false, final false
inline void RaiseOnLoadAborted(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RaiseOnLoadBegin, addr 0x9e60b0c, size 0x17c, virtual false, abstract: false, final false
inline void RaiseOnLoadBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RaiseOnLoadFailed, addr 0x9e60ef8, size 0x19c, virtual false, abstract: false, final false
inline void RaiseOnLoadFailed(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  error) ;

/// @brief Method RaiseOnPlaybackBegin, addr 0x9e6130c, size 0x268, virtual false, abstract: false, final false
inline void RaiseOnPlaybackBegin(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RaiseOnPlaybackCancelled, addr 0x9e61574, size 0x280, virtual false, abstract: false, final false
inline void RaiseOnPlaybackCancelled(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  reason) ;

/// @brief Method RaiseOnPlaybackComplete, addr 0x9e617f4, size 0x264, virtual false, abstract: false, final false
inline void RaiseOnPlaybackComplete(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RaiseOnPlaybackQueueBegin, addr 0x9e60864, size 0xd8, virtual true, abstract: false, final false
inline void RaiseOnPlaybackQueueBegin() ;

/// @brief Method RaiseOnPlaybackQueueComplete, addr 0x9e6093c, size 0xd8, virtual true, abstract: false, final false
inline void RaiseOnPlaybackQueueComplete() ;

/// @brief Method RaiseOnPlaybackReady, addr 0x9e61094, size 0x278, virtual false, abstract: false, final false
inline void RaiseOnPlaybackReady(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RaisePlaybackSampleUpdated, addr 0x9e61a68, size 0x1c, virtual true, abstract: false, final false
inline void RaisePlaybackSampleUpdated(int32_t  sample) ;

/// @brief Method RaiseUnloadEvents, addr 0x9e6015c, size 0x1e4, virtual false, abstract: false, final false
inline void RaiseUnloadEvents(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RefreshPlayback, addr 0x9e5eda4, size 0x470, virtual false, abstract: false, final false
inline void RefreshPlayback() ;

/// @brief Method RefreshQueueEvents, addr 0x9e5ca8c, size 0xc4, virtual false, abstract: false, final false
inline void RefreshQueueEvents() ;

/// @brief Method RemoveQueuedRequest, addr 0x9e60028, size 0x134, virtual false, abstract: false, final false
inline void RemoveQueuedRequest(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method RequestEquals, addr 0x9e5ca24, size 0x1c, virtual false, abstract: false, final false
static inline bool RequestEquals(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData1, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData2) ;

/// @brief Method RequestHasClipData, addr 0x9e5ca40, size 0x2c, virtual false, abstract: false, final false
static inline bool RequestHasClipData(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method RequestHasClipText, addr 0x9e5ca6c, size 0x20, virtual false, abstract: false, final false
static inline bool RequestHasClipText(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData, ::StringW  textToSpeak) ;

/// @brief Method Resume, addr 0x9e501e0, size 0x14, virtual true, abstract: false, final true
inline void Resume() ;

/// @brief Method SetPause, addr 0x9e5fd40, size 0x214, virtual true, abstract: false, final false
inline void SetPause(bool  toPaused) ;

/// @brief Method SetVoiceOverride, addr 0x9e5dba4, size 0x8, virtual false, abstract: false, final false
inline void SetVoiceOverride(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  overrideVoiceSettings) ;

/// @brief Method Speak, addr 0x9e5dc54, size 0xc, virtual false, abstract: false, final false
inline bool Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method Speak, addr 0x9e5dc40, size 0x8, virtual false, abstract: false, final false
inline bool Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method Speak, addr 0x9e5dbb8, size 0x88, virtual false, abstract: false, final false
inline bool Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method Speak, addr 0x9e5dc48, size 0xc, virtual true, abstract: false, final true
inline bool Speak(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method Speak, addr 0x9e505a4, size 0x34, virtual false, abstract: false, final false
inline void Speak(::StringW  textToSpeak) ;

/// @brief Method Speak, addr 0x9e5d1f4, size 0x34, virtual false, abstract: false, final false
inline void Speak(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method Speak, addr 0x9e5d0bc, size 0x34, virtual false, abstract: false, final false
inline void Speak(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method Speak, addr 0x9e5d1c0, size 0x34, virtual true, abstract: false, final true
inline void Speak(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakAsync>d__99))]
/// @brief Method SpeakAsync, addr 0x9e5ddc4, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakAsync>d__97))]
/// @brief Method SpeakAsync, addr 0x9e5dc60, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakAsync>d__98))]
/// @brief Method SpeakAsync, addr 0x9e5dd20, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakAsync>d__72))]
/// @brief Method SpeakAsync, addr 0x9e50b20, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* SpeakAsync(::StringW  textToSpeak) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakAsync>d__71))]
/// @brief Method SpeakAsync, addr 0x9e5d3d0, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakAsync>d__69))]
/// @brief Method SpeakAsync, addr 0x9e5d26c, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakAsync>d__70))]
/// @brief Method SpeakAsync, addr 0x9e5d32c, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakAsync(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakFormat, addr 0x9e5d228, size 0x44, virtual false, abstract: false, final false
inline void SpeakFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak) ;

/// @brief Method SpeakFormatQueued, addr 0x9e5d714, size 0x44, virtual false, abstract: false, final false
inline void SpeakFormatQueued(::StringW  format, /* [ParamArray] */ ::ArrayW<::StringW>  textsToSpeak) ;

/// @brief Method SpeakQueued, addr 0x9e5df04, size 0xc, virtual false, abstract: false, final false
inline bool SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method SpeakQueued, addr 0x9e5defc, size 0x8, virtual false, abstract: false, final false
inline bool SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method SpeakQueued, addr 0x9e5de68, size 0x88, virtual false, abstract: false, final false
inline bool SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueued, addr 0x9e5def0, size 0xc, virtual false, abstract: false, final false
inline bool SpeakQueued(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueued, addr 0x9e50570, size 0x34, virtual false, abstract: false, final false
inline void SpeakQueued(::StringW  textToSpeak) ;

/// @brief Method SpeakQueued, addr 0x9e5d6e0, size 0x34, virtual false, abstract: false, final false
inline void SpeakQueued(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method SpeakQueued, addr 0x9e5d678, size 0x34, virtual false, abstract: false, final false
inline void SpeakQueued(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueued, addr 0x9e5d6ac, size 0x34, virtual true, abstract: false, final true
inline void SpeakQueued(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__107))]
/// @brief Method SpeakQueuedAsync, addr 0x9e5e118, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__106))]
/// @brief Method SpeakQueuedAsync, addr 0x9e5e074, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__104))]
/// @brief Method SpeakQueuedAsync, addr 0x9e5df10, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__105))]
/// @brief Method SpeakQueuedAsync, addr 0x9e5dfd0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__86))]
/// @brief Method SpeakQueuedAsync, addr 0x9e50a90, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__85))]
/// @brief Method SpeakQueuedAsync, addr 0x9e5d8bc, size 0xa4, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__83))]
/// @brief Method SpeakQueuedAsync, addr 0x9e5d758, size 0xc0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<SpeakQueuedAsync>d__84))]
/// @brief Method SpeakQueuedAsync, addr 0x9e5d818, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* SpeakQueuedAsync(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5e22c, size 0x10, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5e220, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5e1a8, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5e1e0, size 0x10, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5e1b0, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5e1f0, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5db74, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5db44, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5d960, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakQueuedTask, addr 0x9e5db14, size 0x30, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* SpeakQueuedTask(::ArrayW<::StringW>  textsToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakTask, addr 0x9e5d534, size 0x10, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* SpeakTask(::Meta::WitAi::Json::WitResponseNode*  responseNode, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakTask, addr 0x9e5d504, size 0x30, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* SpeakTask(::StringW  textToSpeak) ;

/// @brief Method SpeakTask, addr 0x9e5d4d4, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings) ;

/// @brief Method SpeakTask, addr 0x9e5d474, size 0x30, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SpeakTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method SpeakTask, addr 0x9e5d4a4, size 0x30, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* SpeakTask(::StringW  textToSpeak, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents) ;

/// @brief Method Start, addr 0x9e5c1fc, size 0xac, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartTextBlock, addr 0x9e5fd38, size 0x4, virtual true, abstract: false, final true
inline void StartTextBlock() ;

/// @brief Method Stop, addr 0x9e5e7ec, size 0x30, virtual true, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop, addr 0x9e5e428, size 0xb4, virtual true, abstract: false, final false
inline void Stop(::Meta::WitAi::TTS::Data::TTSClipData*  clipData, bool  allInstances) ;

/// @brief Method Stop, addr 0x9e5e23c, size 0x9c, virtual true, abstract: false, final false
inline void Stop(::StringW  textToSpeak, bool  allInstances) ;

/// @brief Method StopAndUnloadClip, addr 0x9e5c74c, size 0x14, virtual true, abstract: false, final false
inline void StopAndUnloadClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method StopLoading, addr 0x9e5e5b0, size 0x214, virtual true, abstract: false, final false
inline void StopLoading() ;

/// @brief Method StopLoadingButKeepQueue, addr 0x9e5e584, size 0x2c, virtual false, abstract: false, final false
inline void StopLoadingButKeepQueue() ;

/// @brief Method StopSpeaking, addr 0x9e5e7c4, size 0x28, virtual true, abstract: false, final false
inline void StopSpeaking() ;

/// @brief Method TryPlayLoadedClip, addr 0x9e5ecac, size 0xf8, virtual false, abstract: false, final false
inline void TryPlayLoadedClip(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method UnloadQueuedClip, addr 0x9e5e4dc, size 0xa8, virtual false, abstract: false, final false
inline bool UnloadQueuedClip(::Meta::WitAi::TTS::Data::TTSClipData*  clipData) ;

/// @brief Method UnloadQueuedClipRequest, addr 0x9e5e380, size 0xa8, virtual false, abstract: false, final false
inline bool UnloadQueuedClipRequest(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData) ;

/// @brief Method UnloadQueuedText, addr 0x9e5e2d8, size 0xa8, virtual false, abstract: false, final false
inline bool UnloadQueuedText(::StringW  textToSpeak) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.TTS.Utilities.TTSSpeaker::<WaitForPlaybackComplete>d__131))]
/// @brief Method WaitForPlaybackComplete, addr 0x9e5f368, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForPlaybackComplete() ;

/// [CompilerGenerated]
/// @brief Method <HandlePlaybackComplete>b__133_0, addr 0x9e61d1c, size 0xac, virtual false, abstract: false, final false
inline void _HandlePlaybackComplete_b__133_0() ;

/// [CompilerGenerated]
/// @brief Method <RefreshPlayback>b__130_0, addr 0x9e61c4c, size 0xd0, virtual false, abstract: false, final false
inline void _RefreshPlayback_b__130_0() ;

constexpr ::StringW const& __cordl_internal_get_AppendedText() const;

constexpr ::StringW& __cordl_internal_get_AppendedText() ;

constexpr ::StringW const& __cordl_internal_get_PrependedText() const;

constexpr ::StringW& __cordl_internal_get_PrependedText() ;

constexpr bool const& __cordl_internal_get__IsPaused_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsPaused_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate* const& __cordl_internal_get__OnSampleUpdated_k__BackingField() const;

constexpr ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*& __cordl_internal_get__OnSampleUpdated_k__BackingField() ;

constexpr ::Meta::Voice::Audio::IAudioPlayer* const& __cordl_internal_get__audioPlayer() const;

constexpr ::Meta::Voice::Audio::IAudioPlayer*& __cordl_internal_get__audioPlayer() ;

constexpr float_t const& __cordl_internal_get__elapsedPlayTime() const;

constexpr float_t& __cordl_internal_get__elapsedPlayTime() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents* const& __cordl_internal_get__events() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*& __cordl_internal_get__events() ;

constexpr bool const& __cordl_internal_get__hasQueue() const;

constexpr bool& __cordl_internal_get__hasQueue() ;

constexpr bool const& __cordl_internal_get__isPlaying() const;

constexpr bool& __cordl_internal_get__isPlaying() ;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& __cordl_internal_get__overrideVoiceSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& __cordl_internal_get__overrideVoiceSettings() ;

constexpr bool const& __cordl_internal_get__queueNotYetComplete() const;

constexpr bool& __cordl_internal_get__queueNotYetComplete() ;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>* const& __cordl_internal_get__queuedRequests() const;

constexpr ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>*& __cordl_internal_get__queuedRequests() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* const& __cordl_internal_get__speakingRequest() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*& __cordl_internal_get__speakingRequest() ;

constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*> const& __cordl_internal_get__textPostprocessors() const;

constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>& __cordl_internal_get__textPostprocessors() ;

constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*> const& __cordl_internal_get__textPreprocessors() const;

constexpr ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>& __cordl_internal_get__textPreprocessors() ;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService> const& __cordl_internal_get__ttsService() const;

constexpr ::UnityW<::Meta::WitAi::TTS::TTSService>& __cordl_internal_get__ttsService() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__waitForCompletion() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__waitForCompletion() ;

constexpr ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings* const& __cordl_internal_get_customWitVoiceSettings() const;

constexpr ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*& __cordl_internal_get_customWitVoiceSettings() ;

constexpr ::StringW const& __cordl_internal_get_presetVoiceID() const;

constexpr ::StringW& __cordl_internal_get_presetVoiceID() ;

constexpr bool const& __cordl_internal_get_verboseLogging() const;

constexpr bool& __cordl_internal_get_verboseLogging() ;

constexpr void __cordl_internal_set_AppendedText(::StringW  value) ;

constexpr void __cordl_internal_set_PrependedText(::StringW  value) ;

constexpr void __cordl_internal_set__IsPaused_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__OnSampleUpdated_k__BackingField(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*  value) ;

constexpr void __cordl_internal_set__audioPlayer(::Meta::Voice::Audio::IAudioPlayer*  value) ;

constexpr void __cordl_internal_set__elapsedPlayTime(float_t  value) ;

constexpr void __cordl_internal_set__events(::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*  value) ;

constexpr void __cordl_internal_set__hasQueue(bool  value) ;

constexpr void __cordl_internal_set__isPlaying(bool  value) ;

constexpr void __cordl_internal_set__overrideVoiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value) ;

constexpr void __cordl_internal_set__queueNotYetComplete(bool  value) ;

constexpr void __cordl_internal_set__queuedRequests(::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>*  value) ;

constexpr void __cordl_internal_set__speakingRequest(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  value) ;

constexpr void __cordl_internal_set__textPostprocessors(::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>  value) ;

constexpr void __cordl_internal_set__textPreprocessors(::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>  value) ;

constexpr void __cordl_internal_set__ttsService(::UnityW<::Meta::WitAi::TTS::TTSService>  value) ;

constexpr void __cordl_internal_set__waitForCompletion(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_customWitVoiceSettings(::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*  value) ;

constexpr void __cordl_internal_set_presetVoiceID(::StringW  value) ;

constexpr void __cordl_internal_set_verboseLogging(bool  value) ;

/// @brief Method .ctor, addr 0x9e61aa4, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioPlayer, addr 0x9e5c06c, size 0x190, virtual true, abstract: false, final true
inline ::Meta::Voice::Audio::IAudioPlayer* get_AudioPlayer() ;

/// @brief Method get_AudioSource, addr 0x9e50bb0, size 0xb8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioSource> get_AudioSource() ;

/// @brief Method get_CurrentEvents, addr 0x9e61a84, size 0x20, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Data::TTSEventContainer* get_CurrentEvents() ;

/// @brief Method get_ElapsedSamples, addr 0x9e5f610, size 0x3b4, virtual true, abstract: false, final true
inline int32_t get_ElapsedSamples() ;

/// @brief Method get_Events, addr 0x9e5bea4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents* get_Events() ;

/// @brief Method get_IsActive, addr 0x9e5c050, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// @brief Method get_IsLoading, addr 0x9e50854, size 0x50, virtual false, abstract: false, final false
inline bool get_IsLoading() ;

/// [CompilerGenerated]
/// @brief Method get_IsPaused, addr 0x9e5fd24, size 0x8, virtual true, abstract: false, final true
inline bool get_IsPaused() ;

/// @brief Method get_IsPreparing, addr 0x9e5bf14, size 0x13c, virtual false, abstract: false, final false
inline bool get_IsPreparing() ;

/// @brief Method get_IsSpeaking, addr 0x9e508a4, size 0x20, virtual true, abstract: false, final true
inline bool get_IsSpeaking() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e5be9c, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_OnSampleUpdated, addr 0x9e61a58, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate* get_OnSampleUpdated() ;

/// @brief Method get_QueuedClips, addr 0x9e516bc, size 0x1e8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Data::TTSClipData*>* get_QueuedClips() ;

/// @brief Method get_SpeakingClip, addr 0x9e51480, size 0x18, virtual false, abstract: false, final false
inline ::Meta::WitAi::TTS::Data::TTSClipData* get_SpeakingClip() ;

/// @brief Method get_SpeechEvents, addr 0x9e5beac, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Speech::VoiceSpeechEvents* get_SpeechEvents() ;

/// @brief Method get_TTSService, addr 0x9e4fe4c, size 0xdc, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::TTS::TTSService> get_TTSService() ;

/// @brief Method get_TotalSamples, addr 0x9e5f9c4, size 0xc0, virtual true, abstract: false, final true
inline int32_t get_TotalSamples() ;

/// @brief Method get_VoiceID, addr 0x9e5beb4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_VoiceID() ;

/// @brief Method get_VoiceSettings, addr 0x9e5bec4, size 0x50, virtual true, abstract: false, final true
inline ::Meta::WitAi::TTS::Data::TTSVoiceSettings* get_VoiceSettings() ;

/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ISpeaker"
constexpr ::Meta::WitAi::TTS::Interfaces::ISpeaker* i___Meta__WitAi__TTS__Interfaces__ISpeaker() noexcept;

/// @brief Convert to "::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer"
constexpr ::Meta::WitAi::TTS::Interfaces::ITTSEventPlayer* i___Meta__WitAi__TTS__Interfaces__ITTSEventPlayer() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsPaused, addr 0x9e5fd2c, size 0x8, virtual false, abstract: false, final false
inline void set_IsPaused(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_OnSampleUpdated, addr 0x9e61a60, size 0x8, virtual true, abstract: false, final true
inline void set_OnSampleUpdated(::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*  value) ;

/// @brief Method set_VoiceID, addr 0x9e5bebc, size 0x8, virtual false, abstract: false, final false
inline void set_VoiceID(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker(TTSSpeaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker(TTSSpeaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29169};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [Header("Event Settings")]
/// [Tooltip("All speaker load and playback events")]
/// [SerializeField]
/// @brief Field _events, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerEvents*  ____events;

/// [Header("Text Settings")]
/// [Tooltip("Text that is added to the front of any Speech() request")]
/// [TextArea]
/// [FormerlySerializedAs("prependedText")]
/// @brief Field PrependedText, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___PrependedText;

/// [Tooltip("Text that is added to the end of any Speech() text")]
/// [TextArea]
/// [FormerlySerializedAs("appendedText")]
/// @brief Field AppendedText, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___AppendedText;

/// [Header("Load Settings")]
/// [Tooltip("Optional TTSService reference to be used for text-to-speech loading.  If missing, it will check the component.  If that is also missing then it will use the current singleton")]
/// [SerializeField]
/// @brief Field _ttsService, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::TTSService>  ____ttsService;

/// [Tooltip("Preset voice setting id of TTSService voice settings")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field presetVoiceID, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___presetVoiceID;

/// [Tooltip("Custom wit specific voice settings used if the preset is null or empty")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field customWitVoiceSettings, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Integrations::TTSWitVoiceSettings*  ___customWitVoiceSettings;

/// [SerializeField]
/// @brief Field verboseLogging, offset: 0x58, size: 0x1, def value: None
 bool  ___verboseLogging;

/// @brief Field _overrideVoiceSettings, offset: 0x60, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  ____overrideVoiceSettings;

/// @brief Field _elapsedPlayTime, offset: 0x68, size: 0x4, def value: None
 float_t  ____elapsedPlayTime;

/// @brief Field _speakingRequest, offset: 0x70, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  ____speakingRequest;

/// @brief Field _queuedRequests, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*>*  ____queuedRequests;

/// @brief Field _hasQueue, offset: 0x80, size: 0x1, def value: None
 bool  ____hasQueue;

/// @brief Field _queueNotYetComplete, offset: 0x81, size: 0x1, def value: None
 bool  ____queueNotYetComplete;

/// @brief Field _textPreprocessors, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPreprocessor*>  ____textPreprocessors;

/// @brief Field _textPostprocessors, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::TTS::Interfaces::ISpeakerTextPostprocessor*>  ____textPostprocessors;

/// @brief Field _audioPlayer, offset: 0x98, size: 0x8, def value: None
 ::Meta::Voice::Audio::IAudioPlayer*  ____audioPlayer;

/// @brief Field _waitForCompletion, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____waitForCompletion;

/// @brief Field _isPlaying, offset: 0xa8, size: 0x1, def value: None
 bool  ____isPlaying;

/// [CompilerGenerated]
/// @brief Field <IsPaused>k__BackingField, offset: 0xa9, size: 0x1, def value: None
 bool  ____IsPaused_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnSampleUpdated>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Interfaces::TTSEventSampleDelegate*  ____OnSampleUpdated_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____Logger_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____events) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ___PrependedText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ___AppendedText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____ttsService) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ___presetVoiceID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ___customWitVoiceSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ___verboseLogging) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____overrideVoiceSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____elapsedPlayTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____speakingRequest) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____queuedRequests) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____hasQueue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____queueNotYetComplete) == 0x81, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____textPreprocessors) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____textPostprocessors) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____audioPlayer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____waitForCompletion) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____isPlaying) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____IsPaused_k__BackingField) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker, ____OnSampleUpdated_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker) == 0xb8, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<WaitForPlaybackComplete>d__131
class CORDL_TYPE TTSSpeaker__WaitForPlaybackComplete_d__131 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field <sample>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__sample_5__2, put=__cordl_internal_set__sample_5__2)) int32_t  _sample_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e648cc, size 0x270, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e64b3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e64b44, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e64b7c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e648c8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get__sample_5__2() const;

constexpr int32_t& __cordl_internal_get__sample_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set__sample_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e648a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__WaitForPlaybackComplete_d__131() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__WaitForPlaybackComplete_d__131", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__WaitForPlaybackComplete_d__131(TTSSpeaker__WaitForPlaybackComplete_d__131 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__WaitForPlaybackComplete_d__131", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__WaitForPlaybackComplete_d__131(TTSSpeaker__WaitForPlaybackComplete_d__131 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29168};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field <sample>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____sample_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131, ____sample_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__WaitForPlaybackComplete_d__131) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__86
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__86 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field textsToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textsToSpeak, put=__cordl_internal_set_textsToSpeak)) ::ArrayW<::StringW>  textsToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e647e0, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e64858, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e64860, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e64898, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e647dc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_textsToSpeak() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_textsToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e647b4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__86() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__86", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__86(TTSSpeaker__SpeakQueuedAsync_d__86 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__86", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__86(TTSSpeaker__SpeakQueuedAsync_d__86 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29167};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textsToSpeak, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___textsToSpeak;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86, ___textsToSpeak) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__86) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__85
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__85 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field textsToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textsToSpeak, put=__cordl_internal_set_textsToSpeak)) ::ArrayW<::StringW>  textsToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e646f8, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e6476c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e64774, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e647ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e646f4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_textsToSpeak() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_textsToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e646cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__85() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__85", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__85(TTSSpeaker__SpeakQueuedAsync_d__85 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__85", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__85(TTSSpeaker__SpeakQueuedAsync_d__85 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29166};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textsToSpeak, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___textsToSpeak;

/// @brief Field diskCacheSettings, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85, ___textsToSpeak) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85, ___diskCacheSettings) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__85) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__84
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__84 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field textsToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textsToSpeak, put=__cordl_internal_set_textsToSpeak)) ::ArrayW<::StringW>  textsToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e64610, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e64684, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e6468c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e646c4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e6460c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_textsToSpeak() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_textsToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e645e4, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__84() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__84", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__84(TTSSpeaker__SpeakQueuedAsync_d__84 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__84", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__84(TTSSpeaker__SpeakQueuedAsync_d__84 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29165};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textsToSpeak, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___textsToSpeak;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84, ___textsToSpeak) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__84) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__83
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__83 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field textsToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textsToSpeak, put=__cordl_internal_set_textsToSpeak)) ::ArrayW<::StringW>  textsToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e64444, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e6459c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e645a4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e645dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e64440, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_textsToSpeak() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_textsToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e64418, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__83() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__83", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__83(TTSSpeaker__SpeakQueuedAsync_d__83 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__83", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__83(TTSSpeaker__SpeakQueuedAsync_d__83 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29164};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textsToSpeak, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___textsToSpeak;

/// @brief Field diskCacheSettings, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83, ___textsToSpeak) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83, ___diskCacheSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83, ___playbackEvents) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__83) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__107
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__107 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field responseNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e64358, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e643d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e643d8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e64410, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e64354, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e6432c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__107() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__107", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__107(TTSSpeaker__SpeakQueuedAsync_d__107 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__107", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__107(TTSSpeaker__SpeakQueuedAsync_d__107 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29163};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field responseNode, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107, ___responseNode) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__107) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__106
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__106 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field responseNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e64270, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e642e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e642ec, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e64324, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e6426c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e64244, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__106() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__106", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__106(TTSSpeaker__SpeakQueuedAsync_d__106 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__106", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__106(TTSSpeaker__SpeakQueuedAsync_d__106 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29162};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field responseNode, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

/// @brief Field diskCacheSettings, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106, ___responseNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106, ___diskCacheSettings) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__106) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__105
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__105 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field responseNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e64188, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e641fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e64204, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e6423c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e64184, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e6415c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__105() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__105", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__105(TTSSpeaker__SpeakQueuedAsync_d__105 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__105", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__105(TTSSpeaker__SpeakQueuedAsync_d__105 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29161};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field responseNode, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105, ___responseNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__105) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakQueuedAsync>d__104
class CORDL_TYPE TTSSpeaker__SpeakQueuedAsync_d__104 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field responseNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e63f8c, size 0x188, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e64114, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e6411c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e64154, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e63f88, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e63f60, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakQueuedAsync_d__104() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__104", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakQueuedAsync_d__104(TTSSpeaker__SpeakQueuedAsync_d__104 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakQueuedAsync_d__104", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakQueuedAsync_d__104(TTSSpeaker__SpeakQueuedAsync_d__104 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29160};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field diskCacheSettings, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

/// @brief Field responseNode, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104, ___diskCacheSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104, ___responseNode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakQueuedAsync_d__104) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__99
class CORDL_TYPE TTSSpeaker__SpeakAsync_d__99 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field responseNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e63ea4, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e63f18, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e63f20, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e63f58, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e63ea0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e63e78, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakAsync_d__99() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__99", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakAsync_d__99(TTSSpeaker__SpeakAsync_d__99 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__99", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakAsync_d__99(TTSSpeaker__SpeakAsync_d__99 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29159};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field responseNode, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

/// @brief Field diskCacheSettings, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99, ___responseNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99, ___diskCacheSettings) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__99) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__98
class CORDL_TYPE TTSSpeaker__SpeakAsync_d__98 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field responseNode, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e63dbc, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e63e30, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e63e38, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e63e70, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e63db8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e63d90, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakAsync_d__98() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__98", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakAsync_d__98(TTSSpeaker__SpeakAsync_d__98 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__98", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakAsync_d__98(TTSSpeaker__SpeakAsync_d__98 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29158};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field responseNode, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98, ___responseNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__98) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__97
class CORDL_TYPE TTSSpeaker__SpeakAsync_d__97 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field responseNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e63bc0, size 0x188, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e63d48, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e63d50, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e63d88, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e63bbc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e63b94, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakAsync_d__97() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__97", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakAsync_d__97(TTSSpeaker__SpeakAsync_d__97 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__97", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakAsync_d__97(TTSSpeaker__SpeakAsync_d__97 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29157};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field diskCacheSettings, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

/// @brief Field responseNode, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97, ___diskCacheSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97, ___responseNode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__97) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__72
class CORDL_TYPE TTSSpeaker__SpeakAsync_d__72 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field textToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e63ad4, size 0x78, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e63b4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e63b54, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e63b8c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e63ad0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e63aa8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakAsync_d__72() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__72", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakAsync_d__72(TTSSpeaker__SpeakAsync_d__72 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__72", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakAsync_d__72(TTSSpeaker__SpeakAsync_d__72 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29156};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textToSpeak, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72, ___textToSpeak) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__72) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__71
class CORDL_TYPE TTSSpeaker__SpeakAsync_d__71 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field textToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e639ec, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e63a60, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e63a68, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e63aa0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e639e8, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e639c0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakAsync_d__71() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__71", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakAsync_d__71(TTSSpeaker__SpeakAsync_d__71 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__71", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakAsync_d__71(TTSSpeaker__SpeakAsync_d__71 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29155};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textToSpeak, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field diskCacheSettings, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71, ___textToSpeak) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71, ___diskCacheSettings) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__71) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__70
class CORDL_TYPE TTSSpeaker__SpeakAsync_d__70 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field textToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e63904, size 0x74, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e63978, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e63980, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e639b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e63900, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e638d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakAsync_d__70() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__70", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakAsync_d__70(TTSSpeaker__SpeakAsync_d__70 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__70", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakAsync_d__70(TTSSpeaker__SpeakAsync_d__70 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29154};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textToSpeak, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70, ___textToSpeak) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__70) == 0x38, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<SpeakAsync>d__69
class CORDL_TYPE TTSSpeaker__SpeakAsync_d__69 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field textToSpeak, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e63738, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e63890, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e63898, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e638d0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e63734, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e6370c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker__SpeakAsync_d__69() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__69", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker__SpeakAsync_d__69(TTSSpeaker__SpeakAsync_d__69 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker__SpeakAsync_d__69", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker__SpeakAsync_d__69(TTSSpeaker__SpeakAsync_d__69 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29153};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textToSpeak, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field diskCacheSettings, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69, ___textToSpeak) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69, ___diskCacheSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69, ___playbackEvents) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker__SpeakAsync_d__69) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass97_0
class CORDL_TYPE TTSSpeaker___c__DisplayClass97_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field responseNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Field textToSpeak, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Field voiceSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSettings, put=__cordl_internal_set_voiceSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0* New_ctor() ;

/// @brief Method <SpeakAsync>b__0, addr 0x9e61f94, size 0x40, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _SpeakAsync_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& __cordl_internal_get_voiceSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& __cordl_internal_get_voiceSettings() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

constexpr void __cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value) ;

/// @brief Method .ctor, addr 0x9e61f8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass97_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass97_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass97_0(TTSSpeaker___c__DisplayClass97_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass97_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass97_0(TTSSpeaker___c__DisplayClass97_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29149};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textToSpeak, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field voiceSettings, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  ___voiceSettings;

/// @brief Field diskCacheSettings, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

/// @brief Field responseNode, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0, ___textToSpeak) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0, ___voiceSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0, ___diskCacheSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0, ___responseNode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass97_0) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass83_0
class CORDL_TYPE TTSSpeaker___c__DisplayClass83_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field textsToSpeak, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_textsToSpeak, put=__cordl_internal_set_textsToSpeak)) ::ArrayW<::StringW>  textsToSpeak;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0* New_ctor() ;

/// @brief Method <SpeakQueuedAsync>b__0, addr 0x9e61f48, size 0x44, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _SpeakQueuedAsync_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_textsToSpeak() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_textsToSpeak() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_textsToSpeak(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0x9e61f40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass83_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass83_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass83_0(TTSSpeaker___c__DisplayClass83_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass83_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass83_0(TTSSpeaker___c__DisplayClass83_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29148};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textsToSpeak, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___textsToSpeak;

/// @brief Field diskCacheSettings, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0, ___textsToSpeak) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0, ___diskCacheSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0, ___playbackEvents) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass83_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass69_0
class CORDL_TYPE TTSSpeaker___c__DisplayClass69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field textToSpeak, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0* New_ctor() ;

/// @brief Method <SpeakAsync>b__0, addr 0x9e61e78, size 0xc8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _SpeakAsync_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e61e70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass69_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass69_0(TTSSpeaker___c__DisplayClass69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass69_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass69_0(TTSSpeaker___c__DisplayClass69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29147};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textToSpeak, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field diskCacheSettings, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0, ___textToSpeak) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0, ___diskCacheSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0, ___playbackEvents) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass69_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass155_0`2<T1,T2>
class CORDL_TYPE TTSSpeaker___c__DisplayClass155_0_2 : public ::System::Object {
public:
// Declarations
/// @brief Field events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::System::Action_2<T1,T2>*  events;

/// @brief Field parameter1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameter1, put=__cordl_internal_set_parameter1)) T1  parameter1;

/// @brief Field parameter2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameter2, put=__cordl_internal_set_parameter2)) T2  parameter2;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass155_0_2<T1,T2>* New_ctor() ;

/// @brief Method <RaiseEvents>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RaiseEvents_b__0() ;

constexpr ::System::Action_2<T1,T2>* const& __cordl_internal_get_events() const;

constexpr ::System::Action_2<T1,T2>*& __cordl_internal_get_events() ;

constexpr T1 const& __cordl_internal_get_parameter1() const;

constexpr T1& __cordl_internal_get_parameter1() ;

constexpr T2 const& __cordl_internal_get_parameter2() const;

constexpr T2& __cordl_internal_get_parameter2() ;

constexpr void __cordl_internal_set_events(::System::Action_2<T1,T2>*  value) ;

constexpr void __cordl_internal_set_parameter1(T1  value) ;

constexpr void __cordl_internal_set_parameter2(T2  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass155_0_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass155_0_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass155_0_2(TTSSpeaker___c__DisplayClass155_0_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass155_0_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass155_0_2(TTSSpeaker___c__DisplayClass155_0_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29146};

/// @brief Field events, offset: 0x10, size: 0x8, def value: None
 ::System::Action_2<T1,T2>*  ___events;

/// @brief Field parameter1, offset: 0x18, size: 0x8, def value: None
 T1  ___parameter1;

/// @brief Field parameter2, offset: 0x20, size: 0x8, def value: None
 T2  ___parameter2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass154_0`1<T>
class CORDL_TYPE TTSSpeaker___c__DisplayClass154_0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field events, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::System::Action_1<T>*  events;

/// @brief Field parameter, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameter, put=__cordl_internal_set_parameter)) T  parameter;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass154_0_1<T>* New_ctor() ;

/// @brief Method <RaiseEvents>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _RaiseEvents_b__0() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_events() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_events() ;

constexpr T const& __cordl_internal_get_parameter() const;

constexpr T& __cordl_internal_get_parameter() ;

constexpr void __cordl_internal_set_events(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_parameter(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass154_0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass154_0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass154_0_1(TTSSpeaker___c__DisplayClass154_0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass154_0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass154_0_1(TTSSpeaker___c__DisplayClass154_0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29145};

/// @brief Field events, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<T>*  ___events;

/// @brief Field parameter, offset: 0x18, size: 0x8, def value: None
 T  ___parameter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass122_0
class CORDL_TYPE TTSSpeaker___c__DisplayClass122_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field responseNode, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Field textToSpeak, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Field voiceSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSettings, put=__cordl_internal_set_voiceSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0* New_ctor() ;

/// @brief Method <Load>b__0, addr 0x9e61e48, size 0x28, virtual false, abstract: false, final false
inline void _Load_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& __cordl_internal_get_voiceSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& __cordl_internal_get_voiceSettings() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

constexpr void __cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value) ;

/// @brief Method .ctor, addr 0x9e61e40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass122_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass122_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass122_0(TTSSpeaker___c__DisplayClass122_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass122_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass122_0(TTSSpeaker___c__DisplayClass122_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29144};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field responseNode, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

/// @brief Field textToSpeak, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field voiceSettings, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  ___voiceSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0, ___responseNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0, ___textToSpeak) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0, ___voiceSettings) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass121_0
class CORDL_TYPE TTSSpeaker___c__DisplayClass121_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field requestData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestData, put=__cordl_internal_set_requestData)) ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  requestData;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0* New_ctor() ;

/// @brief Method <CreateRequest>b__0, addr 0x9e61e20, size 0x20, virtual false, abstract: false, final false
inline void _CreateRequest_b__0(::Meta::WitAi::TTS::Data::TTSClipData*  clip) ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* const& __cordl_internal_get_requestData() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*& __cordl_internal_get_requestData() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_requestData(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  value) ;

/// @brief Method .ctor, addr 0x9e61e18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass121_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass121_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass121_0(TTSSpeaker___c__DisplayClass121_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass121_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass121_0(TTSSpeaker___c__DisplayClass121_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29143};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field requestData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  ___requestData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0, ___requestData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass121_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass104_0
class CORDL_TYPE TTSSpeaker___c__DisplayClass104_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this;

/// @brief Field diskCacheSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_diskCacheSettings, put=__cordl_internal_set_diskCacheSettings)) ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings;

/// @brief Field playbackEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_playbackEvents, put=__cordl_internal_set_playbackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents;

/// @brief Field responseNode, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_responseNode, put=__cordl_internal_set_responseNode)) ::Meta::WitAi::Json::WitResponseNode*  responseNode;

/// @brief Field textToSpeak, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_textToSpeak, put=__cordl_internal_set_textToSpeak)) ::StringW  textToSpeak;

/// @brief Field voiceSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceSettings, put=__cordl_internal_set_voiceSettings)) ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  voiceSettings;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0* New_ctor() ;

/// @brief Method <SpeakQueuedAsync>b__0, addr 0x9e61dd8, size 0x40, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _SpeakQueuedAsync_b__0() ;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings* const& __cordl_internal_get_diskCacheSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*& __cordl_internal_get_diskCacheSettings() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_playbackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_playbackEvents() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_responseNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_responseNode() ;

constexpr ::StringW const& __cordl_internal_get_textToSpeak() const;

constexpr ::StringW& __cordl_internal_get_textToSpeak() ;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings* const& __cordl_internal_get_voiceSettings() const;

constexpr ::Meta::WitAi::TTS::Data::TTSVoiceSettings*& __cordl_internal_get_voiceSettings() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  value) ;

constexpr void __cordl_internal_set_diskCacheSettings(::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  value) ;

constexpr void __cordl_internal_set_playbackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_responseNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set_textToSpeak(::StringW  value) ;

constexpr void __cordl_internal_set_voiceSettings(::Meta::WitAi::TTS::Data::TTSVoiceSettings*  value) ;

/// @brief Method .ctor, addr 0x9e61dd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker___c__DisplayClass104_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass104_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker___c__DisplayClass104_0(TTSSpeaker___c__DisplayClass104_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker___c__DisplayClass104_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker___c__DisplayClass104_0(TTSSpeaker___c__DisplayClass104_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29142};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  _____4__this;

/// @brief Field textToSpeak, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___textToSpeak;

/// @brief Field voiceSettings, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSVoiceSettings*  ___voiceSettings;

/// @brief Field diskCacheSettings, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  ___diskCacheSettings;

/// @brief Field playbackEvents, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___playbackEvents;

/// @brief Field responseNode, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___responseNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0, ___textToSpeak) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0, ___voiceSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0, ___diskCacheSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0, ___playbackEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0, ___responseNode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass104_0) == 0x40, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
// Dependencies System.DateTime, System.Object
namespace Meta::WitAi::TTS::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData
class CORDL_TYPE TTSSpeaker_TTSSpeakerRequestData : public ::System::Object {
public:
// Declarations
/// @brief Field ClipData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ClipData, put=__cordl_internal_set_ClipData)) ::Meta::WitAi::TTS::Data::TTSClipData*  ClipData;

/// @brief Field Error, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Error, put=__cordl_internal_set_Error)) ::StringW  Error;

/// @brief Field IsReady, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsReady, put=__cordl_internal_set_IsReady)) bool  IsReady;

/// @brief Field OnReady, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReady, put=__cordl_internal_set_OnReady)) ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  OnReady;

/// @brief Field PlaybackCompletion, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlaybackCompletion, put=__cordl_internal_set_PlaybackCompletion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  PlaybackCompletion;

/// @brief Field PlaybackEvents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlaybackEvents, put=__cordl_internal_set_PlaybackEvents)) ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  PlaybackEvents;

/// @brief Field SpeechNode, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpeechNode, put=__cordl_internal_set_SpeechNode)) ::Meta::WitAi::Json::WitResponseNode*  SpeechNode;

/// @brief Field StartTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_StartTime, put=__cordl_internal_set_StartTime)) ::System::DateTime  StartTime;

/// @brief Field StopPlaybackOnLoad, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_StopPlaybackOnLoad, put=__cordl_internal_set_StopPlaybackOnLoad)) bool  StopPlaybackOnLoad;

static inline ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData* New_ctor() ;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData* const& __cordl_internal_get_ClipData() const;

constexpr ::Meta::WitAi::TTS::Data::TTSClipData*& __cordl_internal_get_ClipData() ;

constexpr ::StringW const& __cordl_internal_get_Error() const;

constexpr ::StringW& __cordl_internal_get_Error() ;

constexpr bool const& __cordl_internal_get_IsReady() const;

constexpr bool& __cordl_internal_get_IsReady() ;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>* const& __cordl_internal_get_OnReady() const;

constexpr ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*& __cordl_internal_get_OnReady() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get_PlaybackCompletion() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get_PlaybackCompletion() ;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents* const& __cordl_internal_get_PlaybackEvents() const;

constexpr ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*& __cordl_internal_get_PlaybackEvents() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_SpeechNode() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_SpeechNode() ;

constexpr ::System::DateTime const& __cordl_internal_get_StartTime() const;

constexpr ::System::DateTime& __cordl_internal_get_StartTime() ;

constexpr bool const& __cordl_internal_get_StopPlaybackOnLoad() const;

constexpr bool& __cordl_internal_get_StopPlaybackOnLoad() ;

constexpr void __cordl_internal_set_ClipData(::Meta::WitAi::TTS::Data::TTSClipData*  value) ;

constexpr void __cordl_internal_set_Error(::StringW  value) ;

constexpr void __cordl_internal_set_IsReady(bool  value) ;

constexpr void __cordl_internal_set_OnReady(::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  value) ;

constexpr void __cordl_internal_set_PlaybackCompletion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set_PlaybackEvents(::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  value) ;

constexpr void __cordl_internal_set_SpeechNode(::Meta::WitAi::Json::WitResponseNode*  value) ;

constexpr void __cordl_internal_set_StartTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_StopPlaybackOnLoad(bool  value) ;

/// @brief Method .ctor, addr 0x9e61dc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TTSSpeaker_TTSSpeakerRequestData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker_TTSSpeakerRequestData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TTSSpeaker_TTSSpeakerRequestData(TTSSpeaker_TTSSpeakerRequestData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TTSSpeaker_TTSSpeakerRequestData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TTSSpeaker_TTSSpeakerRequestData(TTSSpeaker_TTSSpeakerRequestData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29141};

/// @brief Field ClipData, offset: 0x10, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Data::TTSClipData*  ___ClipData;

/// @brief Field OnReady, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  ___OnReady;

/// @brief Field IsReady, offset: 0x20, size: 0x1, def value: None
 bool  ___IsReady;

/// @brief Field Error, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___Error;

/// @brief Field StartTime, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___StartTime;

/// @brief Field StopPlaybackOnLoad, offset: 0x38, size: 0x1, def value: None
 bool  ___StopPlaybackOnLoad;

/// @brief Field PlaybackEvents, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  ___PlaybackEvents;

/// @brief Field PlaybackCompletion, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ___PlaybackCompletion;

/// @brief Field SpeechNode, offset: 0x50, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___SpeechNode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___ClipData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___OnReady) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___IsReady) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___Error) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___StartTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___StopPlaybackOnLoad) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___PlaybackEvents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___PlaybackCompletion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData, ___SpeechNode) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData) == 0x58, "Size mismatch!");

} // namespace end def Meta::WitAi::TTS::Utilities
