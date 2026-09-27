#pragma once
// IWYU pragma private; include "Modio/Errors/TempModsError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(TempModsError)
namespace Modio::Errors {
struct TempModsErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class TempModsError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::TempModsError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::TempModsError*, "Modio.Errors", "TempModsError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.TempModsError
class CORDL_TYPE TempModsError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::TempModsErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::TempModsError*  None;

static inline ::Modio::Errors::TempModsError* New_ctor(::Modio::Errors::TempModsErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056c34, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::TempModsErrorCode  code) ;

static inline ::Modio::Errors::TempModsError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056c2c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::TempModsErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::TempModsError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TempModsError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TempModsError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TempModsError(TempModsError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TempModsError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TempModsError(TempModsError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17709};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::TempModsError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
