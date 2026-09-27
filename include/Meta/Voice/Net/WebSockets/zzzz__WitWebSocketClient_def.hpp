#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketConnectionState_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitWebSocketClient)
namespace GlobalNamespace {
struct WitWebSocketClient__BreakdownAsync_d__72;
}
namespace GlobalNamespace {
struct WitWebSocketClient__ConnectAsync_d__61;
}
namespace GlobalNamespace {
struct WitWebSocketClient__DisconnectAsync_d__71;
}
namespace GlobalNamespace {
struct WitWebSocketClient__SendChunkAsync_d__78;
}
namespace GlobalNamespace {
struct WitWebSocketClient__SendRequestAsync_d__76;
}
namespace GlobalNamespace {
struct WitWebSocketClient__SetupAsync_d__66;
}
namespace GlobalNamespace {
struct WitWebSocketClient__WaitAndConnect_d__74;
}
namespace GlobalNamespace {
struct WitWebSocketClient__WaitAndRetry_d__102;
}
namespace GlobalNamespace {
struct WitWebSocketClient__WaitForConnectionTimeout_d__62;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Net::Encoding::Wit {
class WitChunkConverter;
}
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunk;
}
namespace Meta::Voice::Net::PubSub {
class IPubSubSubscriber;
}
namespace Meta::Voice::Net::PubSub {
struct PubSubSubscriptionState;
}
namespace Meta::Voice::Net::PubSub {
class PubSubTopicSubscriptionDelegate;
}
namespace Meta::Voice::Net::WebSockets::Requests {
class WitWebSocketSubscriptionRequest;
}
namespace Meta::Voice::Net::WebSockets {
class IWebSocket;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClient;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
struct WebSocketCloseCode;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient_PubSubSubscription;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient___c__DisplayClass76_0;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient___c__DisplayClass77_0;
}
namespace Meta::Voice::Net::WebSockets {
struct WitWebSocketConnectionState;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketResponseProcessor;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketSettings;
}
namespace Meta::WitAi::Configuration {
class WitRequestOptions;
}
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace Meta::WitAi {
class IWitRequestConfiguration;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
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
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient_PubSubSubscription;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient___c__DisplayClass76_0;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketClient___c__DisplayClass77_0;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::WitWebSocketClient*);
MARK_REF_T(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*);
MARK_REF_T(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0*);
MARK_REF_T(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketClient*, "Meta.Voice.Net.WebSockets", "WitWebSocketClient");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*, "Meta.Voice.Net.WebSockets", "WitWebSocketClient/PubSubSubscription");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0*, "Meta.Voice.Net.WebSockets", "WitWebSocketClient/<>c__DisplayClass76_0");
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0*, "Meta.Voice.Net.WebSockets", "WitWebSocketClient/<>c__DisplayClass77_0");
// [LogCategory((Meta.Voice.Logging.LogCategory)15)]
// Dependencies Meta.Voice.Net.WebSockets.WitWebSocketConnectionState, System.DateTime, System.Object
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketClient
class CORDL_TYPE WitWebSocketClient : public ::System::Object {
public:
// Declarations
using _BreakdownAsync_d__72 = ::GlobalNamespace::WitWebSocketClient__BreakdownAsync_d__72;

using _ConnectAsync_d__61 = ::GlobalNamespace::WitWebSocketClient__ConnectAsync_d__61;

using _DisconnectAsync_d__71 = ::GlobalNamespace::WitWebSocketClient__DisconnectAsync_d__71;

using _SendChunkAsync_d__78 = ::GlobalNamespace::WitWebSocketClient__SendChunkAsync_d__78;

using _SendRequestAsync_d__76 = ::GlobalNamespace::WitWebSocketClient__SendRequestAsync_d__76;

using _SetupAsync_d__66 = ::GlobalNamespace::WitWebSocketClient__SetupAsync_d__66;

using _WaitAndConnect_d__74 = ::GlobalNamespace::WitWebSocketClient__WaitAndConnect_d__74;

using _WaitAndRetry_d__102 = ::GlobalNamespace::WitWebSocketClient__WaitAndRetry_d__102;

using _WaitForConnectionTimeout_d__62 = ::GlobalNamespace::WitWebSocketClient__WaitForConnectionTimeout_d__62;

using PubSubSubscription = ::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription;

using __c__DisplayClass76_0 = ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0;

using __c__DisplayClass77_0 = ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0;

