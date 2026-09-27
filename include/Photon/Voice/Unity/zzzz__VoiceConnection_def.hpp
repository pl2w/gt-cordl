#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/VoiceConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "Photon/Realtime/zzzz__ConnectionHandler_def.hpp"
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoiceConnection)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace Photon::Realtime {
class AppSettings;
}
namespace Photon::Realtime {
struct ClientState;
}
namespace Photon::Realtime {
class SupportLogger;
}
namespace Photon::Voice::Unity {
class ILoggable;
}
namespace Photon::Voice::Unity {
struct PlaybackDelaySettings;
}
namespace Photon::Voice::Unity {
class Recorder;
}
namespace Photon::Voice::Unity {
class RemoteVoiceLink;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace Photon::Voice::Unity {
class VoiceConnection_ValidateRemoteLinkDelegate;
}
namespace Photon::Voice::Unity {
class VoiceConnection___c__DisplayClass100_0;
}
namespace Photon::Voice::Unity {
class VoiceConnection___c__DisplayClass104_0;
}
namespace Photon::Voice::Unity {
class VoiceLogger;
}
namespace Photon::Voice {
class LoadBalancingTransport;
}
namespace Photon::Voice {
struct RemoteVoiceOptions;
}
namespace Photon::Voice {
class VoiceClient;
}
namespace Photon::Voice {
struct VoiceInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Photon::Voice::Unity {
class VoiceConnection;
}
namespace Photon::Voice::Unity {
class VoiceConnection_ValidateRemoteLinkDelegate;
}
namespace Photon::Voice::Unity {
class VoiceConnection___c__DisplayClass100_0;
}
namespace Photon::Voice::Unity {
class VoiceConnection___c__DisplayClass104_0;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Unity::VoiceConnection*);
MARK_REF_T(::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*);
MARK_REF_T(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0*);
MARK_REF_T(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::VoiceConnection*, "Photon.Voice.Unity", "VoiceConnection");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*, "Photon.Voice.Unity", "VoiceConnection/ValidateRemoteLinkDelegate");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0*, "Photon.Voice.Unity", "VoiceConnection/<>c__DisplayClass100_0");
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0*, "Photon.Voice.Unity", "VoiceConnection/<>c__DisplayClass104_0");
// [AddComponentMenu("Photon Voice/Voice Connection")]
// [DisallowMultipleComponent]
// [HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-intro")]
// Dependencies ExitGames.Client.Photon.DebugLevel, Photon.Realtime.ConnectionHandler, Photon.Voice.Unity.PlaybackDelaySettings
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.VoiceConnection
class CORDL_TYPE VoiceConnection : public ::Photon::Realtime::ConnectionHandler {
public:
// Declarations
using ValidateRemoteLinkDelegate = ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate;

using __c__DisplayClass100_0 = ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0;

using __c__DisplayClass104_0 = ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0;

/// @brief Field AutoCreateSpeakerIfNotFound, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoCreateSpeakerIfNotFound, put=__cordl_internal_set_AutoCreateSpeakerIfNotFound)) bool  AutoCreateSpeakerIfNotFound;

 __declspec(property(get=get_BestRegionSummaryInPreferences, put=set_BestRegionSummaryInPreferences)) ::StringW  BestRegionSummaryInPreferences;

 __declspec(property(get=get_Client)) ::Photon::Voice::LoadBalancingTransport*  Client;

 __declspec(property(get=get_ClientState)) ::Photon::Realtime::ClientState  ClientState;

 __declspec(property(get=get_FramesLostPerSecond, put=set_FramesLostPerSecond)) float_t  FramesLostPerSecond;

 __declspec(property(get=get_FramesLostPercent, put=set_FramesLostPercent)) float_t  FramesLostPercent;

 __declspec(property(get=get_FramesReceivedPerSecond, put=set_FramesReceivedPerSecond)) float_t  FramesReceivedPerSecond;

/// @brief [Obsolete("Use SetGlobalPlaybackDelayConfiguration methods instead")]
 __declspec(property(get=get_GlobalPlaybackDelay, put=set_GlobalPlaybackDelay)) int32_t  GlobalPlaybackDelay;

 __declspec(property(get=get_GlobalPlaybackDelayMaxHard)) int32_t  GlobalPlaybackDelayMaxHard;

 __declspec(property(get=get_GlobalPlaybackDelayMaxSoft)) int32_t  GlobalPlaybackDelayMaxSoft;

 __declspec(property(get=get_GlobalPlaybackDelayMinSoft)) int32_t  GlobalPlaybackDelayMinSoft;

 __declspec(property(get=get_GlobalRecordersLogLevel, put=set_GlobalRecordersLogLevel)) ::ExitGames::Client::Photon::DebugLevel  GlobalRecordersLogLevel;

 __declspec(property(get=get_GlobalSpeakersLogLevel, put=set_GlobalSpeakersLogLevel)) ::ExitGames::Client::Photon::DebugLevel  GlobalSpeakersLogLevel;

 __declspec(property(get=get_LogLevel, put=set_LogLevel)) ::ExitGames::Client::Photon::DebugLevel  LogLevel;

