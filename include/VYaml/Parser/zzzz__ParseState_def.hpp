#pragma once
// IWYU pragma private; include "VYaml/Parser/ParseState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParseState)
// Forward declare root types
namespace VYaml::Parser {
struct ParseState;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::ParseState);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::ParseState, "VYaml.Parser", "ParseState");
// Dependencies 
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.ParseState
struct CORDL_TYPE ParseState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParseState_Unwrapped
enum struct __ParseState_Unwrapped : int32_t {
__E_StreamStart = static_cast<int32_t>(0x0),
__E_ImplicitDocumentStart = static_cast<int32_t>(0x1),
__E_DocumentStart = static_cast<int32_t>(0x2),
__E_DocumentContent = static_cast<int32_t>(0x3),
__E_DocumentEnd = static_cast<int32_t>(0x4),
__E_BlockNode = static_cast<int32_t>(0x5),
__E_BlockSequenceFirstEntry = static_cast<int32_t>(0x6),
__E_BlockSequenceEntry = static_cast<int32_t>(0x7),
__E_IndentlessSequenceEntry = static_cast<int32_t>(0x8),
__E_BlockMappingFirstKey = static_cast<int32_t>(0x9),
__E_BlockMappingKey = static_cast<int32_t>(0xa),
__E_BlockMappingValue = static_cast<int32_t>(0xb),
__E_FlowSequenceFirstEntry = static_cast<int32_t>(0xc),
__E_FlowSequenceEntry = static_cast<int32_t>(0xd),
__E_FlowSequenceEntryMappingKey = static_cast<int32_t>(0xe),
__E_FlowSequenceEntryMappingValue = static_cast<int32_t>(0xf),
__E_FlowSequenceEntryMappingEnd = static_cast<int32_t>(0x10),
__E_FlowMappingFirstKey = static_cast<int32_t>(0x11),
__E_FlowMappingKey = static_cast<int32_t>(0x12),
__E_FlowMappingValue = static_cast<int32_t>(0x13),
__E_FlowMappingEmptyValue = static_cast<int32_t>(0x14),
__E_End = static_cast<int32_t>(0x15),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParseState_Unwrapped () const noexcept {
return static_cast<__ParseState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParseState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParseState(int32_t  value__) noexcept;

/// @brief Field BlockMappingFirstKey value: I32(9)
static ::VYaml::Parser::ParseState const BlockMappingFirstKey;

/// @brief Field BlockMappingKey value: I32(10)
static ::VYaml::Parser::ParseState const BlockMappingKey;

/// @brief Field BlockMappingValue value: I32(11)
static ::VYaml::Parser::ParseState const BlockMappingValue;

/// @brief Field BlockNode value: I32(5)
static ::VYaml::Parser::ParseState const BlockNode;

/// @brief Field BlockSequenceEntry value: I32(7)
static ::VYaml::Parser::ParseState const BlockSequenceEntry;

/// @brief Field BlockSequenceFirstEntry value: I32(6)
static ::VYaml::Parser::ParseState const BlockSequenceFirstEntry;

/// @brief Field DocumentContent value: I32(3)
static ::VYaml::Parser::ParseState const DocumentContent;

/// @brief Field DocumentEnd value: I32(4)
static ::VYaml::Parser::ParseState const DocumentEnd;

/// @brief Field DocumentStart value: I32(2)
static ::VYaml::Parser::ParseState const DocumentStart;

/// @brief Field End value: I32(21)
static ::VYaml::Parser::ParseState const End;

/// @brief Field FlowMappingEmptyValue value: I32(20)
static ::VYaml::Parser::ParseState const FlowMappingEmptyValue;

/// @brief Field FlowMappingFirstKey value: I32(17)
static ::VYaml::Parser::ParseState const FlowMappingFirstKey;

/// @brief Field FlowMappingKey value: I32(18)
static ::VYaml::Parser::ParseState const FlowMappingKey;

/// @brief Field FlowMappingValue value: I32(19)
static ::VYaml::Parser::ParseState const FlowMappingValue;

/// @brief Field FlowSequenceEntry value: I32(13)
static ::VYaml::Parser::ParseState const FlowSequenceEntry;

/// @brief Field FlowSequenceEntryMappingEnd value: I32(16)
static ::VYaml::Parser::ParseState const FlowSequenceEntryMappingEnd;

/// @brief Field FlowSequenceEntryMappingKey value: I32(14)
static ::VYaml::Parser::ParseState const FlowSequenceEntryMappingKey;

/// @brief Field FlowSequenceEntryMappingValue value: I32(15)
static ::VYaml::Parser::ParseState const FlowSequenceEntryMappingValue;

/// @brief Field FlowSequenceFirstEntry value: I32(12)
static ::VYaml::Parser::ParseState const FlowSequenceFirstEntry;

/// @brief Field ImplicitDocumentStart value: I32(1)
static ::VYaml::Parser::ParseState const ImplicitDocumentStart;

/// @brief Field IndentlessSequenceEntry value: I32(8)
static ::VYaml::Parser::ParseState const IndentlessSequenceEntry;

/// @brief Field StreamStart value: I32(0)
static ::VYaml::Parser::ParseState const StreamStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29023};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::ParseState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::ParseState) == 0x4, "Size mismatch!");

} // namespace end def VYaml::Parser
