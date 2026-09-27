#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "WebSocketSharp/zzzz__CompressionMethod_impl.hpp"
#include "WebSocketSharp/zzzz__Opcode_impl.hpp"
#include "WebSocketSharp/zzzz__WebSocketState_impl.hpp"
#include "WebSocketSharp/zzzz__WebSocket_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/Sockets/zzzz__TcpClient_def.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__EventHandler_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "WebSocketSharp/Net/WebSockets/zzzz__WebSocketContext_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationChallenge_def.hpp"
#include "WebSocketSharp/Net/zzzz__ClientSslConfiguration_def.hpp"
#include "WebSocketSharp/Net/zzzz__CookieCollection_def.hpp"
#include "WebSocketSharp/Net/zzzz__NetworkCredential_def.hpp"
#include "WebSocketSharp/zzzz__CloseEventArgs_def.hpp"
#include "WebSocketSharp/zzzz__CloseStatusCode_def.hpp"
#include "WebSocketSharp/zzzz__ErrorEventArgs_def.hpp"
#include "WebSocketSharp/zzzz__Fin_def.hpp"
#include "WebSocketSharp/zzzz__HttpRequest_def.hpp"
#include "WebSocketSharp/zzzz__HttpResponse_def.hpp"
#include "WebSocketSharp/zzzz__Logger_def.hpp"
#include "WebSocketSharp/zzzz__MessageEventArgs_def.hpp"
#include "WebSocketSharp/zzzz__Opcode_def.hpp"
#include "WebSocketSharp/zzzz__PayloadData_def.hpp"
#include "WebSocketSharp/zzzz__WebSocketFrame_def.hpp"
#include "WebSocketSharp/zzzz__WebSocketState_def.hpp"
#include "WebSocketSharp/zzzz__WebSocket_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::WebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::StringW, ::ArrayW<::StringW>)>(&::WebSocketSharp::WebSocket::_ctor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xb977ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.get_HasMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::get_HasMessage)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb97866c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"get_HasMessage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.get_ReadyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::WebSocketState (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::get_ReadyState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb97874c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"get_ReadyState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.add_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*)>(&::WebSocketSharp::WebSocket::add_OnClose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb978764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.remove_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*)>(&::WebSocketSharp::WebSocket::remove_OnClose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb978814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.add_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*)>(&::WebSocketSharp::WebSocket::add_OnError)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb9788c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnError", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.remove_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*)>(&::WebSocketSharp::WebSocket::remove_OnError)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb978974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.add_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*)>(&::WebSocketSharp::WebSocket::add_OnMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb978a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.remove_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*)>(&::WebSocketSharp::WebSocket::remove_OnMessage)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb978ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.add_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler*)>(&::WebSocketSharp::WebSocket::add_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb978b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.remove_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::EventHandler*)>(&::WebSocketSharp::WebSocket::remove_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb978c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.checkHandshakeResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::HttpResponse*, ::by_ref<::StringW>)>(&::WebSocketSharp::WebSocket::checkHandshakeResponse)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb978cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"checkHandshakeResponse", {}, {::i2c::type_of<::WebSocketSharp::HttpResponse*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.checkProtocols
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::by_ref<::StringW>)>(&::WebSocketSharp::WebSocket::checkProtocols)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb97821c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"checkProtocols", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.checkReceivedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*, ::by_ref<::StringW>)>(&::WebSocketSharp::WebSocket::checkReceivedFrame)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb979880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"checkReceivedFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(uint16_t, ::StringW)>(&::WebSocketSharp::WebSocket::close)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb979a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"close", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::PayloadData*, bool, bool, bool)>(&::WebSocketSharp::WebSocket::close)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0xb979bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"close", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.closeHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::PayloadData*, bool, bool, bool)>(&::WebSocketSharp::WebSocket::closeHandshake)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb97a064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"closeHandshake", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::connect)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xb97a7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.createExtensions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::createExtensions)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb97af3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"createExtensions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.createHandshakeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::HttpRequest* (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::createHandshakeRequest)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xb97b0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"createHandshakeRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.doHandshake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::doHandshake)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb97ad5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"doHandshake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.enqueueToMessageEventQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::MessageEventArgs*)>(&::WebSocketSharp::WebSocket::enqueueToMessageEventQueue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb97c1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"enqueueToMessageEventQueue", {}, {::i2c::type_of<::WebSocketSharp::MessageEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::StringW, ::System::Exception*)>(&::WebSocketSharp::WebSocket::error)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb97abd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.fatal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::StringW, ::System::Exception*)>(&::WebSocketSharp::WebSocket::fatal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb97aea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"fatal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.fatal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::StringW, uint16_t)>(&::WebSocketSharp::WebSocket::fatal)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb97c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"fatal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.fatal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::StringW, ::WebSocketSharp::CloseStatusCode)>(&::WebSocketSharp::WebSocket::fatal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb97c3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"fatal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::CloseStatusCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.getSslConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::Net::ClientSslConfiguration* (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::getSslConfiguration)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb97c3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"getSslConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::init)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb978494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::message)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb97c438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.messagec
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::MessageEventArgs*)>(&::WebSocketSharp::WebSocket::messagec)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xb97c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"messagec", {}, {::i2c::type_of<::WebSocketSharp::MessageEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.open
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::open)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0xb97c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"open", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processCloseFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket::processCloseFrame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb97ccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processCloseFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processCookies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::Net::CookieCollection*)>(&::WebSocketSharp::WebSocket::processCookies)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb97c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processCookies", {}, {::i2c::type_of<::WebSocketSharp::Net::CookieCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processDataFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket::processDataFrame)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb97cee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processDataFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processFragmentFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket::processFragmentFrame)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xb97cfe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processFragmentFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processPingFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket::processPingFrame)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb97d2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processPingFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processPongFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket::processPongFrame)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb97d528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processPongFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processReceivedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket::processReceivedFrame)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb97d6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processReceivedFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processSecWebSocketExtensionsServerHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::StringW)>(&::WebSocketSharp::WebSocket::processSecWebSocketExtensionsServerHeader)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb97c144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processSecWebSocketExtensionsServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.processUnsupportedFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket::processUnsupportedFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb97d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processUnsupportedFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.releaseClientResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::releaseClientResources)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb97d8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseClientResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.releaseCommonResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::releaseCommonResources)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb97d914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseCommonResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.releaseResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::releaseResources)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb97a1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.releaseServerResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::releaseServerResources)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb97d9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseServerResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::Opcode, ::System::IO::Stream*)>(&::WebSocketSharp::WebSocket::send)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xb97da1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"send", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::Opcode, ::System::IO::Stream*, bool)>(&::WebSocketSharp::WebSocket::send)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xb97dd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"send", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::Fin, ::WebSocketSharp::Opcode, ::ArrayW<uint8_t>, bool)>(&::WebSocketSharp::WebSocket::send)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb97e0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"send", {}, {::i2c::type_of<::WebSocketSharp::Fin>(), ::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.sendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::Opcode, ::System::IO::Stream*, ::System::Action_1<bool>*)>(&::WebSocketSharp::WebSocket::sendAsync)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb97e2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendAsync", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.sendBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::ArrayW<uint8_t>)>(&::WebSocketSharp::WebSocket::sendBytes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb97a628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.sendHandshakeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::HttpResponse* (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::sendHandshakeRequest)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0xb97bd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendHandshakeRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.sendHttpRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WebSocketSharp::HttpResponse* (::WebSocketSharp::WebSocket::*)(::WebSocketSharp::HttpRequest*, int32_t)>(&::WebSocketSharp::WebSocket::sendHttpRequest)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb97e434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendHttpRequest", {}, {::i2c::type_of<::WebSocketSharp::HttpRequest*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.sendProxyConnectRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::sendProxyConnectRequest)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xb97e698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendProxyConnectRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.setClientStream
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::setClientStream)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xb97b970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"setClientStream", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.startReceiving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::startReceiving)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb97cb28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"startReceiving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.validateSecWebSocketAcceptHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::StringW)>(&::WebSocketSharp::WebSocket::validateSecWebSocketAcceptHeader)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb97908c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketAcceptHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.validateSecWebSocketExtensionsServerHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::StringW)>(&::WebSocketSharp::WebSocket::validateSecWebSocketExtensionsServerHeader)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xb979250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketExtensionsServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.validateSecWebSocketProtocolServerHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::StringW)>(&::WebSocketSharp::WebSocket::validateSecWebSocketProtocolServerHeader)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb97910c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketProtocolServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.validateSecWebSocketVersionServerHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket::*)(::StringW)>(&::WebSocketSharp::WebSocket::validateSecWebSocketVersionServerHeader)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb979820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketVersionServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.CreateBase64Key
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::WebSocketSharp::WebSocket::CreateBase64Key)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb9783c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"CreateBase64Key", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.CreateResponseKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::WebSocketSharp::WebSocket::CreateResponseKey)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb97eb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"CreateResponseKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::Close)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb97ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.ConnectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::ConnectAsync)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb97ecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"ConnectAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.SendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::StringW, ::System::Action_1<bool>*)>(&::WebSocketSharp::WebSocket::SendAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb97eeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"SendAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)()>(&::WebSocketSharp::WebSocket::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb97f058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket._open_b__146_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket::*)(::System::IAsyncResult*)>(&::WebSocketSharp::WebSocket::_open_b__146_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb97f074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"<open>b__146_0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WebSocketSharp::Net::AuthenticationChallenge*& WebSocketSharp::WebSocket::__cordl_internal_get__authChallenge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authChallenge;
}
constexpr ::WebSocketSharp::Net::AuthenticationChallenge* const& WebSocketSharp::WebSocket::__cordl_internal_get__authChallenge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authChallenge;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__authChallenge(::WebSocketSharp::Net::AuthenticationChallenge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authChallenge = value;
}
constexpr ::StringW& WebSocketSharp::WebSocket::__cordl_internal_get__base64Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base64Key;
}
constexpr ::StringW const& WebSocketSharp::WebSocket::__cordl_internal_get__base64Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____base64Key;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__base64Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____base64Key = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__client(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client = value;
}
constexpr ::System::Action*& WebSocketSharp::WebSocket::__cordl_internal_get__closeContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeContext;
}
constexpr ::System::Action* const& WebSocketSharp::WebSocket::__cordl_internal_get__closeContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeContext;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__closeContext(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeContext = value;
}
constexpr ::WebSocketSharp::CompressionMethod& WebSocketSharp::WebSocket::__cordl_internal_get__compression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compression;
}
constexpr ::WebSocketSharp::CompressionMethod const& WebSocketSharp::WebSocket::__cordl_internal_get__compression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____compression;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__compression(::WebSocketSharp::CompressionMethod  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____compression = value;
}
constexpr ::WebSocketSharp::Net::WebSockets::WebSocketContext*& WebSocketSharp::WebSocket::__cordl_internal_get__context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr ::WebSocketSharp::Net::WebSockets::WebSocketContext* const& WebSocketSharp::WebSocket::__cordl_internal_get__context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____context;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__context(::WebSocketSharp::Net::WebSockets::WebSocketContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____context = value;
}
constexpr ::WebSocketSharp::Net::CookieCollection*& WebSocketSharp::WebSocket::__cordl_internal_get__cookies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cookies;
}
constexpr ::WebSocketSharp::Net::CookieCollection* const& WebSocketSharp::WebSocket::__cordl_internal_get__cookies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cookies;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__cookies(::WebSocketSharp::Net::CookieCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cookies = value;
}
constexpr ::WebSocketSharp::Net::NetworkCredential*& WebSocketSharp::WebSocket::__cordl_internal_get__credentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr ::WebSocketSharp::Net::NetworkCredential* const& WebSocketSharp::WebSocket::__cordl_internal_get__credentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____credentials;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__credentials(::WebSocketSharp::Net::NetworkCredential*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____credentials = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__emitOnPing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitOnPing;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__emitOnPing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emitOnPing;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__emitOnPing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emitOnPing = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__enableRedirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableRedirection;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__enableRedirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableRedirection;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__enableRedirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableRedirection = value;
}
constexpr ::StringW& WebSocketSharp::WebSocket::__cordl_internal_get__extensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extensions;
}
constexpr ::StringW const& WebSocketSharp::WebSocket::__cordl_internal_get__extensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extensions;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__extensions(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extensions = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__extensionsRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extensionsRequested;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__extensionsRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____extensionsRequested;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__extensionsRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____extensionsRequested = value;
}
constexpr ::System::Object*& WebSocketSharp::WebSocket::__cordl_internal_get__forMessageEventQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forMessageEventQueue;
}
constexpr ::System::Object* const& WebSocketSharp::WebSocket::__cordl_internal_get__forMessageEventQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forMessageEventQueue;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__forMessageEventQueue(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forMessageEventQueue = value;
}
constexpr ::System::Object*& WebSocketSharp::WebSocket::__cordl_internal_get__forPing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forPing;
}
constexpr ::System::Object* const& WebSocketSharp::WebSocket::__cordl_internal_get__forPing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forPing;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__forPing(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forPing = value;
}
constexpr ::System::Object*& WebSocketSharp::WebSocket::__cordl_internal_get__forSend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forSend;
}
constexpr ::System::Object* const& WebSocketSharp::WebSocket::__cordl_internal_get__forSend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forSend;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__forSend(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forSend = value;
}
constexpr ::System::Object*& WebSocketSharp::WebSocket::__cordl_internal_get__forState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forState;
}
constexpr ::System::Object* const& WebSocketSharp::WebSocket::__cordl_internal_get__forState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forState;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__forState(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forState = value;
}
constexpr ::System::IO::MemoryStream*& WebSocketSharp::WebSocket::__cordl_internal_get__fragmentsBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragmentsBuffer;
}
constexpr ::System::IO::MemoryStream* const& WebSocketSharp::WebSocket::__cordl_internal_get__fragmentsBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragmentsBuffer;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__fragmentsBuffer(::System::IO::MemoryStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fragmentsBuffer = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__fragmentsCompressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragmentsCompressed;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__fragmentsCompressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragmentsCompressed;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__fragmentsCompressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fragmentsCompressed = value;
}
constexpr ::WebSocketSharp::Opcode& WebSocketSharp::WebSocket::__cordl_internal_get__fragmentsOpcode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragmentsOpcode;
}
constexpr ::WebSocketSharp::Opcode const& WebSocketSharp::WebSocket::__cordl_internal_get__fragmentsOpcode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fragmentsOpcode;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__fragmentsOpcode(::WebSocketSharp::Opcode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fragmentsOpcode = value;
}
constexpr ::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>*& WebSocketSharp::WebSocket::__cordl_internal_get__handshakeRequestChecker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handshakeRequestChecker;
}
constexpr ::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>* const& WebSocketSharp::WebSocket::__cordl_internal_get__handshakeRequestChecker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handshakeRequestChecker;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__handshakeRequestChecker(::System::Func_2<::WebSocketSharp::Net::WebSockets::WebSocketContext*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handshakeRequestChecker = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__ignoreExtensions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreExtensions;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__ignoreExtensions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreExtensions;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__ignoreExtensions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreExtensions = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__inContinuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inContinuation;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__inContinuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inContinuation;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__inContinuation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inContinuation = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__inMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inMessage;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__inMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inMessage;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__inMessage(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inMessage = value;
}
constexpr ::WebSocketSharp::Logger*& WebSocketSharp::WebSocket::__cordl_internal_get__logger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logger;
}
constexpr ::WebSocketSharp::Logger* const& WebSocketSharp::WebSocket::__cordl_internal_get__logger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logger;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__logger(::WebSocketSharp::Logger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logger = value;
}
constexpr ::System::Action_1<::WebSocketSharp::MessageEventArgs*>*& WebSocketSharp::WebSocket::__cordl_internal_get__message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr ::System::Action_1<::WebSocketSharp::MessageEventArgs*>* const& WebSocketSharp::WebSocket::__cordl_internal_get__message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____message;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__message(::System::Action_1<::WebSocketSharp::MessageEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____message = value;
}
constexpr ::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>*& WebSocketSharp::WebSocket::__cordl_internal_get__messageEventQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageEventQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>* const& WebSocketSharp::WebSocket::__cordl_internal_get__messageEventQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messageEventQueue;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__messageEventQueue(::System::Collections::Generic::Queue_1<::WebSocketSharp::MessageEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messageEventQueue = value;
}
constexpr uint32_t& WebSocketSharp::WebSocket::__cordl_internal_get__nonceCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonceCount;
}
constexpr uint32_t const& WebSocketSharp::WebSocket::__cordl_internal_get__nonceCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonceCount;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__nonceCount(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonceCount = value;
}
constexpr ::StringW& WebSocketSharp::WebSocket::__cordl_internal_get__origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr ::StringW const& WebSocketSharp::WebSocket::__cordl_internal_get__origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__origin(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____origin = value;
}
constexpr ::System::Threading::ManualResetEvent*& WebSocketSharp::WebSocket::__cordl_internal_get__pongReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pongReceived;
}
constexpr ::System::Threading::ManualResetEvent* const& WebSocketSharp::WebSocket::__cordl_internal_get__pongReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pongReceived;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__pongReceived(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pongReceived = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__preAuth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preAuth;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__preAuth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____preAuth;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__preAuth(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____preAuth = value;
}
constexpr ::StringW& WebSocketSharp::WebSocket::__cordl_internal_get__protocol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocol;
}
constexpr ::StringW const& WebSocketSharp::WebSocket::__cordl_internal_get__protocol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocol;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__protocol(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____protocol = value;
}
constexpr ::ArrayW<::StringW>& WebSocketSharp::WebSocket::__cordl_internal_get__protocols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocols;
}
constexpr ::ArrayW<::StringW> const& WebSocketSharp::WebSocket::__cordl_internal_get__protocols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocols;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__protocols(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____protocols = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__protocolsRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocolsRequested;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__protocolsRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____protocolsRequested;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__protocolsRequested(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____protocolsRequested = value;
}
constexpr ::WebSocketSharp::Net::NetworkCredential*& WebSocketSharp::WebSocket::__cordl_internal_get__proxyCredentials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxyCredentials;
}
constexpr ::WebSocketSharp::Net::NetworkCredential* const& WebSocketSharp::WebSocket::__cordl_internal_get__proxyCredentials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxyCredentials;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__proxyCredentials(::WebSocketSharp::Net::NetworkCredential*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____proxyCredentials = value;
}
constexpr ::System::Uri*& WebSocketSharp::WebSocket::__cordl_internal_get__proxyUri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxyUri;
}
constexpr ::System::Uri* const& WebSocketSharp::WebSocket::__cordl_internal_get__proxyUri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____proxyUri;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__proxyUri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____proxyUri = value;
}
constexpr ::WebSocketSharp::WebSocketState& WebSocketSharp::WebSocket::__cordl_internal_get__readyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readyState;
}
constexpr ::WebSocketSharp::WebSocketState const& WebSocketSharp::WebSocket::__cordl_internal_get__readyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readyState;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__readyState(::WebSocketSharp::WebSocketState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readyState = value;
}
constexpr ::System::Threading::ManualResetEvent*& WebSocketSharp::WebSocket::__cordl_internal_get__receivingExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivingExited;
}
constexpr ::System::Threading::ManualResetEvent* const& WebSocketSharp::WebSocket::__cordl_internal_get__receivingExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____receivingExited;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__receivingExited(::System::Threading::ManualResetEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____receivingExited = value;
}
constexpr int32_t& WebSocketSharp::WebSocket::__cordl_internal_get__retryCountForConnect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryCountForConnect;
}
constexpr int32_t const& WebSocketSharp::WebSocket::__cordl_internal_get__retryCountForConnect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____retryCountForConnect;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__retryCountForConnect(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____retryCountForConnect = value;
}
constexpr bool& WebSocketSharp::WebSocket::__cordl_internal_get__secure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secure;
}
constexpr bool const& WebSocketSharp::WebSocket::__cordl_internal_get__secure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____secure;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__secure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____secure = value;
}
constexpr ::WebSocketSharp::Net::ClientSslConfiguration*& WebSocketSharp::WebSocket::__cordl_internal_get__sslConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sslConfig;
}
constexpr ::WebSocketSharp::Net::ClientSslConfiguration* const& WebSocketSharp::WebSocket::__cordl_internal_get__sslConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sslConfig;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__sslConfig(::WebSocketSharp::Net::ClientSslConfiguration*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sslConfig = value;
}
constexpr ::System::IO::Stream*& WebSocketSharp::WebSocket::__cordl_internal_get__stream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr ::System::IO::Stream* const& WebSocketSharp::WebSocket::__cordl_internal_get__stream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stream;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__stream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stream = value;
}
constexpr ::System::Net::Sockets::TcpClient*& WebSocketSharp::WebSocket::__cordl_internal_get__tcpClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tcpClient;
}
constexpr ::System::Net::Sockets::TcpClient* const& WebSocketSharp::WebSocket::__cordl_internal_get__tcpClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tcpClient;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__tcpClient(::System::Net::Sockets::TcpClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tcpClient = value;
}
constexpr ::System::Uri*& WebSocketSharp::WebSocket::__cordl_internal_get__uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uri;
}
constexpr ::System::Uri* const& WebSocketSharp::WebSocket::__cordl_internal_get__uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____uri;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____uri = value;
}
constexpr ::System::TimeSpan& WebSocketSharp::WebSocket::__cordl_internal_get__waitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitTime;
}
constexpr ::System::TimeSpan const& WebSocketSharp::WebSocket::__cordl_internal_get__waitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____waitTime;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set__waitTime(::System::TimeSpan  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____waitTime = value;
}
constexpr ::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*& WebSocketSharp::WebSocket::__cordl_internal_get_OnClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr ::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>* const& WebSocketSharp::WebSocket::__cordl_internal_get_OnClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set_OnClose(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClose = value;
}
constexpr ::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*& WebSocketSharp::WebSocket::__cordl_internal_get_OnError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr ::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>* const& WebSocketSharp::WebSocket::__cordl_internal_get_OnError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set_OnError(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnError = value;
}
constexpr ::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*& WebSocketSharp::WebSocket::__cordl_internal_get_OnMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr ::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>* const& WebSocketSharp::WebSocket::__cordl_internal_get_OnMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set_OnMessage(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMessage = value;
}
constexpr ::System::EventHandler*& WebSocketSharp::WebSocket::__cordl_internal_get_OnOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr ::System::EventHandler* const& WebSocketSharp::WebSocket::__cordl_internal_get_OnOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr void WebSocketSharp::WebSocket::__cordl_internal_set_OnOpen(::System::EventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOpen = value;
}
inline void WebSocketSharp::WebSocket::setStaticF__maxRetryCountForConnect(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_maxRetryCountForConnect", ::WebSocketSharp::WebSocket*>(std::forward<int32_t>(value));
}
inline int32_t WebSocketSharp::WebSocket::getStaticF__maxRetryCountForConnect()  {
return ::cordl_internals::getStaticField<int32_t, "_maxRetryCountForConnect", ::WebSocketSharp::WebSocket*>();
}
inline void WebSocketSharp::WebSocket::setStaticF_EmptyBytes(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "EmptyBytes", ::WebSocketSharp::WebSocket*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> WebSocketSharp::WebSocket::getStaticF_EmptyBytes()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "EmptyBytes", ::WebSocketSharp::WebSocket*>();
}
inline void WebSocketSharp::WebSocket::setStaticF_FragmentLength(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "FragmentLength", ::WebSocketSharp::WebSocket*>(std::forward<int32_t>(value));
}
inline int32_t WebSocketSharp::WebSocket::getStaticF_FragmentLength()  {
return ::cordl_internals::getStaticField<int32_t, "FragmentLength", ::WebSocketSharp::WebSocket*>();
}
inline void WebSocketSharp::WebSocket::setStaticF_RandomNumber(::System::Security::Cryptography::RandomNumberGenerator*  value)  {
::cordl_internals::setStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "RandomNumber", ::WebSocketSharp::WebSocket*>(std::forward<::System::Security::Cryptography::RandomNumberGenerator*>(value));
}
inline ::System::Security::Cryptography::RandomNumberGenerator* WebSocketSharp::WebSocket::getStaticF_RandomNumber()  {
return ::cordl_internals::getStaticField<::System::Security::Cryptography::RandomNumberGenerator*, "RandomNumber", ::WebSocketSharp::WebSocket*>();
}
inline void WebSocketSharp::WebSocket::_ctor(::StringW  url, /* [ParamArray] */ ::ArrayW<::StringW>  protocols)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, protocols);
}
inline bool WebSocketSharp::WebSocket::get_HasMessage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"get_HasMessage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::WebSocketSharp::WebSocketState WebSocketSharp::WebSocket::get_ReadyState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"get_ReadyState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::WebSocketState>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::add_OnClose(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::WebSocket::remove_OnClose(::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::CloseEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::WebSocket::add_OnError(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnError", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::WebSocket::remove_OnError(::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::ErrorEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::WebSocket::add_OnMessage(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::WebSocket::remove_OnMessage(::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::System::EventHandler_1<::WebSocketSharp::MessageEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::WebSocket::add_OnOpen(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void WebSocketSharp::WebSocket::remove_OnOpen(::System::EventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::System::EventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WebSocketSharp::WebSocket::checkHandshakeResponse(::WebSocketSharp::HttpResponse*  response, ::by_ref<::StringW>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"checkHandshakeResponse", {}, {::i2c::type_of<::WebSocketSharp::HttpResponse*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response, message);
}
inline bool WebSocketSharp::WebSocket::checkProtocols(::ArrayW<::StringW>  protocols, ::by_ref<::StringW>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"checkProtocols", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, protocols, message);
}
inline bool WebSocketSharp::WebSocket::checkReceivedFrame(::WebSocketSharp::WebSocketFrame*  frame, ::by_ref<::StringW>  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"checkReceivedFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame, message);
}
inline void WebSocketSharp::WebSocket::close(uint16_t  code, ::StringW  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"close", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, reason);
}
inline void WebSocketSharp::WebSocket::close(::WebSocketSharp::PayloadData*  payloadData, bool  send, bool  receive, bool  received)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"close", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payloadData, send, receive, received);
}
inline bool WebSocketSharp::WebSocket::closeHandshake(::WebSocketSharp::PayloadData*  payloadData, bool  send, bool  receive, bool  received)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"closeHandshake", {}, {::i2c::type_of<::WebSocketSharp::PayloadData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, payloadData, send, receive, received);
}
inline bool WebSocketSharp::WebSocket::connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW WebSocketSharp::WebSocket::createExtensions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"createExtensions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::WebSocketSharp::HttpRequest* WebSocketSharp::WebSocket::createHandshakeRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"createHandshakeRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::HttpRequest*>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::doHandshake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"doHandshake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::enqueueToMessageEventQueue(::WebSocketSharp::MessageEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"enqueueToMessageEventQueue", {}, {::i2c::type_of<::WebSocketSharp::MessageEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void WebSocketSharp::WebSocket::error(::StringW  message, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline void WebSocketSharp::WebSocket::fatal(::StringW  message, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"fatal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, exception);
}
inline void WebSocketSharp::WebSocket::fatal(::StringW  message, uint16_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"fatal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, code);
}
inline void WebSocketSharp::WebSocket::fatal(::StringW  message, ::WebSocketSharp::CloseStatusCode  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"fatal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::CloseStatusCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, code);
}
inline ::WebSocketSharp::Net::ClientSslConfiguration* WebSocketSharp::WebSocket::getSslConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"getSslConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::Net::ClientSslConfiguration*>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::messagec(::WebSocketSharp::MessageEventArgs*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"messagec", {}, {::i2c::type_of<::WebSocketSharp::MessageEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void WebSocketSharp::WebSocket::open()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"open", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocket::processCloseFrame(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processCloseFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline void WebSocketSharp::WebSocket::processCookies(::WebSocketSharp::Net::CookieCollection*  cookies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processCookies", {}, {::i2c::type_of<::WebSocketSharp::Net::CookieCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cookies);
}
inline bool WebSocketSharp::WebSocket::processDataFrame(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processDataFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline bool WebSocketSharp::WebSocket::processFragmentFrame(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processFragmentFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline bool WebSocketSharp::WebSocket::processPingFrame(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processPingFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline bool WebSocketSharp::WebSocket::processPongFrame(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processPongFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline bool WebSocketSharp::WebSocket::processReceivedFrame(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processReceivedFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline void WebSocketSharp::WebSocket::processSecWebSocketExtensionsServerHeader(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processSecWebSocketExtensionsServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WebSocketSharp::WebSocket::processUnsupportedFrame(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"processUnsupportedFrame", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, frame);
}
inline void WebSocketSharp::WebSocket::releaseClientResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseClientResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::releaseCommonResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseCommonResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::releaseResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::releaseServerResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"releaseServerResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocket::send(::WebSocketSharp::Opcode  opcode, ::System::IO::Stream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"send", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::System::IO::Stream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opcode, stream);
}
inline bool WebSocketSharp::WebSocket::send(::WebSocketSharp::Opcode  opcode, ::System::IO::Stream*  stream, bool  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"send", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opcode, stream, compressed);
}
inline bool WebSocketSharp::WebSocket::send(::WebSocketSharp::Fin  fin, ::WebSocketSharp::Opcode  opcode, ::ArrayW<uint8_t>  data, bool  compressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"send", {}, {::i2c::type_of<::WebSocketSharp::Fin>(), ::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fin, opcode, data, compressed);
}
inline void WebSocketSharp::WebSocket::sendAsync(::WebSocketSharp::Opcode  opcode, ::System::IO::Stream*  stream, ::System::Action_1<bool>*  completed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendAsync", {}, {::i2c::type_of<::WebSocketSharp::Opcode>(), ::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opcode, stream, completed);
}
inline bool WebSocketSharp::WebSocket::sendBytes(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bytes);
}
inline ::WebSocketSharp::HttpResponse* WebSocketSharp::WebSocket::sendHandshakeRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendHandshakeRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::HttpResponse*>(this, ___internal_method);
}
inline ::WebSocketSharp::HttpResponse* WebSocketSharp::WebSocket::sendHttpRequest(::WebSocketSharp::HttpRequest*  request, int32_t  millisecondsTimeout)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendHttpRequest", {}, {::i2c::type_of<::WebSocketSharp::HttpRequest*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WebSocketSharp::HttpResponse*>(this, ___internal_method, request, millisecondsTimeout);
}
inline void WebSocketSharp::WebSocket::sendProxyConnectRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"sendProxyConnectRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::setClientStream()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"setClientStream", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::startReceiving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"startReceiving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocket::validateSecWebSocketAcceptHeader(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketAcceptHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool WebSocketSharp::WebSocket::validateSecWebSocketExtensionsServerHeader(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketExtensionsServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool WebSocketSharp::WebSocket::validateSecWebSocketProtocolServerHeader(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketProtocolServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool WebSocketSharp::WebSocket::validateSecWebSocketVersionServerHeader(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"validateSecWebSocketVersionServerHeader", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW WebSocketSharp::WebSocket::CreateBase64Key()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"CreateBase64Key", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW WebSocketSharp::WebSocket::CreateResponseKey(::StringW  base64Key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"CreateResponseKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, base64Key);
}
inline void WebSocketSharp::WebSocket::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::ConnectAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"ConnectAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::SendAsync(::StringW  data, ::System::Action_1<bool>*  completed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"SendAsync", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, completed);
}
inline void WebSocketSharp::WebSocket::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket::_open_b__146_0(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket*>(),
                        {"<open>b__146_0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline ::WebSocketSharp::WebSocket* WebSocketSharp::WebSocket::New_ctor(::StringW  url, /* [ParamArray] */ ::ArrayW<::StringW>  protocols)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocket*>(url, protocols));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  WebSocketSharp::WebSocket::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* WebSocketSharp::WebSocket::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocket::WebSocket()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass201_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass201_0::*)()>(&::WebSocketSharp::WebSocket___c__DisplayClass201_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97eeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass201_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass201_0._ConnectAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass201_0::*)(::System::IAsyncResult*)>(&::WebSocketSharp::WebSocket___c__DisplayClass201_0::_ConnectAsync_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb97f6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass201_0*>(),
                        {"<ConnectAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<bool>*& WebSocketSharp::WebSocket___c__DisplayClass201_0::__cordl_internal_get_connector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connector;
}
constexpr ::System::Func_1<bool>* const& WebSocketSharp::WebSocket___c__DisplayClass201_0::__cordl_internal_get_connector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connector;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass201_0::__cordl_internal_set_connector(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connector = value;
}
constexpr ::WebSocketSharp::WebSocket*& WebSocketSharp::WebSocket___c__DisplayClass201_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::WebSocketSharp::WebSocket* const& WebSocketSharp::WebSocket___c__DisplayClass201_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass201_0::__cordl_internal_set___4__this(::WebSocketSharp::WebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void WebSocketSharp::WebSocket___c__DisplayClass201_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass201_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket___c__DisplayClass201_0::_ConnectAsync_b__0(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass201_0*>(),
                        {"<ConnectAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline ::WebSocketSharp::WebSocket___c__DisplayClass201_0* WebSocketSharp::WebSocket___c__DisplayClass201_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocket___c__DisplayClass201_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocket___c__DisplayClass201_0::WebSocket___c__DisplayClass201_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass177_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass177_0::*)()>(&::WebSocketSharp::WebSocket___c__DisplayClass177_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass177_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass177_0._validateSecWebSocketProtocolServerHeader_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket___c__DisplayClass177_0::*)(::StringW)>(&::WebSocketSharp::WebSocket___c__DisplayClass177_0::_validateSecWebSocketProtocolServerHeader_b__0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb97f6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass177_0*>(),
                        {"<validateSecWebSocketProtocolServerHeader>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::WebSocket___c__DisplayClass177_0::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::StringW const& WebSocketSharp::WebSocket___c__DisplayClass177_0::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass177_0::__cordl_internal_set_value(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void WebSocketSharp::WebSocket___c__DisplayClass177_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass177_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocket___c__DisplayClass177_0::_validateSecWebSocketProtocolServerHeader_b__0(::StringW  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass177_0*>(),
                        {"<validateSecWebSocketProtocolServerHeader>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, p);
}
inline ::WebSocketSharp::WebSocket___c__DisplayClass177_0* WebSocketSharp::WebSocket___c__DisplayClass177_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocket___c__DisplayClass177_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocket___c__DisplayClass177_0::WebSocket___c__DisplayClass177_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass176_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass176_0::*)()>(&::WebSocketSharp::WebSocket___c__DisplayClass176_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97eca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass176_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass176_0._validateSecWebSocketExtensionsServerHeader_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket___c__DisplayClass176_0::*)(::StringW)>(&::WebSocketSharp::WebSocket___c__DisplayClass176_0::_validateSecWebSocketExtensionsServerHeader_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb97f634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass176_0*>(),
                        {"<validateSecWebSocketExtensionsServerHeader>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::WebSocket___c__DisplayClass176_0::__cordl_internal_get_method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr ::StringW const& WebSocketSharp::WebSocket___c__DisplayClass176_0::__cordl_internal_get_method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___method;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass176_0::__cordl_internal_set_method(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___method = value;
}
inline void WebSocketSharp::WebSocket___c__DisplayClass176_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass176_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocket___c__DisplayClass176_0::_validateSecWebSocketExtensionsServerHeader_b__0(::StringW  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass176_0*>(),
                        {"<validateSecWebSocketExtensionsServerHeader>b__0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::WebSocketSharp::WebSocket___c__DisplayClass176_0* WebSocketSharp::WebSocket___c__DisplayClass176_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocket___c__DisplayClass176_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocket___c__DisplayClass176_0::WebSocket___c__DisplayClass176_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass174_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass174_0::*)()>(&::WebSocketSharp::WebSocket___c__DisplayClass174_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97eb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass174_0._startReceiving_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass174_0::*)()>(&::WebSocketSharp::WebSocket___c__DisplayClass174_0::_startReceiving_b__0)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb97f2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {"<startReceiving>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass174_0._startReceiving_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass174_0::*)(::WebSocketSharp::WebSocketFrame*)>(&::WebSocketSharp::WebSocket___c__DisplayClass174_0::_startReceiving_b__1)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb97f4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {"<startReceiving>b__1", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass174_0._startReceiving_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass174_0::*)(::System::Exception*)>(&::WebSocketSharp::WebSocket___c__DisplayClass174_0::_startReceiving_b__2)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb97f5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {"<startReceiving>b__2", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WebSocketSharp::WebSocket*& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::WebSocketSharp::WebSocket* const& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_set___4__this(::WebSocketSharp::WebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Action*& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get_receive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receive;
}
constexpr ::System::Action* const& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get_receive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___receive;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_set_receive(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___receive = value;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>*& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get___9__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr ::System::Action_1<::WebSocketSharp::WebSocketFrame*>* const& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get___9__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__1;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_set___9__1(::System::Action_1<::WebSocketSharp::WebSocketFrame*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__1 = value;
}
constexpr ::System::Action_1<::System::Exception*>*& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get___9__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr ::System::Action_1<::System::Exception*>* const& WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_get___9__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____9__2;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass174_0::__cordl_internal_set___9__2(::System::Action_1<::System::Exception*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____9__2 = value;
}
inline void WebSocketSharp::WebSocket___c__DisplayClass174_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket___c__DisplayClass174_0::_startReceiving_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {"<startReceiving>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket___c__DisplayClass174_0::_startReceiving_b__1(::WebSocketSharp::WebSocketFrame*  frame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {"<startReceiving>b__1", {}, {::i2c::type_of<::WebSocketSharp::WebSocketFrame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frame);
}
inline void WebSocketSharp::WebSocket___c__DisplayClass174_0::_startReceiving_b__2(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>(),
                        {"<startReceiving>b__2", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
inline ::WebSocketSharp::WebSocket___c__DisplayClass174_0* WebSocketSharp::WebSocket___c__DisplayClass174_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocket___c__DisplayClass174_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocket___c__DisplayClass174_0::WebSocket___c__DisplayClass174_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass167_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass167_0::*)()>(&::WebSocketSharp::WebSocket___c__DisplayClass167_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97e42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass167_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c__DisplayClass167_0._sendAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c__DisplayClass167_0::*)(::System::IAsyncResult*)>(&::WebSocketSharp::WebSocket___c__DisplayClass167_0::_sendAsync_b__0)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb97f188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass167_0*>(),
                        {"<sendAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>*& WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_get_sender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr ::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>* const& WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_get_sender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sender;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_set_sender(::System::Func_3<::WebSocketSharp::Opcode,::System::IO::Stream*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sender = value;
}
constexpr ::System::Action_1<bool>*& WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr ::System::Action_1<bool>* const& WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_set_completed(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::WebSocketSharp::WebSocket*& WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::WebSocketSharp::WebSocket* const& WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void WebSocketSharp::WebSocket___c__DisplayClass167_0::__cordl_internal_set___4__this(::WebSocketSharp::WebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void WebSocketSharp::WebSocket___c__DisplayClass167_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass167_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::WebSocket___c__DisplayClass167_0::_sendAsync_b__0(::System::IAsyncResult*  ar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c__DisplayClass167_0*>(),
                        {"<sendAsync>b__0", {}, {::i2c::type_of<::System::IAsyncResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ar);
}
inline ::WebSocketSharp::WebSocket___c__DisplayClass167_0* WebSocketSharp::WebSocket___c__DisplayClass167_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocket___c__DisplayClass167_0*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocket___c__DisplayClass167_0::WebSocket___c__DisplayClass167_0()   {
}
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::WebSocket___c::*)()>(&::WebSocketSharp::WebSocket___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97f0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::WebSocket___c._checkProtocols_b__120_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WebSocketSharp::WebSocket___c::*)(::StringW)>(&::WebSocketSharp::WebSocket___c::_checkProtocols_b__120_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb97f0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c*>(),
                        {"<checkProtocols>b__120_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void WebSocketSharp::WebSocket___c::setStaticF___9(::WebSocketSharp::WebSocket___c*  value)  {
::cordl_internals::setStaticField<::WebSocketSharp::WebSocket___c*, "<>9", ::WebSocketSharp::WebSocket___c*>(std::forward<::WebSocketSharp::WebSocket___c*>(value));
}
inline ::WebSocketSharp::WebSocket___c* WebSocketSharp::WebSocket___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::WebSocketSharp::WebSocket___c*, "<>9", ::WebSocketSharp::WebSocket___c*>();
}
inline void WebSocketSharp::WebSocket___c::setStaticF___9__120_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__120_0", ::WebSocketSharp::WebSocket___c*>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* WebSocketSharp::WebSocket___c::getStaticF___9__120_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__120_0", ::WebSocketSharp::WebSocket___c*>();
}
inline void WebSocketSharp::WebSocket___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WebSocketSharp::WebSocket___c::_checkProtocols_b__120_0(::StringW  protocol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::WebSocket___c*>(),
                        {"<checkProtocols>b__120_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, protocol);
}
inline ::WebSocketSharp::WebSocket___c* WebSocketSharp::WebSocket___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::WebSocket___c*>());
}
// Ctor Parameters []
constexpr ::WebSocketSharp::WebSocket___c::WebSocket___c()   {
}
