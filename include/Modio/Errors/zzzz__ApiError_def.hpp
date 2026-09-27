#pragma once
// IWYU pragma private; include "Modio/Errors/ApiError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(ApiError)
namespace Modio::Errors {
struct ApiErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class ApiError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::ApiError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ApiError*, "Modio.Errors", "ApiError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.ApiError
class CORDL_TYPE ApiError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::ApiErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::ApiError*  None;

static inline ::Modio::Errors::ApiError* New_ctor(::Modio::Errors::ApiErrorCode  code) ;

/// @brief Method .ctor, addr 0xa05524c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::ApiErrorCode  code) ;

static inline ::Modio::Errors::ApiError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa055244, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::ApiErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::ApiError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApiError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApiError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApiError(ApiError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApiError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApiError(ApiError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::ApiError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
