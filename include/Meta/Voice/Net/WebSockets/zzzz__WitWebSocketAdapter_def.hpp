#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketAdapter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSettings_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitWebSocketAdapter)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunk;
}
namespace Meta::Voice::Net::PubSub {
class IPubSubAdapter;
}
namespace Meta::Voice::Net::PubSub {
struct PubSubSettings;
}
namespace Meta::Voice::Net::PubSub {
struct PubSubSubscriptionState;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClientProvider;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketClient;
}
namespace Meta::Voice::Net::WebSockets {
class IWitWebSocketRequest;
}
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketResponseProcessor;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Net::WebSockets {
class WitWebSocketAdapter;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*, "Meta.Voice.Net.WebSockets", "WitWebSocketAdapter");
// [LogCategory((Meta.Voice.Logging.LogCategory)15, (Meta.Voice.Logging.LogCategory)19)]
// Dependencies Meta.Voice.Net.PubSub.PubSubSettings, Meta.Voice.Net.PubSub.PubSubSubscriptionState, UnityEngine.MonoBehaviour
namespace Meta::Voice::Net::WebSockets {
// Is value type: false
// CS Name: Meta.Voice.Net.WebSockets.WitWebSocketAdapter
class CORDL_TYPE WitWebSocketAdapter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Logger)) ::Meta::Voice::Logging::IVLogger*  Logger;

/// @brief Field OnProcessForwardedResponse, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProcessForwardedResponse, put=__cordl_internal_set_OnProcessForwardedResponse)) ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  OnProcessForwardedResponse;

/// @brief Field OnRequestGenerated, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRequestGenerated, put=__cordl_internal_set_OnRequestGenerated)) ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  OnRequestGenerated;

 __declspec(property(get=get_OnSubscribed)) ::UnityEngine::Events::UnityEvent*  OnSubscribed;

/// @brief Field OnTopicSubscriptionStateChange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTopicSubscriptionStateChange, put=__cordl_internal_set_OnTopicSubscriptionStateChange)) ::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  OnTopicSubscriptionStateChange;

 __declspec(property(get=get_OnUnsubscribed)) ::UnityEngine::Events::UnityEvent*  OnUnsubscribed;

 __declspec(property(get=get_Settings, put=set_Settings)) ::Meta::Voice::Net::PubSub::PubSubSettings  Settings;

 __declspec(property(get=get_SubscriptionState, put=set_SubscriptionState)) ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  SubscriptionState;

 __declspec(property(get=get_WebSocketClient, put=set_WebSocketClient)) ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  WebSocketClient;

 __declspec(property(get=get_WebSocketProvider)) ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*  WebSocketProvider;

/// @brief Field <Logger>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Logger_k__BackingField, put=__cordl_internal_set__Logger_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  _Logger_k__BackingField;

/// @brief Field <OnSubscribed>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnSubscribed_k__BackingField, put=__cordl_internal_set__OnSubscribed_k__BackingField)) ::UnityEngine::Events::UnityEvent*  _OnSubscribed_k__BackingField;

/// @brief Field <OnUnsubscribed>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__OnUnsubscribed_k__BackingField, put=__cordl_internal_set__OnUnsubscribed_k__BackingField)) ::UnityEngine::Events::UnityEvent*  _OnUnsubscribed_k__BackingField;

/// @brief Field <SubscriptionState>k__BackingField, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__SubscriptionState_k__BackingField, put=__cordl_internal_set__SubscriptionState_k__BackingField)) ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  _SubscriptionState_k__BackingField;

/// @brief Field <WebSocketClient>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__WebSocketClient_k__BackingField, put=__cordl_internal_set__WebSocketClient_k__BackingField)) ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  _WebSocketClient_k__BackingField;

/// @brief Field _active, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _connected, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__connected, put=__cordl_internal_set__connected)) bool  _connected;

/// @brief Field _settings, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::Meta::Voice::Net::PubSub::PubSubSettings  _settings;

/// @brief Field _subscriptionsPerTopic, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__subscriptionsPerTopic, put=__cordl_internal_set__subscriptionsPerTopic)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  _subscriptionsPerTopic;

/// @brief Field _webSocketProvider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__webSocketProvider, put=__cordl_internal_set__webSocketProvider)) ::UnityW<::UnityEngine::Object>  _webSocketProvider;

/// @brief Convert operator to "::Meta::Voice::Net::PubSub::IPubSubAdapter"
constexpr operator  ::Meta::Voice::Net::PubSub::IPubSubAdapter*() noexcept;

/// @brief Method ApplySubscriptionPerTopic, addr 0x9e2a31c, size 0x104, virtual true, abstract: false, final false
inline void ApplySubscriptionPerTopic(::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  subscriptionState) ;

