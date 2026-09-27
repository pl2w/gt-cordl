#pragma once
// IWYU pragma private; include "Meta/WitAi/WitService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/WitAi/Events/zzzz__IWitByteDataReadyHandler_def.hpp"
#include "Meta/WitAi/Events/zzzz__IWitByteDataSentHandler_def.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IDynamicEntitiesProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WitService)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunk;
}
namespace Meta::Voice::Net::PubSub {
class IPubSubAdapter;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketAdapter;
}
namespace Meta::Voice {
struct VoiceAudioInputState;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Configuration {
class WitRuntimeConfiguration;
}
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi::Data {
class AudioBuffer;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_Marker;
}
namespace Meta::WitAi::Events {
class TelemetryEvents;
}
namespace Meta::WitAi::Events {
class VoiceEvents;
}
namespace Meta::WitAi::Interfaces {
class ITranscriptionProvider;
}
namespace Meta::WitAi::Interfaces {
class IVoiceServiceRequestProvider;
}
namespace Meta::WitAi::Interfaces {
class IWitConfigurationProvider;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequestEvents;
}
namespace Meta::WitAi::Requests {
class VoiceServiceRequest;
}
namespace Meta::WitAi {
class ITelemetryEventsProvider;
}
namespace Meta::WitAi {
class IVoiceActivationHandler;
}
namespace Meta::WitAi {
class IVoiceEventProvider;
}
namespace Meta::WitAi {
class IWitRuntimeConfigProvider;
}
namespace Meta::WitAi {
class WitService__DeactivateDueToTimeLimit_d__102;
}
namespace Meta::WitAi {
class WitService___c__DisplayClass82_0;
}
namespace Meta::WitAi {
class WitService___c__DisplayClass86_0;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace Meta::WitAi {
class WitService;
}
namespace Meta::WitAi {
class WitService__DeactivateDueToTimeLimit_d__102;
}
namespace Meta::WitAi {
class WitService___c__DisplayClass82_0;
}
namespace Meta::WitAi {
class WitService___c__DisplayClass86_0;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::WitService*);
MARK_REF_T(::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*);
MARK_REF_T(::Meta::WitAi::WitService___c__DisplayClass82_0*);
MARK_REF_T(::Meta::WitAi::WitService___c__DisplayClass86_0*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitService*, "Meta.WitAi", "WitService");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102*, "Meta.WitAi", "WitService/<DeactivateDueToTimeLimit>d__102");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitService___c__DisplayClass82_0*, "Meta.WitAi", "WitService/<>c__DisplayClass82_0");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitService___c__DisplayClass86_0*, "Meta.WitAi", "WitService/<>c__DisplayClass86_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)7)]
// Dependencies Meta.WitAi.Events.IWitByteDataReadyHandler, Meta.WitAi.Events.IWitByteDataSentHandler, Meta.WitAi.Interfaces.IDynamicEntitiesProvider, UnityEngine.MonoBehaviour
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitService
class CORDL_TYPE WitService : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DeactivateDueToTimeLimit_d__102 = ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102;

using __c__DisplayClass82_0 = ::Meta::WitAi::WitService___c__DisplayClass82_0;

