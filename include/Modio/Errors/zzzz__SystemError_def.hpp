#pragma once
// IWYU pragma private; include "Modio/Errors/SystemError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(SystemError)
namespace Modio::Errors {
struct SystemErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class SystemError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::SystemError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::SystemError*, "Modio.Errors", "SystemError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.SystemError
class CORDL_TYPE SystemError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::SystemErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::SystemError*  None;

static inline ::Modio::Errors::SystemError* New_ctor(::Modio::Errors::SystemErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056b5c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::SystemErrorCode  code) ;

static inline ::Modio::Errors::SystemError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056b54, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::SystemErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::SystemError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemError(SystemError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemError(SystemError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17707};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::SystemError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
