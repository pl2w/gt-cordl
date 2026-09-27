#pragma once
// IWYU pragma private; include "Modio/Errors/ZlibError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(ZlibError)
namespace Modio::Errors {
struct ZlibErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class ZlibError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::ZlibError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ZlibError*, "Modio.Errors", "ZlibError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.ZlibError
class CORDL_TYPE ZlibError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::ZlibErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::ZlibError*  None;

static inline ::Modio::Errors::ZlibError* New_ctor(::Modio::Errors::ZlibErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056ebc, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::ZlibErrorCode  code) ;

static inline ::Modio::Errors::ZlibError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056eb4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::ZlibErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::ZlibError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZlibError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZlibError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZlibError(ZlibError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZlibError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZlibError(ZlibError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17715};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::ZlibError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
