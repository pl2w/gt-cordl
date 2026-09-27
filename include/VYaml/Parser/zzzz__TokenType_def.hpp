#pragma once
// IWYU pragma private; include "VYaml/Parser/TokenType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TokenType)
// Forward declare root types
namespace VYaml::Parser {
struct TokenType;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::TokenType);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::TokenType, "VYaml.Parser", "TokenType");
// Dependencies 
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.TokenType
struct CORDL_TYPE TokenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TokenType_Unwrapped
enum struct __TokenType_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_StreamStart = static_cast<uint8_t>(0x1u),
__E_StreamEnd = static_cast<uint8_t>(0x2u),
__E_VersionDirective = static_cast<uint8_t>(0x3u),
__E_TagDirective = static_cast<uint8_t>(0x4u),
__E_DocumentStart = static_cast<uint8_t>(0x5u),
__E_DocumentEnd = static_cast<uint8_t>(0x6u),
__E_BlockSequenceStart = static_cast<uint8_t>(0x7u),
__E_BlockMappingStart = static_cast<uint8_t>(0x8u),
__E_BlockEnd = static_cast<uint8_t>(0x9u),
__E_FlowSequenceStart = static_cast<uint8_t>(0xau),
__E_FlowSequenceEnd = static_cast<uint8_t>(0xbu),
__E_FlowMappingStart = static_cast<uint8_t>(0xcu),
__E_FlowMappingEnd = static_cast<uint8_t>(0xdu),
__E_BlockEntryStart = static_cast<uint8_t>(0xeu),
__E_FlowEntryStart = static_cast<uint8_t>(0xfu),
__E_KeyStart = static_cast<uint8_t>(0x10u),
__E_ValueStart = static_cast<uint8_t>(0x11u),
__E_Alias = static_cast<uint8_t>(0x12u),
__E_Anchor = static_cast<uint8_t>(0x13u),
__E_Tag = static_cast<uint8_t>(0x14u),
__E_PlainScalar = static_cast<uint8_t>(0x15u),
__E_SingleQuotedScaler = static_cast<uint8_t>(0x16u),
__E_DoubleQuotedScaler = static_cast<uint8_t>(0x17u),
__E_LiteralScalar = static_cast<uint8_t>(0x18u),
__E_FoldedScalar = static_cast<uint8_t>(0x19u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TokenType_Unwrapped () const noexcept {
return static_cast<__TokenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TokenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr TokenType(uint8_t  value__) noexcept;

/// @brief Field Alias value: U8(18)
static ::VYaml::Parser::TokenType const Alias;

/// @brief Field Anchor value: U8(19)
static ::VYaml::Parser::TokenType const Anchor;

/// @brief Field BlockEnd value: U8(9)
static ::VYaml::Parser::TokenType const BlockEnd;

/// @brief Field BlockEntryStart value: U8(14)
static ::VYaml::Parser::TokenType const BlockEntryStart;

/// @brief Field BlockMappingStart value: U8(8)
static ::VYaml::Parser::TokenType const BlockMappingStart;

/// @brief Field BlockSequenceStart value: U8(7)
static ::VYaml::Parser::TokenType const BlockSequenceStart;

/// @brief Field DocumentEnd value: U8(6)
static ::VYaml::Parser::TokenType const DocumentEnd;

/// @brief Field DocumentStart value: U8(5)
static ::VYaml::Parser::TokenType const DocumentStart;

/// @brief Field DoubleQuotedScaler value: U8(23)
static ::VYaml::Parser::TokenType const DoubleQuotedScaler;

/// @brief Field FlowEntryStart value: U8(15)
static ::VYaml::Parser::TokenType const FlowEntryStart;

/// @brief Field FlowMappingEnd value: U8(13)
static ::VYaml::Parser::TokenType const FlowMappingEnd;

/// @brief Field FlowMappingStart value: U8(12)
static ::VYaml::Parser::TokenType const FlowMappingStart;

/// @brief Field FlowSequenceEnd value: U8(11)
static ::VYaml::Parser::TokenType const FlowSequenceEnd;

/// @brief Field FlowSequenceStart value: U8(10)
static ::VYaml::Parser::TokenType const FlowSequenceStart;

/// @brief Field FoldedScalar value: U8(25)
static ::VYaml::Parser::TokenType const FoldedScalar;

/// @brief Field KeyStart value: U8(16)
static ::VYaml::Parser::TokenType const KeyStart;

/// @brief Field LiteralScalar value: U8(24)
static ::VYaml::Parser::TokenType const LiteralScalar;

/// @brief Field None value: U8(0)
static ::VYaml::Parser::TokenType const None;

/// @brief Field PlainScalar value: U8(21)
static ::VYaml::Parser::TokenType const PlainScalar;

/// @brief Field SingleQuotedScaler value: U8(22)
static ::VYaml::Parser::TokenType const SingleQuotedScaler;

/// @brief Field StreamEnd value: U8(2)
static ::VYaml::Parser::TokenType const StreamEnd;

/// @brief Field StreamStart value: U8(1)
static ::VYaml::Parser::TokenType const StreamStart;

/// @brief Field Tag value: U8(20)
static ::VYaml::Parser::TokenType const Tag;

/// @brief Field TagDirective value: U8(4)
static ::VYaml::Parser::TokenType const TagDirective;

/// @brief Field ValueStart value: U8(17)
static ::VYaml::Parser::TokenType const ValueStart;

/// @brief Field VersionDirective value: U8(3)
static ::VYaml::Parser::TokenType const VersionDirective;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29016};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::TokenType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::TokenType) == 0x1, "Size mismatch!");

} // namespace end def VYaml::Parser