 __declspec(property(get=get_ConnectionCompletion, put=set_ConnectionCompletion)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ConnectionCompletion;

 __declspec(property(get=get_ConnectionState, put=set_ConnectionState)) ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  ConnectionState;

 __declspec(property(get=get_FailedConnectionAttempts, put=set_FailedConnectionAttempts)) int32_t  FailedConnectionAttempts;

 __declspec(property(get=get_IsAuthenticated, put=set_IsAuthenticated)) bool  IsAuthenticated;

 __declspec(property(get=get_IsReconnecting)) bool  IsReconnecting;

 __declspec(property(get=get_IsReferenced)) bool  IsReferenced;

 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field OnConnectionStateChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnConnectionStateChanged, put=__cordl_internal_set_OnConnectionStateChanged)) ::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>*  OnConnectionStateChanged;

/// @brief Field OnProcessForwardedResponse, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProcessForwardedResponse, put=__cordl_internal_set_OnProcessForwardedResponse)) ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  OnProcessForwardedResponse;

/// @brief Field OnTopicRequestTracked, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTopicRequestTracked, put=__cordl_internal_set_OnTopicRequestTracked)) ::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  OnTopicRequestTracked;

/// @brief Field OnTopicSubscriptionStateChange, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTopicSubscriptionStateChange, put=__cordl_internal_set_OnTopicSubscriptionStateChange)) ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  OnTopicSubscriptionStateChange;

/// @brief Field Options, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Options, put=__cordl_internal_set_Options)) ::Meta::WitAi::Configuration::WitRequestOptions*  Options;

 __declspec(property(get=get_ReferenceCount, put=set_ReferenceCount)) int32_t  ReferenceCount;

 __declspec(property(get=get_Settings)) ::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  Settings;

/// @brief Field <ConnectionCompletion>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConnectionCompletion_k__BackingField, put=__cordl_internal_set__ConnectionCompletion_k__BackingField)) ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  _ConnectionCompletion_k__BackingField;

/// @brief Field <ConnectionState>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__ConnectionState_k__BackingField, put=__cordl_internal_set__ConnectionState_k__BackingField)) ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  _ConnectionState_k__BackingField;

/// @brief Field <FailedConnectionAttempts>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__FailedConnectionAttempts_k__BackingField, put=__cordl_internal_set__FailedConnectionAttempts_k__BackingField)) int32_t  _FailedConnectionAttempts_k__BackingField;

/// @brief Field <IsAuthenticated>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsAuthenticated_k__BackingField, put=__cordl_internal_set__IsAuthenticated_k__BackingField)) bool  _IsAuthenticated_k__BackingField;

/// @brief Field <LastResponseTime>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastResponseTime_k__BackingField, put=__cordl_internal_set__LastResponseTime_k__BackingField)) ::System::DateTime  _LastResponseTime_k__BackingField;

/// @brief Field <Logger>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <ReferenceCount>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__ReferenceCount_k__BackingField, put=__cordl_internal_set__ReferenceCount_k__BackingField)) int32_t  _ReferenceCount_k__BackingField;

/// @brief Field <Settings>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Settings_k__BackingField, put=__cordl_internal_set__Settings_k__BackingField)) ::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  _Settings_k__BackingField;

/// @brief Field _decoder, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  _decoder;

/// @brief Field _downloadCount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__downloadCount, put=__cordl_internal_set__downloadCount)) int32_t  _downloadCount;

/// @brief Field _lastRequestId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastRequestId, put=__cordl_internal_set__lastRequestId)) ::StringW  _lastRequestId;

/// @brief Field _requests, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__requests, put=__cordl_internal_set__requests)) ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  _requests;

/// @brief Field _socket, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__socket, put=__cordl_internal_set__socket)) ::Meta::Voice::Net::WebSockets::IWebSocket*  _socket;

/// @brief Field _subscriptions, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscriptions, put=__cordl_internal_set__subscriptions)) ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>*  _subscriptions;

/// @brief Field _untrackedRequests, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__untrackedRequests, put=__cordl_internal_set__untrackedRequests)) ::System::Collections::Generic::List_1<::StringW>*  _untrackedRequests;

