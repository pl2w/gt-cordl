#pragma once
// IWYU pragma private; include "Modio/Errors/UserDataError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(UserDataError)
namespace Modio::Errors {
struct UserDataErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class UserDataError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::UserDataError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::UserDataError*, "Modio.Errors", "UserDataError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.UserDataError
class CORDL_TYPE UserDataError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::UserDataErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::UserDataError*  None;

static inline ::Modio::Errors::UserDataError* New_ctor(::Modio::Errors::UserDataErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056de4, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::UserDataErrorCode  code) ;

static inline ::Modio::Errors::UserDataError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056ddc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::UserDataErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::UserDataError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserDataError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserDataError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataError(UserDataError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataError(UserDataError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17713};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::UserDataError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
