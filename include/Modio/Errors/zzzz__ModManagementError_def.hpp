#pragma once
// IWYU pragma private; include "Modio/Errors/ModManagementError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(ModManagementError)
namespace Modio::Errors {
struct ModManagementErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class ModManagementError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::ModManagementError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ModManagementError*, "Modio.Errors", "ModManagementError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.ModManagementError
class CORDL_TYPE ModManagementError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::ModManagementErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::ModManagementError*  None;

static inline ::Modio::Errors::ModManagementError* New_ctor(::Modio::Errors::ModManagementErrorCode  code) ;

/// @brief Method .ctor, addr 0xa0568d4, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::ModManagementErrorCode  code) ;

static inline ::Modio::Errors::ModManagementError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa0568cc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::ModManagementErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::ModManagementError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModManagementError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModManagementError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModManagementError(ModManagementError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModManagementError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModManagementError(ModManagementError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17701};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::ModManagementError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