/// @brief Field _uploadCount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__uploadCount, put=__cordl_internal_set__uploadCount)) int32_t  _uploadCount;

/// @brief Convert operator to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr operator  ::Meta::Voice::Net::PubSub::IPubSubSubscriber*() noexcept;

/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWitWebSocketClient"
constexpr operator  ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*() noexcept;

/// @brief Method ApplyDecodedChunk, addr 0x9e2da7c, size 0x638, virtual false, abstract: false, final false
inline void ApplyDecodedChunk(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk) ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<BreakdownAsync>d__72))]
/// @brief Method BreakdownAsync, addr 0x9e2c330, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* BreakdownAsync() ;

/// @brief Method CompleteRequestTracking, addr 0x9e2e9ac, size 0x94, virtual false, abstract: false, final false
inline void CompleteRequestTracking(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method Connect, addr 0x9e2b2a8, size 0x20, virtual true, abstract: false, final true
inline void Connect() ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<ConnectAsync>d__61))]
/// @brief Method ConnectAsync, addr 0x9e2b490, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ConnectAsync() ;

/// @brief Method ConnectSafely, addr 0x9e2b2c8, size 0xf0, virtual false, abstract: false, final false
inline void ConnectSafely() ;

/// @brief Method Disconnect, addr 0x9e2c238, size 0x20, virtual true, abstract: false, final true
inline void Disconnect() ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<DisconnectAsync>d__71))]
/// @brief Method DisconnectAsync, addr 0x9e2c258, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* DisconnectAsync() ;

/// @brief Method EncodeChunk, addr 0x9e2d928, size 0x84, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> EncodeChunk(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk) ;

/// @brief Method FinalizeSubscription, addr 0x9e2ea40, size 0xe4, virtual false, abstract: false, final false
inline void FinalizeSubscription(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*  request) ;

/// @brief Method ForceDisconnect, addr 0x9e2c050, size 0x28, virtual true, abstract: false, final true
inline void ForceDisconnect() ;

/// @brief Method GenerateWebSocket, addr 0x9e2b568, size 0xfc, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::IWebSocket* GenerateWebSocket(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers) ;

/// @brief Method GetTopicSubscriptionState, addr 0x9e2e878, size 0x94, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::PubSub::PubSubSubscriptionState GetTopicSubscriptionState(::StringW  topicId) ;

/// @brief Method HandleSetupFailed, addr 0x9e2b7b4, size 0x554, virtual false, abstract: false, final false
inline void HandleSetupFailed(::StringW  error) ;

/// @brief Method HandleSocketConnected, addr 0x9e2bd08, size 0x270, virtual false, abstract: false, final false
inline void HandleSocketConnected() ;

/// @brief Method HandleSocketDisconnect, addr 0x9e2c078, size 0x1c0, virtual false, abstract: false, final false
inline void HandleSocketDisconnect(::Meta::Voice::Net::WebSockets::WebSocketCloseCode  closeCode) ;

/// @brief Method HandleSocketError, addr 0x9e2b664, size 0x150, virtual false, abstract: false, final false
inline void HandleSocketError(::StringW  errorMessage) ;

/// @brief Method HandleSocketResponse, addr 0x9e2d9ac, size 0xd0, virtual false, abstract: false, final false
inline void HandleSocketResponse(::ArrayW<uint8_t>  rawBytes, int32_t  offset, int32_t  length) ;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient* New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration) ;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient* New_ctor(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  settings) ;

/// @brief Method ProcessForwardedResponse, addr 0x9e2e0b4, size 0x70c, virtual false, abstract: false, final false
inline void ProcessForwardedResponse(::StringW  requestId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk) ;

/// @brief Method Reconnect, addr 0x9e2c408, size 0x27c, virtual false, abstract: false, final false
inline void Reconnect() ;

/// @brief Method SendChunk, addr 0x9e2cf98, size 0x138, virtual false, abstract: false, final false
inline void SendChunk(::StringW  requestId, ::Meta::WitAi::Json::WitResponseNode*  requestJsonData, ::ArrayW<uint8_t>  requestBinaryData) ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<SendChunkAsync>d__78))]
/// @brief Method SendChunkAsync, addr 0x9e2d0d8, size 0x12c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SendChunkAsync(::StringW  requestId, ::Meta::WitAi::Json::WitResponseNode*  requestJsonData, ::ArrayW<uint8_t>  requestBinaryData) ;