using __c__DisplayClass86_0 = ::Meta::WitAi::WitService___c__DisplayClass86_0;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_Configuration)) ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>  Configuration;

 __declspec(property(get=get_ConfigurationProvider, put=set_ConfigurationProvider)) ::Meta::WitAi::IWitRuntimeConfigProvider*  ConfigurationProvider;

 __declspec(property(get=get_IsRequestActive)) bool  IsRequestActive;

 __declspec(property(get=get_MicActive)) bool  MicActive;

 __declspec(property(get=get_PubSub)) ::Meta::Voice::Net::PubSub::IPubSubAdapter*  PubSub;

 __declspec(property(get=get_RequestProvider, put=set_RequestProvider)) ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*  RequestProvider;

 __declspec(property(get=get_RuntimeConfiguration)) ::Meta::WitAi::Configuration::WitRuntimeConfiguration*  RuntimeConfiguration;

 __declspec(property(get=get_ShouldSendMicData)) bool  ShouldSendMicData;

 __declspec(property(get=get_TelemetryEvents)) ::Meta::WitAi::Events::TelemetryEvents*  TelemetryEvents;

 __declspec(property(get=get_TelemetryEventsProvider, put=set_TelemetryEventsProvider)) ::Meta::WitAi::ITelemetryEventsProvider*  TelemetryEventsProvider;

 __declspec(property(get=get_TranscriptionProvider, put=set_TranscriptionProvider)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  TranscriptionProvider;

 __declspec(property(get=get_VoiceEventProvider, put=set_VoiceEventProvider)) ::Meta::WitAi::IVoiceEventProvider*  VoiceEventProvider;

 __declspec(property(get=get_VoiceEvents)) ::Meta::WitAi::Events::VoiceEvents*  VoiceEvents;

/// @brief Field <RequestProvider>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestProvider_k__BackingField, put=__cordl_internal_set__RequestProvider_k__BackingField)) ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*  _RequestProvider_k__BackingField;

/// @brief Field <_log>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___log_k__BackingField, put=__cordl_internal_set___log_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  __log_k__BackingField;

/// @brief Field _activeTranscriptionProvider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeTranscriptionProvider, put=__cordl_internal_set__activeTranscriptionProvider)) ::Meta::WitAi::Interfaces::ITranscriptionProvider*  _activeTranscriptionProvider;

/// @brief Field _buffer, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::UnityW<::Meta::WitAi::Data::AudioBuffer>  _buffer;

/// @brief Field _bufferDelegates, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get__bufferDelegates, put=__cordl_internal_set__bufferDelegates)) bool  _bufferDelegates;

/// @brief Field _dataReadyHandlers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataReadyHandlers, put=__cordl_internal_set__dataReadyHandlers)) ::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*>  _dataReadyHandlers;

/// @brief Field _dataSentHandlers, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataSentHandlers, put=__cordl_internal_set__dataSentHandlers)) ::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*>  _dataSentHandlers;

/// @brief Field _dynamicEntityProviders, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__dynamicEntityProviders, put=__cordl_internal_set__dynamicEntityProviders)) ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  _dynamicEntityProviders;

/// @brief Field _isActive, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _isSoundWakeActive, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSoundWakeActive, put=__cordl_internal_set__isSoundWakeActive)) bool  _isSoundWakeActive;

/// @brief Field _lastMinVolumeLevelTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastMinVolumeLevelTime, put=__cordl_internal_set__lastMinVolumeLevelTime)) float_t  _lastMinVolumeLevelTime;

/// @brief Field _lastSampleMarker, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSampleMarker, put=__cordl_internal_set__lastSampleMarker)) ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  _lastSampleMarker;

/// @brief Field _lastWordTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWordTime, put=__cordl_internal_set__lastWordTime)) float_t  _lastWordTime;

 __declspec(property(get=get__log)) ::Meta::Voice::Logging::IVLogger*  _log;

/// @brief Field _minKeepAliveWasHit, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__minKeepAliveWasHit, put=__cordl_internal_set__minKeepAliveWasHit)) bool  _minKeepAliveWasHit;

/// @brief Field _minSampleByteCount, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__minSampleByteCount, put=__cordl_internal_set__minSampleByteCount)) int64_t  _minSampleByteCount;

/// @brief Field _queueHandler, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__queueHandler, put=__cordl_internal_set__queueHandler)) ::UnityEngine::Coroutine*  _queueHandler;

/// @brief Field _receivedTranscription, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__receivedTranscription, put=__cordl_internal_set__receivedTranscription)) bool  _receivedTranscription;

/// @brief Field _recordingRequest, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingRequest, put=__cordl_internal_set__recordingRequest)) ::Meta::WitAi::Requests::VoiceServiceRequest*  _recordingRequest;

/// @brief Field _runtimeConfigProvider, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__runtimeConfigProvider, put=__cordl_internal_set__runtimeConfigProvider)) ::Meta::WitAi::IWitRuntimeConfigProvider*  _runtimeConfigProvider;

/// @brief Field _telemetryEventsProvider, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryEventsProvider, put=__cordl_internal_set__telemetryEventsProvider)) ::Meta::WitAi::ITelemetryEventsProvider*  _telemetryEventsProvider;

/// @brief Field _time, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__time, put=__cordl_internal_set__time)) float_t  _time;

/// @brief Field _timeLimitCoroutine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeLimitCoroutine, put=__cordl_internal_set__timeLimitCoroutine)) ::UnityEngine::Coroutine*  _timeLimitCoroutine;

/// @brief Field _transmitRequests, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__transmitRequests, put=__cordl_internal_set__transmitRequests)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>*  _transmitRequests;

/// @brief Field _voiceEventProvider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__voiceEventProvider, put=__cordl_internal_set__voiceEventProvider)) ::Meta::WitAi::IVoiceEventProvider*  _voiceEventProvider;

/// @brief Field _webSocketAdapter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__webSocketAdapter, put=__cordl_internal_set__webSocketAdapter)) ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  _webSocketAdapter;

/// @brief Convert operator to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr operator  ::Meta::WitAi::ITelemetryEventsProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceActivationHandler"
constexpr operator  ::Meta::WitAi::IVoiceActivationHandler*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IVoiceEventProvider"
constexpr operator  ::Meta::WitAi::IVoiceEventProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr operator  ::Meta::WitAi::IWitRuntimeConfigProvider*() noexcept;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IWitConfigurationProvider*() noexcept;

/// @brief Method Activate, addr 0x9e78e40, size 0x3fc, virtual true, abstract: false, final true
inline ::Meta::WitAi::Requests::VoiceServiceRequest* Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x9e78a9c, size 0x35c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method Activate, addr 0x9e81838, size 0xcc, virtual false, abstract: false, final false
inline void Activate() ;

/// @brief Method Activate, addr 0x9e81904, size 0x6c, virtual false, abstract: false, final false
inline void Activate(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions) ;

/// @brief Method Activate, addr 0x9e81d44, size 0xdc, virtual false, abstract: false, final false
inline void Activate(::StringW  text) ;

/// @brief Method Activate, addr 0x9e81e20, size 0x7c, virtual false, abstract: false, final false
inline void Activate(::StringW  text, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions) ;

/// @brief Method ActivateImmediately, addr 0x9e79284, size 0x110, virtual true, abstract: false, final true
inline ::Meta::WitAi::Requests::VoiceServiceRequest* ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method ActivateImmediately, addr 0x9e81a94, size 0xcc, virtual false, abstract: false, final false
inline void ActivateImmediately() ;

/// @brief Method ActivateImmediately, addr 0x9e81b60, size 0x6c, virtual false, abstract: false, final false
inline void ActivateImmediately(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions) ;

/// @brief Method Awake, addr 0x9e80240, size 0xc0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Deactivate, addr 0x9e793b4, size 0x50, virtual true, abstract: false, final true
inline void Deactivate() ;

/// @brief Method DeactivateAndAbortRequest, addr 0x9e79424, size 0x50, virtual true, abstract: false, final true
inline void DeactivateAndAbortRequest() ;

/// @brief Method DeactivateAndAbortRequest, addr 0x9e82dac, size 0x84, virtual true, abstract: false, final true
inline void DeactivateAndAbortRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.WitService::<DeactivateDueToTimeLimit>d__102))]
/// @brief Method DeactivateDueToTimeLimit, addr 0x9e81cd0, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DeactivateDueToTimeLimit() ;