/// @brief Method Connect, addr 0x9e293dc, size 0x2b0, virtual false, abstract: false, final false
inline void Connect() ;

/// @brief Method DetermineSubscriptionState, addr 0x9e2a43c, size 0x3f8, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::PubSub::PubSubSubscriptionState DetermineSubscriptionState() ;

/// @brief Method Disconnect, addr 0x9e29788, size 0x2bc, virtual false, abstract: false, final false
inline void Disconnect() ;

/// @brief Method HandleRequestGenerated, addr 0x9e29724, size 0x5c, virtual true, abstract: false, final false
inline void HandleRequestGenerated(::StringW  topicId, ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

static inline ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9e29a44, size 0x20, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9e29780, size 0x8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e290bc, size 0x2c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RaiseProcessForwardedResponse, addr 0x9e2968c, size 0x98, virtual true, abstract: false, final false
inline bool RaiseProcessForwardedResponse(::StringW  topicId, ::StringW  requestId, ::StringW  clientUserId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  responseChunk) ;

/// @brief Method RefreshSubscriptionState, addr 0x9e2a420, size 0x1c, virtual false, abstract: false, final false
inline void RefreshSubscriptionState() ;

/// @brief Method SendRequest, addr 0x9e2a188, size 0x194, virtual false, abstract: false, final false
inline void SendRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request) ;

/// @brief Method SetClientProvider, addr 0x9e290e8, size 0x2f4, virtual false, abstract: false, final false
inline void SetClientProvider(::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*  clientProvider) ;

/// @brief Method SetSettings, addr 0x9e28ae8, size 0x1bc, virtual false, abstract: false, final false
inline void SetSettings(::Meta::Voice::Net::PubSub::PubSubSettings  settings) ;

/// @brief Method SetSubscriptionState, addr 0x9e2a834, size 0x64, virtual false, abstract: false, final false
inline void SetSubscriptionState(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  newSubState) ;

/// @brief Method Subscribe, addr 0x9e29a64, size 0x310, virtual false, abstract: false, final false
inline void Subscribe() ;

/// @brief Method Unsubscribe, addr 0x9e29d74, size 0x414, virtual false, abstract: false, final false
inline void Unsubscribe() ;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor* const& __cordl_internal_get_OnProcessForwardedResponse() const;

constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*& __cordl_internal_get_OnProcessForwardedResponse() ;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& __cordl_internal_get_OnRequestGenerated() const;

constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& __cordl_internal_get_OnRequestGenerated() ;

constexpr ::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>* const& __cordl_internal_get_OnTopicSubscriptionStateChange() const;

constexpr ::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*& __cordl_internal_get_OnTopicSubscriptionStateChange() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get__Logger_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get__Logger_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnSubscribed_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnSubscribed_k__BackingField() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__OnUnsubscribed_k__BackingField() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__OnUnsubscribed_k__BackingField() ;

constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const& __cordl_internal_get__SubscriptionState_k__BackingField() const;

constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState& __cordl_internal_get__SubscriptionState_k__BackingField() ;

constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* const& __cordl_internal_get__WebSocketClient_k__BackingField() const;

constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*& __cordl_internal_get__WebSocketClient_k__BackingField() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr bool const& __cordl_internal_get__connected() const;

constexpr bool& __cordl_internal_get__connected() ;

constexpr ::Meta::Voice::Net::PubSub::PubSubSettings const& __cordl_internal_get__settings() const;

constexpr ::Meta::Voice::Net::PubSub::PubSubSettings& __cordl_internal_get__settings() ;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>* const& __cordl_internal_get__subscriptionsPerTopic() const;

constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*& __cordl_internal_get__subscriptionsPerTopic() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__webSocketProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__webSocketProvider() ;

constexpr void __cordl_internal_set_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

