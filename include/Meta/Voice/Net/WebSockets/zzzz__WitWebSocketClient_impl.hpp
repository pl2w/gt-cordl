#pragma once
// IWYU pragma private; include "Meta/Voice/Net/WebSockets/WitWebSocketClient.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_impl.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketConnectionState_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunkConverter_def.hpp"
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunk_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__IPubSubSubscriber_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubSubscriptionState_def.hpp"
#include "Meta/Voice/Net/PubSub/zzzz__PubSubTopicSubscriptionDelegate_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketSubscriptionRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWebSocket_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketClient_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__IWitWebSocketRequest_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WebSocketCloseCode_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__BreakdownAsync_d__72_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__ConnectAsync_d__61_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__DisconnectAsync_d__71_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__SendChunkAsync_d__78_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__SendRequestAsync_d__76_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__SetupAsync_d__66_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__WaitAndConnect_d__74_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__WaitAndRetry_d__102_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient__WaitForConnectionTimeout_d__62_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketClient_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketConnectionState_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketResponseProcessor_def.hpp"
#include "Meta/Voice/Net/WebSockets/zzzz__WitWebSocketSettings_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/zzzz__IWitRequestConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::WitWebSocketSettings* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_ConnectionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_ConnectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aa70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_ConnectionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.set_ConnectionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::set_ConnectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_ConnectionState", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.set_IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(bool)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::set_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_IsAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_IsReferenced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_IsReferenced)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9e2aa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_IsReferenced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_IsReconnecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_IsReconnecting)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e2aaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_IsReconnecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_ReferenceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_ReferenceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_ReferenceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.set_ReferenceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(int32_t)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::set_ReferenceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_ReferenceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_FailedConnectionAttempts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_FailedConnectionAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2aafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_FailedConnectionAttempts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.set_FailedConnectionAttempts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(int32_t)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::set_FailedConnectionAttempts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2ab04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_FailedConnectionAttempts", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.add_OnProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::add_OnProcessForwardedResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e2ab0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"add_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.remove_OnProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::remove_OnProcessForwardedResponse)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e2aba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"remove_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_ConnectionCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::TaskCompletionSource_1<bool>* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_ConnectionCompletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2ac44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_ConnectionCompletion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.set_ConnectionCompletion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::System::Threading::Tasks::TaskCompletionSource_1<bool>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::set_ConnectionCompletion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2ac4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_ConnectionCompletion", {}, {::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.get_Logger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::get_Logger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2ac54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_Logger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x9e2ac5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::WitAi::IWitRequestConfiguration*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e2af18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.SetConnectionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::SetConnectionState)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x9e2b05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SetConnectionState", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::Connect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e2b2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.ConnectSafely
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::ConnectSafely)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e2b2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ConnectSafely", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.ConnectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::ConnectAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e2b490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ConnectAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.WaitForConnectionTimeout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::WaitForConnectionTimeout)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e2b3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"WaitForConnectionTimeout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.GenerateWebSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::WebSockets::IWebSocket* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::GenerateWebSocket)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9e2b568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"GenerateWebSocket", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.HandleSocketError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketError)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9e2b664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.HandleSocketConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketConnected)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x9e2bd08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.SetupAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::SetupAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e2bf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SetupAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.HandleSetupFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSetupFailed)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0x9e2b7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSetupFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.HandleSocketDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WebSocketCloseCode)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketDisconnect)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x9e2c078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketDisconnect", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::Disconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e2c238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Disconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.ForceDisconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::ForceDisconnect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e2c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ForceDisconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.DisconnectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::DisconnectAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e2c258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"DisconnectAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.BreakdownAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::BreakdownAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e2c330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"BreakdownAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.Reconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::Reconnect)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x9e2c408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Reconnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.WaitAndConnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::WaitAndConnect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e2c684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"WaitAndConnect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.SendRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::SendRequest)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9e2c75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.SendRequestAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::SendRequestAsync)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9e2ce7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendRequestAsync", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.SendChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::SendChunk)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9e2cf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendChunk", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.SendChunkAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW, ::Meta::WitAi::Json::WitResponseNode*, ::ArrayW<uint8_t>)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::SendChunkAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e2d0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendChunkAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.TrySimulateError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::TrySimulateError)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x9e2d204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"TrySimulateError", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.EncodeChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::EncodeChunk)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9e2d928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"EncodeChunk", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.HandleSocketResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketResponse)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9e2d9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketResponse", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.ApplyDecodedChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::ApplyDecodedChunk)> {
  constexpr static std::size_t size = 0x638;
  constexpr static std::size_t addrs = 0x9e2da7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ApplyDecodedChunk", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.ProcessForwardedResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW, ::Meta::Voice::Net::Encoding::Wit::WitChunk)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::ProcessForwardedResponse)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0x9e2e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ProcessForwardedResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.TrackRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::TrackRequest)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x9e2c868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"TrackRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.CompleteRequestTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::CompleteRequestTracking)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e2e9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"CompleteRequestTracking", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.UntrackRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::UntrackRequest)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9e2e7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"UntrackRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.UntrackRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::UntrackRequest)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x9e2eb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"UntrackRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.add_OnTopicSubscriptionStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::add_OnTopicSubscriptionStateChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e2f2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"add_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.remove_OnTopicSubscriptionStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::remove_OnTopicSubscriptionStateChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e2f340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"remove_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.add_OnTopicRequestTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::add_OnTopicRequestTracked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e2f3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"add_OnTopicRequestTracked", {}, {::i2c::type_of<::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.remove_OnTopicRequestTracked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::remove_OnTopicRequestTracked)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e2f48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"remove_OnTopicRequestTracked", {}, {::i2c::type_of<::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.GetTopicSubscriptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Net::PubSub::PubSubSubscriptionState (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::GetTopicSubscriptionState)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e2e878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"GetTopicSubscriptionState", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::Subscribe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2f53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Subscribe", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW, bool)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::Subscribe)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9e2f544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Subscribe", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::Unsubscribe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2fa9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::StringW, bool)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::Unsubscribe)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9e2faa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.FinalizeSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::FinalizeSubscription)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9e2ea40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"FinalizeSubscription", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.WaitAndRetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(bool, ::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::WaitAndRetry)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9e2fbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"WaitAndRetry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient.SetTopicSubscriptionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient::*)(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*, ::StringW, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState, ::StringW)>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient::SetTopicSubscriptionState)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x9e2f6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SetTopicSubscriptionState", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketSettings*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__Settings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings_k__BackingField;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketSettings* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__Settings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Settings_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__Settings_k__BackingField(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Settings_k__BackingField = value;
}
constexpr ::Meta::WitAi::Configuration::WitRequestOptions*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_Options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Options;
}
constexpr ::Meta::WitAi::Configuration::WitRequestOptions* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_Options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Options;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set_Options(::Meta::WitAi::Configuration::WitRequestOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Options = value;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__ConnectionState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionState_k__BackingField;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__ConnectionState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionState_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__ConnectionState_k__BackingField(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectionState_k__BackingField = value;
}
constexpr bool& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__IsAuthenticated_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAuthenticated_k__BackingField;
}
constexpr bool const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__IsAuthenticated_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAuthenticated_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__IsAuthenticated_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsAuthenticated_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__ReferenceCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceCount_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__ReferenceCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ReferenceCount_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__ReferenceCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ReferenceCount_k__BackingField = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__FailedConnectionAttempts_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FailedConnectionAttempts_k__BackingField;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__FailedConnectionAttempts_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FailedConnectionAttempts_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__FailedConnectionAttempts_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FailedConnectionAttempts_k__BackingField = value;
}
constexpr ::System::DateTime& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__LastResponseTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastResponseTime_k__BackingField;
}
constexpr ::System::DateTime const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__LastResponseTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastResponseTime_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__LastResponseTime_k__BackingField(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastResponseTime_k__BackingField = value;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnConnectionStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectionStateChanged;
}
constexpr ::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnConnectionStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnConnectionStateChanged;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set_OnConnectionStateChanged(::System::Action_1<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnConnectionStateChanged = value;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnProcessForwardedResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProcessForwardedResponse;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnProcessForwardedResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnProcessForwardedResponse;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnProcessForwardedResponse = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__ConnectionCompletion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionCompletion_k__BackingField;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__ConnectionCompletion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConnectionCompletion_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__ConnectionCompletion_k__BackingField(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConnectionCompletion_k__BackingField = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__lastRequestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRequestId;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__lastRequestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRequestId;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__lastRequestId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRequestId = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__uploadCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadCount;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__uploadCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uploadCount;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__uploadCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uploadCount = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__downloadCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadCount;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__downloadCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downloadCount;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__downloadCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downloadCount = value;
}
constexpr ::Meta::Voice::Logging::IVLogger*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__Logger_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr ::Meta::Voice::Logging::IVLogger* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__Logger_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Logger_k__BackingField;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__Logger_k__BackingField(::Meta::Voice::Logging::IVLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Logger_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__requests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__requests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requests;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__requests(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requests = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__untrackedRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untrackedRequests;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__untrackedRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____untrackedRequests;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__untrackedRequests(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____untrackedRequests = value;
}
constexpr ::Meta::Voice::Net::WebSockets::IWebSocket*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__socket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____socket;
}
constexpr ::Meta::Voice::Net::WebSockets::IWebSocket* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__socket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____socket;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__socket(::Meta::Voice::Net::WebSockets::IWebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____socket = value;
}
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__decoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr ::Meta::Voice::Net::Encoding::Wit::WitChunkConverter* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__decoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____decoder;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__decoder(::Meta::Voice::Net::Encoding::Wit::WitChunkConverter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____decoder = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__subscriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptions;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get__subscriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____subscriptions;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set__subscriptions(::System::Collections::Generic::Dictionary_2<::StringW,::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____subscriptions = value;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnTopicSubscriptionStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTopicSubscriptionStateChange;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnTopicSubscriptionStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTopicSubscriptionStateChange;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTopicSubscriptionStateChange = value;
}
constexpr ::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnTopicRequestTracked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTopicRequestTracked;
}
constexpr ::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>* const& Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_get_OnTopicRequestTracked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTopicRequestTracked;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient::__cordl_internal_set_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTopicRequestTracked = value;
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketSettings* Meta::Voice::Net::WebSockets::WitWebSocketClient::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState Meta::Voice::Net::WebSockets::WitWebSocketClient::get_ConnectionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_ConnectionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::set_ConnectionState(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_ConnectionState", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketClient::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::set_IsAuthenticated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_IsAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketClient::get_IsReferenced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_IsReferenced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketClient::get_IsReconnecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_IsReconnecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t Meta::Voice::Net::WebSockets::WitWebSocketClient::get_ReferenceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_ReferenceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::set_ReferenceCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_ReferenceCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::Voice::Net::WebSockets::WitWebSocketClient::get_FailedConnectionAttempts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_FailedConnectionAttempts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::set_FailedConnectionAttempts(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_FailedConnectionAttempts", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::add_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"add_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::remove_OnProcessForwardedResponse(::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"remove_OnProcessForwardedResponse", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketResponseProcessor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::TaskCompletionSource_1<bool>* Meta::Voice::Net::WebSockets::WitWebSocketClient::get_ConnectionCompletion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_ConnectionCompletion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::set_ConnectionCompletion(::System::Threading::Tasks::TaskCompletionSource_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"set_ConnectionCompletion", {}, {::i2c::type_of<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Net::WebSockets::WitWebSocketClient::get_Logger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"get_Logger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::_ctor(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::WitAi::IWitRequestConfiguration*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, configuration);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::SetConnectionState(::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState  newConnectionState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SetConnectionState", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketConnectionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newConnectionState);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::ConnectSafely()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ConnectSafely", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::ConnectAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ConnectAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::WaitForConnectionTimeout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"WaitForConnectionTimeout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::IWebSocket* Meta::Voice::Net::WebSockets::WitWebSocketClient::GenerateWebSocket(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"GenerateWebSocket", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::WebSockets::IWebSocket*>(this, ___internal_method, url, headers);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketError(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::SetupAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SetupAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSetupFailed(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSetupFailed", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketDisconnect(::Meta::Voice::Net::WebSockets::WebSocketCloseCode  closeCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketDisconnect", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WebSocketCloseCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, closeCode);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::Disconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Disconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::ForceDisconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ForceDisconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::DisconnectAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"DisconnectAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::BreakdownAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"BreakdownAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::Reconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Reconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::WaitAndConnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"WaitAndConnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketClient::SendRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Meta::Voice::Net::WebSockets::WitWebSocketClient::SendRequestAsync(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendRequestAsync", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, request);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::SendChunk(::StringW  requestId, ::Meta::WitAi::Json::WitResponseNode*  requestJsonData, ::ArrayW<uint8_t>  requestBinaryData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendChunk", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, requestJsonData, requestBinaryData);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::SendChunkAsync(::StringW  requestId, ::Meta::WitAi::Json::WitResponseNode*  requestJsonData, ::ArrayW<uint8_t>  requestBinaryData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SendChunkAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::WitAi::Json::WitResponseNode*>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, requestId, requestJsonData, requestBinaryData);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::TrySimulateError(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"TrySimulateError", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::ArrayW<uint8_t> Meta::Voice::Net::WebSockets::WitWebSocketClient::EncodeChunk(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"EncodeChunk", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, chunk);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::HandleSocketResponse(::ArrayW<uint8_t>  rawBytes, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"HandleSocketResponse", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawBytes, offset, length);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::ApplyDecodedChunk(::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ApplyDecodedChunk", {}, {::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chunk);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::ProcessForwardedResponse(::StringW  requestId, ::Meta::Voice::Net::Encoding::Wit::WitChunk  chunk)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"ProcessForwardedResponse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::Encoding::Wit::WitChunk>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, requestId, chunk);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketClient::TrackRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"TrackRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::CompleteRequestTracking(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"CompleteRequestTracking", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketClient::UntrackRequest(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"UntrackRequest", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request);
}
inline bool Meta::Voice::Net::WebSockets::WitWebSocketClient::UntrackRequest(::StringW  requestId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"UntrackRequest", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, requestId);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::add_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"add_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::remove_OnTopicSubscriptionStateChange(::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"remove_OnTopicSubscriptionStateChange", {}, {::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubTopicSubscriptionDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::add_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"add_OnTopicRequestTracked", {}, {::i2c::type_of<::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::remove_OnTopicRequestTracked(::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"remove_OnTopicRequestTracked", {}, {::i2c::type_of<::System::Action_2<::StringW,::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Net::PubSub::PubSubSubscriptionState Meta::Voice::Net::WebSockets::WitWebSocketClient::GetTopicSubscriptionState(::StringW  topicId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"GetTopicSubscriptionState", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>(this, ___internal_method, topicId);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::Subscribe(::StringW  topicId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Subscribe", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::Subscribe(::StringW  topicId, bool  ignoreRefCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Subscribe", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId, ignoreRefCount);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::Unsubscribe(::StringW  topicId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::Unsubscribe(::StringW  topicId, bool  ignoreRefCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topicId, ignoreRefCount);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::FinalizeSubscription(::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"FinalizeSubscription", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::Requests::WitWebSocketSubscriptionRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient::WaitAndRetry(bool  subscribing, ::StringW  topicId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"WaitAndRetry", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, subscribing, topicId);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient::SetTopicSubscriptionState(::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*  subscription, ::StringW  topicId, ::Meta::Voice::Net::PubSub::PubSubSubscriptionState  state, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(),
                        {"SetTopicSubscriptionState", {}, {::i2c::type_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Net::PubSub::PubSubSubscriptionState>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subscription, topicId, state, error);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient* Meta::Voice::Net::WebSockets::WitWebSocketClient::New_ctor(::Meta::Voice::Net::WebSockets::WitWebSocketSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(settings));
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient* Meta::Voice::Net::WebSockets::WitWebSocketClient::New_ctor(::Meta::WitAi::IWitRequestConfiguration*  configuration)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketClient*>(configuration));
}
/// @brief Convert operator to "::Meta::Voice::Net::WebSockets::IWitWebSocketClient"
constexpr  Meta::Voice::Net::WebSockets::WitWebSocketClient::operator ::Meta::Voice::Net::WebSockets::IWitWebSocketClient*() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Net::WebSockets::IWitWebSocketClient"
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketClient* Meta::Voice::Net::WebSockets::WitWebSocketClient::i___Meta__Voice__Net__WebSockets__IWitWebSocketClient() noexcept {
return static_cast<::Meta::Voice::Net::WebSockets::IWitWebSocketClient*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr  Meta::Voice::Net::WebSockets::WitWebSocketClient::operator ::Meta::Voice::Net::PubSub::IPubSubSubscriber*() noexcept {
return static_cast<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Net::PubSub::IPubSubSubscriber"
constexpr ::Meta::Voice::Net::PubSub::IPubSubSubscriber* Meta::Voice::Net::WebSockets::WitWebSocketClient::i___Meta__Voice__Net__PubSub__IPubSubSubscriber() noexcept {
return static_cast<::Meta::Voice::Net::PubSub::IPubSubSubscriber*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient::WitWebSocketClient()   {
}
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2d0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0._SendChunk_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::_SendChunk_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9e2fde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0*>(),
                        {"<SendChunk>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient*& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient* const& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_set___4__this(::Meta::Voice::Net::WebSockets::WitWebSocketClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get_requestId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestId;
}
constexpr ::StringW const& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get_requestId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestId;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_set_requestId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestId = value;
}
constexpr ::Meta::WitAi::Json::WitResponseNode*& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get_requestJsonData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestJsonData;
}
constexpr ::Meta::WitAi::Json::WitResponseNode* const& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get_requestJsonData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestJsonData;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_set_requestJsonData(::Meta::WitAi::Json::WitResponseNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestJsonData = value;
}
constexpr ::ArrayW<uint8_t>& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get_requestBinaryData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestBinaryData;
}
constexpr ::ArrayW<uint8_t> const& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_get_requestBinaryData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestBinaryData;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::__cordl_internal_set_requestBinaryData(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestBinaryData = value;
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::_SendChunk_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0*>(),
                        {"<SendChunk>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0* Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass77_0::WitWebSocketClient___c__DisplayClass77_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2fcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0._SendRequestAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::_SendRequestAsync_b__0)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9e2fcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0*>(),
                        {"<SendRequestAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::__cordl_internal_get_request()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr ::Meta::Voice::Net::WebSockets::IWitWebSocketRequest* const& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::__cordl_internal_get_request() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___request;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::__cordl_internal_set_request(::Meta::Voice::Net::WebSockets::IWitWebSocketRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___request = value;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient*& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient* const& Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::__cordl_internal_set___4__this(::Meta::Voice::Net::WebSockets::WitWebSocketClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::_SendRequestAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0*>(),
                        {"<SendRequestAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0* Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient___c__DisplayClass76_0::WitWebSocketClient___c__DisplayClass76_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::*)()>(&::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2f6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState& Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::Meta::Voice::Net::PubSub::PubSubSubscriptionState const& Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::__cordl_internal_set_state(::Meta::Voice::Net::PubSub::PubSubSubscriptionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr int32_t& Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::__cordl_internal_get_referenceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceCount;
}
constexpr int32_t const& Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::__cordl_internal_get_referenceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___referenceCount;
}
constexpr void Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::__cordl_internal_set_referenceCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___referenceCount = value;
}
inline void Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription* Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Net::WebSockets::WitWebSocketClient_PubSubSubscription::WitWebSocketClient_PubSubSubscription()   {
}
