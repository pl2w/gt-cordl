#pragma once
// IWYU pragma private; include "Meta/WitAi/Json/JSONParseException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(JSONParseException)
// Forward declare root types
namespace Meta::WitAi::Json {
class JSONParseException;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Json::JSONParseException*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Json::JSONParseException*, "Meta.WitAi.Json", "JSONParseException");
// Dependencies System.Exception
namespace Meta::WitAi::Json {
// Is value type: false
// CS Name: Meta.WitAi.Json.JSONParseException
class CORDL_TYPE JSONParseException : public ::System::Exception {
public:
// Declarations
static inline ::Meta::WitAi::Json::JSONParseException* New_ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0x9e45168, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSONParseException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSONParseException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JSONParseException(JSONParseException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSONParseException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSONParseException(JSONParseException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31034};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Json::JSONParseException) == 0x90, "Size mismatch!");

} // namespace end def Meta::WitAi::Json
