#pragma once
// IWYU pragma private; include "System/Net/IPAddressParserStatics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPAddressParserStatics)
// Forward declare root types
namespace System::Net {
class IPAddressParserStatics;
}
// Write type traits
MARK_REF_T(::System::Net::IPAddressParserStatics*);
DEFINE_IL2CPP_CLASS(::System::Net::IPAddressParserStatics*, "System.Net", "IPAddressParserStatics");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.IPAddressParserStatics
class CORDL_TYPE IPAddressParserStatics : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr IPAddressParserStatics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IPAddressParserStatics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
IPAddressParserStatics(IPAddressParserStatics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressParserStatics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPAddressParserStatics(IPAddressParserStatics const& ) = delete;

/// @brief Field IPv4AddressBytes offset 0xffffffff size 0x4
static constexpr int32_t  IPv4AddressBytes{static_cast<int32_t>(0x4)};

/// @brief Field IPv6AddressBytes offset 0xffffffff size 0x4
static constexpr int32_t  IPv6AddressBytes{static_cast<int32_t>(0x10)};

/// @brief Field IPv6AddressShorts offset 0xffffffff size 0x4
static constexpr int32_t  IPv6AddressShorts{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::IPAddressParserStatics) == 0x10, "Size mismatch!");

} // namespace end def System::Net
