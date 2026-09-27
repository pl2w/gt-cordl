#pragma once
// IWYU pragma private; include "Fusion/Sockets/INetSocket.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetSocket::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::INetSocket::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetSocket (::Fusion::Sockets::INetSocket::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::INetSocket::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::INetSocket::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::INetSocket::Bind)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::INetSocket::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t)>(&::Fusion::Sockets::INetSocket::Receive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::INetSocket::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t, bool)>(&::Fusion::Sockets::INetSocket::Send)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetSocket::*)(::Fusion::Sockets::NetSocket)>(&::Fusion::Sockets::INetSocket::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.DeleteEncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetSocket::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::INetSocket::DeleteEncryptionKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::INetSocket.SetupEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::INetSocket::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::INetSocket::SetupEncryption)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::INetSocket*>(),
                    {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::INetSocket::Initialize(::Fusion::Sockets::NetConfig  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::Fusion::Sockets::NetSocket Fusion::Sockets::INetSocket::Create(::Fusion::Sockets::NetConfig  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetSocket>(this, ___internal_method, config);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::INetSocket::Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method, socket, config);
}
inline int32_t Fusion::Sockets::INetSocket::Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength);
}
inline int32_t Fusion::Sockets::INetSocket::Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength, reliable);
}
inline void Fusion::Sockets::INetSocket::Destroy(::Fusion::Sockets::NetSocket  socket)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void Fusion::Sockets::INetSocket::DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Fusion::Sockets::INetSocket::SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::INetSocket*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, encryptedKey);
}
