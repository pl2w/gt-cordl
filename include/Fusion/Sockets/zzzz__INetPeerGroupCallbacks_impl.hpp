#pragma once
// IWYU pragma private; include "Fusion/Sockets/INetPeerGroupCallbacks.hpp"
#include "Fusion/Sockets/zzzz__INetPeerGroupCallbacks_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnectFailedReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetConnection_def.hpp"
#include "Fusion/Sockets/zzzz__NetDisconnectReason_def.hpp"
#include "Fusion/Sockets/zzzz__NetSendEnvelope_def.hpp"
#include "Fusion/Sockets/zzzz__OnConnectionRequestReply_def.hpp"
#include "Fusion/Sockets/zzzz__ReliableId_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnConnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnDisconnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetDisconnectReason)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnDisconnected)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnUnreliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnUnreliableData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnUnconnectedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnUnconnectedData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnNotifyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnNotifyLost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::Sockets::NetSendEnvelope>)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyLost)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnNotifyDelivered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*, ::by_ref<::Fusion::Sockets::NetSendEnvelope>)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyDelivered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnNotifyDispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::by_ref<::Fusion::Sockets::NetSendEnvelope>)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyDispose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnReliableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*, ::Fusion::Sockets::ReliableId, uint8_t*)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnReliableData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnConnectionRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::OnConnectionRequestReply (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetAddress, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnConnectionRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnConnectionFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetConnectFailedReason)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnConnectionFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetPeerGroupCallbacks.OnConnectionAttempt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetPeerGroupCallbacks::*)(::Fusion::Sockets::NetConnection*, int32_t, int32_t)>(&::Fusion::Sockets::INetPeerGroupCallbacks::OnConnectionAttempt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 11}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnConnected(::Fusion::Sockets::NetConnection*  connection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnDisconnected(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetDisconnectReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, reason);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnUnreliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, buffer);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnUnconnectedData(::Fusion::Sockets::NetBitBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::NetBitBuffer*  buffer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, buffer);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyLost(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, envelope);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyDelivered(::Fusion::Sockets::NetConnection*  connection, ::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, envelope);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnNotifyDispose(::by_ref<::Fusion::Sockets::NetSendEnvelope>  envelope)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, envelope);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnReliableData(::Fusion::Sockets::NetConnection*  connection, ::Fusion::Sockets::ReliableId  id, uint8_t*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, id, data);
}
inline ::Fusion::Sockets::OnConnectionRequestReply Fusion::Sockets::INetPeerGroupCallbacks::OnConnectionRequest(::Fusion::Sockets::NetAddress  remoteAddress, ::ArrayW<uint8_t>  token, ::ArrayW<uint8_t>  uniqueId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::OnConnectionRequestReply>(this, ___internal_method, remoteAddress, token, uniqueId);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnConnectionFailed(::Fusion::Sockets::NetAddress  address, ::Fusion::Sockets::NetConnectFailedReason  reason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, reason);
}
inline void Fusion::Sockets::INetPeerGroupCallbacks::OnConnectionAttempt(::Fusion::Sockets::NetConnection*  connection, int32_t  attempts, int32_t  totalConnectAttempts)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetPeerGroupCallbacks*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connection, attempts, totalConnectAttempts);
}
