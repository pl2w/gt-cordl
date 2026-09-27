#pragma once
// IWYU pragma private; include "System/Net/IPAddressParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__IPAddressParser_def.hpp"
#include "System/Net/zzzz__IPAddress_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Net::IPAddressParser.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPAddress* (*)(::System::ReadOnlySpan_1<char16_t>, bool)>(&::System::Net::IPAddressParser::Parse)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xadb1228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.IPv4AddressToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t)>(&::System::Net::IPAddressParser::IPv4AddressToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xadb19d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToString", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.IPv4AddressToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::System::Text::StringBuilder*)>(&::System::Net::IPAddressParser::IPv4AddressToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xadb2bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToString", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.IPv4AddressToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Net::IPAddressParser::IPv4AddressToString)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadb1b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToString", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.IPv4AddressToStringHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t, char16_t*)>(&::System::Net::IPAddressParser::IPv4AddressToStringHelper)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xadb2b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToStringHelper", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.IPv6AddressToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint16_t>, uint32_t)>(&::System::Net::IPAddressParser::IPv6AddressToString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xadb19c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv6AddressToString", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.IPv6AddressToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<uint16_t>, uint32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Net::IPAddressParser::IPv6AddressToString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xadb1a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv6AddressToString", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.IPv6AddressToStringHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::ArrayW<uint16_t>, uint32_t)>(&::System::Net::IPAddressParser::IPv6AddressToStringHelper)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xadb2ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv6AddressToStringHelper", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.FormatIPv4AddressNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, char16_t*, ::by_ref<int32_t>)>(&::System::Net::IPAddressParser::FormatIPv4AddressNumber)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xadb2c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"FormatIPv4AddressNumber", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.Ipv4StringToAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int64_t>)>(&::System::Net::IPAddressParser::Ipv4StringToAddress)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xadb2a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Ipv4StringToAddress", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.Ipv6StringToAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, uint16_t*, int32_t, ::by_ref<uint32_t>)>(&::System::Net::IPAddressParser::Ipv6StringToAddress)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xadb28ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Ipv6StringToAddress", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<uint16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.AppendSections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<uint16_t>, int32_t, int32_t, ::System::Text::StringBuilder*)>(&::System::Net::IPAddressParser::AppendSections)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xadb2e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"AppendSections", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.AppendHex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint16_t, ::System::Text::StringBuilder*)>(&::System::Net::IPAddressParser::AppendHex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xadb2fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"AppendHex", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.ExtractIPv4Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<uint16_t>)>(&::System::Net::IPAddressParser::ExtractIPv4Address)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xadb2fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"ExtractIPv4Address", {}, {::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser.Reverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint16_t)>(&::System::Net::IPAddressParser::Reverse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xadb3088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Reverse", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::IPAddressParser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::IPAddressParser::*)()>(&::System::Net::IPAddressParser::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadb3094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Net::IPAddress* System::Net::IPAddressParser::Parse(::System::ReadOnlySpan_1<char16_t>  ipSpan, bool  tryParse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IPAddress*>(nullptr, ___internal_method, ipSpan, tryParse);
}
inline ::StringW System::Net::IPAddressParser::IPv4AddressToString(uint32_t  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToString", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, address);
}
inline void System::Net::IPAddressParser::IPv4AddressToString(uint32_t  address, ::System::Text::StringBuilder*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToString", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, address, destination);
}
inline bool System::Net::IPAddressParser::IPv4AddressToString(uint32_t  address, ::System::Span_1<char16_t>  formatted, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToString", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, address, formatted, charsWritten);
}
inline int32_t System::Net::IPAddressParser::IPv4AddressToStringHelper(uint32_t  address, char16_t*  addressString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv4AddressToStringHelper", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<char16_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, address, addressString);
}
inline ::StringW System::Net::IPAddressParser::IPv6AddressToString(::ArrayW<uint16_t>  address, uint32_t  scopeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv6AddressToString", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, address, scopeId);
}
inline bool System::Net::IPAddressParser::IPv6AddressToString(::ArrayW<uint16_t>  address, uint32_t  scopeId, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv6AddressToString", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, address, scopeId, destination, charsWritten);
}
inline ::System::Text::StringBuilder* System::Net::IPAddressParser::IPv6AddressToStringHelper(::ArrayW<uint16_t>  address, uint32_t  scopeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"IPv6AddressToStringHelper", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, address, scopeId);
}
inline void System::Net::IPAddressParser::FormatIPv4AddressNumber(int32_t  number, char16_t*  addressString, ::by_ref<int32_t>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"FormatIPv4AddressNumber", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, addressString, offset);
}
inline bool System::Net::IPAddressParser::Ipv4StringToAddress(::System::ReadOnlySpan_1<char16_t>  ipSpan, ::by_ref<int64_t>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Ipv4StringToAddress", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ipSpan, address);
}
inline bool System::Net::IPAddressParser::Ipv6StringToAddress(::System::ReadOnlySpan_1<char16_t>  ipSpan, uint16_t*  numbers, int32_t  numbersLength, ::by_ref<uint32_t>  scope)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Ipv6StringToAddress", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<uint16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ipSpan, numbers, numbersLength, scope);
}
inline void System::Net::IPAddressParser::AppendSections(::ArrayW<uint16_t>  address, int32_t  fromInclusive, int32_t  toExclusive, ::System::Text::StringBuilder*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"AppendSections", {}, {::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, address, fromInclusive, toExclusive, buffer);
}
inline void System::Net::IPAddressParser::AppendHex(uint16_t  value, ::System::Text::StringBuilder*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"AppendHex", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, buffer);
}
inline uint32_t System::Net::IPAddressParser::ExtractIPv4Address(::ArrayW<uint16_t>  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"ExtractIPv4Address", {}, {::i2c::type_of<::ArrayW<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, address);
}
inline uint16_t System::Net::IPAddressParser::Reverse(uint16_t  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {"Reverse", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, number);
}
inline void System::Net::IPAddressParser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::IPAddressParser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::IPAddressParser* System::Net::IPAddressParser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::IPAddressParser*>());
}
// Ctor Parameters []
constexpr ::System::Net::IPAddressParser::IPAddressParser()   {
}
