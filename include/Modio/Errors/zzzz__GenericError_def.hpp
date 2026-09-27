#pragma once
// IWYU pragma private; include "Modio/Errors/GenericError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(GenericError)
namespace Modio::Errors {
struct GenericErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class GenericError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::GenericError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::GenericError*, "Modio.Errors", "GenericError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.GenericError
class CORDL_TYPE GenericError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::GenericErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::GenericError*  None;

static inline ::Modio::Errors::GenericError* New_ctor(::Modio::Errors::GenericErrorCode  code) ;

/// @brief Method .ctor, addr 0xa05664c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::GenericErrorCode  code) ;

static inline ::Modio::Errors::GenericError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056644, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::GenericErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::GenericError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GenericError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GenericError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GenericError(GenericError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GenericError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GenericError(GenericError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17695};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::GenericError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
