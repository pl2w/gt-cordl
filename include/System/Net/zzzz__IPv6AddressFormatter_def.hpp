#pragma once
// IWYU pragma private; include "System/Net/IPv6AddressFormatter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IPv6AddressFormatter)
// Forward declare root types
namespace System::Net {
struct IPv6AddressFormatter;
}
// Write type traits
MARK_VAL_T(::System::Net::IPv6AddressFormatter);
DEFINE_IL2CPP_CLASS(::System::Net::IPv6AddressFormatter, "System.Net", "IPv6AddressFormatter");
// Dependencies 
namespace System::Net {
// Is value type: true
// CS Name: System.Net.IPv6AddressFormatter
struct CORDL_TYPE IPv6AddressFormatter {
public:
// Declarations
/// @brief Method AsIPv4Int, addr 0xaca9e40, size 0x38, virtual false, abstract: false, final false
inline uint32_t AsIPv4Int() ;

/// @brief Method IsIPv4Compatible, addr 0xaca9e78, size 0x70, virtual false, abstract: false, final false
inline bool IsIPv4Compatible() ;

/// @brief Method IsIPv4Mapped, addr 0xaca9ee8, size 0x70, virtual false, abstract: false, final false
inline bool IsIPv4Mapped() ;

/// @brief Method SwapUShort, addr 0xaca9e34, size 0xc, virtual false, abstract: false, final false
static inline uint16_t SwapUShort(uint16_t  number) ;

/// @brief Method ToString, addr 0xaca9f58, size 0x30c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xaca9e0c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint16_t>  addr, int64_t  scopeId) ;

// Ctor Parameters []
// @brief default ctor
constexpr IPv6AddressFormatter() ;

// Ctor Parameters [CppParam { name: "address", ty: "::ArrayW<uint16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "scopeId", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr IPv6AddressFormatter(::ArrayW<uint16_t>  address, int64_t  scopeId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field address, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint16_t>  address;

/// @brief Field scopeId, offset: 0x8, size: 0x8, def value: None
 int64_t  scopeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::IPv6AddressFormatter, address) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::IPv6AddressFormatter, scopeId) == 0x8, "Offset mismatch!");

static_assert(sizeof(::System::Net::IPv6AddressFormatter) == 0x10, "Size mismatch!");

} // namespace end def System::Net
