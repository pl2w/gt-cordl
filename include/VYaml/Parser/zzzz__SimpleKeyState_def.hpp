#pragma once
// IWYU pragma private; include "VYaml/Parser/SimpleKeyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VYaml/Parser/zzzz__Marker_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleKeyState)
// Forward declare root types
namespace VYaml::Parser {
struct SimpleKeyState;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::SimpleKeyState);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::SimpleKeyState, "VYaml.Parser", "SimpleKeyState");
// Dependencies VYaml.Parser.Marker
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.SimpleKeyState
struct CORDL_TYPE SimpleKeyState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr SimpleKeyState() ;

// Ctor Parameters [CppParam { name: "Possible", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Required", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Start", ty: "::VYaml::Parser::Marker", modifiers: "", def_value: None, comment: None }]
constexpr SimpleKeyState(bool  Possible, bool  Required, int32_t  TokenNumber, ::VYaml::Parser::Marker  Start) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29018};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field Possible, offset: 0x0, size: 0x1, def value: None
 bool  Possible;

/// @brief Field Required, offset: 0x1, size: 0x1, def value: None
 bool  Required;

/// @brief Field TokenNumber, offset: 0x4, size: 0x4, def value: None
 int32_t  TokenNumber;

/// @brief Field Start, offset: 0x8, size: 0xc, def value: None
 ::VYaml::Parser::Marker  Start;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::SimpleKeyState, Possible) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::SimpleKeyState, Required) == 0x1, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::SimpleKeyState, TokenNumber) == 0x4, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::SimpleKeyState, Start) == 0x8, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::SimpleKeyState) == 0x14, "Size mismatch!");

} // namespace end def VYaml::Parser
