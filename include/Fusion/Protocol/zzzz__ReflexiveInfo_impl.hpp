#pragma once
// IWYU pragma private; include "Fusion/Protocol/ReflexiveInfo.hpp"
#include "Fusion/Protocol/zzzz__Message_impl.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_impl.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_impl.hpp"
#include "Fusion/Protocol/zzzz__ReflexiveInfo_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Protocol/zzzz__ProtocolMessageVersion_def.hpp"
#include "Fusion/Sockets/Stun/zzzz__NATType_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::Fusion::Protocol::ReflexiveInfo.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Protocol::ReflexiveInfo::*)()>(&::Fusion::Protocol::ReflexiveInfo::get_IsValid)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x60249a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(),
                    {::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ReflexiveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ReflexiveInfo::*)()>(&::Fusion::Protocol::ReflexiveInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6024b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ReflexiveInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ReflexiveInfo::*)(int32_t, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress, ::Fusion::Sockets::Stun::NATType, ::ArrayW<uint8_t>, ::Fusion::Protocol::ProtocolMessageVersion, ::System::Version*)>(&::Fusion::Protocol::ReflexiveInfo::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6024b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::Stun::NATType>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ReflexiveInfo.SerializeProtected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Protocol::ReflexiveInfo::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Protocol::ReflexiveInfo::SerializeProtected)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6024b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(),
                    {::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Protocol::ReflexiveInfo.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Protocol::ReflexiveInfo::*)()>(&::Fusion::Protocol::ReflexiveInfo::ToString)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x6024cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(),
                    {::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_ActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActorNr;
}
constexpr int32_t const& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_ActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActorNr;
}
constexpr void Fusion::Protocol::ReflexiveInfo::__cordl_internal_set_ActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActorNr = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_PublicAddr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicAddr;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_PublicAddr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicAddr;
}
constexpr void Fusion::Protocol::ReflexiveInfo::__cordl_internal_set_PublicAddr(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublicAddr = value;
}
constexpr ::Fusion::Sockets::NetAddress& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_PrivateAddr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrivateAddr;
}
constexpr ::Fusion::Sockets::NetAddress const& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_PrivateAddr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PrivateAddr;
}
constexpr void Fusion::Protocol::ReflexiveInfo::__cordl_internal_set_PrivateAddr(::Fusion::Sockets::NetAddress  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PrivateAddr = value;
}
constexpr ::Fusion::Sockets::Stun::NATType& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_NatType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NatType;
}
constexpr ::Fusion::Sockets::Stun::NATType const& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_NatType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NatType;
}
constexpr void Fusion::Protocol::ReflexiveInfo::__cordl_internal_set_NatType(::Fusion::Sockets::Stun::NATType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NatType = value;
}
constexpr ::ArrayW<uint8_t>& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_UniqueId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueId;
}
constexpr ::ArrayW<uint8_t> const& Fusion::Protocol::ReflexiveInfo::__cordl_internal_get_UniqueId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UniqueId;
}
constexpr void Fusion::Protocol::ReflexiveInfo::__cordl_internal_set_UniqueId(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UniqueId = value;
}
inline bool Fusion::Protocol::ReflexiveInfo::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Protocol::ReflexiveInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Protocol::ReflexiveInfo::_ctor(int32_t  actorNr, ::Fusion::Sockets::NetAddress  publicAddr, ::Fusion::Sockets::NetAddress  privateAddr, ::Fusion::Sockets::Stun::NATType  stunNatType, ::ArrayW<uint8_t>  uniqueID, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::Stun::NATType>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Fusion::Protocol::ProtocolMessageVersion>(), ::i2c::type_of<::System::Version*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr, publicAddr, privateAddr, stunNatType, uniqueID, protocolVersion, serializationVersion);
}
inline void Fusion::Protocol::ReflexiveInfo::SerializeProtected(::Fusion::Protocol::BitStream*  stream)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream);
}
inline ::StringW Fusion::Protocol::ReflexiveInfo::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Protocol::ReflexiveInfo*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Protocol::ReflexiveInfo* Fusion::Protocol::ReflexiveInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::ReflexiveInfo*>());
}
inline ::Fusion::Protocol::ReflexiveInfo* Fusion::Protocol::ReflexiveInfo::New_ctor(int32_t  actorNr, ::Fusion::Sockets::NetAddress  publicAddr, ::Fusion::Sockets::NetAddress  privateAddr, ::Fusion::Sockets::Stun::NATType  stunNatType, ::ArrayW<uint8_t>  uniqueID, ::Fusion::Protocol::ProtocolMessageVersion  protocolVersion, ::System::Version*  serializationVersion)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Protocol::ReflexiveInfo*>(actorNr, publicAddr, privateAddr, stunNatType, uniqueID, protocolVersion, serializationVersion));
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::ReflexiveInfo::ReflexiveInfo()   {
}
