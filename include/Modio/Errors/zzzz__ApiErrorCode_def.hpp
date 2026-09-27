#pragma once
// IWYU pragma private; include "Modio/Errors/ApiErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ApiErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct ApiErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::ApiErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ApiErrorCode, "Modio.Errors", "ApiErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.ApiErrorCode
struct CORDL_TYPE ApiErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __ApiErrorCode_Unwrapped
enum struct __ApiErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_MODIO_OUTAGE = static_cast<int64_t>(0x2710),
__E_CROSS_ORIGIN_FORBIDDEN = static_cast<int64_t>(0x2711),
__E_FAILED_TO_COMPLETE_THE_REQUEST = static_cast<int64_t>(0x2712),
__E_INVALID_API_VERSION = static_cast<int64_t>(0x2713),
__E_MISSING_APIKEY = static_cast<int64_t>(0x2af8),
__E_MALFORMED_APIKEY = static_cast<int64_t>(0x2af9),
__E_INVALID_APIKEY = static_cast<int64_t>(0x2afa),
__E_MISSING_WRITE_PERMISSION = static_cast<int64_t>(0x2afb),
__E_MISSING_READ_PERMISSION = static_cast<int64_t>(0x2afc),
__E_EXPIRED_OR_REVOKED_ACCESS_TOKEN = static_cast<int64_t>(0x2afd),
__E_AUTHENTICATED_ACCOUNT_HAS_BEEN_DELETED = static_cast<int64_t>(0x2afe),
__E_BANNED_USER_ACCOUNT = static_cast<int64_t>(0x2aff),
__E_RATELIMITED = static_cast<int64_t>(0x2b00),
__E_RATELIMITED_SAME_ENDPOINT = static_cast<int64_t>(0x2b01),
__E_APIKEY_HAS_NO_GAME = static_cast<int64_t>(0x2b08),
__E_APIKEY_FOR_TEST_ONLY = static_cast<int64_t>(0x2b09),
__E_CANNOT_VERIFY_EXTERNAL_CREDENTIALS = static_cast<int64_t>(0x2b18),
__E_USER_NO_ACCEPT_TERMS_OF_USE = static_cast<int64_t>(0x2b42),
__E_OPEN_IDNOT_CONFIGURED = static_cast<int64_t>(0x2b4e),
__E_BINARY_FILE_CORRUPTED = static_cast<int64_t>(0x32c9),
__E_BINARY_FILE_UNREADABLE = static_cast<int64_t>(0x32ca),
__E_INVALID_JSON = static_cast<int64_t>(0x32cc),
__E_MISSING_CONTENT_TYPE_HEADER = static_cast<int64_t>(0x32cd),
__E_UNSUPPORTED_CONTENT_TYPE_HEADER = static_cast<int64_t>(0x32ce),
__E_REQUESTED_INVALID_RESPONSE_FORMAT = static_cast<int64_t>(0x32cf),
__E_VALIDATION_ERRORS = static_cast<int64_t>(0x32d1),
__E_REQUESTED_RESOURCE_NOT_FOUND = static_cast<int64_t>(0x36b0),
__E_REQUESTED_GAME_NOT_FOUND = static_cast<int64_t>(0x36b1),
__E_REQUESTED_GAME_DELETED = static_cast<int64_t>(0x36b6),
__E_FORBIDDEN_DMCA = static_cast<int64_t>(0x3a98),
__E_FORBIDDEN_HIDDEN = static_cast<int64_t>(0x3a99),
__E_ALREADY_UNSUBSCRIBED = static_cast<int64_t>(0x3a9d),
__E_MODFILE_NO_UPLOAD_PERMISSION = static_cast<int64_t>(0x3a9e),
__E_REQUESTED_MODFILE_NOT_FOUND = static_cast<int64_t>(0x3aa2),
__E_FORBIDDEN_TACNOT_ACCEPTED = static_cast<int64_t>(0x3aa3),
__E_FORBIDDEN_MISSING_FILE = static_cast<int64_t>(0x3aac),
__E_INSUFFICIENT_PERMISSION = static_cast<int64_t>(0x3aab),
__E_REQUESTED_MOD_NOT_FOUND = static_cast<int64_t>(0x3aae),
__E_REQUESTED_MOD_DELETED = static_cast<int64_t>(0x3aaf),
__E_REQUESTED_COMMENT_NOT_FOUND = static_cast<int64_t>(0x3ab2),
__E_USER_EXISTING_MOD_RATING = static_cast<int64_t>(0x3ab4),
__E_SUBMIT_REPORT_RIGHTS_REVOKED = static_cast<int64_t>(0x3ab5),
__E_REPORTED_ENTITY_UNAVAILABLE = static_cast<int64_t>(0x3ab6),
__E_MOD_MEDIA_NO_ADD_PERMISSION = static_cast<int64_t>(0x3abb),
__E_MOD_MEDIA_NO_DELETE_PERMISSION = static_cast<int64_t>(0x3abc),
__E_USER_NO_MOD_RATING = static_cast<int64_t>(0x3ac3),
__E_MATURE_MODS_NOT_ALLOWED = static_cast<int64_t>(0x3ace),
__E_MUTE_USER_NOT_FOUND = static_cast<int64_t>(0x4268),
__E_CANNOT_MUTE_YOURSELF = static_cast<int64_t>(0x428f),
__E_REQUESTED_USER_NOT_FOUND = static_cast<int64_t>(0x5208),
__E_MONETIZATION_UNEXPECTED_ERROR = static_cast<int64_t>(0xdbba0),
__E_MONETIZATION_UNABLE_TO_COMMUNICATE = static_cast<int64_t>(0xdbba1),
__E_MONETIZATION_AUTHENTICATION = static_cast<int64_t>(0xdbba2),
__E_MONETIZATION_WALLET_FETCH_FAILED = static_cast<int64_t>(0xdbba8),
__E_MONETIZATION_IN_MAINTENANCE = static_cast<int64_t>(0xdbbac),
__E_MONETIZATION_GAME_MONETIZATION_NOT_ENABLED = static_cast<int64_t>(0xdbbb6),
__E_MONETIZATION_PAYMENT_FAILED = static_cast<int64_t>(0xdbbbe),
__E_MONETIZATION_ITEM_ALREADY_OWNED = static_cast<int64_t>(0xdbbc2),
__E_MONETIZATION_INCORRECT_DISPLAY_PRICE = static_cast<int64_t>(0xdbbc3),
__E_MONETIZATION_INSUFFICIENT_FUNDS = static_cast<int64_t>(0xdbbd1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ApiErrorCode_Unwrapped () const noexcept {
return static_cast<__ApiErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ApiErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ApiErrorCode(int64_t  value__) noexcept;

/// @brief Field ALREADY_UNSUBSCRIBED value: I64(15005)
static ::Modio::Errors::ApiErrorCode const ALREADY_UNSUBSCRIBED;

/// @brief Field APIKEY_FOR_TEST_ONLY value: I64(11017)
static ::Modio::Errors::ApiErrorCode const APIKEY_FOR_TEST_ONLY;

/// @brief Field APIKEY_HAS_NO_GAME value: I64(11016)
static ::Modio::Errors::ApiErrorCode const APIKEY_HAS_NO_GAME;

/// @brief Field AUTHENTICATED_ACCOUNT_HAS_BEEN_DELETED value: I64(11006)
static ::Modio::Errors::ApiErrorCode const AUTHENTICATED_ACCOUNT_HAS_BEEN_DELETED;

/// @brief Field BANNED_USER_ACCOUNT value: I64(11007)
static ::Modio::Errors::ApiErrorCode const BANNED_USER_ACCOUNT;

/// @brief Field BINARY_FILE_CORRUPTED value: I64(13001)
static ::Modio::Errors::ApiErrorCode const BINARY_FILE_CORRUPTED;

/// @brief Field BINARY_FILE_UNREADABLE value: I64(13002)
static ::Modio::Errors::ApiErrorCode const BINARY_FILE_UNREADABLE;

/// @brief Field CANNOT_MUTE_YOURSELF value: I64(17039)
static ::Modio::Errors::ApiErrorCode const CANNOT_MUTE_YOURSELF;

/// @brief Field CANNOT_VERIFY_EXTERNAL_CREDENTIALS value: I64(11032)
static ::Modio::Errors::ApiErrorCode const CANNOT_VERIFY_EXTERNAL_CREDENTIALS;

/// @brief Field CROSS_ORIGIN_FORBIDDEN value: I64(10001)
static ::Modio::Errors::ApiErrorCode const CROSS_ORIGIN_FORBIDDEN;

/// @brief Field EXPIRED_OR_REVOKED_ACCESS_TOKEN value: I64(11005)
static ::Modio::Errors::ApiErrorCode const EXPIRED_OR_REVOKED_ACCESS_TOKEN;

/// @brief Field FAILED_TO_COMPLETE_THE_REQUEST value: I64(10002)
static ::Modio::Errors::ApiErrorCode const FAILED_TO_COMPLETE_THE_REQUEST;

/// @brief Field FORBIDDEN_DMCA value: I64(15000)
static ::Modio::Errors::ApiErrorCode const FORBIDDEN_DMCA;

/// @brief Field FORBIDDEN_HIDDEN value: I64(15001)
static ::Modio::Errors::ApiErrorCode const FORBIDDEN_HIDDEN;

/// @brief Field FORBIDDEN_MISSING_FILE value: I64(15020)
static ::Modio::Errors::ApiErrorCode const FORBIDDEN_MISSING_FILE;

/// @brief Field FORBIDDEN_TACNOT_ACCEPTED value: I64(15011)
static ::Modio::Errors::ApiErrorCode const FORBIDDEN_TACNOT_ACCEPTED;

/// @brief Field INSUFFICIENT_PERMISSION value: I64(15019)
static ::Modio::Errors::ApiErrorCode const INSUFFICIENT_PERMISSION;

/// @brief Field INVALID_APIKEY value: I64(11002)
static ::Modio::Errors::ApiErrorCode const INVALID_APIKEY;

/// @brief Field INVALID_API_VERSION value: I64(10003)
static ::Modio::Errors::ApiErrorCode const INVALID_API_VERSION;

/// @brief Field INVALID_JSON value: I64(13004)
static ::Modio::Errors::ApiErrorCode const INVALID_JSON;

/// @brief Field MALFORMED_APIKEY value: I64(11001)
static ::Modio::Errors::ApiErrorCode const MALFORMED_APIKEY;

/// @brief Field MATURE_MODS_NOT_ALLOWED value: I64(15054)
static ::Modio::Errors::ApiErrorCode const MATURE_MODS_NOT_ALLOWED;

/// @brief Field MISSING_APIKEY value: I64(11000)
static ::Modio::Errors::ApiErrorCode const MISSING_APIKEY;

/// @brief Field MISSING_CONTENT_TYPE_HEADER value: I64(13005)
static ::Modio::Errors::ApiErrorCode const MISSING_CONTENT_TYPE_HEADER;

/// @brief Field MISSING_READ_PERMISSION value: I64(11004)
static ::Modio::Errors::ApiErrorCode const MISSING_READ_PERMISSION;

/// @brief Field MISSING_WRITE_PERMISSION value: I64(11003)
static ::Modio::Errors::ApiErrorCode const MISSING_WRITE_PERMISSION;

/// @brief Field MODFILE_NO_UPLOAD_PERMISSION value: I64(15006)
static ::Modio::Errors::ApiErrorCode const MODFILE_NO_UPLOAD_PERMISSION;

/// @brief Field MODIO_OUTAGE value: I64(10000)
static ::Modio::Errors::ApiErrorCode const MODIO_OUTAGE;

/// @brief Field MOD_MEDIA_NO_ADD_PERMISSION value: I64(15035)
static ::Modio::Errors::ApiErrorCode const MOD_MEDIA_NO_ADD_PERMISSION;

/// @brief Field MOD_MEDIA_NO_DELETE_PERMISSION value: I64(15036)
static ::Modio::Errors::ApiErrorCode const MOD_MEDIA_NO_DELETE_PERMISSION;

/// @brief Field MONETIZATION_AUTHENTICATION value: I64(900002)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_AUTHENTICATION;

/// @brief Field MONETIZATION_GAME_MONETIZATION_NOT_ENABLED value: I64(900022)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_GAME_MONETIZATION_NOT_ENABLED;

/// @brief Field MONETIZATION_INCORRECT_DISPLAY_PRICE value: I64(900035)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_INCORRECT_DISPLAY_PRICE;

/// @brief Field MONETIZATION_INSUFFICIENT_FUNDS value: I64(900049)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_INSUFFICIENT_FUNDS;

/// @brief Field MONETIZATION_IN_MAINTENANCE value: I64(900012)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_IN_MAINTENANCE;

/// @brief Field MONETIZATION_ITEM_ALREADY_OWNED value: I64(900034)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_ITEM_ALREADY_OWNED;

/// @brief Field MONETIZATION_PAYMENT_FAILED value: I64(900030)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_PAYMENT_FAILED;

/// @brief Field MONETIZATION_UNABLE_TO_COMMUNICATE value: I64(900001)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_UNABLE_TO_COMMUNICATE;

/// @brief Field MONETIZATION_UNEXPECTED_ERROR value: I64(900000)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_UNEXPECTED_ERROR;

/// @brief Field MONETIZATION_WALLET_FETCH_FAILED value: I64(900008)
static ::Modio::Errors::ApiErrorCode const MONETIZATION_WALLET_FETCH_FAILED;

/// @brief Field MUTE_USER_NOT_FOUND value: I64(17000)
static ::Modio::Errors::ApiErrorCode const MUTE_USER_NOT_FOUND;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::ApiErrorCode const NONE;

/// @brief Field OPEN_IDNOT_CONFIGURED value: I64(11086)
static ::Modio::Errors::ApiErrorCode const OPEN_IDNOT_CONFIGURED;

/// @brief Field RATELIMITED value: I64(11008)
static ::Modio::Errors::ApiErrorCode const RATELIMITED;

/// @brief Field RATELIMITED_SAME_ENDPOINT value: I64(11009)
static ::Modio::Errors::ApiErrorCode const RATELIMITED_SAME_ENDPOINT;

/// @brief Field REPORTED_ENTITY_UNAVAILABLE value: I64(15030)
static ::Modio::Errors::ApiErrorCode const REPORTED_ENTITY_UNAVAILABLE;

/// @brief Field REQUESTED_COMMENT_NOT_FOUND value: I64(15026)
static ::Modio::Errors::ApiErrorCode const REQUESTED_COMMENT_NOT_FOUND;

/// @brief Field REQUESTED_GAME_DELETED value: I64(14006)
static ::Modio::Errors::ApiErrorCode const REQUESTED_GAME_DELETED;

/// @brief Field REQUESTED_GAME_NOT_FOUND value: I64(14001)
static ::Modio::Errors::ApiErrorCode const REQUESTED_GAME_NOT_FOUND;

/// @brief Field REQUESTED_INVALID_RESPONSE_FORMAT value: I64(13007)
static ::Modio::Errors::ApiErrorCode const REQUESTED_INVALID_RESPONSE_FORMAT;

/// @brief Field REQUESTED_MODFILE_NOT_FOUND value: I64(15010)
static ::Modio::Errors::ApiErrorCode const REQUESTED_MODFILE_NOT_FOUND;

/// @brief Field REQUESTED_MOD_DELETED value: I64(15023)
static ::Modio::Errors::ApiErrorCode const REQUESTED_MOD_DELETED;

/// @brief Field REQUESTED_MOD_NOT_FOUND value: I64(15022)
static ::Modio::Errors::ApiErrorCode const REQUESTED_MOD_NOT_FOUND;

/// @brief Field REQUESTED_RESOURCE_NOT_FOUND value: I64(14000)
static ::Modio::Errors::ApiErrorCode const REQUESTED_RESOURCE_NOT_FOUND;

/// @brief Field REQUESTED_USER_NOT_FOUND value: I64(21000)
static ::Modio::Errors::ApiErrorCode const REQUESTED_USER_NOT_FOUND;

/// @brief Field SUBMIT_REPORT_RIGHTS_REVOKED value: I64(15029)
static ::Modio::Errors::ApiErrorCode const SUBMIT_REPORT_RIGHTS_REVOKED;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::ApiErrorCode const UNKNOWN;

/// @brief Field UNSUPPORTED_CONTENT_TYPE_HEADER value: I64(13006)
static ::Modio::Errors::ApiErrorCode const UNSUPPORTED_CONTENT_TYPE_HEADER;

/// @brief Field USER_EXISTING_MOD_RATING value: I64(15028)
static ::Modio::Errors::ApiErrorCode const USER_EXISTING_MOD_RATING;

/// @brief Field USER_NO_ACCEPT_TERMS_OF_USE value: I64(11074)
static ::Modio::Errors::ApiErrorCode const USER_NO_ACCEPT_TERMS_OF_USE;

/// @brief Field USER_NO_MOD_RATING value: I64(15043)
static ::Modio::Errors::ApiErrorCode const USER_NO_MOD_RATING;

/// @brief Field VALIDATION_ERRORS value: I64(13009)
static ::Modio::Errors::ApiErrorCode const VALIDATION_ERRORS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17686};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::ApiErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::ApiErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
