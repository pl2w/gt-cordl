#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketAdapter.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSettings_impl.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketAdapter_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__IPubSubAdapter_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSettings_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClientProvider_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClient_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketResponseProcessor_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e28a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.get_WebSocketProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider* (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_WebSocketProvider)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e28a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_WebSocketProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.get_WebSocketClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClient* (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_WebSocketClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e28ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_WebSocketClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.set_WebSocketClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketClient*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::set_WebSocketClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e28ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"set_WebSocketClient", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::PubSub::PubSubSettings (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_Settings)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e28ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::PubSub::PubSubSettings)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::set_Settings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e28ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"set_Settings", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.get_SubscriptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::PubSub::PubSubSubscriptionState (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_SubscriptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e28ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_SubscriptionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.set_SubscriptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::PubSub::PubSubSubscriptionState)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::set_SubscriptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e28cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"set_SubscriptionState", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.add_OnTopicSubscriptionStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::add_OnTopicSubscriptionStateChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e28cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"add_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.remove_OnTopicSubscriptionStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::remove_OnTopicSubscriptionStateChange)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e28d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"remove_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.get_OnSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_OnSubscribed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e28e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_OnSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.get_OnUnsubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent* (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_OnUnsubscribed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e28e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_OnUnsubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.add_OnProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::add_OnProcessForwardedResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e28e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"add_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.remove_OnProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::remove_OnProcessForwardedResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e28ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"remove_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.add_OnRequestGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::add_OnRequestGenerated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e28f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"add_OnRequestGenerated", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.remove_OnRequestGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::remove_OnRequestGenerated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e2900c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"remove_OnRequestGenerated", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9e290bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.RaiseProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::StringW, ::StringW, ::StringW, ::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::RaiseProcessForwardedResponse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9e2968c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.HandleRequestGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::StringW, ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::HandleRequestGenerated)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9e29724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::OnDisable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e29780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e29a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.SetClientProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SetClientProvider)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x9e290e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SetClientProvider", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Connect)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x9e293dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Disconnect)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9e29788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SendRequest)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x9e2a188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SendRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.SetSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::PubSub::PubSubSettings)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SetSettings)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9e28ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SetSettings", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Unsubscribe)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x9e29d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Unsubscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Subscribe)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9e29a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Subscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.ApplySubscriptionPerTopic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::StringW, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::ApplySubscriptionPerTopic)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9e2a31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                    {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.RefreshSubscriptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::RefreshSubscriptionState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9e2a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"RefreshSubscriptionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.DetermineSubscriptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::PubSub::PubSubSubscriptionState (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::DetermineSubscriptionState)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x9e2a43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"DetermineSubscriptionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter.SetSubscriptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)(::Meta::Voice::Net::PubSub::PubSubSubscriptionState)>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SetSubscriptionState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9e2a834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SetSubscriptionState", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x9e2a898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__webSocketProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__webSocketProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____webSocketProvider;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__webSocketProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____webSocketProvider = value;
}
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__WebSocketClient_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketClient_k__BackingField;
}
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__WebSocketClient_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WebSocketClient_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__WebSocketClient_k__BackingField(::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WebSocketClient_k__BackingField = value;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSettings& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSettings const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__settings(::Meta::Voice::Net::PubSub::PubSubSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__SubscriptionState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubscriptionState_k__BackingField;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__SubscriptionState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SubscriptionState_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__SubscriptionState_k__BackingField(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SubscriptionState_k__BackingField = value;
}
constexpr ::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get_OnTopicSubscriptionStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTopicSubscriptionStateChange;
}
constexpr ::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get_OnTopicSubscriptionStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTopicSubscriptionStateChange;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set_OnTopicSubscriptionStateChange(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTopicSubscriptionStateChange = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__OnSubscribed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnSubscribed_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__OnSubscribed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnSubscribed_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__OnSubscribed_k__BackingField(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnSubscribed_k__BackingField = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__OnUnsubscribed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnUnsubscribed_k__BackingField;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__OnUnsubscribed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OnUnsubscribed_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__OnUnsubscribed_k__BackingField(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OnUnsubscribed_k__BackingField = value;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get_OnProcessForwardedResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProcessForwardedResponse;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get_OnProcessForwardedResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProcessForwardedResponse;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnProcessForwardedResponse = value;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get_OnRequestGenerated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestGenerated;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get_OnRequestGenerated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRequestGenerated;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set_OnRequestGenerated(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRequestGenerated = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__connected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connected;
}
constexpr bool const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__connected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connected;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__connected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connected = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__active()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr bool const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__active() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__active(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active = value;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__subscriptionsPerTopic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptionsPerTopic;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>* const& Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_get__subscriptionsPerTopic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptionsPerTopic;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::__cordl_internal_set__subscriptionsPerTopic(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscriptionsPerTopic = value;
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider* Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_WebSocketProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_WebSocketProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_WebSocketClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_WebSocketClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::set_WebSocketClient(::Meta::Voice::Net::WebSockets::IWitWebSocketClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"set_WebSocketClient", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Net::PubSub::PubSubSettings Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::PubSub::PubSubSettings>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::set_Settings(::Meta::Voice::Net::PubSub::PubSubSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"set_Settings", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Net::PubSub::PubSubSubscriptionState Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_SubscriptionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_SubscriptionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::set_SubscriptionState(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"set_SubscriptionState", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::add_OnTopicSubscriptionStateChange(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"add_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::remove_OnTopicSubscriptionStateChange(::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"remove_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent* Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_OnSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_OnSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline ::UnityEngine::Events::UnityEvent* Meta::Voice::Net::WebSockets::WitWebSocketAdapter::get_OnUnsubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"get_OnUnsubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::add_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"add_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::remove_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"remove_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::add_OnRequestGenerated(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"add_OnRequestGenerated", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::remove_OnRequestGenerated(::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"remove_OnRequestGenerated", {}, {::i2c::type_of<::System::Action_1<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketAdapter::RaiseProcessForwardedResponse(::StringW  topicId, ::StringW  requestId, ::StringW  clientUserId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  responseChunk)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, topicId, requestId, clientUserId, responseChunk);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::HandleRequestGenerated(::StringW  topicId, ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId, request);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SetClientProvider(::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*  clientProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SetClientProvider", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketClientProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientProvider);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SendRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SendRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SetSettings(::Meta::Voice::Net::PubSub::PubSubSettings  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SetSettings", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Unsubscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Unsubscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::Subscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"Subscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::ApplySubscriptionPerTopic(::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  subscriptionState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId, subscriptionState);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::RefreshSubscriptionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"RefreshSubscriptionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::PubSub::PubSubSubscriptionState Meta::Voice::Net::WebSockets::WitWebSocketAdapter::DetermineSubscriptionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"DetermineSubscriptionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::SetSubscriptionState(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  newSubState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {"SetSubscriptionState", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSubState);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketAdapter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter* Meta::Voice::Net::WebSockets::WitWebSocketAdapter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketAdapter*>());
}
/// @brief Convert operator to "::Meta::Voice::Net::PubSub::IPubSubAdapter"
constexpr  Meta::Voice::Net::WebSockets::WitWebSocketAdapter::operator ::Meta::Voice::Net::PubSub::IPubSubAdapter*() noexcept {
return static_cast<::Meta::Voice::Net::PubSub::IPubSubAdapter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Net::PubSub::IPubSubAdapter"
constexpr ::Meta::Voice::Net::PubSub::IPubSubAdapter* Meta::Voice::Net::WebSockets::WitWebSocketAdapter::i___Meta__Voice__Net__PubSub__IPubSubAdapter() noexcept {
return static_cast<::Meta::Voice::Net::PubSub::IPubSubAdapter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketAdapter::WitWebSocketAdapter()   {
}