 __declspec(property(get=get_Logger, put=set_Logger)) ::Photon::Voice::Unity::VoiceLogger*  Logger;

/// @brief Field MaxDatagrams, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxDatagrams, put=__cordl_internal_set_MaxDatagrams)) int32_t  MaxDatagrams;

/// @brief Field MinimalTimeScaleToDispatchInFixedUpdate, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_MinimalTimeScaleToDispatchInFixedUpdate, put=__cordl_internal_set_MinimalTimeScaleToDispatchInFixedUpdate)) float_t  MinimalTimeScaleToDispatchInFixedUpdate;

 __declspec(property(get=get_PrimaryRecorder, put=set_PrimaryRecorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  PrimaryRecorder;

/// @brief Field RemoteLinkValidator, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_RemoteLinkValidator, put=__cordl_internal_set_RemoteLinkValidator)) ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*  RemoteLinkValidator;

/// @brief Field RemoteVoiceAdded, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_RemoteVoiceAdded, put=__cordl_internal_set_RemoteVoiceAdded)) ::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  RemoteVoiceAdded;

/// @brief Field SendAsap, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get_SendAsap, put=__cordl_internal_set_SendAsap)) bool  SendAsap;

/// @brief Field Settings, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Settings, put=__cordl_internal_set_Settings)) ::Photon::Realtime::AppSettings*  Settings;

/// @brief Field SpeakerFactory, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpeakerFactory, put=__cordl_internal_set_SpeakerFactory)) ::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>*  SpeakerFactory;

/// @brief Field SpeakerLinked, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_SpeakerLinked, put=__cordl_internal_set_SpeakerLinked)) ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  SpeakerLinked;

 __declspec(property(get=get_SpeakerPrefab, put=set_SpeakerPrefab)) ::UnityW<::UnityEngine::GameObject>  SpeakerPrefab;

 __declspec(property(get=get_VoiceClient)) ::Photon::Voice::VoiceClient*  VoiceClient;

/// @brief Field <FramesLostPerSecond>k__BackingField, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__FramesLostPerSecond_k__BackingField, put=__cordl_internal_set__FramesLostPerSecond_k__BackingField)) float_t  _FramesLostPerSecond_k__BackingField;

/// @brief Field <FramesLostPercent>k__BackingField, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__FramesLostPercent_k__BackingField, put=__cordl_internal_set__FramesLostPercent_k__BackingField)) float_t  _FramesLostPercent_k__BackingField;

/// @brief Field <FramesReceivedPerSecond>k__BackingField, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__FramesReceivedPerSecond_k__BackingField, put=__cordl_internal_set__FramesReceivedPerSecond_k__BackingField)) float_t  _FramesReceivedPerSecond_k__BackingField;

/// @brief Field cachedRemoteVoices, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedRemoteVoices, put=__cordl_internal_set_cachedRemoteVoices)) ::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  cachedRemoteVoices;

/// @brief Field cleanedUp, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_cleanedUp, put=__cordl_internal_set_cleanedUp)) bool  cleanedUp;

/// @brief Field client, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_client, put=__cordl_internal_set_client)) ::Photon::Voice::LoadBalancingTransport*  client;

/// @brief Field enableSupportLogger, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableSupportLogger, put=__cordl_internal_set_enableSupportLogger)) bool  enableSupportLogger;

/// @brief Field globalPlaybackDelay, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_globalPlaybackDelay, put=__cordl_internal_set_globalPlaybackDelay)) int32_t  globalPlaybackDelay;

/// @brief Field globalPlaybackDelaySettings, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_globalPlaybackDelaySettings, put=__cordl_internal_set_globalPlaybackDelaySettings)) ::Photon::Voice::Unity::PlaybackDelaySettings  globalPlaybackDelaySettings;

/// @brief Field globalRecordersLogLevel, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_globalRecordersLogLevel, put=__cordl_internal_set_globalRecordersLogLevel)) ::ExitGames::Client::Photon::DebugLevel  globalRecordersLogLevel;

/// @brief Field globalSpeakersLogLevel, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get_globalSpeakersLogLevel, put=__cordl_internal_set_globalSpeakersLogLevel)) ::ExitGames::Client::Photon::DebugLevel  globalSpeakersLogLevel;

/// @brief Field initializedRecorders, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_initializedRecorders, put=__cordl_internal_set_initializedRecorders)) ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>*  initializedRecorders;

/// @brief Field linkedSpeakers, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkedSpeakers, put=__cordl_internal_set_linkedSpeakers)) ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  linkedSpeakers;

/// @brief Field logLevel, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_logLevel, put=__cordl_internal_set_logLevel)) ::ExitGames::Client::Photon::DebugLevel  logLevel;

/// @brief Field logger, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_logger, put=__cordl_internal_set_logger)) ::Photon::Voice::Unity::VoiceLogger*  logger;

/// @brief Field nextSendTickCount, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextSendTickCount, put=__cordl_internal_set_nextSendTickCount)) int32_t  nextSendTickCount;

/// @brief Field nextStatsTickCount, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextStatsTickCount, put=__cordl_internal_set_nextStatsTickCount)) int32_t  nextStatsTickCount;

/// @brief Field primaryRecorder, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_primaryRecorder, put=__cordl_internal_set_primaryRecorder)) ::UnityW<::Photon::Voice::Unity::Recorder>  primaryRecorder;

/// @brief Field primaryRecorderInitialized, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_primaryRecorderInitialized, put=__cordl_internal_set_primaryRecorderInitialized)) bool  primaryRecorderInitialized;

/// @brief Field referenceFramesLost, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_referenceFramesLost, put=__cordl_internal_set_referenceFramesLost)) int32_t  referenceFramesLost;

/// @brief Field referenceFramesReceived, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_referenceFramesReceived, put=__cordl_internal_set_referenceFramesReceived)) int32_t  referenceFramesReceived;

/// @brief Field speakerPrefab, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_speakerPrefab, put=__cordl_internal_set_speakerPrefab)) ::UnityW<::UnityEngine::GameObject>  speakerPrefab;

/// @brief Field statsReferenceTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_statsReferenceTime, put=__cordl_internal_set_statsReferenceTime)) float_t  statsReferenceTime;

/// @brief Field statsResetInterval, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_statsResetInterval, put=__cordl_internal_set_statsResetInterval)) int32_t  statsResetInterval;

/// @brief Field supportLoggerComponent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_supportLoggerComponent, put=__cordl_internal_set_supportLoggerComponent)) ::UnityW<::Photon::Realtime::SupportLogger>  supportLoggerComponent;

/// @brief Field updateInterval, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateInterval, put=__cordl_internal_set_updateInterval)) int32_t  updateInterval;

/// @brief Convert operator to "::Photon::Voice::Unity::ILoggable"
constexpr operator  ::Photon::Voice::Unity::ILoggable*() noexcept;

/// @brief Method AddInitializedRecorder, addr 0xa76c708, size 0xac, virtual false, abstract: false, final false
inline void AddInitializedRecorder(::Photon::Voice::Unity::Recorder*  rec) ;

/// @brief Method Awake, addr 0xa775bb8, size 0xcc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcStatistics, addr 0xa775f08, size 0x104, virtual false, abstract: false, final false
inline void CalcStatistics() ;

/// @brief Method CleanUp, addr 0xa776098, size 0x288, virtual false, abstract: false, final false
inline void CleanUp() ;

/// @brief Method ClearRemoteVoicesCache, addr 0xa7772d0, size 0x174, virtual false, abstract: false, final false
inline void ClearRemoteVoicesCache() ;

/// @brief Method ConnectUsingSettings, addr 0xa774688, size 0x408, virtual false, abstract: false, final false
inline bool ConnectUsingSettings(::Photon::Realtime::AppSettings*  overwriteSettings) ;

/// @brief Method DeleteVoiceOnRemoteVoiceRemove, addr 0xa77681c, size 0x16c, virtual false, abstract: false, final false
inline void DeleteVoiceOnRemoteVoiceRemove(::Photon::Voice::Unity::Speaker*  speaker) ;

/// @brief Method Dispatch, addr 0xa775de0, size 0x3c, virtual false, abstract: false, final false
inline void Dispatch() ;

/// @brief Method FixedUpdate, addr 0xa775db0, size 0x30, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method InitRecorder, addr 0xa774a90, size 0x1dc, virtual false, abstract: false, final false
inline void InitRecorder(::Photon::Voice::Unity::Recorder*  rec) ;

/// @brief Method LateUpdate, addr 0xa775e1c, size 0xec, virtual false, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LinkSpeaker, addr 0xa7756e4, size 0x4d4, virtual false, abstract: false, final false
inline void LinkSpeaker(::Photon::Voice::Unity::Speaker*  speaker, ::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoice) ;

static inline ::Photon::Voice::Unity::VoiceConnection* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa776320, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa77600c, size 0x8c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnOperationResponseReceived, addr 0xa7774d0, size 0x1c8, virtual true, abstract: false, final false
inline void OnOperationResponseReceived(::ExitGames::Client::Photon::OperationResponse*  operationResponse) ;

/// @brief Method OnRemoteVoiceInfo, addr 0xa776988, size 0x694, virtual false, abstract: false, final false
inline void OnRemoteVoiceInfo(int32_t  channelId, int32_t  playerId, uint8_t  voiceId, ::Photon::Voice::VoiceInfo  voiceInfo, ::by_ref<::Photon::Voice::RemoteVoiceOptions>  options) ;

/// @brief Method OnVoiceStateChanged, addr 0xa77701c, size 0x21c, virtual true, abstract: false, final false
inline void OnVoiceStateChanged(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  toState) ;

/// @brief Method RemoveInitializedRecorder, addr 0xa76f394, size 0x58, virtual false, abstract: false, final false
inline void RemoveInitializedRecorder(::Photon::Voice::Unity::Recorder*  rec) ;

/// @brief Method SetGlobalPlaybackDelaySettings, addr 0xa774c7c, size 0x238, virtual false, abstract: false, final false
inline void SetGlobalPlaybackDelaySettings(int32_t  low, int32_t  high, int32_t  max) ;

/// @brief Method SetPlaybackDelaySettings, addr 0xa774c6c, size 0x10, virtual false, abstract: false, final false
inline void SetPlaybackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  gpds) ;

/// @brief Method SimpleSpeakerFactory, addr 0xa776324, size 0x4f8, virtual true, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Speaker> SimpleSpeakerFactory(int32_t  playerId, uint8_t  voiceId, ::System::Object*  userData) ;

/// @brief Method StartInitializedRecorders, addr 0xa777444, size 0x8c, virtual false, abstract: false, final false
inline void StartInitializedRecorders() ;

/// @brief Method StopInitializedRecorders, addr 0xa777238, size 0x98, virtual false, abstract: false, final false
inline void StopInitializedRecorders() ;

/// @brief Method TryGetFirstVoiceStreamByUserData, addr 0xa7752cc, size 0x418, virtual false, abstract: false, final false
inline bool TryGetFirstVoiceStreamByUserData(::System::Object*  userData, ::by_ref<::Photon::Voice::Unity::RemoteVoiceLink*>  remoteVoiceLink) ;

/// @brief Method TryInitializePrimaryRecorder, addr 0xa774394, size 0x9c, virtual false, abstract: false, final false
inline void TryInitializePrimaryRecorder() ;

/// @brief Method TryLateLinkingUsingUserData, addr 0xa774eb4, size 0x418, virtual true, abstract: false, final false
inline bool TryLateLinkingUsingUserData(::Photon::Voice::Unity::Speaker*  speaker, ::System::Object*  userData) ;

/// @brief Method Update, addr 0xa775c84, size 0x12c, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_AutoCreateSpeakerIfNotFound() const;

constexpr bool& __cordl_internal_get_AutoCreateSpeakerIfNotFound() ;

constexpr int32_t const& __cordl_internal_get_MaxDatagrams() const;

constexpr int32_t& __cordl_internal_get_MaxDatagrams() ;

constexpr float_t const& __cordl_internal_get_MinimalTimeScaleToDispatchInFixedUpdate() const;

constexpr float_t& __cordl_internal_get_MinimalTimeScaleToDispatchInFixedUpdate() ;

constexpr ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate* const& __cordl_internal_get_RemoteLinkValidator() const;

constexpr ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*& __cordl_internal_get_RemoteLinkValidator() ;

constexpr ::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>* const& __cordl_internal_get_RemoteVoiceAdded() const;

constexpr ::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*& __cordl_internal_get_RemoteVoiceAdded() ;

constexpr bool const& __cordl_internal_get_SendAsap() const;

constexpr bool& __cordl_internal_get_SendAsap() ;

constexpr ::Photon::Realtime::AppSettings* const& __cordl_internal_get_Settings() const;

constexpr ::Photon::Realtime::AppSettings*& __cordl_internal_get_Settings() ;

constexpr ::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>* const& __cordl_internal_get_SpeakerFactory() const;

constexpr ::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>*& __cordl_internal_get_SpeakerFactory() ;

constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& __cordl_internal_get_SpeakerLinked() const;

constexpr ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& __cordl_internal_get_SpeakerLinked() ;

constexpr float_t const& __cordl_internal_get__FramesLostPerSecond_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FramesLostPerSecond_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__FramesLostPercent_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FramesLostPercent_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__FramesReceivedPerSecond_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FramesReceivedPerSecond_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>* const& __cordl_internal_get_cachedRemoteVoices() const;

constexpr ::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>*& __cordl_internal_get_cachedRemoteVoices() ;

constexpr bool const& __cordl_internal_get_cleanedUp() const;

constexpr bool& __cordl_internal_get_cleanedUp() ;

constexpr ::Photon::Voice::LoadBalancingTransport* const& __cordl_internal_get_client() const;

constexpr ::Photon::Voice::LoadBalancingTransport*& __cordl_internal_get_client() ;

constexpr bool const& __cordl_internal_get_enableSupportLogger() const;

constexpr bool& __cordl_internal_get_enableSupportLogger() ;

constexpr int32_t const& __cordl_internal_get_globalPlaybackDelay() const;

constexpr int32_t& __cordl_internal_get_globalPlaybackDelay() ;

constexpr ::Photon::Voice::Unity::PlaybackDelaySettings const& __cordl_internal_get_globalPlaybackDelaySettings() const;

constexpr ::Photon::Voice::Unity::PlaybackDelaySettings& __cordl_internal_get_globalPlaybackDelaySettings() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_globalRecordersLogLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_globalRecordersLogLevel() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_globalSpeakersLogLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_globalSpeakersLogLevel() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>* const& __cordl_internal_get_initializedRecorders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>*& __cordl_internal_get_initializedRecorders() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>* const& __cordl_internal_get_linkedSpeakers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*& __cordl_internal_get_linkedSpeakers() ;

constexpr ::ExitGames::Client::Photon::DebugLevel const& __cordl_internal_get_logLevel() const;

constexpr ::ExitGames::Client::Photon::DebugLevel& __cordl_internal_get_logLevel() ;

constexpr ::Photon::Voice::Unity::VoiceLogger* const& __cordl_internal_get_logger() const;

constexpr ::Photon::Voice::Unity::VoiceLogger*& __cordl_internal_get_logger() ;

constexpr int32_t const& __cordl_internal_get_nextSendTickCount() const;

constexpr int32_t& __cordl_internal_get_nextSendTickCount() ;

constexpr int32_t const& __cordl_internal_get_nextStatsTickCount() const;

constexpr int32_t& __cordl_internal_get_nextStatsTickCount() ;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder> const& __cordl_internal_get_primaryRecorder() const;

constexpr ::UnityW<::Photon::Voice::Unity::Recorder>& __cordl_internal_get_primaryRecorder() ;

constexpr bool const& __cordl_internal_get_primaryRecorderInitialized() const;

constexpr bool& __cordl_internal_get_primaryRecorderInitialized() ;

constexpr int32_t const& __cordl_internal_get_referenceFramesLost() const;

constexpr int32_t& __cordl_internal_get_referenceFramesLost() ;

constexpr int32_t const& __cordl_internal_get_referenceFramesReceived() const;

constexpr int32_t& __cordl_internal_get_referenceFramesReceived() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_speakerPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_speakerPrefab() ;

constexpr float_t const& __cordl_internal_get_statsReferenceTime() const;

constexpr float_t& __cordl_internal_get_statsReferenceTime() ;

constexpr int32_t const& __cordl_internal_get_statsResetInterval() const;

constexpr int32_t& __cordl_internal_get_statsResetInterval() ;

constexpr ::UnityW<::Photon::Realtime::SupportLogger> const& __cordl_internal_get_supportLoggerComponent() const;

constexpr ::UnityW<::Photon::Realtime::SupportLogger>& __cordl_internal_get_supportLoggerComponent() ;

constexpr int32_t const& __cordl_internal_get_updateInterval() const;

constexpr int32_t& __cordl_internal_get_updateInterval() ;

constexpr void __cordl_internal_set_AutoCreateSpeakerIfNotFound(bool  value) ;

constexpr void __cordl_internal_set_MaxDatagrams(int32_t  value) ;

constexpr void __cordl_internal_set_MinimalTimeScaleToDispatchInFixedUpdate(float_t  value) ;

constexpr void __cordl_internal_set_RemoteLinkValidator(::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*  value) ;

constexpr void __cordl_internal_set_RemoteVoiceAdded(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value) ;

constexpr void __cordl_internal_set_SendAsap(bool  value) ;

constexpr void __cordl_internal_set_Settings(::Photon::Realtime::AppSettings*  value) ;

constexpr void __cordl_internal_set_SpeakerFactory(::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

constexpr void __cordl_internal_set_SpeakerLinked(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

constexpr void __cordl_internal_set__FramesLostPerSecond_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__FramesLostPercent_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__FramesReceivedPerSecond_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_cachedRemoteVoices(::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value) ;

constexpr void __cordl_internal_set_cleanedUp(bool  value) ;

constexpr void __cordl_internal_set_client(::Photon::Voice::LoadBalancingTransport*  value) ;

constexpr void __cordl_internal_set_enableSupportLogger(bool  value) ;

constexpr void __cordl_internal_set_globalPlaybackDelay(int32_t  value) ;

constexpr void __cordl_internal_set_globalPlaybackDelaySettings(::Photon::Voice::Unity::PlaybackDelaySettings  value) ;

constexpr void __cordl_internal_set_globalRecordersLogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_globalSpeakersLogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_initializedRecorders(::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>*  value) ;

constexpr void __cordl_internal_set_linkedSpeakers(::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

constexpr void __cordl_internal_set_logLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

constexpr void __cordl_internal_set_logger(::Photon::Voice::Unity::VoiceLogger*  value) ;

constexpr void __cordl_internal_set_nextSendTickCount(int32_t  value) ;

constexpr void __cordl_internal_set_nextStatsTickCount(int32_t  value) ;

constexpr void __cordl_internal_set_primaryRecorder(::UnityW<::Photon::Voice::Unity::Recorder>  value) ;

constexpr void __cordl_internal_set_primaryRecorderInitialized(bool  value) ;

constexpr void __cordl_internal_set_referenceFramesLost(int32_t  value) ;

constexpr void __cordl_internal_set_referenceFramesReceived(int32_t  value) ;

constexpr void __cordl_internal_set_speakerPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_statsReferenceTime(float_t  value) ;

constexpr void __cordl_internal_set_statsResetInterval(int32_t  value) ;

constexpr void __cordl_internal_set_supportLoggerComponent(::UnityW<::Photon::Realtime::SupportLogger>  value) ;

constexpr void __cordl_internal_set_updateInterval(int32_t  value) ;

/// @brief Method .ctor, addr 0xa777698, size 0x170, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_RemoteVoiceAdded, addr 0xa773e8c, size 0xb0, virtual false, abstract: false, final false
inline void add_RemoteVoiceAdded(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_SpeakerLinked, addr 0xa773d2c, size 0xb0, virtual false, abstract: false, final false
inline void add_SpeakerLinked(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

/// @brief Method get_BestRegionSummaryInPreferences, addr 0xa7745b8, size 0x48, virtual false, abstract: false, final false
inline ::StringW get_BestRegionSummaryInPreferences() ;

/// @brief Method get_Client, addr 0xa76b8ac, size 0x1ec, virtual false, abstract: false, final false
inline ::Photon::Voice::LoadBalancingTransport* get_Client() ;

/// @brief Method get_ClientState, addr 0xa774150, size 0x1c, virtual false, abstract: false, final false
inline ::Photon::Realtime::ClientState get_ClientState() ;

/// [CompilerGenerated]
/// @brief Method get_FramesLostPerSecond, addr 0xa77417c, size 0x8, virtual false, abstract: false, final false
inline float_t get_FramesLostPerSecond() ;

/// [CompilerGenerated]
/// @brief Method get_FramesLostPercent, addr 0xa77418c, size 0x8, virtual false, abstract: false, final false
inline float_t get_FramesLostPercent() ;

/// [CompilerGenerated]
/// @brief Method get_FramesReceivedPerSecond, addr 0xa77416c, size 0x8, virtual false, abstract: false, final false
inline float_t get_FramesReceivedPerSecond() ;

/// @brief Method get_GlobalPlaybackDelay, addr 0xa774598, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GlobalPlaybackDelay() ;

/// @brief Method get_GlobalPlaybackDelayMaxHard, addr 0xa774680, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GlobalPlaybackDelayMaxHard() ;

/// @brief Method get_GlobalPlaybackDelayMaxSoft, addr 0xa774678, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GlobalPlaybackDelayMaxSoft() ;

/// @brief Method get_GlobalPlaybackDelayMinSoft, addr 0xa774670, size 0x8, virtual false, abstract: false, final false
inline int32_t get_GlobalPlaybackDelayMinSoft() ;

/// @brief Method get_GlobalRecordersLogLevel, addr 0xa774450, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::DebugLevel get_GlobalRecordersLogLevel() ;

/// @brief Method get_GlobalSpeakersLogLevel, addr 0xa7744f4, size 0x8, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::DebugLevel get_GlobalSpeakersLogLevel() ;

/// @brief Method get_LogLevel, addr 0xa7740e4, size 0x38, virtual true, abstract: false, final true
inline ::ExitGames::Client::Photon::DebugLevel get_LogLevel() ;

/// @brief Method get_Logger, addr 0xa773fec, size 0xf0, virtual true, abstract: false, final true
inline ::Photon::Voice::Unity::VoiceLogger* get_Logger() ;

/// @brief Method get_PrimaryRecorder, addr 0xa774370, size 0x24, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Recorder> get_PrimaryRecorder() ;

/// @brief Method get_SpeakerPrefab, addr 0xa77419c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_SpeakerPrefab() ;

/// @brief Method get_VoiceClient, addr 0xa76c6ec, size 0x1c, virtual false, abstract: false, final false
inline ::Photon::Voice::VoiceClient* get_VoiceClient() ;

/// @brief Convert to "::Photon::Voice::Unity::ILoggable"
constexpr ::Photon::Voice::Unity::ILoggable* i___Photon__Voice__Unity__ILoggable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_RemoteVoiceAdded, addr 0xa773f3c, size 0xb0, virtual false, abstract: false, final false
inline void remove_RemoteVoiceAdded(::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_SpeakerLinked, addr 0xa773ddc, size 0xb0, virtual false, abstract: false, final false
inline void remove_SpeakerLinked(::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  value) ;

/// @brief Method set_BestRegionSummaryInPreferences, addr 0xa774600, size 0x70, virtual false, abstract: false, final false
inline void set_BestRegionSummaryInPreferences(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_FramesLostPerSecond, addr 0xa774184, size 0x8, virtual false, abstract: false, final false
inline void set_FramesLostPerSecond(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FramesLostPercent, addr 0xa774194, size 0x8, virtual false, abstract: false, final false
inline void set_FramesLostPercent(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FramesReceivedPerSecond, addr 0xa774174, size 0x8, virtual false, abstract: false, final false
inline void set_FramesReceivedPerSecond(float_t  value) ;

/// @brief Method set_GlobalPlaybackDelay, addr 0xa7745a0, size 0x18, virtual false, abstract: false, final false
inline void set_GlobalPlaybackDelay(int32_t  value) ;

/// @brief Method set_GlobalRecordersLogLevel, addr 0xa774458, size 0x9c, virtual false, abstract: false, final false
inline void set_GlobalRecordersLogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

/// @brief Method set_GlobalSpeakersLogLevel, addr 0xa7744fc, size 0x9c, virtual false, abstract: false, final false
inline void set_GlobalSpeakersLogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

/// @brief Method set_LogLevel, addr 0xa77411c, size 0x34, virtual true, abstract: false, final true
inline void set_LogLevel(::ExitGames::Client::Photon::DebugLevel  value) ;

/// @brief Method set_Logger, addr 0xa7740dc, size 0x8, virtual false, abstract: false, final false
inline void set_Logger(::Photon::Voice::Unity::VoiceLogger*  value) ;

/// @brief Method set_PrimaryRecorder, addr 0xa774430, size 0x20, virtual false, abstract: false, final false
inline void set_PrimaryRecorder(::Photon::Voice::Unity::Recorder*  value) ;

/// @brief Method set_SpeakerPrefab, addr 0xa7741a4, size 0x1cc, virtual false, abstract: false, final false
inline void set_SpeakerPrefab(::UnityEngine::GameObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceConnection(VoiceConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceConnection(VoiceConnection const& ) = delete;

/// @brief Field PlayerPrefsKey offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayerPrefsKey{u"VoiceCloudBestRegion"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28892};

/// @brief Field logger, offset: 0x40, size: 0x8, def value: None
 ::Photon::Voice::Unity::VoiceLogger*  ___logger;

/// [SerializeField]
/// @brief Field logLevel, offset: 0x48, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___logLevel;

/// @brief Field client, offset: 0x50, size: 0x8, def value: None
 ::Photon::Voice::LoadBalancingTransport*  ___client;

/// [SerializeField]
/// @brief Field enableSupportLogger, offset: 0x58, size: 0x1, def value: None
 bool  ___enableSupportLogger;

/// @brief Field supportLoggerComponent, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Photon::Realtime::SupportLogger>  ___supportLoggerComponent;

/// [SerializeField]
/// @brief Field updateInterval, offset: 0x68, size: 0x4, def value: None
 int32_t  ___updateInterval;

/// @brief Field nextSendTickCount, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___nextSendTickCount;

/// [SerializeField]
/// @brief Field statsResetInterval, offset: 0x70, size: 0x4, def value: None
 int32_t  ___statsResetInterval;

/// @brief Field nextStatsTickCount, offset: 0x74, size: 0x4, def value: None
 int32_t  ___nextStatsTickCount;

/// @brief Field statsReferenceTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___statsReferenceTime;

/// @brief Field referenceFramesLost, offset: 0x7c, size: 0x4, def value: None
 int32_t  ___referenceFramesLost;

/// @brief Field referenceFramesReceived, offset: 0x80, size: 0x4, def value: None
 int32_t  ___referenceFramesReceived;

/// [SerializeField]
/// @brief Field speakerPrefab, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___speakerPrefab;

/// @brief Field cleanedUp, offset: 0x90, size: 0x1, def value: None
 bool  ___cleanedUp;

/// @brief Field cachedRemoteVoices, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  ___cachedRemoteVoices;

/// [SerializeField]
/// [FormerlySerializedAs("PrimaryRecorder")]
/// @brief Field primaryRecorder, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Recorder>  ___primaryRecorder;

/// @brief Field primaryRecorderInitialized, offset: 0xa8, size: 0x1, def value: None
 bool  ___primaryRecorderInitialized;

/// [SerializeField]
/// @brief Field globalRecordersLogLevel, offset: 0xa9, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___globalRecordersLogLevel;

/// [SerializeField]
/// @brief Field globalSpeakersLogLevel, offset: 0xaa, size: 0x1, def value: None
 ::ExitGames::Client::Photon::DebugLevel  ___globalSpeakersLogLevel;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field globalPlaybackDelay, offset: 0xac, size: 0x4, def value: None
 int32_t  ___globalPlaybackDelay;

/// [SerializeField]
/// @brief Field globalPlaybackDelaySettings, offset: 0xb0, size: 0xc, def value: None
 ::Photon::Voice::Unity::PlaybackDelaySettings  ___globalPlaybackDelaySettings;

/// @brief Field linkedSpeakers, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  ___linkedSpeakers;

/// @brief Field initializedRecorders, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Photon::Voice::Unity::Recorder>>*  ___initializedRecorders;

/// @brief Field Settings, offset: 0xd0, size: 0x8, def value: None
 ::Photon::Realtime::AppSettings*  ___Settings;

/// @brief Field SpeakerFactory, offset: 0xd8, size: 0x8, def value: None
 ::System::Func_4<int32_t,uint8_t,::System::Object*,::UnityW<::Photon::Voice::Unity::Speaker>>*  ___SpeakerFactory;

/// [CompilerGenerated]
/// @brief Field SpeakerLinked, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::Photon::Voice::Unity::Speaker>>*  ___SpeakerLinked;

/// [CompilerGenerated]
/// @brief Field RemoteVoiceAdded, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::Photon::Voice::Unity::RemoteVoiceLink*>*  ___RemoteVoiceAdded;

/// @brief Field RemoteLinkValidator, offset: 0xf0, size: 0x8, def value: None
 ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate*  ___RemoteLinkValidator;

/// @brief Field MinimalTimeScaleToDispatchInFixedUpdate, offset: 0xf8, size: 0x4, def value: None
 float_t  ___MinimalTimeScaleToDispatchInFixedUpdate;

/// @brief Field AutoCreateSpeakerIfNotFound, offset: 0xfc, size: 0x1, def value: None
 bool  ___AutoCreateSpeakerIfNotFound;

/// @brief Field MaxDatagrams, offset: 0x100, size: 0x4, def value: None
 int32_t  ___MaxDatagrams;

/// @brief Field SendAsap, offset: 0x104, size: 0x1, def value: None
 bool  ___SendAsap;

/// [CompilerGenerated]
/// @brief Field <FramesReceivedPerSecond>k__BackingField, offset: 0x108, size: 0x4, def value: None
 float_t  ____FramesReceivedPerSecond_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FramesLostPerSecond>k__BackingField, offset: 0x10c, size: 0x4, def value: None
 float_t  ____FramesLostPerSecond_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FramesLostPercent>k__BackingField, offset: 0x110, size: 0x4, def value: None
 float_t  ____FramesLostPercent_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___logger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___logLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___client) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___enableSupportLogger) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___supportLoggerComponent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___updateInterval) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___nextSendTickCount) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___statsResetInterval) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___nextStatsTickCount) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___statsReferenceTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___referenceFramesLost) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___referenceFramesReceived) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___speakerPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___cleanedUp) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___cachedRemoteVoices) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___primaryRecorder) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___primaryRecorderInitialized) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___globalRecordersLogLevel) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___globalSpeakersLogLevel) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___globalPlaybackDelay) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___globalPlaybackDelaySettings) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___linkedSpeakers) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___initializedRecorders) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___Settings) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___SpeakerFactory) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___SpeakerLinked) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___RemoteVoiceAdded) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___RemoteLinkValidator) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___MinimalTimeScaleToDispatchInFixedUpdate) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___AutoCreateSpeakerIfNotFound) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___MaxDatagrams) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ___SendAsap) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ____FramesReceivedPerSecond_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ____FramesLostPerSecond_k__BackingField) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection, ____FramesLostPercent_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::VoiceConnection) == 0x118, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass104_0