/// @brief Method SendRequest, addr 0x9e2c75c, size 0x10c, virtual true, abstract: false, final true
inline bool SendRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<SendRequestAsync>d__76))]
/// @brief Method SendRequestAsync, addr 0x9e2ce7c, size 0x11c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* SendRequestAsync(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method SetConnectionState, addr 0x9e2b05c, size 0x24c, virtual false, abstract: false, final false
inline void SetConnectionState(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  newConnectionState) ;

/// @brief Method SetTopicSubscriptionState, addr 0x9e2f6b4, size 0x390, virtual false, abstract: false, final false
inline void SetTopicSubscriptionState(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*  subscription, ::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  state, ::StringW  error) ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<SetupAsync>d__66))]
/// @brief Method SetupAsync, addr 0x9e2bf78, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetupAsync() ;

/// @brief Method Subscribe, addr 0x9e2f53c, size 0x8, virtual true, abstract: false, final true
inline void Subscribe(::StringW  topicId) ;

/// @brief Method Subscribe, addr 0x9e2f544, size 0x168, virtual false, abstract: false, final false
inline void Subscribe(::StringW  topicId, bool  ignoreRefCount) ;

/// @brief Method TrackRequest, addr 0x9e2c868, size 0x614, virtual true, abstract: false, final true
inline bool TrackRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method TrySimulateError, addr 0x9e2d204, size 0x724, virtual false, abstract: false, final false
inline void TrySimulateError(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method Unsubscribe, addr 0x9e2fa9c, size 0x8, virtual true, abstract: false, final true
inline void Unsubscribe(::StringW  topicId) ;

/// @brief Method Unsubscribe, addr 0x9e2faa4, size 0x14c, virtual true, abstract: false, final true
inline void Unsubscribe(::StringW  topicId, bool  ignoreRefCount) ;

/// @brief Method UntrackRequest, addr 0x9e2e7c0, size 0xb8, virtual true, abstract: false, final true
inline bool UntrackRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method UntrackRequest, addr 0x9e2eb24, size 0x780, virtual true, abstract: false, final true
inline bool UntrackRequest(::StringW  requestId) ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<WaitAndConnect>d__74))]
/// @brief Method WaitAndConnect, addr 0x9e2c684, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitAndConnect() ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<WaitAndRetry>d__102))]
/// @brief Method WaitAndRetry, addr 0x9e2fbf0, size 0x100, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitAndRetry(bool  subscribing, ::StringW  topicId) ;

/// [AsyncStateMachine(typeof(Meta.Voice.Net.WebSockets.WitWebSocketClient::<WaitForConnectionTimeout>d__62))]
/// @brief Method WaitForConnectionTimeout, addr 0x9e2b3b8, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitForConnectionTimeout() ;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>* const& __cordl_internal_get_OnConnectionStateChanged() const;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>*& __cordl_internal_get_OnConnectionStateChanged() ;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor* const& __cordl_internal_get_OnProcessForwardedResponse() const;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*& __cordl_internal_get_OnProcessForwardedResponse() ;

constexpr ::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& __cordl_internal_get_OnTopicRequestTracked() const;

constexpr ::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& __cordl_internal_get_OnTopicRequestTracked() ;

constexpr ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate* const& __cordl_internal_get_OnTopicSubscriptionStateChange() const;

constexpr ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*& __cordl_internal_get_OnTopicSubscriptionStateChange() ;

constexpr ::Meta::WitAi::Configuration::WitRequestOptions* const& __cordl_internal_get_Options() const;

constexpr ::Meta::WitAi::Configuration::WitRequestOptions*& __cordl_internal_get_Options() ;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& __cordl_internal_get__ConnectionCompletion_k__BackingField() const;

constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& __cordl_internal_get__ConnectionCompletion_k__BackingField() ;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState const& __cordl_internal_get__ConnectionState_k__BackingField() const;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState& __cordl_internal_get__ConnectionState_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__FailedConnectionAttempts_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__FailedConnectionAttempts_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsAuthenticated_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsAuthenticated_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__LastResponseTime_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__LastResponseTime_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__ReferenceCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__ReferenceCount_k__BackingField() ;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketSettings* const& __cordl_internal_get__Settings_k__BackingField() const;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketSettings*& __cordl_internal_get__Settings_k__BackingField() ;

constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter* const& __cordl_internal_get__decoder() const;

constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*& __cordl_internal_get__decoder() ;

constexpr int32_t const& __cordl_internal_get__downloadCount() const;

constexpr int32_t& __cordl_internal_get__downloadCount() ;

constexpr ::StringW const& __cordl_internal_get__lastRequestId() const;

constexpr ::StringW& __cordl_internal_get__lastRequestId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& __cordl_internal_get__requests() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& __cordl_internal_get__requests() ;

constexpr ::Meta::Voice::Net::WebSockets::IWebSocket* const& __cordl_internal_get__socket() const;

constexpr ::Meta::Voice::Net::WebSockets::IWebSocket*& __cordl_internal_get__socket() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>* const& __cordl_internal_get__subscriptions() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>*& __cordl_internal_get__subscriptions() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__untrackedRequests() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__untrackedRequests() ;

constexpr int32_t const& __cordl_internal_get__uploadCount() const;

constexpr int32_t& __cordl_internal_get__uploadCount() ;

constexpr void __cordl_internal_set_OnConnectionStateChanged(::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>*  value) ;

constexpr void __cordl_internal_set_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

constexpr void __cordl_internal_set_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

constexpr void __cordl_internal_set_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value) ;

constexpr void __cordl_internal_set_Options(::Meta::WitAi::Configuration::WitRequestOptions*  value) ;

constexpr void __cordl_internal_set__ConnectionCompletion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

constexpr void __cordl_internal_set__ConnectionState_k__BackingField(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  value) ;

constexpr void __cordl_internal_set__FailedConnectionAttempts_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__IsAuthenticated_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastResponseTime_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__ReferenceCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Settings_k__BackingField(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  value) ;

constexpr void __cordl_internal_set__decoder(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  value) ;

constexpr void __cordl_internal_set__downloadCount(int32_t  value) ;

constexpr void __cordl_internal_set__lastRequestId(::StringW  value) ;

