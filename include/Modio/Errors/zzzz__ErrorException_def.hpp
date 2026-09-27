#pragma once
// IWYU pragma private; include "Modio/Errors/ErrorException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__Error_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ErrorException)
namespace Modio::Errors {
struct ErrorCode;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Modio::Errors {
class ErrorException;
}
// Write type traits
MARK_REF_T(::Modio::Errors::ErrorException*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ErrorException*, "Modio.Errors", "ErrorException");
// Dependencies Modio.Error
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.ErrorException
class CORDL_TYPE ErrorException : public ::Modio::Error {
public:
// Declarations
/// @brief Field Exception, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Exception, put=__cordl_internal_set_Exception)) ::System::Exception*  Exception;

/// @brief Method ErrorCodeFromException, addr 0xa0550c8, size 0x17c, virtual false, abstract: false, final false
static inline ::Modio::Errors::ErrorCode ErrorCodeFromException(::System::Exception*  exception) ;

/// @brief Method GetMessage, addr 0xa054fec, size 0x60, virtual true, abstract: false, final false
inline ::StringW GetMessage() ;

static inline ::Modio::Errors::ErrorException* New_ctor(::System::Exception*  exception) ;

static inline ::Modio::Errors::ErrorException* New_ctor(::System::Exception*  exception, ::Modio::Errors::ErrorCode  code) ;

constexpr ::System::Exception* const& __cordl_internal_get_Exception() const;

constexpr ::System::Exception*& __cordl_internal_get_Exception() ;

constexpr void __cordl_internal_set_Exception(::System::Exception*  value) ;

/// @brief Method .ctor, addr 0xa0534e4, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0xa05504c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception, ::Modio::Errors::ErrorCode  code) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorException(ErrorException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorException(ErrorException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17685};

/// @brief Field Exception, offset: 0x20, size: 0x8, def value: None
 ::System::Exception*  ___Exception;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::ErrorException, ___Exception) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::ErrorException) == 0x28, "Size mismatch!");

} // namespace end def Modio::Errors
