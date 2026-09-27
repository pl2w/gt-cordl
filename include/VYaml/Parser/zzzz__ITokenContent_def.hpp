#pragma once
// IWYU pragma private; include "VYaml/Parser/ITokenContent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITokenContent)
// Forward declare root types
namespace VYaml::Parser {
class ITokenContent;
}
// Write type traits
MARK_REF_T(::VYaml::Parser::ITokenContent*);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::ITokenContent*, "VYaml.Parser", "ITokenContent");
// Dependencies 
namespace VYaml::Parser {
// Is value type: false
// CS Name: VYaml.Parser.ITokenContent
class CORDL_TYPE ITokenContent {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "ITokenContent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ITokenContent(ITokenContent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29012};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Parser
