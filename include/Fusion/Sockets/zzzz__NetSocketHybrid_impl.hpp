#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketHybrid.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSocketHybrid_def.hpp"
#include "Fusion/Protocol/zzzz__ICommunicator_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocketNative_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocketRelay_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Protocol::ICommunicator*)>(&::Fusion::Sockets::NetSocketHybrid::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6033c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ICommunicator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketHybrid::Initialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6033dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetSocket (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketHybrid::Create)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6033e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Sockets::NetSocket)>(&::Fusion::Sockets::NetSocketHybrid::Destroy)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6033f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.DeleteEncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetSocketHybrid::DeleteEncryptionKey)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6033ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.SetupEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketHybrid::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetSocketHybrid::SetupEncryption)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6034100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketHybrid::Bind)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60344c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t)>(&::Fusion::Sockets::NetSocketHybrid::Receive)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x60347cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketHybrid.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketHybrid::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t, bool)>(&::Fusion::Sockets::NetSocketHybrid::Send)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6034bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Sockets::NetSocket& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__relayNetSocketRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relayNetSocketRef;
}
constexpr ::Fusion::Sockets::NetSocket const& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__relayNetSocketRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relayNetSocketRef;
}
constexpr void Fusion::Sockets::NetSocketHybrid::__cordl_internal_set__relayNetSocketRef(::Fusion::Sockets::NetSocket  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relayNetSocketRef = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__relayAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relayAddress;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__relayAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relayAddress;
}
constexpr void Fusion::Sockets::NetSocketHybrid::__cordl_internal_set__relayAddress(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relayAddress = value;
}
constexpr ::Fusion::Sockets::NetSocketRelay*& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__relaySocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaySocket;
}
constexpr ::Fusion::Sockets::NetSocketRelay* const& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__relaySocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relaySocket;
}
constexpr void Fusion::Sockets::NetSocketHybrid::__cordl_internal_set__relaySocket(::Fusion::Sockets::NetSocketRelay*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relaySocket = value;
}
constexpr ::Fusion::Sockets::NetSocketNative*& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__nativeSocket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeSocket;
}
constexpr ::Fusion::Sockets::NetSocketNative* const& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__nativeSocket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeSocket;
}
constexpr void Fusion::Sockets::NetSocketHybrid::__cordl_internal_set__nativeSocket(::Fusion::Sockets::NetSocketNative*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeSocket = value;
}
constexpr ::Fusion::Protocol::ICommunicator*& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr ::Fusion::Protocol::ICommunicator* const& Fusion::Sockets::NetSocketHybrid::__cordl_internal_get__client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____client;
}
constexpr void Fusion::Sockets::NetSocketHybrid::__cordl_internal_set__client(::Fusion::Protocol::ICommunicator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____client = value;
}
inline void Fusion::Sockets::NetSocketHybrid::_ctor(::Fusion::Protocol::ICommunicator*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ICommunicator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Fusion::Sockets::NetSocketHybrid::Initialize(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::Fusion::Sockets::NetSocket Fusion::Sockets::NetSocketHybrid::Create(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetSocket>(this, ___internal_method, config);
}
inline void Fusion::Sockets::NetSocketHybrid::Destroy(::Fusion::Sockets::NetSocket  netSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSocket);
}
inline void Fusion::Sockets::NetSocketHybrid::DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Fusion::Sockets::NetSocketHybrid::SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, encryptedKey);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetSocketHybrid::Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method, socket, config);
}
inline int32_t Fusion::Sockets::NetSocketHybrid::Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength);
}
inline int32_t Fusion::Sockets::NetSocketHybrid::Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketHybrid*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength, reliable);
}
inline ::Fusion::Sockets::NetSocketHybrid* Fusion::Sockets::NetSocketHybrid::New_ctor(::Fusion::Protocol::ICommunicator*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::NetSocketHybrid*>(client));
}
/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr  Fusion::Sockets::NetSocketHybrid::operator ::Fusion::Sockets::INetSocket*() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* Fusion::Sockets::NetSocketHybrid::i___Fusion__Sockets__INetSocket() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSocketHybrid::NetSocketHybrid()   {
}
