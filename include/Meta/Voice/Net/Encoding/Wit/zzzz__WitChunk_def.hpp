#pragma once
// IWYU pragma private; include "Meta/Voice/Net/Encoding/Wit/WitChunk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/Net/Encoding/Wit/zzzz__WitChunkHeader_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WitChunk)
namespace Meta::WitAi::Json {
class WitResponseNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::Voice::Net::Encoding::Wit {
struct WitChunk;
}
// Write type traits
MARK_VAL_T(::Meta::Voice::Net::Encoding::Wit::WitChunk);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Net::Encoding::Wit::WitChunk, "Meta.Voice.Net.Encoding.Wit", "WitChunk");
// Dependencies Meta.Voice.Net.Encoding.Wit.WitChunkHeader
namespace Meta::Voice::Net::Encoding::Wit {
// Is value type: true
// CS Name: Meta.Voice.Net.Encoding.Wit.WitChunk
struct CORDL_TYPE WitChunk {
public:
// Declarations
/// @brief Method Equals, addr 0x9e6b480, size 0xe8, virtual false, abstract: false, final false
inline bool Equals(::Meta::Voice::Net::Encoding::Wit::WitChunk  other) ;

/// @brief Method Equals, addr 0x9e6b3f0, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x9e6b568, size 0x98, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

// Ctor Parameters []
// @brief default ctor
constexpr WitChunk() ;

// Ctor Parameters [CppParam { name: "header", ty: "::Meta::Voice::Net::Encoding::Wit::WitChunkHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "jsonString", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "jsonData", ty: "::Meta::WitAi::Json::WitResponseNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "binaryData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr WitChunk(::Meta::Voice::Net::Encoding::Wit::WitChunkHeader  header, ::StringW  jsonString, ::Meta::WitAi::Json::WitResponseNode*  jsonData, ::ArrayW<uint8_t>  binaryData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field header, offset: 0x0, size: 0x10, def value: None
 ::Meta::Voice::Net::Encoding::Wit::WitChunkHeader  header;

/// @brief Field jsonString, offset: 0x10, size: 0x8, def value: None
 ::StringW  jsonString;

/// @brief Field jsonData, offset: 0x18, size: 0x8, def value: None
 ::Meta::WitAi::Json::WitResponseNode*  jsonData;

/// @brief Field binaryData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  binaryData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunk, header) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunk, jsonString) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunk, jsonData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Voice::Net::Encoding::Wit::WitChunk, binaryData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::Voice::Net::Encoding::Wit::WitChunk) == 0x28, "Size mismatch!");

} // namespace end def Meta::Voice::Net::Encoding::Wit
