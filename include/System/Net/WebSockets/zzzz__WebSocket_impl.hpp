#pragma once
// IWYU pragma private; include "System/Net/WebSockets/WebSocket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/WebSockets/zzzz__WebSocket_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketMessageType_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketReceiveResult_def.hpp"
#include "System/Net/WebSockets/zzzz__WebSocketState_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.get_CloseStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> (::System::Net::WebSockets::WebSocket::*)()>(&::System::Net::WebSockets::WebSocket::get_CloseStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.get_CloseStatusDescription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::WebSockets::WebSocket::*)()>(&::System::Net::WebSockets::WebSocket::get_CloseStatusDescription)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.get_State
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocketState (::System::Net::WebSockets::WebSocket::*)()>(&::System::Net::WebSockets::WebSocket::get_State)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.Abort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocket::*)()>(&::System::Net::WebSockets::WebSocket::Abort)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.CloseAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::WebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocket::CloseAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.CloseOutputAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::WebSocket::*)(::System::Net::WebSockets::WebSocketCloseStatus, ::StringW, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocket::CloseOutputAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocket::*)()>(&::System::Net::WebSockets::WebSocket::Dispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.ReceiveAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* (::System::Net::WebSockets::WebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocket::ReceiveAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.SendAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::System::Net::WebSockets::WebSocket::*)(::System::ArraySegment_1<uint8_t>, ::System::Net::WebSockets::WebSocketMessageType, bool, ::System::Threading::CancellationToken)>(&::System::Net::WebSockets::WebSocket::SendAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                    {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.get_DefaultKeepAliveInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)()>(&::System::Net::WebSockets::WebSocket::get_DefaultKeepAliveInterval)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xacee238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                        {"get_DefaultKeepAliveInterval", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket.CreateClientWebSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebSockets::WebSocket* (*)(::System::IO::Stream*, ::StringW, int32_t, int32_t, ::System::TimeSpan, bool, ::System::ArraySegment_1<uint8_t>)>(&::System::Net::WebSockets::WebSocket::CreateClientWebSocket)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xacf0610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                        {"CreateClientWebSocket", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebSockets::WebSocket._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::WebSockets::WebSocket::*)()>(&::System::Net::WebSockets::WebSocket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xace4e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus> System::Net::WebSockets::WebSocket::get_CloseStatus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Net::WebSockets::WebSocketCloseStatus>>(this, ___internal_method);
}
inline ::StringW System::Net::WebSockets::WebSocket::get_CloseStatusDescription()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocketState System::Net::WebSockets::WebSocket::get_State()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocketState>(this, ___internal_method);
}
inline void System::Net::WebSockets::WebSocket::Abort()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::WebSocket::CloseAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::WebSocket::CloseOutputAsync(::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, closeStatus, statusDescription, cancellationToken);
}
inline void System::Net::WebSockets::WebSocket::Dispose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>* System::Net::WebSockets::WebSocket::ReceiveAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Net::WebSockets::WebSocketReceiveResult*>*>(this, ___internal_method, buffer, cancellationToken);
}
inline ::System::Threading::Tasks::Task* System::Net::WebSockets::WebSocket::SendAsync(::System::ArraySegment_1<uint8_t>  buffer, ::System::Net::WebSockets::WebSocketMessageType  messageType, bool  endOfMessage, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::WebSockets::WebSocket*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, buffer, messageType, endOfMessage, cancellationToken);
}
inline ::System::TimeSpan System::Net::WebSockets::WebSocket::get_DefaultKeepAliveInterval()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                        {"get_DefaultKeepAliveInterval", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocket* System::Net::WebSockets::WebSocket::CreateClientWebSocket(::System::IO::Stream*  innerStream, ::StringW  subProtocol, int32_t  receiveBufferSize, int32_t  sendBufferSize, ::System::TimeSpan  keepAliveInterval, bool  useZeroMaskingKey, ::System::ArraySegment_1<uint8_t>  internalBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                        {"CreateClientWebSocket", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebSockets::WebSocket*>(nullptr, ___internal_method, innerStream, subProtocol, receiveBufferSize, sendBufferSize, keepAliveInterval, useZeroMaskingKey, internalBuffer);
}
inline void System::Net::WebSockets::WebSocket::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebSockets::WebSocket*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::WebSockets::WebSocket* System::Net::WebSockets::WebSocket::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebSockets::WebSocket*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Net::WebSockets::WebSocket::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Net::WebSockets::WebSocket::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::WebSockets::WebSocket::WebSocket()   {
}
