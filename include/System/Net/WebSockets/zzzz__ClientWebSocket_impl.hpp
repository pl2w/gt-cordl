#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ClientWebSocket.hpp"
#include "System/Net/WebSockets/zzzz__WebSocket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocketOptions_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_InternalState_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket__ConnectAsyncCore_d__16_def.hpp"
#include "System/Net/WebSockets/zzzz__ClientWebSocket_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketHandle_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xacecdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::ClientWebSocketOptions* (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaced0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.get_CloseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::get_CloseStatus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaced0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.get_CloseStatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::get_CloseStatusDescription)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xaced160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocketState (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::get_State)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaced204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ConnectAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ClientWebSocket::*)(::System::Uri*, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::ConnectAsync)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xaced2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"ConnectAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ConnectAsyncCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ClientWebSocket::*)(::System::Uri*, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::ConnectAsyncCore)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaced548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"ConnectAsyncCore", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.SendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ClientWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::SendAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaced65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ReceiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* (::System::Net::WebSockets::ClientWebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::ReceiveAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaced7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.CloseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ClientWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::CloseAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaced838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.CloseOutputAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::ClientWebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::ClientWebSocket::CloseOutputAsync)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaced8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::Abort)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xaced920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::Dispose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaced9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket.ThrowIfNotConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocket::*)()>(&::System::Net::WebSockets::ClientWebSocket::ThrowIfNotConnected)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xaced6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"ThrowIfNotConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Net::WebSockets::ClientWebSocketOptions*& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
constexpr ::System::Net::WebSockets::ClientWebSocketOptions* const& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____options;
}
constexpr void System::Net::WebSockets::ClientWebSocket::__cordl_internal_set__options(::System::Net::WebSockets::ClientWebSocketOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____options = value;
}
constexpr ::System::Net::WebSockets::WebSocketHandle*& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__innerWebSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerWebSocket;
}
constexpr ::System::Net::WebSockets::WebSocketHandle* const& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__innerWebSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerWebSocket;
}
constexpr void System::Net::WebSockets::ClientWebSocket::__cordl_internal_set__innerWebSocket(::System::Net::WebSockets::WebSocketHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____innerWebSocket = value;
}
constexpr int32_t& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr int32_t const& System::Net::WebSockets::ClientWebSocket::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void System::Net::WebSockets::ClientWebSocket::__cordl_internal_set__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
inline void System::Net::WebSockets::ClientWebSocket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebSockets::ClientWebSocketOptions* System::Net::WebSockets::ClientWebSocket::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::ClientWebSocketOptions*>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> System::Net::WebSockets::ClientWebSocket::get_CloseStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(this, ___internal_method);
}
inline ::StringW System::Net::WebSockets::ClientWebSocket::get_CloseStatusDescription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::ClientWebSocket::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketState>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::ConnectAsync(::System::Uri*  uri, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"ConnectAsync", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, uri, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::ConnectAsyncCore(::System::Uri*  uri, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"ConnectAsyncCore", {}, {::i2c::type_of<::System::Uri*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, uri, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* System::Net::WebSockets::ClientWebSocket::ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::ClientWebSocket::CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline void System::Net::WebSockets::ClientWebSocket::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocket::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocket::ThrowIfNotConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket*>(),
                        {"ThrowIfNotConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebSockets::ClientWebSocket* System::Net::WebSockets::ClientWebSocket::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::ClientWebSocket*>());
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ClientWebSocket::ClientWebSocket()   {
}
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy* (*)()>(&::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xacedabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy.get_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::*)()>(&::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::get_Credentials)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacedb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"get_Credentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy.set_Credentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::*)(::System::Net::ICredentials*)>(&::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::set_Credentials)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacedb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy.GetProxy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::*)(::System::Uri*)>(&::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::GetProxy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacedb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy.IsBypassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::*)(::System::Uri*)>(&::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::IsBypassed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacedbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::*)()>(&::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xacedbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::setStaticF__Instance_k__BackingField(::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*  value)  {
::cordl_internals::setStaticField<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*, "<Instance>k__BackingField", ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(std::forward<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(value));
}
inline ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy* System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*, "<Instance>k__BackingField", ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>();
}
inline ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy* System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(nullptr, ___internal_method);
}
inline ::System::Net::ICredentials* System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::get_Credentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"get_Credentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::set_Credentials(::System::Net::ICredentials*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"set_Credentials", {}, {::i2c::type_of<::System::Net::ICredentials*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::GetProxy(::System::Uri*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"GetProxy", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method, destination);
}
inline bool System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::IsBypassed(::System::Uri*  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {"IsBypassed", {}, {::i2c::type_of<::System::Uri*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, host);
}
inline void System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy* System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy*>());
}
/// @brief Convert operator to "::System::Net::IWebProxy"
constexpr  System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::operator ::System::Net::IWebProxy*() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Net::IWebProxy"
constexpr ::System::Net::IWebProxy* System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::i___System__Net__IWebProxy() noexcept {
return static_cast<::System::Net::IWebProxy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::ClientWebSocket_DefaultWebProxy::ClientWebSocket_DefaultWebProxy()   {
}
