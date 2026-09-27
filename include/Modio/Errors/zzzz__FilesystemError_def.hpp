#pragma once
// IWYU pragma private; include "Modio/Errors/FilesystemError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(FilesystemError)
namespace Modio::Errors {
struct FilesystemErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class FilesystemError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::FilesystemError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::FilesystemError*, "Modio.Errors", "FilesystemError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.FilesystemError
class CORDL_TYPE FilesystemError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::FilesystemErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::FilesystemError*  None;

static inline ::Modio::Errors::FilesystemError* New_ctor(::Modio::Errors::FilesystemErrorCode  code) ;

/// @brief Method .ctor, addr 0xa056574, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::FilesystemErrorCode  code) ;

static inline ::Modio::Errors::FilesystemError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa05656c, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::FilesystemErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::FilesystemError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FilesystemError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FilesystemError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FilesystemError(FilesystemError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FilesystemError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FilesystemError(FilesystemError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::FilesystemError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
