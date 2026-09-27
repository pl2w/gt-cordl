#pragma once
// IWYU pragma private; include "Modio/Errors/UserAuthError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(UserAuthError)
namespace Modio::Errors {
struct UserAuthErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class UserAuthError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::UserAuthError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::UserAuthError*, "Modio.Errors", "UserAuthError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.UserAuthError
class CORDL_TYPE UserAuthError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::UserAuthErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::UserAuthError*  None;

static inline ::Modio::Errors::UserAuthError* New_ctor(::Modio::Errors::UserAuthErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056d0c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::UserAuthErrorCode  code) ;

static inline ::Modio::Errors::UserAuthError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056d04, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::UserAuthErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::UserAuthError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserAuthError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserAuthError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAuthError(UserAuthError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAuthError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAuthError(UserAuthError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17711};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::UserAuthError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
