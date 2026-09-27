#pragma once
// IWYU pragma private; include "Modio/Errors/ModValidationError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(ModValidationError)
namespace Modio::Errors {
struct ModValidationErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class ModValidationError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::ModValidationError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ModValidationError*, "Modio.Errors", "ModValidationError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.ModValidationError
class CORDL_TYPE ModValidationError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::ModValidationErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::ModValidationError*  None;

static inline ::Modio::Errors::ModValidationError* New_ctor(::Modio::Errors::ModValidationErrorCode  code) ;

/// @brief Method .ctor, addr 0xa0569ac, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::ModValidationErrorCode  code) ;

static inline ::Modio::Errors::ModValidationError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa0569a4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::ModValidationErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::ModValidationError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModValidationError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModValidationError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModValidationError(ModValidationError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModValidationError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModValidationError(ModValidationError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17703};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::ModValidationError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