/// @brief Method DeactivateRequest, addr 0x9e826a0, size 0x2a0, virtual false, abstract: false, final false
inline void DeactivateRequest(::UnityEngine::Events::UnityEvent*  onComplete, bool  abort) ;

/// @brief Method DeactivateWitRequest, addr 0x9e82e30, size 0xac, virtual false, abstract: false, final false
inline void DeactivateWitRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  request, bool  abort) ;

/// @brief Method ExecuteRequest, addr 0x9e81c38, size 0x98, virtual false, abstract: false, final false
inline void ExecuteRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  newRequest) ;

/// @brief Method FinalizeAudioDurationTracker, addr 0x9e82c2c, size 0x180, virtual false, abstract: false, final false
inline void FinalizeAudioDurationTracker() ;

/// @brief Method GetAudioRequest, addr 0x9e7fe9c, size 0x34c, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* GetAudioRequest(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method GetTextRequest, addr 0x9e7fc98, size 0x204, virtual false, abstract: false, final false
inline ::Meta::WitAi::Requests::VoiceServiceRequest* GetTextRequest(::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents) ;

/// @brief Method GetTimeoutMs, addr 0x9e801e8, size 0x58, virtual false, abstract: false, final false
inline int32_t GetTimeoutMs() ;

/// @brief Method HandleComplete, addr 0x9e82f0c, size 0x2bc, virtual false, abstract: false, final false
inline void HandleComplete(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleResult, addr 0x9e82ef0, size 0x1c, virtual false, abstract: false, final false
inline void HandleResult(::Meta::WitAi::Requests::VoiceServiceRequest*  request) ;

/// @brief Method HandleWebSocketRequestGeneration, addr 0x9e80e40, size 0x2b0, virtual false, abstract: false, final false
inline void HandleWebSocketRequestGeneration(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  webSocketRequest) ;

/// @brief Method IsConfigurationValid, addr 0x9e7fbec, size 0xac, virtual true, abstract: false, final false
inline bool IsConfigurationValid() ;

/// @brief Method IsInputStreamReady, addr 0x9e825ec, size 0xb4, virtual false, abstract: false, final false
inline bool IsInputStreamReady() ;

/// @brief Method IsWebSocketRequestWrapped, addr 0x9e817b0, size 0x88, virtual false, abstract: false, final false
inline bool IsWebSocketRequestWrapped(::Meta::WitAi::Requests::VoiceServiceRequest*  voiceServiceRequest, ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  webSocketRequest) ;

/// @brief Method IsWebSocketRequestWrapped, addr 0x9e810f0, size 0xec, virtual false, abstract: false, final false
inline bool IsWebSocketRequestWrapped(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  webSocketRequest) ;

static inline ::Meta::WitAi::WitService* New_ctor() ;

/// @brief Method OnAudioBufferStateChange, addr 0x9e81edc, size 0x10c, virtual false, abstract: false, final false
inline void OnAudioBufferStateChange(::Meta::Voice::VoiceAudioInputState  audioInputState) ;

/// @brief Method OnByteDataReady, addr 0x9e81fe8, size 0x138, virtual false, abstract: false, final false
inline void OnByteDataReady(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method OnDisable, addr 0x9e80aa8, size 0x240, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e80300, size 0x348, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMicLevelChanged, addr 0x9e82a40, size 0x120, virtual false, abstract: false, final false
inline void OnMicLevelChanged(float_t  level) ;

/// @brief Method OnMicSampleReady, addr 0x9e82120, size 0x4cc, virtual false, abstract: false, final false
inline void OnMicSampleReady(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker, float_t  levelMax) ;

/// @brief Method OnPartialTranscription, addr 0x9e82edc, size 0x14, virtual false, abstract: false, final false
inline void OnPartialTranscription(::StringW  transcription) ;

/// @brief Method OnSceneLoaded, addr 0x9e80cec, size 0x8, virtual true, abstract: false, final false
inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  mode) ;

/// @brief Method OnTranscriptionMicLevelChanged, addr 0x9e82b60, size 0xcc, virtual false, abstract: false, final false
inline void OnTranscriptionMicLevelChanged(float_t  level) ;

/// @brief Method OnWitReadyForData, addr 0x9e81e9c, size 0x40, virtual false, abstract: false, final false
inline void OnWitReadyForData() ;

/// @brief Method ProcessForwardedWebSocketResponse, addr 0x9e80cf4, size 0x14c, virtual false, abstract: false, final false
inline bool ProcessForwardedWebSocketResponse(::StringW  topicId, ::StringW  requestId, ::StringW  clientUserId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  responseChunk) ;

/// @brief Method RefreshConfigurationSettings, addr 0x9e80ce8, size 0x4, virtual true, abstract: false, final false
inline void RefreshConfigurationSettings() ;

/// @brief Method SendRecordingRequest, addr 0x9e81bcc, size 0x6c, virtual true, abstract: false, final false
inline void SendRecordingRequest() ;

/// @brief Method SetMicDelegates, addr 0x9e80648, size 0x460, virtual false, abstract: false, final false
inline void SetMicDelegates(bool  add) ;

/// @brief Method SetupRequest, addr 0x9e811dc, size 0x5d4, virtual false, abstract: false, final false
inline void SetupRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  newRequest) ;

