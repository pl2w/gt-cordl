#pragma once
// IWYU pragma private; include "Modio/Errors/ErrorExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ErrorExtensions)
namespace Modio::Errors {
struct ApiErrorCode;
}
namespace Modio::Errors {
struct ArchiveErrorCode;
}
namespace Modio::Errors {
struct ErrorCode;
}
namespace Modio::Errors {
struct FilesystemErrorCode;
}
namespace Modio::Errors {
struct GenericErrorCode;
}
namespace Modio::Errors {
struct HttpErrorCode;
}
namespace Modio::Errors {
struct MetricsErrorCode;
}
namespace Modio::Errors {
struct ModManagementErrorCode;
}
namespace Modio::Errors {
struct ModValidationErrorCode;
}
namespace Modio::Errors {
struct MonetizationErrorCode;
}
namespace Modio::Errors {
struct SystemErrorCode;
}
namespace Modio::Errors {
struct TempModsErrorCode;
}
namespace Modio::Errors {
struct UserAuthErrorCode;
}
namespace Modio::Errors {
struct UserDataErrorCode;
}
namespace Modio::Errors {
struct ZlibErrorCode;
}
// Forward declare root types
namespace Modio::Errors {
class ErrorExtensions;
}
// Write type traits
MARK_REF_T(::Modio::Errors::ErrorExtensions*);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ErrorExtensions*, "Modio.Errors", "ErrorExtensions");
// [Extension]
// Dependencies System.Object
namespace Modio::Errors {
// Is value type: false
// CS Name: Modio.Errors.ErrorExtensions
class CORDL_TYPE ErrorExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetMessage, addr 0xa05531c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::ApiErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056460, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::ArchiveErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa055320, size 0x1140, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::ErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056464, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::FilesystemErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056468, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::GenericErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa05646c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::HttpErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056470, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::MetricsErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056474, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::ModManagementErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056478, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::ModValidationErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa05647c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::MonetizationErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056480, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::SystemErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056484, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::TempModsErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056488, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::UserAuthErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa05648c, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::UserDataErrorCode  errorCode, ::StringW  append) ;

/// [Extension]
/// @brief Method GetMessage, addr 0xa056490, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetMessage(::Modio::Errors::ZlibErrorCode  errorCode, ::StringW  append) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorExtensions(ErrorExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorExtensions(ErrorExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17688};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Errors::ErrorExtensions) == 0x10, "Size mismatch!");

} // namespace end def Modio::Errors