class CORDL_TYPE VoiceConnection___c__DisplayClass104_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  __4__this;

/// @brief Field speaker, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_speaker, put=__cordl_internal_set_speaker)) ::UnityW<::Photon::Voice::Unity::Speaker>  speaker;

static inline ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0* New_ctor() ;

/// @brief Method <LinkSpeaker>b__0, addr 0xa783560, size 0x5c, virtual false, abstract: false, final false
inline void _LinkSpeaker_b__0() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker> const& __cordl_internal_get_speaker() const;

constexpr ::UnityW<::Photon::Voice::Unity::Speaker>& __cordl_internal_get_speaker() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

constexpr void __cordl_internal_set_speaker(::UnityW<::Photon::Voice::Unity::Speaker>  value) ;

/// @brief Method .ctor, addr 0xa783558, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceConnection___c__DisplayClass104_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection___c__DisplayClass104_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceConnection___c__DisplayClass104_0(VoiceConnection___c__DisplayClass104_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection___c__DisplayClass104_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceConnection___c__DisplayClass104_0(VoiceConnection___c__DisplayClass104_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28891};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  _____4__this;

/// @brief Field speaker, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::Speaker>  ___speaker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0, ___speaker) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass104_0) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.VoiceConnection/<>c__DisplayClass100_0
class CORDL_TYPE VoiceConnection___c__DisplayClass100_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  __4__this;

