#pragma once
// IWYU pragma private; include "Meta/Net/NativeWebSocket/WebSocket.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocket_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketCloseEventHandler_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketErrorEventHandler_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketMessageEventHandler_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketOpenEventHandler_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocketState_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocket__Close_d__36_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocket__Connect_d__30_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocket__HandleQueue_d__34_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocket__Receive_d__35_def.hpp"
#include "Meta/Net/NativeWebSocket/zzzz__WebSocket__SendMessage_d__33_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::Meta::Net::NativeWebSocket::WebSocket::_ctor)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x9e01404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.add_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::add_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e01748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.remove_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::remove_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e017e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.add_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::add_OnMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e01880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.remove_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::remove_OnMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e0191c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.add_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::add_OnError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e019b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnError", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.remove_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::remove_OnError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e01a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.add_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::add_OnClose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e01af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.remove_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Net::NativeWebSocket::WebSocket::*)(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*)>(&::Meta::Net::NativeWebSocket::WebSocket::remove_OnClose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e01b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Net::NativeWebSocket::WebSocketState (::Meta::Net::NativeWebSocket::WebSocket::*)()>(&::Meta::Net::NativeWebSocket::WebSocket::get_State)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9e01c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Net::NativeWebSocket::WebSocket::*)()>(&::Meta::Net::NativeWebSocket::WebSocket::Connect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e01c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Net::NativeWebSocket::WebSocket::*)(::ArrayW<uint8_t>)>(&::Meta::Net::NativeWebSocket::WebSocket::Send)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9e01d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.SendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Net::NativeWebSocket::WebSocket::*)(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::WebSockets::WebSocketMessageType, ::System::ArraySegment_1<uint8_t>)>(&::Meta::Net::NativeWebSocket::WebSocket::SendMessage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e01dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"SendMessage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.HandleQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Net::NativeWebSocket::WebSocket::*)(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::WebSockets::WebSocketMessageType)>(&::Meta::Net::NativeWebSocket::WebSocket::HandleQueue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9e01ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"HandleQueue", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Net::NativeWebSocket::WebSocket::*)()>(&::Meta::Net::NativeWebSocket::WebSocket::Receive)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9e01fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Receive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Net::NativeWebSocket::WebSocket.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Meta::Net::NativeWebSocket::WebSocket::*)()>(&::Meta::Net::NativeWebSocket::WebSocket::Close)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9e020c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_IncomingMessageLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncomingMessageLock;
}
constexpr ::System::Object* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_IncomingMessageLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncomingMessageLock;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_IncomingMessageLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncomingMessageLock = value;
}
constexpr ::System::Object*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OutgoingMessageLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutgoingMessageLock;
}
constexpr ::System::Object* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OutgoingMessageLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutgoingMessageLock;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_OutgoingMessageLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutgoingMessageLock = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
constexpr bool& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_isSending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSending;
}
constexpr bool const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_isSending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSending;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_isSending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSending = value;
}
constexpr ::System::Threading::CancellationToken& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_CancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_CancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancellationToken;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_m_CancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CancellationToken = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_MessageList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MessageList;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_MessageList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MessageList;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_m_MessageList(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MessageList = value;
}
constexpr ::System::Net::WebSockets::ClientWebSocket*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_Socket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Socket;
}
constexpr ::System::Net::WebSockets::ClientWebSocket* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_Socket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Socket;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_m_Socket(::System::Net::WebSockets::ClientWebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Socket = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_TokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_m_TokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TokenSource;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_m_TokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TokenSource = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_sendBytesQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendBytesQueue;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_sendBytesQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendBytesQueue;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_sendBytesQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendBytesQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_sendTextQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTextQueue;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_sendTextQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTextQueue;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_sendTextQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendTextQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_subprotocols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subprotocols;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_subprotocols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subprotocols;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_subprotocols(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subprotocols = value;
}
constexpr ::System::Uri*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr ::System::Uri* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uri = value;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_OnOpen(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOpen = value;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_OnMessage(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMessage = value;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_OnError(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnError = value;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr ::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler* const& Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_get_OnClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr void Meta::Net::NativeWebSocket::WebSocket::__cordl_internal_set_OnClose(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClose = value;
}
inline void Meta::Net::NativeWebSocket::WebSocket::_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, headers);
}
inline void Meta::Net::NativeWebSocket::WebSocket::add_OnOpen(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::WebSocket::remove_OnOpen(::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::WebSocket::add_OnMessage(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::WebSocket::remove_OnMessage(::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::WebSocket::add_OnError(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnError", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::WebSocket::remove_OnError(::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::WebSocket::add_OnClose(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Net::NativeWebSocket::WebSocket::remove_OnClose(::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::Meta::Net::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Net::NativeWebSocket::WebSocketState Meta::Net::NativeWebSocket::WebSocket::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Net::NativeWebSocket::WebSocketState>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Net::NativeWebSocket::WebSocket::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Net::NativeWebSocket::WebSocket::Send(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, bytes);
}
inline ::System::Threading::Tasks::Task* Meta::Net::NativeWebSocket::WebSocket::SendMessage(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Net::WebSockets::WebSocketMessageType  messageType, ::System::ArraySegment_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"SendMessage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, queue, messageType, buffer);
}
inline ::System::Threading::Tasks::Task* Meta::Net::NativeWebSocket::WebSocket::HandleQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Net::WebSockets::WebSocketMessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"HandleQueue", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, queue, messageType);
}
inline ::System::Threading::Tasks::Task* Meta::Net::NativeWebSocket::WebSocket::Receive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Receive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::Net::NativeWebSocket::WebSocket::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Net::NativeWebSocket::WebSocket*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Meta::Net::NativeWebSocket::WebSocket* Meta::Net::NativeWebSocket::WebSocket::New_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Net::NativeWebSocket::WebSocket*>(url, headers));
}
// Ctor Parameters []
constexpr ::Meta::Net::NativeWebSocket::WebSocket::WebSocket()   {
}