constexpr void __cordl_internal_set__requests(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

constexpr void __cordl_internal_set__socket(::Meta::Voice::Net::WebSockets::IWebSocket*  value) ;

constexpr void __cordl_internal_set__subscriptions(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>*  value) ;

constexpr void __cordl_internal_set__untrackedRequests(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__uploadCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e2af18, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration) ;

/// @brief Method .ctor, addr 0x9e2ac5c, size 0x2bc, virtual false, abstract: false, final false
inline void _ctor(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  settings) ;

/// [CompilerGenerated]
/// @brief Method add_OnProcessForwardedResponse, addr 0x9e2ab0c, size 0x9c, virtual true, abstract: false, final true
inline void add_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTopicRequestTracked, addr 0x9e2f3dc, size 0xb0, virtual true, abstract: false, final true
inline void add_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTopicSubscriptionStateChange, addr 0x9e2f2a4, size 0x9c, virtual true, abstract: false, final true
inline void add_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method get_ConnectionCompletion, addr 0x9e2ac44, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* get_ConnectionCompletion() ;

/// [CompilerGenerated]
/// @brief Method get_ConnectionState, addr 0x9e2aa70, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState get_ConnectionState() ;

/// [CompilerGenerated]
/// @brief Method get_FailedConnectionAttempts, addr 0x9e2aafc, size 0x8, virtual true, abstract: false, final true
inline int32_t get_FailedConnectionAttempts() ;

/// [CompilerGenerated]
/// @brief Method get_IsAuthenticated, addr 0x9e2aa80, size 0x8, virtual true, abstract: false, final true
inline bool get_IsAuthenticated() ;

/// @brief Method get_IsReconnecting, addr 0x9e2aaa0, size 0x4c, virtual true, abstract: false, final true
inline bool get_IsReconnecting() ;

/// @brief Method get_IsReferenced, addr 0x9e2aa90, size 0x10, virtual true, abstract: false, final true
inline bool get_IsReferenced() ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e2ac54, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_ReferenceCount, addr 0x9e2aaec, size 0x8, virtual true, abstract: false, final true
inline int32_t get_ReferenceCount() ;

/// [CompilerGenerated]
/// @brief Method get_Settings, addr 0x9e2aa68, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::WebSockets::WitWebSocketSettings* get_Settings() ;

/// @brief Convert to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr ::Meta::Voice::Net::PubSub::IPubSubSubscriber* i___Meta__Voice__Net__PubSub__IPubSubSubscriber() noexcept;

/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWitWebSocketClient"
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* i___Meta__Voice__Net__WebSockets__IWitWebSocketClient() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnProcessForwardedResponse, addr 0x9e2aba8, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTopicRequestTracked, addr 0x9e2f48c, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTopicSubscriptionStateChange, addr 0x9e2f340, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ConnectionCompletion, addr 0x9e2ac4c, size 0x8, virtual false, abstract: false, final false
inline void set_ConnectionCompletion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ConnectionState, addr 0x9e2aa78, size 0x8, virtual false, abstract: false, final false
inline void set_ConnectionState(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  value) ;

/// [CompilerGenerated]
/// @brief Method set_FailedConnectionAttempts, addr 0x9e2ab04, size 0x8, virtual false, abstract: false, final false
inline void set_FailedConnectionAttempts(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsAuthenticated, addr 0x9e2aa88, size 0x8, virtual false, abstract: false, final false
inline void set_IsAuthenticated(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReferenceCount, addr 0x9e2aaf4, size 0x8, virtual false, abstract: false, final false
inline void set_ReferenceCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketClient(WitWebSocketClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketClient(WitWebSocketClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25482};

/// [CompilerGenerated]
/// @brief Field <Settings>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  ____Settings_k__BackingField;

/// @brief Field Options, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Configuration::WitRequestOptions*  ___Options;

/// [CompilerGenerated]
/// @brief Field <ConnectionState>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  ____ConnectionState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsAuthenticated>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____IsAuthenticated_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ReferenceCount>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____ReferenceCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FailedConnectionAttempts>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____FailedConnectionAttempts_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastResponseTime>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ____LastResponseTime_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnConnectionStateChanged, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>*  ___OnConnectionStateChanged;

/// [CompilerGenerated]
/// @brief Field OnProcessForwardedResponse, offset: 0x40, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  ___OnProcessForwardedResponse;

/// [CompilerGenerated]
/// @brief Field <ConnectionCompletion>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::TaskCompletionSource_1<bool>*  ____ConnectionCompletion_k__BackingField;

/// @brief Field _lastRequestId, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____lastRequestId;

/// @brief Field _uploadCount, offset: 0x58, size: 0x4, def value: None
 int32_t  ____uploadCount;

/// @brief Field _downloadCount, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____downloadCount;

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// @brief Field _requests, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  ____requests;

/// @brief Field _untrackedRequests, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____untrackedRequests;

/// @brief Field _socket, offset: 0x78, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::IWebSocket*  ____socket;

/// @brief Field _decoder, offset: 0x80, size: 0x8, def value: None
 ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  ____decoder;

/// @brief Field _subscriptions, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>*  ____subscriptions;

/// [CompilerGenerated]
/// @brief Field OnTopicSubscriptionStateChange, offset: 0x90, size: 0x8, def value: None
 ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  ___OnTopicSubscriptionStateChange;

/// [CompilerGenerated]
/// @brief Field OnTopicRequestTracked, offset: 0x98, size: 0x8, def value: None
 ::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  ___OnTopicRequestTracked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____Settings_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ___Options) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____ConnectionState_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____IsAuthenticated_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____ReferenceCount_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____FailedConnectionAttempts_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____LastResponseTime_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ___OnConnectionStateChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ___OnProcessForwardedResponse) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____ConnectionCompletion_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____lastRequestId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____uploadCount) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____downloadCount) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____Logger_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____requests) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____untrackedRequests) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____socket) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____decoder) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ____subscriptions) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ___OnTopicSubscriptionStateChange) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient, ___OnTopicRequestTracked) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketClient) == 0xa0, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketClient/<>c__DisplayClass77_0
class CORDL_TYPE WitWebSocketClient___c__DisplayClass77_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  __4__this;

/// @brief Field requestBinaryData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestBinaryData, put=__cordl_internal_set_requestBinaryData)) ::ArrayW<uint8_t>  requestBinaryData;

/// @brief Field requestId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestId, put=__cordl_internal_set_requestId)) ::StringW  requestId;

