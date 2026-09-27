#pragma once
// IWYU pragma private; include "Meta/Voice/Net/Encoding/Wit/WitChunkHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitChunkHeader)
// Forward declare root types
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunkHeader;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader, "Meta.Voice.Net.Encoding.Wit", "WitChunkHeader");
// Dependencies 
namespace Meta::Voice::Net::Encoding::Wit {
// Is value type: true
// CS Name: Meta.Voice.Net.Encoding.Wit.WitChunkHeader
struct CORDL_TYPE WitChunkHeader {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WitChunkHeader() ;

// Ctor Parameters [CppParam { name: "invalid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "jsonLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "binaryLength", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr WitChunkHeader(bool  invalid, int32_t  jsonLength, uint64_t  binaryLength) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25503};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field invalid, offset: 0x0, size: 0x1, def value: None
 bool  invalid;

/// @brief Field jsonLength, offset: 0x4, size: 0x4, def value: None
 int32_t  jsonLength;

/// @brief Field binaryLength, offset: 0x8, size: 0x8, def value: None
 uint64_t  binaryLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader, invalid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader, jsonLength) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader, binaryLength) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::Net::Encoding::Wit