/// @brief Method SetupWebSockets, addr 0x9e7f824, size 0x144, virtual false, abstract: false, final false
inline void SetupWebSockets() ;

/// @brief Method StartRecording, addr 0x9e819b4, size 0xe0, virtual false, abstract: false, final false
inline void StartRecording() ;

/// @brief Method StopRecording, addr 0x9e81970, size 0x44, virtual false, abstract: false, final false
inline void StopRecording() ;

/// @brief Method Update, addr 0x9e82a24, size 0x1c, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WriteAudio, addr 0x9e82940, size 0xe4, virtual false, abstract: false, final false
inline void WriteAudio(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// [CompilerGenerated]
/// @brief Method <OnMicSampleReady>b__92_0, addr 0x9e83344, size 0x88, virtual false, abstract: false, final false
inline void _OnMicSampleReady_b__92_0(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

/// [CompilerGenerated]
/// @brief Method <OnMicSampleReady>b__92_1, addr 0x9e833cc, size 0x15c, virtual false, abstract: false, final false
inline void _OnMicSampleReady_b__92_1(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  length) ;

constexpr ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider* const& __cordl_internal_get__RequestProvider_k__BackingField() const;

constexpr ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*& __cordl_internal_get__RequestProvider_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get___log_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get___log_k__BackingField() ;

constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider* const& __cordl_internal_get__activeTranscriptionProvider() const;

constexpr ::Meta::WitAi::Interfaces::ITranscriptionProvider*& __cordl_internal_get__activeTranscriptionProvider() ;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& __cordl_internal_get__buffer() const;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& __cordl_internal_get__buffer() ;

constexpr bool const& __cordl_internal_get__bufferDelegates() const;

constexpr bool& __cordl_internal_get__bufferDelegates() ;

constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*> const& __cordl_internal_get__dataReadyHandlers() const;

constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*>& __cordl_internal_get__dataReadyHandlers() ;

constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*> const& __cordl_internal_get__dataSentHandlers() const;

constexpr ::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*>& __cordl_internal_get__dataSentHandlers() ;

constexpr ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*> const& __cordl_internal_get__dynamicEntityProviders() const;

constexpr ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>& __cordl_internal_get__dynamicEntityProviders() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr bool const& __cordl_internal_get__isSoundWakeActive() const;

constexpr bool& __cordl_internal_get__isSoundWakeActive() ;

constexpr float_t const& __cordl_internal_get__lastMinVolumeLevelTime() const;

constexpr float_t& __cordl_internal_get__lastMinVolumeLevelTime() ;

constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* const& __cordl_internal_get__lastSampleMarker() const;

constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*& __cordl_internal_get__lastSampleMarker() ;

constexpr float_t const& __cordl_internal_get__lastWordTime() const;

constexpr float_t& __cordl_internal_get__lastWordTime() ;

constexpr bool const& __cordl_internal_get__minKeepAliveWasHit() const;

constexpr bool& __cordl_internal_get__minKeepAliveWasHit() ;

constexpr int64_t const& __cordl_internal_get__minSampleByteCount() const;

constexpr int64_t& __cordl_internal_get__minSampleByteCount() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__queueHandler() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__queueHandler() ;

constexpr bool const& __cordl_internal_get__receivedTranscription() const;

constexpr bool& __cordl_internal_get__receivedTranscription() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get__recordingRequest() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get__recordingRequest() ;

constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* const& __cordl_internal_get__runtimeConfigProvider() const;

constexpr ::Meta::WitAi::IWitRuntimeConfigProvider*& __cordl_internal_get__runtimeConfigProvider() ;

constexpr ::Meta::WitAi::ITelemetryEventsProvider* const& __cordl_internal_get__telemetryEventsProvider() const;

constexpr ::Meta::WitAi::ITelemetryEventsProvider*& __cordl_internal_get__telemetryEventsProvider() ;

constexpr float_t const& __cordl_internal_get__time() const;

constexpr float_t& __cordl_internal_get__time() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__timeLimitCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__timeLimitCoroutine() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>* const& __cordl_internal_get__transmitRequests() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>*& __cordl_internal_get__transmitRequests() ;

constexpr ::Meta::WitAi::IVoiceEventProvider* const& __cordl_internal_get__voiceEventProvider() const;

constexpr ::Meta::WitAi::IVoiceEventProvider*& __cordl_internal_get__voiceEventProvider() ;

constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter> const& __cordl_internal_get__webSocketAdapter() const;

constexpr ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>& __cordl_internal_get__webSocketAdapter() ;

constexpr void __cordl_internal_set__RequestProvider_k__BackingField(::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*  value) ;

constexpr void __cordl_internal_set___log_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__activeTranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

constexpr void __cordl_internal_set__buffer(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value) ;

constexpr void __cordl_internal_set__bufferDelegates(bool  value) ;

constexpr void __cordl_internal_set__dataReadyHandlers(::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*>  value) ;

constexpr void __cordl_internal_set__dataSentHandlers(::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*>  value) ;

constexpr void __cordl_internal_set__dynamicEntityProviders(::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__isSoundWakeActive(bool  value) ;

constexpr void __cordl_internal_set__lastMinVolumeLevelTime(float_t  value) ;

constexpr void __cordl_internal_set__lastSampleMarker(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  value) ;

constexpr void __cordl_internal_set__lastWordTime(float_t  value) ;

constexpr void __cordl_internal_set__minKeepAliveWasHit(bool  value) ;

constexpr void __cordl_internal_set__minSampleByteCount(int64_t  value) ;

constexpr void __cordl_internal_set__queueHandler(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__receivedTranscription(bool  value) ;

constexpr void __cordl_internal_set__recordingRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

constexpr void __cordl_internal_set__runtimeConfigProvider(::Meta::WitAi::IWitRuntimeConfigProvider*  value) ;

constexpr void __cordl_internal_set__telemetryEventsProvider(::Meta::WitAi::ITelemetryEventsProvider*  value) ;

constexpr void __cordl_internal_set__time(float_t  value) ;

constexpr void __cordl_internal_set__timeLimitCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__transmitRequests(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>*  value) ;

constexpr void __cordl_internal_set__voiceEventProvider(::Meta::WitAi::IVoiceEventProvider*  value) ;

constexpr void __cordl_internal_set__webSocketAdapter(::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  value) ;

/// @brief Method .ctor, addr 0x9e831c8, size 0x17c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Active, addr 0x9e78184, size 0x14, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_Configuration, addr 0x9e7f968, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> get_Configuration() ;

/// @brief Method get_ConfigurationProvider, addr 0x9e7fa4c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::IWitRuntimeConfigProvider* get_ConfigurationProvider() ;

/// @brief Method get_IsRequestActive, addr 0x9e78258, size 0x60, virtual false, abstract: false, final false
inline bool get_IsRequestActive() ;

/// @brief Method get_MicActive, addr 0x9e78704, size 0x1c, virtual false, abstract: false, final false
inline bool get_MicActive() ;

/// @brief Method get_PubSub, addr 0x9e7f80c, size 0x18, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::PubSub::IPubSubAdapter* get_PubSub() ;

/// [CompilerGenerated]
/// @brief Method get_RequestProvider, addr 0x9e7fba4, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider* get_RequestProvider() ;

/// @brief Method get_RuntimeConfiguration, addr 0x9e7f980, size 0xac, virtual true, abstract: false, final true
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* get_RuntimeConfiguration() ;

/// @brief Method get_ShouldSendMicData, addr 0x9e7fbb4, size 0x38, virtual false, abstract: false, final false
inline bool get_ShouldSendMicData() ;

/// @brief Method get_TelemetryEvents, addr 0x9e7fafc, size 0xa0, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::TelemetryEvents* get_TelemetryEvents() ;

/// @brief Method get_TelemetryEventsProvider, addr 0x9e7fa3c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::ITelemetryEventsProvider* get_TelemetryEventsProvider() ;

/// @brief Method get_TranscriptionProvider, addr 0x9e7fb9c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Interfaces::ITranscriptionProvider* get_TranscriptionProvider() ;

/// @brief Method get_VoiceEventProvider, addr 0x9e7fa2c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::IVoiceEventProvider* get_VoiceEventProvider() ;

/// @brief Method get_VoiceEvents, addr 0x9e7fa5c, size 0xa0, virtual true, abstract: false, final true
inline ::Meta::WitAi::Events::VoiceEvents* get_VoiceEvents() ;

/// [CompilerGenerated]
/// @brief Method get__log, addr 0x9e7f804, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get__log() ;

/// @brief Convert to "::Meta::WitAi::ITelemetryEventsProvider"
constexpr ::Meta::WitAi::ITelemetryEventsProvider* i___Meta__WitAi__ITelemetryEventsProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceActivationHandler"
constexpr ::Meta::WitAi::IVoiceActivationHandler* i___Meta__WitAi__IVoiceActivationHandler() noexcept;

/// @brief Convert to "::Meta::WitAi::IVoiceEventProvider"
constexpr ::Meta::WitAi::IVoiceEventProvider* i___Meta__WitAi__IVoiceEventProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::IWitRuntimeConfigProvider"
constexpr ::Meta::WitAi::IWitRuntimeConfigProvider* i___Meta__WitAi__IWitRuntimeConfigProvider() noexcept;

/// @brief Convert to "::Meta::WitAi::Interfaces::IWitConfigurationProvider"
constexpr ::Meta::WitAi::Interfaces::IWitConfigurationProvider* i___Meta__WitAi__Interfaces__IWitConfigurationProvider() noexcept;

/// @brief Method set_ConfigurationProvider, addr 0x9e7fa54, size 0x8, virtual false, abstract: false, final false
inline void set_ConfigurationProvider(::Meta::WitAi::IWitRuntimeConfigProvider*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RequestProvider, addr 0x9e7fbac, size 0x8, virtual false, abstract: false, final false
inline void set_RequestProvider(::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*  value) ;

/// @brief Method set_TelemetryEventsProvider, addr 0x9e7fa44, size 0x8, virtual false, abstract: false, final false
inline void set_TelemetryEventsProvider(::Meta::WitAi::ITelemetryEventsProvider*  value) ;

/// @brief Method set_TranscriptionProvider, addr 0x9e782e4, size 0x39c, virtual false, abstract: false, final false
inline void set_TranscriptionProvider(::Meta::WitAi::Interfaces::ITranscriptionProvider*  value) ;

/// @brief Method set_VoiceEventProvider, addr 0x9e7fa34, size 0x8, virtual false, abstract: false, final false
inline void set_VoiceEventProvider(::Meta::WitAi::IVoiceEventProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitService(WitService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitService(WitService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25569};

/// [CompilerGenerated]
/// @brief Field <_log>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  _____log_k__BackingField;

/// @brief Field _lastMinVolumeLevelTime, offset: 0x28, size: 0x4, def value: None
 float_t  ____lastMinVolumeLevelTime;

/// @brief Field _webSocketAdapter, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter>  ____webSocketAdapter;

/// @brief Field _recordingRequest, offset: 0x38, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  ____recordingRequest;

/// @brief Field _isSoundWakeActive, offset: 0x40, size: 0x1, def value: None
 bool  ____isSoundWakeActive;

/// @brief Field _lastSampleMarker, offset: 0x48, size: 0x8, def value: None
 ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  ____lastSampleMarker;

/// @brief Field _minKeepAliveWasHit, offset: 0x50, size: 0x1, def value: None
 bool  ____minKeepAliveWasHit;

/// @brief Field _isActive, offset: 0x51, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _minSampleByteCount, offset: 0x58, size: 0x8, def value: None
 int64_t  ____minSampleByteCount;

/// @brief Field _voiceEventProvider, offset: 0x60, size: 0x8, def value: None
 ::Meta::WitAi::IVoiceEventProvider*  ____voiceEventProvider;

/// @brief Field _telemetryEventsProvider, offset: 0x68, size: 0x8, def value: None
 ::Meta::WitAi::ITelemetryEventsProvider*  ____telemetryEventsProvider;

/// @brief Field _runtimeConfigProvider, offset: 0x70, size: 0x8, def value: None
 ::Meta::WitAi::IWitRuntimeConfigProvider*  ____runtimeConfigProvider;

/// @brief Field _activeTranscriptionProvider, offset: 0x78, size: 0x8, def value: None
 ::Meta::WitAi::Interfaces::ITranscriptionProvider*  ____activeTranscriptionProvider;

/// @brief Field _timeLimitCoroutine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____timeLimitCoroutine;

/// @brief Field _receivedTranscription, offset: 0x88, size: 0x1, def value: None
 bool  ____receivedTranscription;

/// @brief Field _lastWordTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ____lastWordTime;

/// @brief Field _transmitRequests, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::WitAi::Requests::VoiceServiceRequest*>*  ____transmitRequests;

/// @brief Field _queueHandler, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____queueHandler;

/// @brief Field _dataReadyHandlers, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Events::IWitByteDataReadyHandler*>  ____dataReadyHandlers;

/// @brief Field _dataSentHandlers, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Events::IWitByteDataSentHandler*>  ____dataSentHandlers;

/// @brief Field _dynamicEntityProviders, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>  ____dynamicEntityProviders;

/// @brief Field _time, offset: 0xb8, size: 0x4, def value: None
 float_t  ____time;

/// [CompilerGenerated]
/// @brief Field <RequestProvider>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::Meta::WitAi::Interfaces::IVoiceServiceRequestProvider*  ____RequestProvider_k__BackingField;

/// @brief Field _buffer, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::AudioBuffer>  ____buffer;

/// @brief Field _bufferDelegates, offset: 0xd0, size: 0x1, def value: None
 bool  ____bufferDelegates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitService, _____log_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____lastMinVolumeLevelTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____webSocketAdapter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____recordingRequest) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____isSoundWakeActive) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____lastSampleMarker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____minKeepAliveWasHit) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____isActive) == 0x51, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____minSampleByteCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____voiceEventProvider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____telemetryEventsProvider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____runtimeConfigProvider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____activeTranscriptionProvider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____timeLimitCoroutine) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____receivedTranscription) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____lastWordTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____transmitRequests) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____queueHandler) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____dataReadyHandlers) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____dataSentHandlers) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____dynamicEntityProviders) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____time) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____RequestProvider_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____buffer) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService, ____bufferDelegates) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitService) == 0xd8, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitService/<DeactivateDueToTimeLimit>d__102