/// @brief Field remoteVoice, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_remoteVoice, put=__cordl_internal_set_remoteVoice)) ::Photon::Voice::Unity::RemoteVoiceLink*  remoteVoice;

static inline ::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0* New_ctor() ;

/// @brief Method <OnRemoteVoiceInfo>b__0, addr 0xa78312c, size 0x1f4, virtual false, abstract: false, final false
inline void _OnRemoteVoiceInfo_b__0() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get___4__this() ;

constexpr ::Photon::Voice::Unity::RemoteVoiceLink* const& __cordl_internal_get_remoteVoice() const;

constexpr ::Photon::Voice::Unity::RemoteVoiceLink*& __cordl_internal_get_remoteVoice() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

constexpr void __cordl_internal_set_remoteVoice(::Photon::Voice::Unity::RemoteVoiceLink*  value) ;

/// @brief Method .ctor, addr 0xa783124, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceConnection___c__DisplayClass100_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection___c__DisplayClass100_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceConnection___c__DisplayClass100_0(VoiceConnection___c__DisplayClass100_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection___c__DisplayClass100_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceConnection___c__DisplayClass100_0(VoiceConnection___c__DisplayClass100_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28890};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  _____4__this;

/// @brief Field remoteVoice, offset: 0x18, size: 0x8, def value: None
 ::Photon::Voice::Unity::RemoteVoiceLink*  ___remoteVoice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0, ___remoteVoice) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::VoiceConnection___c__DisplayClass100_0) == 0x20, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
// Dependencies System.MulticastDelegate
namespace Photon::Voice::Unity {
// Is value type: false
// CS Name: Photon.Voice.Unity.VoiceConnection/ValidateRemoteLinkDelegate
class CORDL_TYPE VoiceConnection_ValidateRemoteLinkDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa7830dc, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Photon::Voice::Unity::RemoteVoiceLink*  link, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa7830fc, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa7830c8, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::Photon::Voice::Unity::RemoteVoiceLink*  link) ;

static inline ::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa782fc0, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceConnection_ValidateRemoteLinkDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection_ValidateRemoteLinkDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceConnection_ValidateRemoteLinkDelegate(VoiceConnection_ValidateRemoteLinkDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceConnection_ValidateRemoteLinkDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceConnection_ValidateRemoteLinkDelegate(VoiceConnection_ValidateRemoteLinkDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28889};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Voice::Unity::VoiceConnection_ValidateRemoteLinkDelegate) == 0x80, "Size mismatch!");

} // namespace end def Photon::Voice::Unity
