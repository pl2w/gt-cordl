#pragma once
// IWYU pragma private; include "System/Net/IPAddress.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/Net/zzzz__IPAddress_ReadOnlyIPAddress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv4)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadb0b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv6)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xadb0b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_PrivateAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_PrivateAddress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_PrivateAddress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.set_PrivateAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(uint32_t)>(&::System::Net::IPAddress::set_PrivateAddress)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xadb0b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_PrivateAddress", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_PrivateScopeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_PrivateScopeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb0b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_PrivateScopeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.set_PrivateScopeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(uint32_t)>(&::System::Net::IPAddress::set_PrivateScopeId)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xadb0b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_PrivateScopeId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(int64_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xadb0b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(::ArrayW<uint8_t>, int64_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xadb0c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(::System::ReadOnlySpan_1<uint8_t>, int64_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xadb0cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(uint16_t*, int32_t, uint32_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xadb0e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(::ArrayW<uint16_t>, uint32_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xadb0f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(::ArrayW<uint8_t>)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xadb0f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xadb100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(int32_t)>(&::System::Net::IPAddress::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xadb1160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Net::IPAddress*>)>(&::System::Net::IPAddress::TryParse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xadb119c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Net::IPAddress*>)>(&::System::Net::IPAddress::TryParse)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xadb13fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (*)(::StringW)>(&::System::Net::IPAddress::Parse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xadb1430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Net::IPAddress::Parse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb14c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.TryWriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)(::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Net::IPAddress::TryWriteBytes)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xadb14d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.WriteIPv6Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(::System::Span_1<uint8_t>)>(&::System::Net::IPAddress::WriteIPv6Bytes)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xadb15dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"WriteIPv6Bytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.WriteIPv4Bytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(::System::Span_1<uint8_t>)>(&::System::Net::IPAddress::WriteIPv4Bytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xadb1668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"WriteIPv4Bytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.GetAddressBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::GetAddressBytes)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xadb16b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"GetAddressBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_AddressFamily
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Sockets::AddressFamily (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_AddressFamily)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xadb17fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_AddressFamily", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_ScopeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_ScopeId)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xadb1814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_ScopeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.set_ScopeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(int64_t)>(&::System::Net::IPAddress::set_ScopeId)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xadb1860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_ScopeId", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xadb1910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IPAddress*>(),
                    {::i2c::class_of<::System::Net::IPAddress*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Net::IPAddress::TryFormat)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadb1a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.HostToNetworkOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::System::Net::IPAddress::HostToNetworkOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb1bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"HostToNetworkOrder", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.HostToNetworkOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Net::IPAddress::HostToNetworkOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb1bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"HostToNetworkOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.HostToNetworkOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int16_t)>(&::System::Net::IPAddress::HostToNetworkOrder)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadb1bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"HostToNetworkOrder", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.NetworkToHostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::System::Net::IPAddress::NetworkToHostOrder)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xadb1c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"NetworkToHostOrder", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.NetworkToHostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Net::IPAddress::NetworkToHostOrder)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xadb1c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"NetworkToHostOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.NetworkToHostOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int16_t)>(&::System::Net::IPAddress::NetworkToHostOrder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xadb1cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"NetworkToHostOrder", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.IsLoopback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Net::IPAddress*)>(&::System::Net::IPAddress::IsLoopback)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xadb1d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"IsLoopback", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv6Multicast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv6Multicast)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xadb1dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6Multicast", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv6LinkLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv6LinkLocal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadb1e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6LinkLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv6SiteLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv6SiteLocal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xadb1e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6SiteLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv6Teredo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv6Teredo)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xadb1e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6Teredo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_IsIPv4MappedToIPv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_IsIPv4MappedToIPv6)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xadb1ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv4MappedToIPv6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.get_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::get_Address)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xadb1f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_Address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.set_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddress::*)(int64_t)>(&::System::Net::IPAddress::set_Address)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xadb1f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_Address", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)(::System::Object*, bool)>(&::System::Net::IPAddress::Equals)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xadb202c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::IPAddress::*)(::System::Object*)>(&::System::Net::IPAddress::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb2154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IPAddress*>(),
                    {::i2c::class_of<::System::Net::IPAddress*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::GetHashCode)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xadb215c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::IPAddress*>(),
                    {::i2c::class_of<::System::Net::IPAddress*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.MapToIPv6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::MapToIPv6)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xadb254c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"MapToIPv6", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.MapToIPv4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (::System::Net::IPAddress::*)()>(&::System::Net::IPAddress::MapToIPv4)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xadb2620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"MapToIPv4", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddress.ThrowAddressNullException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)()>(&::System::Net::IPAddress::ThrowAddressNullException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xadb0ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"ThrowAddressNullException", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& System::Net::IPAddress::__cordl_internal_get__addressOrScopeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressOrScopeId;
}
constexpr uint32_t const& System::Net::IPAddress::__cordl_internal_get__addressOrScopeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____addressOrScopeId;
}
constexpr void System::Net::IPAddress::__cordl_internal_set__addressOrScopeId(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____addressOrScopeId = value;
}
constexpr ::ArrayW<uint16_t>& System::Net::IPAddress::__cordl_internal_get__numbers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numbers;
}
constexpr ::ArrayW<uint16_t> const& System::Net::IPAddress::__cordl_internal_get__numbers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numbers;
}
constexpr void System::Net::IPAddress::__cordl_internal_set__numbers(::ArrayW<uint16_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numbers = value;
}
constexpr ::StringW& System::Net::IPAddress::__cordl_internal_get__toString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toString;
}
constexpr ::StringW const& System::Net::IPAddress::__cordl_internal_get__toString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toString;
}
constexpr void System::Net::IPAddress::__cordl_internal_set__toString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toString = value;
}
constexpr int32_t& System::Net::IPAddress::__cordl_internal_get__hashCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashCode;
}
constexpr int32_t const& System::Net::IPAddress::__cordl_internal_get__hashCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hashCode;
}
constexpr void System::Net::IPAddress::__cordl_internal_set__hashCode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hashCode = value;
}
inline void System::Net::IPAddress::setStaticF_Any(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "Any", ::System::Net::IPAddress*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::getStaticF_Any()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "Any", ::System::Net::IPAddress*>();
}
inline void System::Net::IPAddress::setStaticF_Loopback(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "Loopback", ::System::Net::IPAddress*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::getStaticF_Loopback()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "Loopback", ::System::Net::IPAddress*>();
}
inline void System::Net::IPAddress::setStaticF_Broadcast(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "Broadcast", ::System::Net::IPAddress*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::getStaticF_Broadcast()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "Broadcast", ::System::Net::IPAddress*>();
}
inline void System::Net::IPAddress::setStaticF_None(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "None", ::System::Net::IPAddress*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::getStaticF_None()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "None", ::System::Net::IPAddress*>();
}
inline void System::Net::IPAddress::setStaticF_IPv6Any(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "IPv6Any", ::System::Net::IPAddress*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::getStaticF_IPv6Any()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "IPv6Any", ::System::Net::IPAddress*>();
}
inline void System::Net::IPAddress::setStaticF_IPv6Loopback(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "IPv6Loopback", ::System::Net::IPAddress*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::getStaticF_IPv6Loopback()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "IPv6Loopback", ::System::Net::IPAddress*>();
}
inline void System::Net::IPAddress::setStaticF_IPv6None(::System::Net::IPAddress*  value)  {
::cordl_internals::setStaticField<::System::Net::IPAddress*, "IPv6None", ::System::Net::IPAddress*>(std::forward<::System::Net::IPAddress*>(value));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::getStaticF_IPv6None()  {
return ::cordl_internals::getStaticField<::System::Net::IPAddress*, "IPv6None", ::System::Net::IPAddress*>();
}
inline bool System::Net::IPAddress::get_IsIPv4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::IPAddress::get_IsIPv6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t System::Net::IPAddress::get_PrivateAddress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_PrivateAddress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void System::Net::IPAddress::set_PrivateAddress(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_PrivateAddress", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint32_t System::Net::IPAddress::get_PrivateScopeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_PrivateScopeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void System::Net::IPAddress::set_PrivateScopeId(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_PrivateScopeId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::IPAddress::_ctor(int64_t  newAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAddress);
}
inline void System::Net::IPAddress::_ctor(::ArrayW<uint8_t>  address, int64_t  scopeid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, scopeid);
}
inline void System::Net::IPAddress::_ctor(::System::ReadOnlySpan_1<uint8_t>  address, int64_t  scopeid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, scopeid);
}
inline void System::Net::IPAddress::_ctor(uint16_t*  numbers, int32_t  numbersLength, uint32_t  scopeid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<uint16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numbers, numbersLength, scopeid);
}
inline void System::Net::IPAddress::_ctor(::ArrayW<uint16_t>  numbers, uint32_t  scopeid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numbers, scopeid);
}
inline void System::Net::IPAddress::_ctor(::ArrayW<uint8_t>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::IPAddress::_ctor(::System::ReadOnlySpan_1<uint8_t>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline void System::Net::IPAddress::_ctor(int32_t  newAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAddress);
}
inline bool System::Net::IPAddress::TryParse(::StringW  ipString, ::by_ref<::System::Net::IPAddress*>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ipString, address);
}
inline bool System::Net::IPAddress::TryParse(::System::ReadOnlySpan_1<char16_t>  ipSpan, ::by_ref<::System::Net::IPAddress*>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Net::IPAddress*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ipSpan, address);
}
inline ::System::Net::IPAddress* System::Net::IPAddress::Parse(::StringW  ipString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(nullptr, ___internal_method, ipString);
}
inline ::System::Net::IPAddress* System::Net::IPAddress::Parse(::System::ReadOnlySpan_1<char16_t>  ipSpan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(nullptr, ___internal_method, ipSpan);
}
inline bool System::Net::IPAddress::TryWriteBytes(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, bytesWritten);
}
inline void System::Net::IPAddress::WriteIPv6Bytes(::System::Span_1<uint8_t>  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"WriteIPv6Bytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void System::Net::IPAddress::WriteIPv4Bytes(::System::Span_1<uint8_t>  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"WriteIPv4Bytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline ::ArrayW<uint8_t> System::Net::IPAddress::GetAddressBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"GetAddressBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline ::System::Net::Sockets::AddressFamily System::Net::IPAddress::get_AddressFamily()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_AddressFamily", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Sockets::AddressFamily>(this, ___internal_method);
}
inline int64_t System::Net::IPAddress::get_ScopeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_ScopeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::IPAddress::set_ScopeId(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_ScopeId", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Net::IPAddress::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IPAddress*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Net::IPAddress::TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, destination, charsWritten);
}
inline int64_t System::Net::IPAddress::HostToNetworkOrder(int64_t  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"HostToNetworkOrder", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, host);
}
inline int32_t System::Net::IPAddress::HostToNetworkOrder(int32_t  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"HostToNetworkOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, host);
}
inline int16_t System::Net::IPAddress::HostToNetworkOrder(int16_t  host)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"HostToNetworkOrder", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, host);
}
inline int64_t System::Net::IPAddress::NetworkToHostOrder(int64_t  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"NetworkToHostOrder", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, network);
}
inline int32_t System::Net::IPAddress::NetworkToHostOrder(int32_t  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"NetworkToHostOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, network);
}
inline int16_t System::Net::IPAddress::NetworkToHostOrder(int16_t  network)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"NetworkToHostOrder", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, network);
}
inline bool System::Net::IPAddress::IsLoopback(::System::Net::IPAddress*  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"IsLoopback", {}, {::i2c::type_of<::System::Net::IPAddress*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, address);
}
inline bool System::Net::IPAddress::get_IsIPv6Multicast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6Multicast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::IPAddress::get_IsIPv6LinkLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6LinkLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::IPAddress::get_IsIPv6SiteLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6SiteLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::IPAddress::get_IsIPv6Teredo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv6Teredo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Net::IPAddress::get_IsIPv4MappedToIPv6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_IsIPv4MappedToIPv6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t System::Net::IPAddress::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::IPAddress::set_Address(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"set_Address", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Net::IPAddress::Equals(::System::Object*  comparandObj, bool  compareScopeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"Equals", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparandObj, compareScopeId);
}
inline bool System::Net::IPAddress::Equals(::System::Object*  comparand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IPAddress*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, comparand);
}
inline int32_t System::Net::IPAddress::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::IPAddress*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Net::IPAddress* System::Net::IPAddress::MapToIPv6()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"MapToIPv6", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline ::System::Net::IPAddress* System::Net::IPAddress::MapToIPv4()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"MapToIPv4", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> System::Net::IPAddress::ThrowAddressNullException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddress*>(),
                        {"ThrowAddressNullException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method);
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(int64_t  newAddress)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(newAddress));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(::ArrayW<uint8_t>  address, int64_t  scopeid)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(address, scopeid));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(::System::ReadOnlySpan_1<uint8_t>  address, int64_t  scopeid)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(address, scopeid));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(uint16_t*  numbers, int32_t  numbersLength, uint32_t  scopeid)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(numbers, numbersLength, scopeid));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(::ArrayW<uint16_t>  numbers, uint32_t  scopeid)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(numbers, scopeid));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(::ArrayW<uint8_t>  address)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(address));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(::System::ReadOnlySpan_1<uint8_t>  address)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(address));
}
inline ::System::Net::IPAddress* System::Net::IPAddress::New_ctor(int32_t  newAddress)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddress*>(newAddress));
}
// Ctor Parameters []
constexpr ::System::Net::IPAddress::IPAddress()   {
}
