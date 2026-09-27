#pragma once
// IWYU pragma private; include "VYaml/Parser/YamlTokenizerException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(YamlTokenizerException)
namespace VYaml::Parser {
struct Marker;
}
// Forward declare root types
namespace VYaml::Parser {
class YamlTokenizerException;
}
// Write type traits
MARK_REF_T(::VYaml::Parser::YamlTokenizerException*);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::YamlTokenizerException*, "VYaml.Parser", "YamlTokenizerException");
// Dependencies System.Exception
namespace VYaml::Parser {
// Is value type: false
// CS Name: VYaml.Parser.YamlTokenizerException
class CORDL_TYPE YamlTokenizerException : public ::System::Exception {
public:
// Declarations
/// @brief [NullableContext(1)]
static inline ::VYaml::Parser::YamlTokenizerException* New_ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message) ;

/// [NullableContext(1)]
/// @brief Method .ctor, addr 0xb95bf20, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlTokenizerException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlTokenizerException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlTokenizerException(YamlTokenizerException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlTokenizerException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlTokenizerException(YamlTokenizerException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29017};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Parser::YamlTokenizerException) == 0x90, "Size mismatch!");

} // namespace end def VYaml::Parser
