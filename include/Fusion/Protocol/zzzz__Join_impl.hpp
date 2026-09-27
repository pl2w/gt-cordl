#pragma once
// IWYU pragma private; include "Fusion/Protocol/Join.hpp"
#include "Fusion/Protocol/zzzz__JoinMessageType_impl.hpp"
#include "Fusion/Protocol/zzzz__JoinRequests_impl.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Protocol/zzzz__PeerMode_impl.hpp"
#include "Fusion/Protocol/zzzz__PluginGameMode_impl.hpp"
#include "Fusion/Protocol/zzzz__Join_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Protocol/zzzz__JoinMessageType_def.hpp"
#include "Fusion/Protocol/zzzz__JoinRequests_def.hpp"
#include "Fusion/Protocol/zzzz__PeerMode_def.hpp"
#include "Fusion/Protocol/zzzz__PluginGameMode_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::Join._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Join::*)()>(&::Fusion::Protocol::Join::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6023d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Join*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Join._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Join::*)(::Fusion::Protocol::JoinMessageType, ::Fusion::Protocol::PluginGameMode, ::Fusion::Protocol::PeerMode, int32_t, ::Fusion::Protocol::JoinRequests, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::Fusion::Protocol::ProtocolMessageVersion, ::System::Version*)>(&::Fusion::Protocol::Join::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6023d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Join*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::JoinMessageType>(), ::i2c::type_of<::Fusion::Protocol::PluginGameMode>(), ::i2c::type_of<::Fusion::Protocol::PeerMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::JoinRequests>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Join.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::Join::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::Join::SerializeProtected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6023de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Join*>(),
                    {::i2c::class_of<::Fusion::Protocol::Join*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::Join.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::Join::*)()>(&::Fusion::Protocol::Join::ToString)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x6023ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::Join*>(),
                    {::i2c::class_of<::Fusion::Protocol::Join*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::Fusion::Protocol::JoinMessageType& Fusion::Protocol::Join::__cordl_internal_get_Type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr ::Fusion::Protocol::JoinMessageType const& Fusion::Protocol::Join::__cordl_internal_get_Type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Type;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_Type(::Fusion::Protocol::JoinMessageType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Type = value;
}
constexpr ::Fusion::Protocol::PluginGameMode& Fusion::Protocol::Join::__cordl_internal_get_GameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr ::Fusion::Protocol::PluginGameMode const& Fusion::Protocol::Join::__cordl_internal_get_GameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GameMode;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_GameMode(::Fusion::Protocol::PluginGameMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GameMode = value;
}
constexpr ::Fusion::Protocol::PeerMode& Fusion::Protocol::Join::__cordl_internal_get_PeerMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerMode;
}
constexpr ::Fusion::Protocol::PeerMode const& Fusion::Protocol::Join::__cordl_internal_get_PeerMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PeerMode;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_PeerMode(::Fusion::Protocol::PeerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PeerMode = value;
}
constexpr ::Fusion::Protocol::JoinRequests& Fusion::Protocol::Join::__cordl_internal_get_JoinRequests()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinRequests;
}
constexpr ::Fusion::Protocol::JoinRequests const& Fusion::Protocol::Join::__cordl_internal_get_JoinRequests() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinRequests;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_JoinRequests(::Fusion::Protocol::JoinRequests  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinRequests = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Protocol::Join::__cordl_internal_get_UniqueId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueId;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Protocol::Join::__cordl_internal_get_UniqueId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueId;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_UniqueId(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UniqueId = value;
}
constexpr int32_t& Fusion::Protocol::Join::__cordl_internal_get_PlayerRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRef;
}
constexpr int32_t const& Fusion::Protocol::Join::__cordl_internal_get_PlayerRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRef;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_PlayerRef(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerRef = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Protocol::Join::__cordl_internal_get_EncryptionKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionKey;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Protocol::Join::__cordl_internal_get_EncryptionKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionKey;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_EncryptionKey(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptionKey = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Protocol::Join::__cordl_internal_get_EncryptionKeySecret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionKeySecret;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Protocol::Join::__cordl_internal_get_EncryptionKeySecret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EncryptionKeySecret;
}
constexpr void Fusion::Protocol::Join::__cordl_internal_set_EncryptionKeySecret(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EncryptionKeySecret = value;
}
inline void Fusion::Protocol::Join::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Join*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::Join::_ctor(::Fusion::Protocol::JoinMessageType  type, ::Fusion::Protocol::PluginGameMode  mode, ::Fusion::Protocol::PeerMode  peerMode, int32_t  playerRef, ::Fusion::Protocol::JoinRequests  joinRequests, ::ArrayW<uint8_t>  uniqueID, ::ArrayW<uint8_t>  encryptionKey, ::ArrayW<uint8_t>  encryptionKeySecret, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::Join*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Protocol::JoinMessageType>(), ::i2c::type_of<::Fusion::Protocol::PluginGameMode>(), ::i2c::type_of<::Fusion::Protocol::PeerMode>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Protocol::JoinRequests>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, mode, peerMode, playerRef, joinRequests, uniqueID, encryptionKey, encryptionKeySecret, protocolVersion, serializationVersion);
}
inline void Fusion::Protocol::Join::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Join*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::Join::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::Join*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::Join* Fusion::Protocol::Join::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::Join*>());
}
inline ::Fusion::Protocol::Join* Fusion::Protocol::Join::New_ctor(::Fusion::Protocol::JoinMessageType  type, ::Fusion::Protocol::PluginGameMode  mode, ::Fusion::Protocol::PeerMode  peerMode, int32_t  playerRef, ::Fusion::Protocol::JoinRequests  joinRequests, ::ArrayW<uint8_t>  uniqueID, ::ArrayW<uint8_t>  encryptionKey, ::ArrayW<uint8_t>  encryptionKeySecret, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::Join*>(type, mode, peerMode, playerRef, joinRequests, uniqueID, encryptionKey, encryptionKeySecret, protocolVersion, serializationVersion));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::Join::Join()   {
}
