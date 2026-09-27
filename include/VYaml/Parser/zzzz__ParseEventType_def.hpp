#pragma once
// IWYU pragma private; include "VYaml/Parser/ParseEventType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParseEventType)
// Forward declare root types
namespace VYaml::Parser {
struct ParseEventType;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::ParseEventType);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::ParseEventType, "VYaml.Parser", "ParseEventType");
// Dependencies 
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.ParseEventType
struct CORDL_TYPE ParseEventType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __ParseEventType_Unwrapped
enum struct __ParseEventType_Unwrapped : uint8_t {
__E_Nothing = static_cast<uint8_t>(0x0u),
__E_StreamStart = static_cast<uint8_t>(0x1u),
__E_StreamEnd = static_cast<uint8_t>(0x2u),
__E_DocumentStart = static_cast<uint8_t>(0x3u),
__E_DocumentEnd = static_cast<uint8_t>(0x4u),
__E_Alias = static_cast<uint8_t>(0x5u),
__E_Scalar = static_cast<uint8_t>(0x6u),
__E_SequenceStart = static_cast<uint8_t>(0x7u),
__E_SequenceEnd = static_cast<uint8_t>(0x8u),
__E_MappingStart = static_cast<uint8_t>(0x9u),
__E_MappingEnd = static_cast<uint8_t>(0xau),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParseEventType_Unwrapped () const noexcept {
return static_cast<__ParseEventType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParseEventType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr ParseEventType(uint8_t  value__) noexcept;

/// @brief Field Alias value: U8(5)
static ::VYaml::Parser::ParseEventType const Alias;

/// @brief Field DocumentEnd value: U8(4)
static ::VYaml::Parser::ParseEventType const DocumentEnd;

/// @brief Field DocumentStart value: U8(3)
static ::VYaml::Parser::ParseEventType const DocumentStart;

/// @brief Field MappingEnd value: U8(10)
static ::VYaml::Parser::ParseEventType const MappingEnd;

/// @brief Field MappingStart value: U8(9)
static ::VYaml::Parser::ParseEventType const MappingStart;

/// @brief Field Nothing value: U8(0)
static ::VYaml::Parser::ParseEventType const Nothing;

/// @brief Field Scalar value: U8(6)
static ::VYaml::Parser::ParseEventType const Scalar;

/// @brief Field SequenceEnd value: U8(8)
static ::VYaml::Parser::ParseEventType const SequenceEnd;

/// @brief Field SequenceStart value: U8(7)
static ::VYaml::Parser::ParseEventType const SequenceStart;

/// @brief Field StreamEnd value: U8(2)
static ::VYaml::Parser::ParseEventType const StreamEnd;

/// @brief Field StreamStart value: U8(1)
static ::VYaml::Parser::ParseEventType const StreamStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::ParseEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::ParseEventType) == 0x1, "Size mismatch!");

} // namespace end def VYaml::Parser
