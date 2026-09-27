#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketRelay.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSocketRelay_def.hpp"
#include "Fusion/Protocol/zzzz__ICommunicator_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.get_LocalAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::NetSocketRelay::*)()>(&::Fusion::Sockets::NetSocketRelay::get_LocalAddress)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6035eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"get_LocalAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Protocol::ICommunicator*)>(&::Fusion::Sockets::NetSocketRelay::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6033d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ICommunicator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketRelay::Bind)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x60345b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetSocket (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketRelay::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6033ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Sockets::NetSocket)>(&::Fusion::Sockets::NetSocketRelay::Destroy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6033fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.DeleteEncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetSocketRelay::DeleteEncryptionKey)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6034064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.SetupEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketRelay::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetSocketRelay::SetupEncryption)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6034120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketRelay::Initialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6033de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t)>(&::Fusion::Sockets::NetSocketRelay::Receive)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6034a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketRelay.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketRelay::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t, bool)>(&::Fusion::Sockets::NetSocketRelay::Send)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6034c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Fusion::Sockets::NetSocketRelay::__cordl_internal_get__handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr int64_t const& Fusion::Sockets::NetSocketRelay::__cordl_internal_get__handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handle;
}
constexpr void Fusion::Sockets::NetSocketRelay::__cordl_internal_set__handle(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handle = value;
}
constexpr ::Fusion::Protocol::ICommunicator*& Fusion::Sockets::NetSocketRelay::__cordl_internal_get__communicator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communicator;
}
constexpr ::Fusion::Protocol::ICommunicator* const& Fusion::Sockets::NetSocketRelay::__cordl_internal_get__communicator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____communicator;
}
constexpr void Fusion::Sockets::NetSocketRelay::__cordl_internal_set__communicator(::Fusion::Protocol::ICommunicator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____communicator = value;
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetSocketRelay::get_LocalAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"get_LocalAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method);
}
inline void Fusion::Sockets::NetSocketRelay::_ctor(::Fusion::Protocol::ICommunicator*  communicator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::ICommunicator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, communicator);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetSocketRelay::Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method, socket, config);
}
inline ::Fusion::Sockets::NetSocket Fusion::Sockets::NetSocketRelay::Create(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetSocket>(this, ___internal_method, config);
}
inline void Fusion::Sockets::NetSocketRelay::Destroy(::Fusion::Sockets::NetSocket  netSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSocket);
}
inline void Fusion::Sockets::NetSocketRelay::DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Fusion::Sockets::NetSocketRelay::SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, encryptedKey);
}
inline void Fusion::Sockets::NetSocketRelay::Initialize(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline int32_t Fusion::Sockets::NetSocketRelay::Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength);
}
inline int32_t Fusion::Sockets::NetSocketRelay::Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketRelay*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength, reliable);
}
inline ::Fusion::Sockets::NetSocketRelay* Fusion::Sockets::NetSocketRelay::New_ctor(::Fusion::Protocol::ICommunicator*  communicator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::NetSocketRelay*>(communicator));
}
/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr  Fusion::Sockets::NetSocketRelay::operator ::Fusion::Sockets::INetSocket*() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* Fusion::Sockets::NetSocketRelay::i___Fusion__Sockets__INetSocket() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSocketRelay::NetSocketRelay()   {
}
