#pragma once
// IWYU pragma private; include "Modio/Users/Authentication.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Authentication)
// Forward declare root types
namespace Modio::Users {
class Authentication;
}
// Write type traits
MARK_REF_T(::Modio::Users::Authentication*);
DEFINE_IL2CPP_CLASS(::Modio::Users::Authentication*, "Modio.Users", "Authentication");
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.Authentication
class CORDL_TYPE Authentication : public ::System::Object {
public:
// Declarations
/// @brief Field OAuthToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OAuthToken, put=__cordl_internal_set_OAuthToken)) ::StringW  OAuthToken;

static inline ::Modio::Users::Authentication* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OAuthToken() const;

constexpr ::StringW& __cordl_internal_get_OAuthToken() ;

constexpr void __cordl_internal_set_OAuthToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa01ca34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Authentication() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Authentication", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Authentication(Authentication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Authentication", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Authentication(Authentication const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17524};

/// @brief Field OAuthToken, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___OAuthToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::Authentication, ___OAuthToken) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::Authentication) == 0x18, "Size mismatch!");

} // namespace end def Modio::Users
