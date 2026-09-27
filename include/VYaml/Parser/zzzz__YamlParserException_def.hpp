#pragma once
// IWYU pragma private; include "VYaml/Parser/YamlParserException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(YamlParserException)
namespace VYaml::Parser {
struct Marker;
}
// Forward declare root types
namespace VYaml::Parser {
class YamlParserException;
}
// Write type traits
MARK_REF_T(::VYaml::Parser::YamlParserException*);
DEFINE_IL2CPP_CLASS(::VYaml::Parser::YamlParserException*, "VYaml.Parser", "YamlParserException");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Exception
namespace VYaml::Parser {
// Is value type: false
// CS Name: VYaml.Parser.YamlParserException
class CORDL_TYPE YamlParserException : public ::System::Exception {
public:
// Declarations
static inline ::VYaml::Parser::YamlParserException* New_ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message) ;

/// @brief Method Throw, addr 0xb963e38, size 0x48, virtual false, abstract: false, final false
static inline void Throw(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message) ;

/// @brief Method .ctor, addr 0xb963e80, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(/* [IsReadOnly] */ ::by_ref<::VYaml::Parser::Marker>  marker, ::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YamlParserException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YamlParserException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YamlParserException(YamlParserException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YamlParserException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YamlParserException(YamlParserException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Parser::YamlParserException) == 0x90, "Size mismatch!");

} // namespace end def VYaml::Parser
