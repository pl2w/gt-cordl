#pragma once
// IWYU pragma private; include "System/Net/IPAddressParser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddressParser)
namespace System::Net {
class IPAddress;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Net {
class IPAddressParser;
}
// Write type traits
MARK_REF_T(::System::Net::IPAddressParser*);
DEFINE_IL2CPP_CLASS(::System::Net::IPAddressParser*, "System.Net", "IPAddressParser");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IPAddressParser
class CORDL_TYPE IPAddressParser : public ::System::Object {
public:
// Declarations
/// @brief Method AppendHex, addr 0xadb2fe8, size 0xa0, virtual false, abstract: false, final false
static inline void AppendHex(uint16_t  value, ::System::Text::StringBuilder*  buffer) ;

/// @brief Method AppendSections, addr 0xadb2e04, size 0x1b0, virtual false, abstract: false, final false
static inline void AppendSections(::ArrayW<uint16_t>  address, int32_t  fromInclusive, int32_t  toExclusive, ::System::Text::StringBuilder*  buffer) ;

/// @brief Method ExtractIPv4Address, addr 0xadb2fb4, size 0x34, virtual false, abstract: false, final false
static inline uint32_t ExtractIPv4Address(::ArrayW<uint16_t>  address) ;

/// @brief Method FormatIPv4AddressNumber, addr 0xadb2c2c, size 0xb8, virtual false, abstract: false, final false
static inline void FormatIPv4AddressNumber(int32_t  number, char16_t*  addressString, ::by_ref<int32_t>  offset) ;

/// @brief Method IPv4AddressToString, addr 0xadb19d4, size 0x60, virtual false, abstract: false, final false
static inline ::StringW IPv4AddressToString(uint32_t  address) ;

/// @brief Method IPv4AddressToString, addr 0xadb1b50, size 0x9c, virtual false, abstract: false, final false
static inline bool IPv4AddressToString(uint32_t  address, ::System::Span_1<char16_t>  formatted, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method IPv4AddressToString, addr 0xadb2bac, size 0x80, virtual false, abstract: false, final false
static inline void IPv4AddressToString(uint32_t  address, ::System::Text::StringBuilder*  destination) ;

/// @brief Method IPv4AddressToStringHelper, addr 0xadb2b10, size 0x9c, virtual false, abstract: false, final false
static inline int32_t IPv4AddressToStringHelper(uint32_t  address, char16_t*  addressString) ;

/// @brief Method IPv6AddressToString, addr 0xadb19c0, size 0x14, virtual false, abstract: false, final false
static inline ::StringW IPv6AddressToString(::ArrayW<uint16_t>  address, uint32_t  scopeId) ;

/// @brief Method IPv6AddressToString, addr 0xadb1a6c, size 0xe4, virtual false, abstract: false, final false
static inline bool IPv6AddressToString(::ArrayW<uint16_t>  address, uint32_t  scopeId, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten) ;

/// @brief Method IPv6AddressToStringHelper, addr 0xadb2ce4, size 0x120, virtual false, abstract: false, final false
static inline ::System::Text::StringBuilder* IPv6AddressToStringHelper(::ArrayW<uint16_t>  address, uint32_t  scopeId) ;

/// @brief Method Ipv4StringToAddress, addr 0xadb2a60, size 0xb0, virtual false, abstract: false, final false
static inline bool Ipv4StringToAddress(::System::ReadOnlySpan_1<char16_t>  ipSpan, ::by_ref<int64_t>  address) ;

/// @brief Method Ipv6StringToAddress, addr 0xadb28ec, size 0x174, virtual false, abstract: false, final false
static inline bool Ipv6StringToAddress(::System::ReadOnlySpan_1<char16_t>  ipSpan, uint16_t*  numbers, int32_t  numbersLength, ::by_ref<uint32_t>  scope) ;

static inline ::System::Net::IPAddressParser* New_ctor() ;

/// @brief Method Parse, addr 0xadb1228, size 0x1d4, virtual false, abstract: false, final false
static inline ::System::Net::IPAddress* Parse(::System::ReadOnlySpan_1<char16_t>  ipSpan, bool  tryParse) ;

/// @brief Method Reverse, addr 0xadb3088, size 0xc, virtual false, abstract: false, final false
static inline uint16_t Reverse(uint16_t  number) ;

/// @brief Method .ctor, addr 0xadb3094, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IPAddressParser() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IPAddressParser", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IPAddressParser(IPAddressParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressParser", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPAddressParser(IPAddressParser const& ) = delete;

/// @brief Field MaxIPv4StringLength offset 0xffffffff size 0x4
static constexpr int32_t  MaxIPv4StringLength{static_cast<int32_t>(0xf)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::IPAddressParser) == 0x10, "Size mismatch!");

} // namespace end def System::Net
