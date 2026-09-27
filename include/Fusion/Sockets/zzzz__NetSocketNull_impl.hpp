#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketNull.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSocketNull_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNull::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketNull::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6035e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetSocket (::Fusion::Sockets::NetSocketNull::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketNull::Create)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6035e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::NetSocketNull::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketNull::Bind)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6035e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketNull::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t)>(&::Fusion::Sockets::NetSocketNull::Receive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6035e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketNull::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t, bool)>(&::Fusion::Sockets::NetSocketNull::Send)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6035e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNull::*)(::Fusion::Sockets::NetSocket)>(&::Fusion::Sockets::NetSocketNull::Destroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6035e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.DeleteEncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNull::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetSocketNull::DeleteEncryptionKey)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6035ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull.SetupEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNull::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetSocketNull::SetupEncryption)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6035ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNull._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNull::*)()>(&::Fusion::Sockets::NetSocketNull::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6035ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::NetSocketNull::Initialize(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::Fusion::Sockets::NetSocket Fusion::Sockets::NetSocketNull::Create(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetSocket>(this, ___internal_method, config);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetSocketNull::Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method, socket, config);
}
inline int32_t Fusion::Sockets::NetSocketNull::Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength);
}
inline int32_t Fusion::Sockets::NetSocketNull::Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength, reliable);
}
inline void Fusion::Sockets::NetSocketNull::Destroy(::Fusion::Sockets::NetSocket  netSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSocket);
}
inline void Fusion::Sockets::NetSocketNull::DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Fusion::Sockets::NetSocketNull::SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, encryptedKey);
}
inline void Fusion::Sockets::NetSocketNull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNull*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetSocketNull* Fusion::Sockets::NetSocketNull::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::NetSocketNull*>());
}
/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr  Fusion::Sockets::NetSocketNull::operator ::Fusion::Sockets::INetSocket*() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* Fusion::Sockets::NetSocketNull::i___Fusion__Sockets__INetSocket() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSocketNull::NetSocketNull()   {
}
