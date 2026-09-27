#pragma once
// IWYU pragma private; include "NativeWebSocket/WebSocket.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "NativeWebSocket/zzzz__WebSocket_def.hpp"
#include "NativeWebSocket/zzzz__IWebSocket_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketCloseEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketErrorEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketMessageEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketOpenEventHandler_def.hpp"
#include "NativeWebSocket/zzzz__WebSocketState_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket__Close_d__38_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket__Connect_d__28_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket__HandleQueue_d__34_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket__Receive_d__37_def.hpp"
#include "NativeWebSocket/zzzz__WebSocket__SendMessage_d__33_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::NativeWebSocket::WebSocket.add_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketOpenEventHandler*)>(&::NativeWebSocket::WebSocket::add_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f35130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.remove_OnOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketOpenEventHandler*)>(&::NativeWebSocket::WebSocket::remove_OnOpen)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f351cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.add_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketMessageEventHandler*)>(&::NativeWebSocket::WebSocket::add_OnMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f35268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.remove_OnMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketMessageEventHandler*)>(&::NativeWebSocket::WebSocket::remove_OnMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f35304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.add_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketErrorEventHandler*)>(&::NativeWebSocket::WebSocket::add_OnError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f353a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnError", {}, {::i2c::type_of<::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.remove_OnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketErrorEventHandler*)>(&::NativeWebSocket::WebSocket::remove_OnError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f3543c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.add_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketCloseEventHandler*)>(&::NativeWebSocket::WebSocket::add_OnClose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f354d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.remove_OnClose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::NativeWebSocket::WebSocketCloseEventHandler*)>(&::NativeWebSocket::WebSocket::remove_OnClose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f35574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::NativeWebSocket::WebSocket::_ctor)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x5f35610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::NativeWebSocket::WebSocket::_ctor)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5f35954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*)>(&::NativeWebSocket::WebSocket::_ctor)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5f35d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.SetRequestHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)(::StringW, ::StringW)>(&::NativeWebSocket::WebSocket::SetRequestHeader)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f3601c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"SetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.CancelConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)()>(&::NativeWebSocket::WebSocket::CancelConnection)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f36084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"CancelConnection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::NativeWebSocket::WebSocket::*)()>(&::NativeWebSocket::WebSocket::Connect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f36098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Connect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NativeWebSocket::WebSocketState (::NativeWebSocket::WebSocket::*)()>(&::NativeWebSocket::WebSocket::get_State)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f36170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"get_State", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::NativeWebSocket::WebSocket::*)(::ArrayW<uint8_t>)>(&::NativeWebSocket::WebSocket::Send)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f361b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.SendText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::NativeWebSocket::WebSocket::*)(::StringW)>(&::NativeWebSocket::WebSocket::SendText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f36354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"SendText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.SendMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::NativeWebSocket::WebSocket::*)(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::WebSockets::WebSocketMessageType, ::System::ArraySegment_1<uint8_t>)>(&::NativeWebSocket::WebSocket::SendMessage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f36234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"SendMessage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.HandleQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::NativeWebSocket::WebSocket::*)(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*, ::System::Net::WebSockets::WebSocketMessageType)>(&::NativeWebSocket::WebSocket::HandleQueue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f363fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"HandleQueue", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.DispatchMessageQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NativeWebSocket::WebSocket::*)()>(&::NativeWebSocket::WebSocket::DispatchMessageQueue)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5f364f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"DispatchMessageQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::NativeWebSocket::WebSocket::*)()>(&::NativeWebSocket::WebSocket::Receive)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f36700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Receive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NativeWebSocket::WebSocket.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::NativeWebSocket::WebSocket::*)()>(&::NativeWebSocket::WebSocket::Close)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f367e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::NativeWebSocket::WebSocketOpenEventHandler*& NativeWebSocket::WebSocket::__cordl_internal_get_OnOpen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr ::NativeWebSocket::WebSocketOpenEventHandler* const& NativeWebSocket::WebSocket::__cordl_internal_get_OnOpen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnOpen;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnOpen = value;
}
constexpr ::NativeWebSocket::WebSocketMessageEventHandler*& NativeWebSocket::WebSocket::__cordl_internal_get_OnMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr ::NativeWebSocket::WebSocketMessageEventHandler* const& NativeWebSocket::WebSocket::__cordl_internal_get_OnMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnMessage;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnMessage = value;
}
constexpr ::NativeWebSocket::WebSocketErrorEventHandler*& NativeWebSocket::WebSocket::__cordl_internal_get_OnError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr ::NativeWebSocket::WebSocketErrorEventHandler* const& NativeWebSocket::WebSocket::__cordl_internal_get_OnError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnError;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnError = value;
}
constexpr ::NativeWebSocket::WebSocketCloseEventHandler*& NativeWebSocket::WebSocket::__cordl_internal_get_OnClose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr ::NativeWebSocket::WebSocketCloseEventHandler* const& NativeWebSocket::WebSocket::__cordl_internal_get_OnClose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnClose;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnClose = value;
}
constexpr ::System::Uri*& NativeWebSocket::WebSocket::__cordl_internal_get_uri()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr ::System::Uri* const& NativeWebSocket::WebSocket::__cordl_internal_get_uri() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uri;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_uri(::System::Uri*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uri = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& NativeWebSocket::WebSocket::__cordl_internal_get_headers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& NativeWebSocket::WebSocket::__cordl_internal_get_headers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headers;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headers = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& NativeWebSocket::WebSocket::__cordl_internal_get_subprotocols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subprotocols;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& NativeWebSocket::WebSocket::__cordl_internal_get_subprotocols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subprotocols;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_subprotocols(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subprotocols = value;
}
constexpr ::System::Net::WebSockets::ClientWebSocket*& NativeWebSocket::WebSocket::__cordl_internal_get_m_Socket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Socket;
}
constexpr ::System::Net::WebSockets::ClientWebSocket* const& NativeWebSocket::WebSocket::__cordl_internal_get_m_Socket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Socket;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_m_Socket(::System::Net::WebSockets::ClientWebSocket*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Socket = value;
}
constexpr ::System::Threading::CancellationTokenSource*& NativeWebSocket::WebSocket::__cordl_internal_get_m_TokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TokenSource;
}
constexpr ::System::Threading::CancellationTokenSource* const& NativeWebSocket::WebSocket::__cordl_internal_get_m_TokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TokenSource;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_m_TokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TokenSource = value;
}
constexpr ::System::Threading::CancellationToken& NativeWebSocket::WebSocket::__cordl_internal_get_m_CancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancellationToken;
}
constexpr ::System::Threading::CancellationToken const& NativeWebSocket::WebSocket::__cordl_internal_get_m_CancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancellationToken;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_m_CancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CancellationToken = value;
}
constexpr ::System::Object*& NativeWebSocket::WebSocket::__cordl_internal_get_OutgoingMessageLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutgoingMessageLock;
}
constexpr ::System::Object* const& NativeWebSocket::WebSocket::__cordl_internal_get_OutgoingMessageLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OutgoingMessageLock;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_OutgoingMessageLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OutgoingMessageLock = value;
}
constexpr ::System::Object*& NativeWebSocket::WebSocket::__cordl_internal_get_IncomingMessageLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncomingMessageLock;
}
constexpr ::System::Object* const& NativeWebSocket::WebSocket::__cordl_internal_get_IncomingMessageLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IncomingMessageLock;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_IncomingMessageLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IncomingMessageLock = value;
}
constexpr bool& NativeWebSocket::WebSocket::__cordl_internal_get_isSending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSending;
}
constexpr bool const& NativeWebSocket::WebSocket::__cordl_internal_get_isSending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSending;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_isSending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSending = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& NativeWebSocket::WebSocket::__cordl_internal_get_sendBytesQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendBytesQueue;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& NativeWebSocket::WebSocket::__cordl_internal_get_sendBytesQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendBytesQueue;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_sendBytesQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendBytesQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*& NativeWebSocket::WebSocket::__cordl_internal_get_sendTextQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTextQueue;
}
constexpr ::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>* const& NativeWebSocket::WebSocket::__cordl_internal_get_sendTextQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendTextQueue;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_sendTextQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendTextQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*& NativeWebSocket::WebSocket::__cordl_internal_get_m_MessageList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MessageList;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t>>* const& NativeWebSocket::WebSocket::__cordl_internal_get_m_MessageList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MessageList;
}
constexpr void NativeWebSocket::WebSocket::__cordl_internal_set_m_MessageList(::System::Collections::Generic::List_1<::ArrayW<uint8_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MessageList = value;
}
inline void NativeWebSocket::WebSocket::add_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnOpen", {}, {::i2c::type_of<::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::remove_OnOpen(::NativeWebSocket::WebSocketOpenEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnOpen", {}, {::i2c::type_of<::NativeWebSocket::WebSocketOpenEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::add_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnMessage", {}, {::i2c::type_of<::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::remove_OnMessage(::NativeWebSocket::WebSocketMessageEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnMessage", {}, {::i2c::type_of<::NativeWebSocket::WebSocketMessageEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::add_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnError", {}, {::i2c::type_of<::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::remove_OnError(::NativeWebSocket::WebSocketErrorEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnError", {}, {::i2c::type_of<::NativeWebSocket::WebSocketErrorEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::add_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"add_OnClose", {}, {::i2c::type_of<::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::remove_OnClose(::NativeWebSocket::WebSocketCloseEventHandler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"remove_OnClose", {}, {::i2c::type_of<::NativeWebSocket::WebSocketCloseEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NativeWebSocket::WebSocket::_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, headers);
}
inline void NativeWebSocket::WebSocket::_ctor(::StringW  url, ::StringW  subprotocol, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, subprotocol, headers);
}
inline void NativeWebSocket::WebSocket::_ctor(::StringW  url, ::System::Collections::Generic::List_1<::StringW>*  subprotocols, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, url, subprotocols, headers);
}
inline void NativeWebSocket::WebSocket::SetRequestHeader(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"SetRequestHeader", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, value);
}
inline void NativeWebSocket::WebSocket::CancelConnection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"CancelConnection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* NativeWebSocket::WebSocket::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::NativeWebSocket::WebSocketState NativeWebSocket::WebSocket::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NativeWebSocket::WebSocketState>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* NativeWebSocket::WebSocket::Send(::ArrayW<uint8_t>  bytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, bytes);
}
inline ::System::Threading::Tasks::Task* NativeWebSocket::WebSocket::SendText(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"SendText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, message);
}
inline ::System::Threading::Tasks::Task* NativeWebSocket::WebSocket::SendMessage(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Net::WebSockets::WebSocketMessageType  messageType, ::System::ArraySegment_1<uint8_t>  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"SendMessage", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, queue, messageType, buffer);
}
inline ::System::Threading::Tasks::Task* NativeWebSocket::WebSocket::HandleQueue(::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*  queue, ::System::Net::WebSockets::WebSocketMessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"HandleQueue", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::ArraySegment_1<uint8_t>>*>(), ::i2c::type_of<::System::Net::WebSockets::WebSocketMessageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, queue, messageType);
}
inline void NativeWebSocket::WebSocket::DispatchMessageQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"DispatchMessageQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* NativeWebSocket::WebSocket::Receive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Receive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* NativeWebSocket::WebSocket::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NativeWebSocket::WebSocket*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::NativeWebSocket::WebSocket* NativeWebSocket::WebSocket::New_ctor(::StringW  url, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocket*>(url, headers));
}
inline ::NativeWebSocket::WebSocket* NativeWebSocket::WebSocket::New_ctor(::StringW  url, ::StringW  subprotocol, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocket*>(url, subprotocol, headers));
}
inline ::NativeWebSocket::WebSocket* NativeWebSocket::WebSocket::New_ctor(::StringW  url, ::System::Collections::Generic::List_1<::StringW>*  subprotocols, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  headers)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NativeWebSocket::WebSocket*>(url, subprotocols, headers));
}
/// @brief Convert operator to "::NativeWebSocket::IWebSocket"
constexpr  NativeWebSocket::WebSocket::operator ::NativeWebSocket::IWebSocket*() noexcept {
return static_cast<::NativeWebSocket::IWebSocket*>(static_cast<void*>(this));
}
/// @brief Convert to "::NativeWebSocket::IWebSocket"
constexpr ::NativeWebSocket::IWebSocket* NativeWebSocket::WebSocket::i___NativeWebSocket__IWebSocket() noexcept {
return static_cast<::NativeWebSocket::IWebSocket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::NativeWebSocket::WebSocket::WebSocket()   {
}