constexpr void __cordl_internal_set_OnRequestGenerated(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

constexpr void __cordl_internal_set_OnTopicSubscriptionStateChange(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value) ;

constexpr void __cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__OnSubscribed_k__BackingField(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__OnUnsubscribed_k__BackingField(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__SubscriptionState_k__BackingField(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  value) ;

constexpr void __cordl_internal_set__WebSocketClient_k__BackingField(::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__connected(bool  value) ;

constexpr void __cordl_internal_set__settings(::Meta::Voice::Net::PubSub::PubSubSettings  value) ;

constexpr void __cordl_internal_set__subscriptionsPerTopic(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value) ;

constexpr void __cordl_internal_set__webSocketProvider(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x9e2a898, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnProcessForwardedResponse, addr 0x9e28e24, size 0x9c, virtual false, abstract: false, final false
inline void add_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRequestGenerated, addr 0x9e28f5c, size 0xb0, virtual false, abstract: false, final false
inline void add_OnRequestGenerated(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnTopicSubscriptionStateChange, addr 0x9e28cb4, size 0xb0, virtual true, abstract: false, final true
inline void add_OnTopicSubscriptionStateChange(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_Logger, addr 0x9e28a78, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* get_Logger() ;

/// [CompilerGenerated]
/// @brief Method get_OnSubscribed, addr 0x9e28e14, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnSubscribed() ;

/// [CompilerGenerated]
/// @brief Method get_OnUnsubscribed, addr 0x9e28e1c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Events::UnityEvent* get_OnUnsubscribed() ;

/// @brief Method get_Settings, addr 0x9e28ad8, size 0xc, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::PubSub::PubSubSettings get_Settings() ;

/// [CompilerGenerated]
/// @brief Method get_SubscriptionState, addr 0x9e28ca4, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Voice::Net::PubSub::PubSubSubscriptionState get_SubscriptionState() ;

/// [CompilerGenerated]
/// @brief Method get_WebSocketClient, addr 0x9e28ac8, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* get_WebSocketClient() ;

/// @brief Method get_WebSocketProvider, addr 0x9e28a80, size 0x48, virtual false, abstract: false, final false
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider* get_WebSocketProvider() ;

/// @brief Convert to "::Meta::Voice::Net::PubSub::IPubSubAdapter"
constexpr ::Meta::Voice::Net::PubSub::IPubSubAdapter* i___Meta__Voice__Net__PubSub__IPubSubAdapter() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnProcessForwardedResponse, addr 0x9e28ec0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRequestGenerated, addr 0x9e2900c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnRequestGenerated(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnTopicSubscriptionStateChange, addr 0x9e28d64, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnTopicSubscriptionStateChange(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value) ;

/// @brief Method set_Settings, addr 0x9e28ae4, size 0x4, virtual true, abstract: false, final true
inline void set_Settings(::Meta::Voice::Net::PubSub::PubSubSettings  value) ;

/// [CompilerGenerated]
/// @brief Method set_SubscriptionState, addr 0x9e28cac, size 0x8, virtual false, abstract: false, final false
inline void set_SubscriptionState(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  value) ;

/// [CompilerGenerated]
/// @brief Method set_WebSocketClient, addr 0x9e28ad0, size 0x8, virtual false, abstract: false, final false
inline void set_WebSocketClient(::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitWebSocketAdapter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketAdapter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitWebSocketAdapter(WitWebSocketAdapter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitWebSocketAdapter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitWebSocketAdapter(WitWebSocketAdapter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25469};

/// [CompilerGenerated]
/// @brief Field <Logger>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  ____Logger_k__BackingField;

/// [ObjectType(typeof(Meta.Voice.Net.WebSockets.IWitWebSocketClientProvider), new[] {  })]
/// [SerializeField]
/// @brief Field _webSocketProvider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____webSocketProvider;

/// [CompilerGenerated]
/// @brief Field <WebSocketClient>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  ____WebSocketClient_k__BackingField;

/// @brief Field _settings, offset: 0x38, size: 0x10, def value: None
 ::Meta::Voice::Net::PubSub::PubSubSettings  ____settings;

/// [CompilerGenerated]
/// @brief Field <SubscriptionState>k__BackingField, offset: 0x48, size: 0x4, def value: None
 ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  ____SubscriptionState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnTopicSubscriptionStateChange, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  ___OnTopicSubscriptionStateChange;

/// [CompilerGenerated]
/// @brief Field <OnSubscribed>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnSubscribed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OnUnsubscribed>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____OnUnsubscribed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnProcessForwardedResponse, offset: 0x68, size: 0x8, def value: None
 ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  ___OnProcessForwardedResponse;

/// [CompilerGenerated]
/// @brief Field OnRequestGenerated, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  ___OnRequestGenerated;

/// @brief Field _connected, offset: 0x78, size: 0x1, def value: None
 bool  ____connected;

/// @brief Field _active, offset: 0x79, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _subscriptionsPerTopic, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  ____subscriptionsPerTopic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____Logger_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____webSocketProvider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____WebSocketClient_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____settings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____SubscriptionState_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ___OnTopicSubscriptionStateChange) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____OnSubscribed_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____OnUnsubscribed_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ___OnProcessForwardedResponse) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ___OnRequestGenerated) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____connected) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____active) == 0x79, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter, ____subscriptionsPerTopic) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::WebSockets::WitWebSocketAdapter) == 0x88, "Size mismatch!");

} // namespace end def Meta::Voice::Net::WebSockets
