#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetAddress.hpp"
#include "NanoSockets/zzzz__Address_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Protocol/zzzz__BitStream_def.hpp"
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetAddress_SubnetMask.get_SubnetMasks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Fusion::Sockets::NetAddress> (*)()>(&::Fusion::Sockets::NetAddress_SubnetMask::get_SubnetMasks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6026bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress_SubnetMask*>(),
                        {"get_SubnetMasks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress_SubnetMask.IsSameSubNet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetAddress_SubnetMask::IsSameSubNet)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x6026c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress_SubnetMask*>(),
                        {"IsSameSubNet", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress_SubnetMask.GetNetworkAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (*)(::Fusion::Sockets::NetAddress, ::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetAddress_SubnetMask::GetNetworkAddress)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6026f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress_SubnetMask*>(),
                        {"GetNetworkAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::Sockets::NetAddress_SubnetMask::setStaticF__SubnetMasks_k__BackingField(::ArrayW<::Fusion::Sockets::NetAddress>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Fusion::Sockets::NetAddress>, "<SubnetMasks>k__BackingField", ::Fusion::Sockets::NetAddress_SubnetMask*>(std::forward<::ArrayW<::Fusion::Sockets::NetAddress>>(value));
}
inline ::ArrayW<::Fusion::Sockets::NetAddress> Fusion::Sockets::NetAddress_SubnetMask::getStaticF__SubnetMasks_k__BackingField()  {
return ::cordl_internals::getStaticField<::ArrayW<::Fusion::Sockets::NetAddress>, "<SubnetMasks>k__BackingField", ::Fusion::Sockets::NetAddress_SubnetMask*>();
}
inline ::ArrayW<::Fusion::Sockets::NetAddress> Fusion::Sockets::NetAddress_SubnetMask::get_SubnetMasks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress_SubnetMask*>(),
                        {"get_SubnetMasks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Fusion::Sockets::NetAddress>>(nullptr, ___internal_method);
}
inline bool Fusion::Sockets::NetAddress_SubnetMask::IsSameSubNet(::Fusion::Sockets::NetAddress  addressA, ::Fusion::Sockets::NetAddress  addressB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress_SubnetMask*>(),
                        {"IsSameSubNet", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, addressA, addressB);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetAddress_SubnetMask::GetNetworkAddress(::Fusion::Sockets::NetAddress  netAddress, ::Fusion::Sockets::NetAddress  subnetMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress_SubnetMask*>(),
                        {"GetNetworkAddress", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>(), ::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(nullptr, ___internal_method, netAddress, subnetMask);
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetAddress_SubnetMask::NetAddress_SubnetMask()   {
}
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.get_ActorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::get_ActorId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6025f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_ActorId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.get_IsRelayAddr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::get_IsRelayAddr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6025f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsRelayAddr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.get_IsIPv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::get_IsIPv6)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6025ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsIPv6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.get_IsIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::get_IsIPv4)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6026074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsIPv4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::get_IsValid)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6024a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.get_HasAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::get_HasAddress)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6026124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_HasAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.FromActorId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (*)(int32_t)>(&::Fusion::Sockets::NetAddress::FromActorId)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x60261f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"FromActorId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.Hash64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetAddress::Hash64)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x602625c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Hash64", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.Any
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (*)(uint16_t)>(&::Fusion::Sockets::NetAddress::Any)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6026280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Any", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.CreateFromIpPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Sockets::NetAddress (*)(::StringW, uint16_t)>(&::Fusion::Sockets::NetAddress::CreateFromIpPort)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x6026338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"CreateFromIpPort", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.Serialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Sockets::NetAddress::*)(::Fusion::Protocol::BitStream*)>(&::Fusion::Sockets::NetAddress::Serialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6024c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::Protocol::BitStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetAddress::*)(::Fusion::Sockets::NetAddress)>(&::Fusion::Sockets::NetAddress::Equals)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60260e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetAddress::*)(::System::Object*)>(&::Fusion::Sockets::NetAddress::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60264ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                    {::i2c::class_of<::Fusion::Sockets::NetAddress>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x602659c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                    {::i2c::class_of<::Fusion::Sockets::NetAddress>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetAddress.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::NetAddress::*)()>(&::Fusion::Sockets::NetAddress::ToString)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x60265ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                    {::i2c::class_of<::Fusion::Sockets::NetAddress>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::NanoSockets::Address& Fusion::Sockets::NetAddress::__cordl_internal_get_NativeAddress()  {
return this->___NativeAddress;
}
constexpr ::NanoSockets::Address const& Fusion::Sockets::NetAddress::__cordl_internal_get_NativeAddress() const {
return this->___NativeAddress;
}
constexpr void Fusion::Sockets::NetAddress::__cordl_internal_set_NativeAddress(::NanoSockets::Address  value)  {
this->___NativeAddress = value;
}
constexpr uint64_t& Fusion::Sockets::NetAddress::__cordl_internal_get_Block0()  {
return this->___Block0;
}
constexpr uint64_t const& Fusion::Sockets::NetAddress::__cordl_internal_get_Block0() const {
return this->___Block0;
}
constexpr void Fusion::Sockets::NetAddress::__cordl_internal_set_Block0(uint64_t  value)  {
this->___Block0 = value;
}
constexpr uint64_t& Fusion::Sockets::NetAddress::__cordl_internal_get_Block1()  {
return this->___Block1;
}
constexpr uint64_t const& Fusion::Sockets::NetAddress::__cordl_internal_get_Block1() const {
return this->___Block1;
}
constexpr void Fusion::Sockets::NetAddress::__cordl_internal_set_Block1(uint64_t  value)  {
this->___Block1 = value;
}
constexpr uint64_t& Fusion::Sockets::NetAddress::__cordl_internal_get_Block2()  {
return this->___Block2;
}
constexpr uint64_t const& Fusion::Sockets::NetAddress::__cordl_internal_get_Block2() const {
return this->___Block2;
}
constexpr void Fusion::Sockets::NetAddress::__cordl_internal_set_Block2(uint64_t  value)  {
this->___Block2 = value;
}
constexpr int32_t& Fusion::Sockets::NetAddress::__cordl_internal_get__actorId()  {
return this->____actorId;
}
constexpr int32_t const& Fusion::Sockets::NetAddress::__cordl_internal_get__actorId() const {
return this->____actorId;
}
constexpr void Fusion::Sockets::NetAddress::__cordl_internal_set__actorId(int32_t  value)  {
this->____actorId = value;
}
inline void Fusion::Sockets::NetAddress::setStaticF_AnyIPv4Addr(::Fusion::Sockets::NetAddress  value)  {
::cordl_internals::setStaticField<::Fusion::Sockets::NetAddress, "AnyIPv4Addr", ::Fusion::Sockets::NetAddress>(std::forward<::Fusion::Sockets::NetAddress>(value));
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetAddress::getStaticF_AnyIPv4Addr()  {
return ::cordl_internals::getStaticField<::Fusion::Sockets::NetAddress, "AnyIPv4Addr", ::Fusion::Sockets::NetAddress>();
}
inline void Fusion::Sockets::NetAddress::setStaticF_AnyIPv6Addr(::Fusion::Sockets::NetAddress  value)  {
::cordl_internals::setStaticField<::Fusion::Sockets::NetAddress, "AnyIPv6Addr", ::Fusion::Sockets::NetAddress>(std::forward<::Fusion::Sockets::NetAddress>(value));
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetAddress::getStaticF_AnyIPv6Addr()  {
return ::cordl_internals::getStaticField<::Fusion::Sockets::NetAddress, "AnyIPv6Addr", ::Fusion::Sockets::NetAddress>();
}
inline int32_t Fusion::Sockets::NetAddress::get_ActorId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_ActorId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetAddress::get_IsRelayAddr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsRelayAddr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetAddress::get_IsIPv6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsIPv6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetAddress::get_IsIPv4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsIPv4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetAddress::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetAddress::get_HasAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"get_HasAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetAddress::FromActorId(int32_t  actorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"FromActorId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(nullptr, ___internal_method, actorId);
}
inline uint64_t Fusion::Sockets::NetAddress::Hash64(::Fusion::Sockets::NetAddress  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Hash64", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, address);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetAddress::Any(uint16_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Any", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(nullptr, ___internal_method, port);
}
inline ::Fusion::Sockets::NetAddress Fusion::Sockets::NetAddress::CreateFromIpPort(::StringW  ip, uint16_t  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"CreateFromIpPort", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Sockets::NetAddress>(nullptr, ___internal_method, ip, port);
}
inline void Fusion::Sockets::NetAddress::Serialize(::Fusion::Protocol::BitStream*  stream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Serialize", {}, {::i2c::type_of<::Fusion::Protocol::BitStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline bool Fusion::Sockets::NetAddress::Equals(::Fusion::Sockets::NetAddress  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetAddress>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Sockets::NetAddress>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::Sockets::NetAddress::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetAddress>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::Sockets::NetAddress::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetAddress>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::Sockets::NetAddress::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetAddress>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Sockets::NetAddress>"
constexpr  Fusion::Sockets::NetAddress::operator ::System::IEquatable_1<::Fusion::Sockets::NetAddress>*()  {
return static_cast<::System::IEquatable_1<::Fusion::Sockets::NetAddress>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::Sockets::NetAddress>"
constexpr ::System::IEquatable_1<::Fusion::Sockets::NetAddress>* Fusion::Sockets::NetAddress::i___System__IEquatable_1___Fusion__Sockets__NetAddress_()  {
return static_cast<::System::IEquatable_1<::Fusion::Sockets::NetAddress>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "NativeAddress", ty: "::NanoSockets::Address", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Block0", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Block1", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Block2", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_actorId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetAddress::NetAddress(::NanoSockets::Address  NativeAddress, uint64_t  Block0, uint64_t  Block1, uint64_t  Block2, int32_t  _actorId) noexcept  {
this->NativeAddress = NativeAddress;
this->Block0 = Block0;
this->Block1 = Block1;
this->Block2 = Block2;
this->_actorId = _actorId;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetAddress::NetAddress()   {
}
