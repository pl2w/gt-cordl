#pragma once
// IWYU pragma private; include "Modio/Errors/MonetizationError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(MonetizationError)
namespace Modio::Errors {
struct MonetizationErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class MonetizationError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::MonetizationError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::MonetizationError*, "Modio.Errors", "MonetizationError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.MonetizationError
class CORDL_TYPE MonetizationError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::MonetizationErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::MonetizationError*  None;

static inline ::Modio::Errors::MonetizationError* New_ctor(::Modio::Errors::MonetizationErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056a84, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::MonetizationErrorCode  code) ;

static inline ::Modio::Errors::MonetizationError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056a7c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::MonetizationErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::MonetizationError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonetizationError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonetizationError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonetizationError(MonetizationError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonetizationError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonetizationError(MonetizationError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17705};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::MonetizationError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
