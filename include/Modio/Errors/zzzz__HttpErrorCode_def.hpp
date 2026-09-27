#pragma once
// IWYU pragma private; include "Modio/Errors/HttpErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct HttpErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::HttpErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::HttpErrorCode, "Modio.Errors", "HttpErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.HttpErrorCode
struct CORDL_TYPE HttpErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __HttpErrorCode_Unwrapped
enum struct __HttpErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_HTTP_NOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000012),
__E_HTTP_ALREADY_INITIALIZED = static_cast<int64_t>(0xffffffff80000013),
__E_CANNOT_OPEN_CONNECTION = static_cast<int64_t>(0xffffffff80000014),
__E_INSUFFICIENT_PERMISSIONS = static_cast<int64_t>(0xffffffff80000015),
__E_SECURITY_CONFIGURATION_INVALID = static_cast<int64_t>(0xffffffff80000016),
__E_SERVER_UNAVAILABLE = static_cast<int64_t>(0xffffffff80000017),
__E_RESOURCE_NOT_AVAILABLE = static_cast<int64_t>(0xffffffff80000018),
__E_EXCESSIVE_REDIRECTS = static_cast<int64_t>(0xffffffff80000019),
__E_SERVER_CLOSED_CONNECTION = static_cast<int64_t>(0xffffffff8000001a),
__E_DOWNLOAD_NOT_PERMITTED = static_cast<int64_t>(0xffffffff8000001b),
__E_SERVERS_OVERLOADED = static_cast<int64_t>(0xffffffff8000001c),
__E_REQUEST_ERROR = static_cast<int64_t>(0xffffffff8000001d),
__E_INVALID_RESPONSE = static_cast<int64_t>(0xffffffff8000001e),
__E_RATE_LIMITED = static_cast<int64_t>(0xffffffff8000001f),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpErrorCode_Unwrapped () const noexcept {
return static_cast<__HttpErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HttpErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr HttpErrorCode(int64_t  value__) noexcept;

/// @brief Field CANNOT_OPEN_CONNECTION value: I64(-2147483628)
static ::Modio::Errors::HttpErrorCode const CANNOT_OPEN_CONNECTION;

/// @brief Field DOWNLOAD_NOT_PERMITTED value: I64(-2147483621)
static ::Modio::Errors::HttpErrorCode const DOWNLOAD_NOT_PERMITTED;

/// @brief Field EXCESSIVE_REDIRECTS value: I64(-2147483623)
static ::Modio::Errors::HttpErrorCode const EXCESSIVE_REDIRECTS;

/// @brief Field HTTP_ALREADY_INITIALIZED value: I64(-2147483629)
static ::Modio::Errors::HttpErrorCode const HTTP_ALREADY_INITIALIZED;

/// @brief Field HTTP_NOT_INITIALIZED value: I64(-2147483630)
static ::Modio::Errors::HttpErrorCode const HTTP_NOT_INITIALIZED;

/// @brief Field INSUFFICIENT_PERMISSIONS value: I64(-2147483627)
static ::Modio::Errors::HttpErrorCode const INSUFFICIENT_PERMISSIONS;

/// @brief Field INVALID_RESPONSE value: I64(-2147483618)
static ::Modio::Errors::HttpErrorCode const INVALID_RESPONSE;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::HttpErrorCode const NONE;

/// @brief Field RATE_LIMITED value: I64(-2147483617)
static ::Modio::Errors::HttpErrorCode const RATE_LIMITED;

/// @brief Field REQUEST_ERROR value: I64(-2147483619)
static ::Modio::Errors::HttpErrorCode const REQUEST_ERROR;

/// @brief Field RESOURCE_NOT_AVAILABLE value: I64(-2147483624)
static ::Modio::Errors::HttpErrorCode const RESOURCE_NOT_AVAILABLE;

/// @brief Field SECURITY_CONFIGURATION_INVALID value: I64(-2147483626)
static ::Modio::Errors::HttpErrorCode const SECURITY_CONFIGURATION_INVALID;

/// @brief Field SERVERS_OVERLOADED value: I64(-2147483620)
static ::Modio::Errors::HttpErrorCode const SERVERS_OVERLOADED;

/// @brief Field SERVER_CLOSED_CONNECTION value: I64(-2147483622)
static ::Modio::Errors::HttpErrorCode const SERVER_CLOSED_CONNECTION;

/// @brief Field SERVER_UNAVAILABLE value: I64(-2147483625)
static ::Modio::Errors::HttpErrorCode const SERVER_UNAVAILABLE;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::HttpErrorCode const UNKNOWN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::HttpErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::HttpErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