class CORDL_TYPE WitService__DeactivateDueToTimeLimit_d__102 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::WitService>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e83678, size 0x244, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e838bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e838c4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e838fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e83674, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::WitService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::WitService>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::WitService>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e8364c, size 0x28, virtual false, abstract: false, final false
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
constexpr WitService__DeactivateDueToTimeLimit_d__102() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitService__DeactivateDueToTimeLimit_d__102", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitService__DeactivateDueToTimeLimit_d__102(WitService__DeactivateDueToTimeLimit_d__102 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitService__DeactivateDueToTimeLimit_d__102", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitService__DeactivateDueToTimeLimit_d__102(WitService__DeactivateDueToTimeLimit_d__102 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25568};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::WitService>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitService__DeactivateDueToTimeLimit_d__102) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitService/<>c__DisplayClass86_0
class CORDL_TYPE WitService___c__DisplayClass86_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::WitService>  __4__this;

/// @brief Field request, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::Meta::WitAi::Requests::VoiceServiceRequest*  request;

static inline ::Meta::WitAi::WitService___c__DisplayClass86_0* New_ctor() ;

/// @brief Method <Activate>b__0, addr 0x9e835ac, size 0xa0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Meta::WitAi::Requests::VoiceServiceRequest*>* _Activate_b__0() ;

