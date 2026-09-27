#pragma once
// IWYU pragma private; include "VYaml/Parser/Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "VYaml/Parser/zzzz__TokenType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Token)
namespace VYaml::Parser {
class ITokenContent;
}
namespace VYaml::Parser {
struct TokenType;
}
// Forward declare root types
namespace VYaml::Parser {
struct Token;
}
// Write type traits
MARK_VAL_T(::VYaml::Parser::Token);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::Token, "VYaml.Parser", "Token");
// [NullableContext(2)]
// [Nullable(0)]
// [IsReadOnly]
// Dependencies VYaml.Parser.TokenType
namespace VYaml::Parser {
// Is value type: true
// CS Name: VYaml.Parser.Token
struct CORDL_TYPE Token {
public:
// Declarations
/// [NullableContext(1)]
/// @brief Method ToString, addr 0xb95be98, size 0x88, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb95be88, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::VYaml::Parser::TokenType  type, ::VYaml::Parser::ITokenContent*  content) ;

// Ctor Parameters []
// @brief default ctor
constexpr Token() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::VYaml::Parser::TokenType", modifiers: "", def_value: None, comment: None }, CppParam { name: "Content", ty: "::VYaml::Parser::ITokenContent*", modifiers: "", def_value: None, comment: None }]
constexpr Token(::VYaml::Parser::TokenType  Type, ::VYaml::Parser::ITokenContent*  Content) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29015};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Type, offset: 0x0, size: 0x1, def value: None
 ::VYaml::Parser::TokenType  Type;

/// @brief Field Content, offset: 0x8, size: 0x8, def value: None
 ::VYaml::Parser::ITokenContent*  Content;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Parser::Token, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::VYaml::Parser::Token, Content) == 0x8, "Offset mismatch!");

static_assert(sizeof(::VYaml::Parser::Token) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Parser
