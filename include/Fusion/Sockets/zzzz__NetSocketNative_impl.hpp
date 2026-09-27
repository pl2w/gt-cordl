#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetSocketNative.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/zzzz__NetSocketNative_def.hpp"
#include "Fusion/Encryption/zzzz__DataEncryptor_def.hpp"
#include "Fusion/Encryption/zzzz__EncryptionManager_2_def.hpp"
#include "Fusion/Encryption/zzzz__EncryptionToken_def.hpp"
#include "Fusion/Sockets/zzzz__INetSocket_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__NetConfig_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocketNative_def.hpp"
#include "Fusion/Sockets/zzzz__NetSocket_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketNative::Initialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6033e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetSocket (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketNative::Create)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6033ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.Bind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetConfig)>(&::Fusion::Sockets::NetSocketNative::Bind)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6034624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t)>(&::Fusion::Sockets::NetSocketNative::Receive)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x60348f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket, ::Fusion::Sockets::NetAddress*, uint8_t*, int32_t, bool)>(&::Fusion::Sockets::NetSocketNative::Send)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6034e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetSocket)>(&::Fusion::Sockets::NetSocketNative::Destroy)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6033fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.SetupEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNative::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Fusion::Sockets::NetSocketNative::SetupEncryption)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6034124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.HandleEncryptionOutgoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetAddress*, ::by_ref<uint8_t*>, ::by_ref<int32_t>)>(&::Fusion::Sockets::NetSocketNative::HandleEncryptionOutgoing)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x60358f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"HandleEncryptionOutgoing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.HandleEncryptionIngoing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetAddress*, ::by_ref<uint8_t*>, int32_t, ::by_ref<int32_t>)>(&::Fusion::Sockets::NetSocketNative::HandleEncryptionIngoing)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0x6035440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"HandleEncryptionIngoing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.ResetEncryption
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNative::*)()>(&::Fusion::Sockets::NetSocketNative::ResetEncryption)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6035d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"ResetEncryption", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative.DeleteEncryptionKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNative::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetSocketNative::DeleteEncryptionKey)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6034068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNative::*)()>(&::Fusion::Sockets::NetSocketNative::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6033da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>*& Fusion::Sockets::NetSocketNative::__cordl_internal_get__encryptionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionManager;
}
constexpr ::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>* const& Fusion::Sockets::NetSocketNative::__cordl_internal_get__encryptionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionManager;
}
constexpr void Fusion::Sockets::NetSocketNative::__cordl_internal_set__encryptionManager(::Fusion::Encryption::EncryptionManager_2<::Fusion::Sockets::NetAddress,::Fusion::Encryption::DataEncryptor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptionManager = value;
}
constexpr ::Fusion::Encryption::EncryptionToken*& Fusion::Sockets::NetSocketNative::__cordl_internal_get__encryptionToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionToken;
}
constexpr ::Fusion::Encryption::EncryptionToken* const& Fusion::Sockets::NetSocketNative::__cordl_internal_get__encryptionToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionToken;
}
constexpr void Fusion::Sockets::NetSocketNative::__cordl_internal_set__encryptionToken(::Fusion::Encryption::EncryptionToken*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptionToken = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Sockets::NetSocketNative::__cordl_internal_get__remoteEncryptionHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteEncryptionHandler;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Sockets::NetSocketNative::__cordl_internal_get__remoteEncryptionHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____remoteEncryptionHandler;
}
constexpr void Fusion::Sockets::NetSocketNative::__cordl_internal_set__remoteEncryptionHandler(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____remoteEncryptionHandler = value;
}
constexpr uint8_t*& Fusion::Sockets::NetSocketNative::__cordl_internal_get__encryptionBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionBuffer;
}
constexpr uint8_t* const& Fusion::Sockets::NetSocketNative::__cordl_internal_get__encryptionBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encryptionBuffer;
}
constexpr void Fusion::Sockets::NetSocketNative::__cordl_internal_set__encryptionBuffer(uint8_t*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encryptionBuffer = value;
}
inline void Fusion::Sockets::NetSocketNative::Initialize(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Initialize", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config);
}
inline ::Fusion::Sockets::NetSocket Fusion::Sockets::NetSocketNative::Create(::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Create", {}, {::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetSocket>(this, ___internal_method, config);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetSocketNative::Bind(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetConfig  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Bind", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetConfig>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(this, ___internal_method, socket, config);
}
inline int32_t Fusion::Sockets::NetSocketNative::Receive(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Receive", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength);
}
inline int32_t Fusion::Sockets::NetSocketNative::Send(::Fusion::Sockets::NetSocket  socket, ::Fusion::Sockets::NetAddress*  address, uint8_t*  buffer, int32_t  bufferLength, bool  reliable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Send", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>(), ::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, socket, address, buffer, bufferLength, reliable);
}
inline void Fusion::Sockets::NetSocketNative::Destroy(::Fusion::Sockets::NetSocket  netSocket)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"Destroy", {}, {::i2c::type_of<::Fusion::Sockets::NetSocket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSocket);
}
inline void Fusion::Sockets::NetSocketNative::SetupEncryption(::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  encryptedKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"SetupEncryption", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, encryptedKey);
}
inline bool Fusion::Sockets::NetSocketNative::HandleEncryptionOutgoing(::Fusion::Sockets::NetAddress*  address, ::by_ref<uint8_t*>  buffer, ::by_ref<int32_t>  bufferLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"HandleEncryptionOutgoing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, address, buffer, bufferLength);
}
inline bool Fusion::Sockets::NetSocketNative::HandleEncryptionIngoing(::Fusion::Sockets::NetAddress*  address, ::by_ref<uint8_t*>  buffer, int32_t  bufferLength, ::by_ref<int32_t>  received)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"HandleEncryptionIngoing", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress*>(), ::i2c::type_of<::by_ref<uint8_t*>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, address, buffer, bufferLength, received);
}
inline void Fusion::Sockets::NetSocketNative::ResetEncryption()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"ResetEncryption", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Sockets::NetSocketNative::DeleteEncryptionKey(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {"DeleteEncryptionKey", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void Fusion::Sockets::NetSocketNative::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Sockets::NetSocketNative* Fusion::Sockets::NetSocketNative::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::NetSocketNative*>());
}
/// @brief Convert operator to "::Fusion::Sockets::INetSocket"
constexpr  Fusion::Sockets::NetSocketNative::operator ::Fusion::Sockets::INetSocket*() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Sockets::INetSocket"
constexpr ::Fusion::Sockets::INetSocket* Fusion::Sockets::NetSocketNative::i___Fusion__Sockets__INetSocket() noexcept {
return static_cast<::Fusion::Sockets::INetSocket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSocketNative::NetSocketNative()   {
}
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetSocketNative___c::*)()>(&::Fusion::Sockets::NetSocketNative___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6035e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetSocketNative___c._SetupEncryption_b__15_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetSocketNative___c::*)(uint8_t)>(&::Fusion::Sockets::NetSocketNative___c::_SetupEncryption_b__15_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6035e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative___c*>(),
                        {"<SetupEncryption>b__15_0", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::NetSocketNative___c::setStaticF___9(::Fusion::Sockets::NetSocketNative___c*  value)  {
::cordl_internals::setStaticField<::Fusion::Sockets::NetSocketNative___c*, "<>9", ::Fusion::Sockets::NetSocketNative___c*>(std::forward<::Fusion::Sockets::NetSocketNative___c*>(value));
}
inline ::Fusion::Sockets::NetSocketNative___c* Fusion::Sockets::NetSocketNative___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Fusion::Sockets::NetSocketNative___c*, "<>9", ::Fusion::Sockets::NetSocketNative___c*>();
}
inline void Fusion::Sockets::NetSocketNative___c::setStaticF___9__15_0(::System::Predicate_1<uint8_t>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<uint8_t>*, "<>9__15_0", ::Fusion::Sockets::NetSocketNative___c*>(std::forward<::System::Predicate_1<uint8_t>*>(value));
}
inline ::System::Predicate_1<uint8_t>* Fusion::Sockets::NetSocketNative___c::getStaticF___9__15_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<uint8_t>*, "<>9__15_0", ::Fusion::Sockets::NetSocketNative___c*>();
}
inline void Fusion::Sockets::NetSocketNative___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Sockets::NetSocketNative___c::_SetupEncryption_b__15_0(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetSocketNative___c*>(),
                        {"<SetupEncryption>b__15_0", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, b);
}
inline ::Fusion::Sockets::NetSocketNative___c* Fusion::Sockets::NetSocketNative___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Sockets::NetSocketNative___c*>());
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetSocketNative___c::NetSocketNative___c()   {
}
