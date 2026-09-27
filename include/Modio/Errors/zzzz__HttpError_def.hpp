#pragma once
// IWYU pragma private; include "Modio/Errors/HttpError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(HttpError)
namespace Modio::Errors {
struct HttpErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class HttpError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::HttpError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::HttpError*, "Modio.Errors", "HttpError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.HttpError
class CORDL_TYPE HttpError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::HttpErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::HttpError*  None;

static inline ::Modio::Errors::HttpError* New_ctor(::Modio::Errors::HttpErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056724, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::HttpErrorCode  code) ;

static inline ::Modio::Errors::HttpError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa05671c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::HttpErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::HttpError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpError(HttpError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpError(HttpError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17697};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::HttpError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
