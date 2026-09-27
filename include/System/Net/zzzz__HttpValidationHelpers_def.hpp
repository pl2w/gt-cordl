#pragma once
// IWYU pragma private; include "System/Net/HttpValidationHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpValidationHelpers)
// Forward declare root types
namespace System::Net {
class HttpValidationHelpers;
}
// Write type traits
MARK_REF_T(::System::Net::HttpValidationHelpers*);
DEFINE_IL2CPP_CLASS(::System::Net::HttpValidationHelpers*, "System.Net", "HttpValidationHelpers");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.HttpValidationHelpers
class CORDL_TYPE HttpValidationHelpers : public ::System::Object {
public:
// Declarations
/// @brief Field s_httpTrimCharacters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_httpTrimCharacters, put=setStaticF_s_httpTrimCharacters)) ::ArrayW<char16_t>  s_httpTrimCharacters;

/// @brief Method CheckBadHeaderNameChars, addr 0xada8a40, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW CheckBadHeaderNameChars(::StringW  name) ;

/// @brief Method CheckBadHeaderValueChars, addr 0xada8d4c, size 0x1dc, virtual false, abstract: false, final false
static inline ::StringW CheckBadHeaderValueChars(::StringW  value) ;

/// @brief Method ContainsNonAsciiChars, addr 0xada8c2c, size 0x88, virtual false, abstract: false, final false
static inline bool ContainsNonAsciiChars(::StringW  token) ;

/// @brief Method IsInvalidMethodOrHeaderString, addr 0xada8b18, size 0x114, virtual false, abstract: false, final false
static inline bool IsInvalidMethodOrHeaderString(::StringW  stringValue) ;

/// @brief Method IsValidToken, addr 0xada8cb4, size 0x98, virtual false, abstract: false, final false
static inline bool IsValidToken(::StringW  token) ;

static inline ::ArrayW<char16_t> getStaticF_s_httpTrimCharacters() ;

static inline void setStaticF_s_httpTrimCharacters(::ArrayW<char16_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpValidationHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpValidationHelpers(HttpValidationHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpValidationHelpers(HttpValidationHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::HttpValidationHelpers) == 0x10, "Size mismatch!");

} // namespace end def System::Net