constexpr ::UnityW<::Meta::WitAi::WitService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::WitService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get_request() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::WitService>  value) ;

constexpr void __cordl_internal_set_request(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

/// @brief Method .ctor, addr 0x9e835a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitService___c__DisplayClass86_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitService___c__DisplayClass86_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitService___c__DisplayClass86_0(WitService___c__DisplayClass86_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitService___c__DisplayClass86_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitService___c__DisplayClass86_0(WitService___c__DisplayClass86_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25567};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::WitService>  _____4__this;

/// @brief Field request, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  ___request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitService___c__DisplayClass86_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService___c__DisplayClass86_0, ___request) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitService___c__DisplayClass86_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitService/<>c__DisplayClass82_0
class CORDL_TYPE WitService___c__DisplayClass82_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::WitService>  __4__this;

/// @brief Field newRequest, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_newRequest, put=__cordl_internal_set_newRequest)) ::Meta::WitAi::Requests::VoiceServiceRequest*  newRequest;

static inline ::Meta::WitAi::WitService___c__DisplayClass82_0* New_ctor() ;

/// @brief Method <SetupRequest>b__0, addr 0x9e83530, size 0x74, virtual false, abstract: false, final false
inline void _SetupRequest_b__0() ;

constexpr ::UnityW<::Meta::WitAi::WitService> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::WitService>& __cordl_internal_get___4__this() ;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest* const& __cordl_internal_get_newRequest() const;

constexpr ::Meta::WitAi::Requests::VoiceServiceRequest*& __cordl_internal_get_newRequest() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::WitService>  value) ;

constexpr void __cordl_internal_set_newRequest(::Meta::WitAi::Requests::VoiceServiceRequest*  value) ;

/// @brief Method .ctor, addr 0x9e83528, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitService___c__DisplayClass82_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitService___c__DisplayClass82_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitService___c__DisplayClass82_0(WitService___c__DisplayClass82_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitService___c__DisplayClass82_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitService___c__DisplayClass82_0(WitService___c__DisplayClass82_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25566};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::WitService>  _____4__this;

/// @brief Field newRequest, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Requests::VoiceServiceRequest*  ___newRequest;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::WitService___c__DisplayClass82_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::WitService___c__DisplayClass82_0, ___newRequest) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::WitService___c__DisplayClass82_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi
