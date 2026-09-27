#pragma once
// IWYU pragma private; include "Modio/Errors/ArchiveError.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
CORDL_MODULE_EXPORT(ArchiveError)
namespace Modio::Errors {
struct ArchiveErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class ArchiveError;
}
// Write type traits
MARK_REF_T(::Modio::Errors::ArchiveError*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ArchiveError*, "Modio.Errors", "ArchiveError");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.ArchiveError
class CORDL_TYPE ArchiveError : public ::Modio::Error {
public:
// Declarations
 __declspec(property(get=get_Code)) ::Modio::Errors::ArchiveErrorCode  Code;

/// @brief Field None, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_None, put=setStaticF_None)) ::Modio::Errors::ArchiveError*  None;

static inline ::Modio::Errors::ArchiveError* New_ctor(::Modio::Errors::ArchiveErrorCode  code) ;

/// @brief Method .ctor, addr 0xa05649c, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Modio::Errors::ArchiveErrorCode  code) ;

static inline ::Modio::Errors::ArchiveError* getStaticF_None() ;

/// @brief Method get_Code, addr 0xa056494, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Errors::ArchiveErrorCode get_Code() ;

static inline void setStaticF_None(::Modio::Errors::ArchiveError*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArchiveError() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArchiveError", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ArchiveError(ArchiveError && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArchiveError", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArchiveError(ArchiveError const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17690};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::ArchiveError) == 0x20, "Size mismatch!");

} // namespace end def Modio::Errors