/// @brief Field requestJsonData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_requestJsonData, put=__cordl_internal_set_requestJsonData)) ::Meta::WitAi::Json::WitResponseNode*  requestJsonData;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0* New_ctor() ;

/// @brief Method <SendChunk>b__0, addr 0x9e2fde8, size 0x20, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* _SendChunk_b__0() ;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_requestBinaryData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_requestBinaryData() ;

constexpr ::StringW const& __cordl_internal_get_requestId() const;

constexpr ::StringW& __cordl_internal_get_requestId() ;

constexpr ::Meta::WitAi::Json::WitResponseNode* const& __cordl_internal_get_requestJsonData() const;

constexpr ::Meta::WitAi::Json::WitResponseNode*& __cordl_internal_get_requestJsonData() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Net::WebSockets::WitWebSocketClient*  value) ;

constexpr void __cordl_internal_set_requestBinaryData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_requestId(::StringW  value) ;

constexpr void __cordl_internal_set_requestJsonData(::Meta::WitAi::Json::WitResponseNode*  value) ;

/// @brief Method .ctor, addr 0x9e2d0d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketClient___c__DisplayClass77_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient___c__DisplayClass77_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketClient___c__DisplayClass77_0(WitWebSocketClient___c__DisplayClass77_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient___c__DisplayClass77_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketClient___c__DisplayClass77_0(WitWebSocketClient___c__DisplayClass77_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25472};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  _____4__this;

/// @brief Field requestId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___requestId;

/// @brief Field requestJsonData, offset: 0x20, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  ___requestJsonData;

/// @brief Field requestBinaryData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___requestBinaryData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0, ___requestId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0, ___requestJsonData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0, ___requestBinaryData) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0) == 0x30, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketClient/<>c__DisplayClass76_0
class CORDL_TYPE WitWebSocketClient___c__DisplayClass76_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  __4__this;

/// @brief Field request, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_request, put=__cordl_internal_set_request)) ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0* New_ctor() ;

/// @brief Method <SendRequestAsync>b__0, addr 0x9e2fcf8, size 0xf0, virtual false, abstract: false, final false
inline void _SendRequestAsync_b__0() ;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient*& __cordl_internal_get___4__this() ;

constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest* const& __cordl_internal_get_request() const;

constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*& __cordl_internal_get_request() ;

constexpr void __cordl_internal_set___4__this(::Meta::Voice::Net::WebSockets::WitWebSocketClient*  value) ;

constexpr void __cordl_internal_set_request(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  value) ;

/// @brief Method .ctor, addr 0x9e2fcf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketClient___c__DisplayClass76_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient___c__DisplayClass76_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketClient___c__DisplayClass76_0(WitWebSocketClient___c__DisplayClass76_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient___c__DisplayClass76_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketClient___c__DisplayClass76_0(WitWebSocketClient___c__DisplayClass76_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25471};

/// @brief Field request, offset: 0x10, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  ___request;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketClient*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
// Dependencies Meta.Voice.Net.PubSub.PubSubSubscriptionState, System.Object
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketClient/PubSubSubscription
class CORDL_TYPE WitWebSocketClient_PubSubSubscription : public ::System::Object {
public:
// Declarations
/// @brief Field referenceCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_referenceCount, put=__cordl_internal_set_referenceCount)) int32_t  referenceCount;

/// @brief Field state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  state;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_referenceCount() const;

constexpr int32_t& __cordl_internal_get_referenceCount() ;

constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const& __cordl_internal_get_state() const;

constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState& __cordl_internal_get_state() ;

constexpr void __cordl_internal_set_referenceCount(int32_t  value) ;

constexpr void __cordl_internal_set_state(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  value) ;

/// @brief Method .ctor, addr 0x9e2f6ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketClient_PubSubSubscription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient_PubSubSubscription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketClient_PubSubSubscription(WitWebSocketClient_PubSubSubscription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketClient_PubSubSubscription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketClient_PubSubSubscription(WitWebSocketClient_PubSubSubscription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25470};

/// @brief Field state, offset: 0x10, size: 0x4, def value: None
 ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  ___state;

/// @brief Field referenceCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___referenceCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription, ___state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription, ___referenceCount) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription) == 0x18, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
