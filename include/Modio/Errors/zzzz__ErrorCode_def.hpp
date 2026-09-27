#pragma once
// IWYU pragma private; include "Modio/Errors/ErrorCode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ErrorCode)
// Forward declare root types
namespace Modio::Errors {
struct ErrorCode;
}
// Write type traits
MARK_VAL_T(::Modio::Errors::ErrorCode);
DEFINE_IL2CPP_CLASS(::Modio::Errors::ErrorCode, "Modio.Errors", "ErrorCode");
// Dependencies 
namespace Modio::Errors {
// Is value type: true
// CS Name: Modio.Errors.ErrorCode
struct CORDL_TYPE ErrorCode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __ErrorCode_Unwrapped
enum struct __ErrorCode_Unwrapped : int64_t {
__E_NONE = static_cast<int64_t>(0x0),
__E_UNKNOWN = static_cast<int64_t>(0xffffffff80000000),
__E_API_NOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000001),
__E_HTTP_EXCEPTION = static_cast<int64_t>(0xffffffff80000002),
__E_TERMS_OF_USE_NOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000003),
__E_NOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000004),
__E_HAS_NOT_ACCEPTED_TERMS_OF_USE = static_cast<int64_t>(0xffffffff80000005),
__E_USER_NOT_AUTHENTICATED = static_cast<int64_t>(0xffffffff80000006),
__E_USER_ALREADY_AUTHENTICATED = static_cast<int64_t>(0xffffffff80000007),
__E_USER_AUTHENTICATION_IN_PROGRESS = static_cast<int64_t>(0xffffffff80000008),
__E_NOT_SUBSCRIBED = static_cast<int64_t>(0xffffffff80000009),
__E_NO_SEARCH = static_cast<int64_t>(0xffffffff8000000a),
__E_SEARCH_IN_PROGRESS = static_cast<int64_t>(0xffffffff8000000b),
__E_PAGE_NOT_SEARCHED = static_cast<int64_t>(0xffffffff8000000c),
__E_AT_FIRST_PAGE = static_cast<int64_t>(0xffffffff8000000d),
__E_NO_MORE_PAGES = static_cast<int64_t>(0xffffffff8000000e),
__E_CANNOT_CAST_NULL_TO_MOD_ID = static_cast<int64_t>(0xffffffff8000000f),
__E_INVALID_MOD_ID = static_cast<int64_t>(0xffffffff80000010),
__E_MOD_TAGS_NOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000011),
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
__E_UNABLE_TO_CREATE_FOLDER = static_cast<int64_t>(0xffffffff80000020),
__E_UNABLE_TO_CREATE_FILE = static_cast<int64_t>(0xffffffff80000021),
__E_NO_PERMISSION = static_cast<int64_t>(0xffffffff80000022),
__E_FILE_LOCKED = static_cast<int64_t>(0xffffffff80000023),
__E_FILE_NOT_FOUND = static_cast<int64_t>(0xffffffff80000024),
__E_DIRECTORY_NOT_EMPTY = static_cast<int64_t>(0xffffffff80000025),
__E_READ_ERROR = static_cast<int64_t>(0xffffffff80000026),
__E_WRITE_ERROR = static_cast<int64_t>(0xffffffff80000027),
__E_DIRECTORY_NOT_FOUND = static_cast<int64_t>(0xffffffff80000028),
__E_UNABLE_TO_INIT_STORAGE = static_cast<int64_t>(0xffffffff80000029),
__E_STATUS_AUTH_TOKEN_MISSING = static_cast<int64_t>(0xffffffff8000002a),
__E_STATUS_AUTH_TOKEN_INVALID = static_cast<int64_t>(0xffffffff8000002b),
__E_NO_AUTH_TOKEN = static_cast<int64_t>(0xffffffff8000002c),
__E_ALREADY_AUTHENTICATED = static_cast<int64_t>(0xffffffff8000002d),
__E_INVALID_USER = static_cast<int64_t>(0xffffffff8000002e),
__E_BLOB_MISSING = static_cast<int64_t>(0xffffffff8000002f),
__E_INVALID_HEADER = static_cast<int64_t>(0xffffffff80000030),
__E_UNSUPPORTED_COMPRESSION = static_cast<int64_t>(0xffffffff80000031),
__E_OPERATION_CANCELLED = static_cast<int64_t>(0xffffffff80000032),
__E_OPERATION_ERROR = static_cast<int64_t>(0xffffffff80000033),
__E_COULD_NOT_CREATE_HANDLE = static_cast<int64_t>(0xffffffff80000034),
__E_NO_DATA_AVAILABLE = static_cast<int64_t>(0xffffffff80000035),
__E_END_OF_FILE = static_cast<int64_t>(0xffffffff80000036),
__E_QUEUE_CLOSED = static_cast<int64_t>(0xffffffff80000037),
__E_SDKALREADY_INITIALIZED = static_cast<int64_t>(0xffffffff80000038),
__E_SDKNOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000039),
__E_INDEX_OUT_OF_RANGE = static_cast<int64_t>(0xffffffff8000003a),
__E_BAD_PARAMETER = static_cast<int64_t>(0xffffffff8000003b),
__E_SHUTTING_DOWN = static_cast<int64_t>(0xffffffff8000003c),
__E_MISSING_COMPONENTS = static_cast<int64_t>(0xffffffff8000003d),
__E_UNKNOWN_SYSTEM_ERROR = static_cast<int64_t>(0xffffffff8000003e),
__E_NEED_BUFFERS = static_cast<int64_t>(0xffffffff8000003f),
__E_END_OF_STREAM = static_cast<int64_t>(0xffffffff80000040),
__E_STREAM_ERROR = static_cast<int64_t>(0xffffffff80000041),
__E_INVALID_BLOCK_TYPE = static_cast<int64_t>(0xffffffff80000042),
__E_INVALID_STORED_LENGTH = static_cast<int64_t>(0xffffffff80000043),
__E_TOO_MANY_SYMBOLS = static_cast<int64_t>(0xffffffff80000044),
__E_INVALID_CODE_LENGTHS = static_cast<int64_t>(0xffffffff80000045),
__E_INVALID_BIT_LENGTH_REPEAT = static_cast<int64_t>(0xffffffff80000046),
__E_MISSING_EOB = static_cast<int64_t>(0xffffffff80000047),
__E_INVALID_LITERAL_LENGTH = static_cast<int64_t>(0xffffffff80000048),
__E_INVALID_DISTANCE_CODE = static_cast<int64_t>(0xffffffff80000049),
__E_INVALID_DISTANCE = static_cast<int64_t>(0xffffffff8000004a),
__E_OVER_SUBSCRIBED_LENGTH = static_cast<int64_t>(0xffffffff8000004b),
__E_INCOMPLETE_LENGTH_SET = static_cast<int64_t>(0xffffffff8000004c),
__E_NO_PENDING_WORK = static_cast<int64_t>(0xffffffff8000004d),
__E_INSTALL_OR_UPDATE_CANCELLED = static_cast<int64_t>(0xffffffff8000004e),
__E_MOD_MANAGEMENT_DISABLED = static_cast<int64_t>(0xffffffff8000004f),
__E_MOD_MANAGEMENT_ALREADY_ENABLED = static_cast<int64_t>(0xffffffff80000050),
__E_UPLOAD_CANCELLED = static_cast<int64_t>(0xffffffff80000051),
__E_MOD_BEING_PROCESSED = static_cast<int64_t>(0xffffffff80000052),
__E_TEMP_MOD_SET_NOT_INITIALIZED = static_cast<int64_t>(0xffffffff80000053),
__E_INCOMPATIBLE_DEPENDENCIES = static_cast<int64_t>(0xffffffff80000054),
__E_NO_FILES_FOUND_FOR_MOD = static_cast<int64_t>(0xffffffff80000055),
__E_MOD_DIRECTORY_NOT_FOUND = static_cast<int64_t>(0xffffffff80000056),
__E_MD5DOES_NOT_MATCH = static_cast<int64_t>(0xffffffff80000057),
__E_DISPLAY_PRICE_INCORRECT = static_cast<int64_t>(0xffffffff80000058),
__E_MONETIZATION_AUTHENTICATION_FAILED = static_cast<int64_t>(0xffffffff80000059),
__E_WALLET_FETCH_FAILED = static_cast<int64_t>(0xffffffff8000005a),
__E_GAME_MONETIZATION_NOT_ENABLED = static_cast<int64_t>(0xffffffff8000005b),
__E_PAYMENT_FAILED = static_cast<int64_t>(0xffffffff8000005c),
__E_INCORRECT_DISPLAY_PRICE = static_cast<int64_t>(0xffffffff8000005d),
__E_ITEM_ALREADY_OWNED = static_cast<int64_t>(0xffffffff8000005e),
__E_INSUFFICIENT_FUNDS = static_cast<int64_t>(0xffffffff8000005f),
__E_RETRY_ENTITLEMENTS = static_cast<int64_t>(0xffffffff80000060),
__E_INVALID_METRICS_SECRET = static_cast<int64_t>(0xffffffff80000061),
__E_CANT_INSTALL_TAINTED_MOD = static_cast<int64_t>(0xffffffff80000062),
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
__E_EMAIL_LOGIN_CODE_EXPIRED = static_cast<int64_t>(0x2b04),
__E_EMAIL_LOGIN_CODE_INVALID = static_cast<int64_t>(0x2b06),
__E_APIKEY_HAS_NO_GAME = static_cast<int64_t>(0x2b08),
__E_APIKEY_FOR_TEST_ONLY = static_cast<int64_t>(0x2b09),
__E_STEAM_APP_TICKET_INVALID = static_cast<int64_t>(0x2b0a),
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
__E_ALREADY_SUBSCRIBED = static_cast<int64_t>(0x3a9c),
__E_ALREADY_UNSUBSCRIBED = static_cast<int64_t>(0x3a9d),
__E_MODFILE_NO_UPLOAD_PERMISSION = static_cast<int64_t>(0x3a9e),
__E_REQUESTED_MODFILE_NOT_FOUND = static_cast<int64_t>(0x3aa2),
__E_FORBIDDEN_TACNOT_ACCEPTED = static_cast<int64_t>(0x3aa3),
__E_INSUFFICIENT_PERMISSION = static_cast<int64_t>(0x3aab),
__E_FORBIDDEN_MISSING_FILE = static_cast<int64_t>(0x3aac),
__E_REQUESTED_MOD_NOT_FOUND = static_cast<int64_t>(0x3aae),
__E_REQUESTED_MOD_DELETED = static_cast<int64_t>(0x3aaf),
__E_REQUESTED_MOD_INACCESSIBLE = static_cast<int64_t>(0x3ab0),
__E_REQUESTED_COMMENT_NOT_FOUND = static_cast<int64_t>(0x3ab2),
__E_USER_EXISTING_MOD_RATING = static_cast<int64_t>(0x3ab4),
__E_SUBMIT_REPORT_RIGHTS_REVOKED = static_cast<int64_t>(0x3ab5),
__E_REPORTED_ENTITY_UNAVAILABLE = static_cast<int64_t>(0x3ab6),
__E_MOD_DEPENDENCIES_NO_ADD_PERMISSION = static_cast<int64_t>(0x3ab7),
__E_MOD_DEPENDENCIES_NO_DELETE_PERMISSION = static_cast<int64_t>(0x3ab8),
__E_USER_NO_MOD_RATING = static_cast<int64_t>(0x3ac3),
__E_MOD_MEDIA_NO_ADD_PERMISSION = static_cast<int64_t>(0x3abb),
__E_MOD_MEDIA_NO_DELETE_PERMISSION = static_cast<int64_t>(0x3abc),
__E_MATURE_MODS_NOT_ALLOWED = static_cast<int64_t>(0x3ace),
__E_MUTE_USER_NOT_FOUND = static_cast<int64_t>(0x4268),
__E_CANNOT_MUTE_YOURSELF = static_cast<int64_t>(0x428f),
__E_INSUFFICIENT_SPACE = static_cast<int64_t>(0x4fda),
__E_REQUESTED_USER_NOT_FOUND = static_cast<int64_t>(0x5208),
__E_MONETIZATION_UNEXPECTED_ERROR = static_cast<int64_t>(0xdbba0),
__E_MONETIZATION_UNABLE_TO_COMMUNICATE = static_cast<int64_t>(0xdbba1),
__E_MONETIZATION_AUTHENTICATION = static_cast<int64_t>(0xdbba2),
__E_USER_MONETIZATION_NOT_CONFIGURED = static_cast<int64_t>(0xdbba7),
__E_MONETIZATION_WALLET_FETCH_FAILED = static_cast<int64_t>(0xdbba8),
__E_MONETIZATION_IN_MAINTENANCE = static_cast<int64_t>(0xdbbac),
__E_USER_MONETIZATION_DISABLED = static_cast<int64_t>(0xdbbaf),
__E_MONETIZATION_GAME_MONETIZATION_NOT_ENABLED = static_cast<int64_t>(0xdbbb6),
__E_MONETIZATION_PAYMENT_FAILED = static_cast<int64_t>(0xdbbbe),
__E_MONETIZATION_ITEM_ALREADY_OWNED = static_cast<int64_t>(0xdbbc2),
__E_MONETIZATION_INCORRECT_DISPLAY_PRICE = static_cast<int64_t>(0xdbbc3),
__E_MONETIZATION_INSUFFICIENT_FUNDS = static_cast<int64_t>(0xdbbd1),
__E_INTERNAL_DUPLICATE_REQUEST_WITH_DIFFERING_SCHEMAS = static_cast<int64_t>(0x5014),
__E_INTERNAL_FAILED_TO_DESERIALIZE_OBJECT = static_cast<int64_t>(0x5015),
__E_INTERNAL_REGISTRY_NOT_INITIALIZED = static_cast<int64_t>(0x5016),
__E_INTERNAL_MOD_MANAGEMENT_OPERATION_FAILED = static_cast<int64_t>(0x5017),
__E_INTERNAL_FILE_SIZE_MISMATCH = static_cast<int64_t>(0x5018),
__E_INTERNAL_FILE_HASH_MISMATCH = static_cast<int64_t>(0x5019),
__E_INTERNAL_OPERATION_CANCELLED = static_cast<int64_t>(0x501a),
__E_INTERNAL_INVALID_PARAMETER = static_cast<int64_t>(0x501b),
__E_WSS_NOT_CONNECTED = static_cast<int64_t>(0x5078),
__E_WSS_FAILED_TO_SEND = static_cast<int64_t>(0x5079),
__E_WSS_MESSAGE_TIMEOUT = static_cast<int64_t>(0x507a),
__E_WSS_UNEXPECTED_MESSAGE = static_cast<int64_t>(0x507b),
__E_STEAM_FAILED_TO_GET_APP_TICKET = static_cast<int64_t>(0x507c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ErrorCode_Unwrapped () const noexcept {
return static_cast<__ErrorCode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ErrorCode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ErrorCode(int64_t  value__) noexcept;

/// @brief Field ALREADY_AUTHENTICATED value: I64(-2147483603)
static ::Modio::Errors::ErrorCode const ALREADY_AUTHENTICATED;

/// @brief Field ALREADY_SUBSCRIBED value: I64(15004)
static ::Modio::Errors::ErrorCode const ALREADY_SUBSCRIBED;

/// @brief Field ALREADY_UNSUBSCRIBED value: I64(15005)
static ::Modio::Errors::ErrorCode const ALREADY_UNSUBSCRIBED;

/// @brief Field APIKEY_FOR_TEST_ONLY value: I64(11017)
static ::Modio::Errors::ErrorCode const APIKEY_FOR_TEST_ONLY;

/// @brief Field APIKEY_HAS_NO_GAME value: I64(11016)
static ::Modio::Errors::ErrorCode const APIKEY_HAS_NO_GAME;

/// @brief Field API_NOT_INITIALIZED value: I64(-2147483647)
static ::Modio::Errors::ErrorCode const API_NOT_INITIALIZED;

/// @brief Field AT_FIRST_PAGE value: I64(-2147483635)
static ::Modio::Errors::ErrorCode const AT_FIRST_PAGE;

/// @brief Field AUTHENTICATED_ACCOUNT_HAS_BEEN_DELETED value: I64(11006)
static ::Modio::Errors::ErrorCode const AUTHENTICATED_ACCOUNT_HAS_BEEN_DELETED;

/// @brief Field BAD_PARAMETER value: I64(-2147483589)
static ::Modio::Errors::ErrorCode const BAD_PARAMETER;

/// @brief Field BANNED_USER_ACCOUNT value: I64(11007)
static ::Modio::Errors::ErrorCode const BANNED_USER_ACCOUNT;

/// @brief Field BINARY_FILE_CORRUPTED value: I64(13001)
static ::Modio::Errors::ErrorCode const BINARY_FILE_CORRUPTED;

/// @brief Field BINARY_FILE_UNREADABLE value: I64(13002)
static ::Modio::Errors::ErrorCode const BINARY_FILE_UNREADABLE;

/// @brief Field BLOB_MISSING value: I64(-2147483601)
static ::Modio::Errors::ErrorCode const BLOB_MISSING;

/// @brief Field CANNOT_CAST_NULL_TO_MOD_ID value: I64(-2147483633)
static ::Modio::Errors::ErrorCode const CANNOT_CAST_NULL_TO_MOD_ID;

/// @brief Field CANNOT_MUTE_YOURSELF value: I64(17039)
static ::Modio::Errors::ErrorCode const CANNOT_MUTE_YOURSELF;

/// @brief Field CANNOT_OPEN_CONNECTION value: I64(-2147483628)
static ::Modio::Errors::ErrorCode const CANNOT_OPEN_CONNECTION;

/// @brief Field CANNOT_VERIFY_EXTERNAL_CREDENTIALS value: I64(11032)
static ::Modio::Errors::ErrorCode const CANNOT_VERIFY_EXTERNAL_CREDENTIALS;

/// @brief Field CANT_INSTALL_TAINTED_MOD value: I64(-2147483550)
static ::Modio::Errors::ErrorCode const CANT_INSTALL_TAINTED_MOD;

/// @brief Field COULD_NOT_CREATE_HANDLE value: I64(-2147483596)
static ::Modio::Errors::ErrorCode const COULD_NOT_CREATE_HANDLE;

/// @brief Field CROSS_ORIGIN_FORBIDDEN value: I64(10001)
static ::Modio::Errors::ErrorCode const CROSS_ORIGIN_FORBIDDEN;

/// @brief Field DIRECTORY_NOT_EMPTY value: I64(-2147483611)
static ::Modio::Errors::ErrorCode const DIRECTORY_NOT_EMPTY;

/// @brief Field DIRECTORY_NOT_FOUND value: I64(-2147483608)
static ::Modio::Errors::ErrorCode const DIRECTORY_NOT_FOUND;

/// @brief Field DISPLAY_PRICE_INCORRECT value: I64(-2147483560)
static ::Modio::Errors::ErrorCode const DISPLAY_PRICE_INCORRECT;

/// @brief Field DOWNLOAD_NOT_PERMITTED value: I64(-2147483621)
static ::Modio::Errors::ErrorCode const DOWNLOAD_NOT_PERMITTED;

/// @brief Field EMAIL_LOGIN_CODE_EXPIRED value: I64(11012)
static ::Modio::Errors::ErrorCode const EMAIL_LOGIN_CODE_EXPIRED;

/// @brief Field EMAIL_LOGIN_CODE_INVALID value: I64(11014)
static ::Modio::Errors::ErrorCode const EMAIL_LOGIN_CODE_INVALID;

/// @brief Field END_OF_FILE value: I64(-2147483594)
static ::Modio::Errors::ErrorCode const END_OF_FILE;

/// @brief Field END_OF_STREAM value: I64(-2147483584)
static ::Modio::Errors::ErrorCode const END_OF_STREAM;

/// @brief Field EXCESSIVE_REDIRECTS value: I64(-2147483623)
static ::Modio::Errors::ErrorCode const EXCESSIVE_REDIRECTS;

/// @brief Field EXPIRED_OR_REVOKED_ACCESS_TOKEN value: I64(11005)
static ::Modio::Errors::ErrorCode const EXPIRED_OR_REVOKED_ACCESS_TOKEN;

/// @brief Field FAILED_TO_COMPLETE_THE_REQUEST value: I64(10002)
static ::Modio::Errors::ErrorCode const FAILED_TO_COMPLETE_THE_REQUEST;

/// @brief Field FILE_LOCKED value: I64(-2147483613)
static ::Modio::Errors::ErrorCode const FILE_LOCKED;

/// @brief Field FILE_NOT_FOUND value: I64(-2147483612)
static ::Modio::Errors::ErrorCode const FILE_NOT_FOUND;

/// @brief Field FORBIDDEN_DMCA value: I64(15000)
static ::Modio::Errors::ErrorCode const FORBIDDEN_DMCA;

/// @brief Field FORBIDDEN_HIDDEN value: I64(15001)
static ::Modio::Errors::ErrorCode const FORBIDDEN_HIDDEN;

/// @brief Field FORBIDDEN_MISSING_FILE value: I64(15020)
static ::Modio::Errors::ErrorCode const FORBIDDEN_MISSING_FILE;

/// @brief Field FORBIDDEN_TACNOT_ACCEPTED value: I64(15011)
static ::Modio::Errors::ErrorCode const FORBIDDEN_TACNOT_ACCEPTED;

/// @brief Field GAME_MONETIZATION_NOT_ENABLED value: I64(-2147483557)
static ::Modio::Errors::ErrorCode const GAME_MONETIZATION_NOT_ENABLED;

/// @brief Field HAS_NOT_ACCEPTED_TERMS_OF_USE value: I64(-2147483643)
static ::Modio::Errors::ErrorCode const HAS_NOT_ACCEPTED_TERMS_OF_USE;

/// @brief Field HTTP_ALREADY_INITIALIZED value: I64(-2147483629)
static ::Modio::Errors::ErrorCode const HTTP_ALREADY_INITIALIZED;

/// @brief Field HTTP_EXCEPTION value: I64(-2147483646)
static ::Modio::Errors::ErrorCode const HTTP_EXCEPTION;

/// @brief Field HTTP_NOT_INITIALIZED value: I64(-2147483630)
static ::Modio::Errors::ErrorCode const HTTP_NOT_INITIALIZED;

/// @brief Field INCOMPATIBLE_DEPENDENCIES value: I64(-2147483564)
static ::Modio::Errors::ErrorCode const INCOMPATIBLE_DEPENDENCIES;

/// @brief Field INCOMPLETE_LENGTH_SET value: I64(-2147483572)
static ::Modio::Errors::ErrorCode const INCOMPLETE_LENGTH_SET;

/// @brief Field INCORRECT_DISPLAY_PRICE value: I64(-2147483555)
static ::Modio::Errors::ErrorCode const INCORRECT_DISPLAY_PRICE;

/// @brief Field INDEX_OUT_OF_RANGE value: I64(-2147483590)
static ::Modio::Errors::ErrorCode const INDEX_OUT_OF_RANGE;

/// @brief Field INSTALL_OR_UPDATE_CANCELLED value: I64(-2147483570)
static ::Modio::Errors::ErrorCode const INSTALL_OR_UPDATE_CANCELLED;

/// @brief Field INSUFFICIENT_FUNDS value: I64(-2147483553)
static ::Modio::Errors::ErrorCode const INSUFFICIENT_FUNDS;

/// @brief Field INSUFFICIENT_PERMISSION value: I64(15019)
static ::Modio::Errors::ErrorCode const INSUFFICIENT_PERMISSION;

/// @brief Field INSUFFICIENT_PERMISSIONS value: I64(-2147483627)
static ::Modio::Errors::ErrorCode const INSUFFICIENT_PERMISSIONS;

/// @brief Field INSUFFICIENT_SPACE value: I64(20442)
static ::Modio::Errors::ErrorCode const INSUFFICIENT_SPACE;

/// @brief Field INTERNAL_DUPLICATE_REQUEST_WITH_DIFFERING_SCHEMAS value: I64(20500)
static ::Modio::Errors::ErrorCode const INTERNAL_DUPLICATE_REQUEST_WITH_DIFFERING_SCHEMAS;

/// @brief Field INTERNAL_FAILED_TO_DESERIALIZE_OBJECT value: I64(20501)
static ::Modio::Errors::ErrorCode const INTERNAL_FAILED_TO_DESERIALIZE_OBJECT;

/// @brief Field INTERNAL_FILE_HASH_MISMATCH value: I64(20505)
static ::Modio::Errors::ErrorCode const INTERNAL_FILE_HASH_MISMATCH;

/// @brief Field INTERNAL_FILE_SIZE_MISMATCH value: I64(20504)
static ::Modio::Errors::ErrorCode const INTERNAL_FILE_SIZE_MISMATCH;

/// @brief Field INTERNAL_INVALID_PARAMETER value: I64(20507)
static ::Modio::Errors::ErrorCode const INTERNAL_INVALID_PARAMETER;

/// @brief Field INTERNAL_MOD_MANAGEMENT_OPERATION_FAILED value: I64(20503)
static ::Modio::Errors::ErrorCode const INTERNAL_MOD_MANAGEMENT_OPERATION_FAILED;

/// @brief Field INTERNAL_OPERATION_CANCELLED value: I64(20506)
static ::Modio::Errors::ErrorCode const INTERNAL_OPERATION_CANCELLED;

/// @brief Field INTERNAL_REGISTRY_NOT_INITIALIZED value: I64(20502)
static ::Modio::Errors::ErrorCode const INTERNAL_REGISTRY_NOT_INITIALIZED;

/// @brief Field INVALID_APIKEY value: I64(11002)
static ::Modio::Errors::ErrorCode const INVALID_APIKEY;

/// @brief Field INVALID_API_VERSION value: I64(10003)
static ::Modio::Errors::ErrorCode const INVALID_API_VERSION;

/// @brief Field INVALID_BIT_LENGTH_REPEAT value: I64(-2147483578)
static ::Modio::Errors::ErrorCode const INVALID_BIT_LENGTH_REPEAT;

/// @brief Field INVALID_BLOCK_TYPE value: I64(-2147483582)
static ::Modio::Errors::ErrorCode const INVALID_BLOCK_TYPE;

/// @brief Field INVALID_CODE_LENGTHS value: I64(-2147483579)
static ::Modio::Errors::ErrorCode const INVALID_CODE_LENGTHS;

/// @brief Field INVALID_DISTANCE value: I64(-2147483574)
static ::Modio::Errors::ErrorCode const INVALID_DISTANCE;

/// @brief Field INVALID_DISTANCE_CODE value: I64(-2147483575)
static ::Modio::Errors::ErrorCode const INVALID_DISTANCE_CODE;

/// @brief Field INVALID_HEADER value: I64(-2147483600)
static ::Modio::Errors::ErrorCode const INVALID_HEADER;

/// @brief Field INVALID_JSON value: I64(13004)
static ::Modio::Errors::ErrorCode const INVALID_JSON;

/// @brief Field INVALID_LITERAL_LENGTH value: I64(-2147483576)
static ::Modio::Errors::ErrorCode const INVALID_LITERAL_LENGTH;

/// @brief Field INVALID_METRICS_SECRET value: I64(-2147483551)
static ::Modio::Errors::ErrorCode const INVALID_METRICS_SECRET;

/// @brief Field INVALID_MOD_ID value: I64(-2147483632)
static ::Modio::Errors::ErrorCode const INVALID_MOD_ID;

/// @brief Field INVALID_RESPONSE value: I64(-2147483618)
static ::Modio::Errors::ErrorCode const INVALID_RESPONSE;

/// @brief Field INVALID_STORED_LENGTH value: I64(-2147483581)
static ::Modio::Errors::ErrorCode const INVALID_STORED_LENGTH;

/// @brief Field INVALID_USER value: I64(-2147483602)
static ::Modio::Errors::ErrorCode const INVALID_USER;

/// @brief Field ITEM_ALREADY_OWNED value: I64(-2147483554)
static ::Modio::Errors::ErrorCode const ITEM_ALREADY_OWNED;

/// @brief Field MALFORMED_APIKEY value: I64(11001)
static ::Modio::Errors::ErrorCode const MALFORMED_APIKEY;

/// @brief Field MATURE_MODS_NOT_ALLOWED value: I64(15054)
static ::Modio::Errors::ErrorCode const MATURE_MODS_NOT_ALLOWED;

/// @brief Field MD5DOES_NOT_MATCH value: I64(-2147483561)
static ::Modio::Errors::ErrorCode const MD5DOES_NOT_MATCH;

/// @brief Field MISSING_APIKEY value: I64(11000)
static ::Modio::Errors::ErrorCode const MISSING_APIKEY;

/// @brief Field MISSING_COMPONENTS value: I64(-2147483587)
static ::Modio::Errors::ErrorCode const MISSING_COMPONENTS;

/// @brief Field MISSING_CONTENT_TYPE_HEADER value: I64(13005)
static ::Modio::Errors::ErrorCode const MISSING_CONTENT_TYPE_HEADER;

/// @brief Field MISSING_EOB value: I64(-2147483577)
static ::Modio::Errors::ErrorCode const MISSING_EOB;

/// @brief Field MISSING_READ_PERMISSION value: I64(11004)
static ::Modio::Errors::ErrorCode const MISSING_READ_PERMISSION;

/// @brief Field MISSING_WRITE_PERMISSION value: I64(11003)
static ::Modio::Errors::ErrorCode const MISSING_WRITE_PERMISSION;

/// @brief Field MODFILE_NO_UPLOAD_PERMISSION value: I64(15006)
static ::Modio::Errors::ErrorCode const MODFILE_NO_UPLOAD_PERMISSION;

/// @brief Field MODIO_OUTAGE value: I64(10000)
static ::Modio::Errors::ErrorCode const MODIO_OUTAGE;

/// @brief Field MOD_BEING_PROCESSED value: I64(-2147483566)
static ::Modio::Errors::ErrorCode const MOD_BEING_PROCESSED;

/// @brief Field MOD_DEPENDENCIES_NO_ADD_PERMISSION value: I64(15031)
static ::Modio::Errors::ErrorCode const MOD_DEPENDENCIES_NO_ADD_PERMISSION;

/// @brief Field MOD_DEPENDENCIES_NO_DELETE_PERMISSION value: I64(15032)
static ::Modio::Errors::ErrorCode const MOD_DEPENDENCIES_NO_DELETE_PERMISSION;

/// @brief Field MOD_DIRECTORY_NOT_FOUND value: I64(-2147483562)
static ::Modio::Errors::ErrorCode const MOD_DIRECTORY_NOT_FOUND;

/// @brief Field MOD_MANAGEMENT_ALREADY_ENABLED value: I64(-2147483568)
static ::Modio::Errors::ErrorCode const MOD_MANAGEMENT_ALREADY_ENABLED;

/// @brief Field MOD_MANAGEMENT_DISABLED value: I64(-2147483569)
static ::Modio::Errors::ErrorCode const MOD_MANAGEMENT_DISABLED;

/// @brief Field MOD_MEDIA_NO_ADD_PERMISSION value: I64(15035)
static ::Modio::Errors::ErrorCode const MOD_MEDIA_NO_ADD_PERMISSION;

/// @brief Field MOD_MEDIA_NO_DELETE_PERMISSION value: I64(15036)
static ::Modio::Errors::ErrorCode const MOD_MEDIA_NO_DELETE_PERMISSION;

/// @brief Field MOD_TAGS_NOT_INITIALIZED value: I64(-2147483631)
static ::Modio::Errors::ErrorCode const MOD_TAGS_NOT_INITIALIZED;

/// @brief Field MONETIZATION_AUTHENTICATION value: I64(900002)
static ::Modio::Errors::ErrorCode const MONETIZATION_AUTHENTICATION;

/// @brief Field MONETIZATION_AUTHENTICATION_FAILED value: I64(-2147483559)
static ::Modio::Errors::ErrorCode const MONETIZATION_AUTHENTICATION_FAILED;

/// @brief Field MONETIZATION_GAME_MONETIZATION_NOT_ENABLED value: I64(900022)
static ::Modio::Errors::ErrorCode const MONETIZATION_GAME_MONETIZATION_NOT_ENABLED;

/// @brief Field MONETIZATION_INCORRECT_DISPLAY_PRICE value: I64(900035)
static ::Modio::Errors::ErrorCode const MONETIZATION_INCORRECT_DISPLAY_PRICE;

/// @brief Field MONETIZATION_INSUFFICIENT_FUNDS value: I64(900049)
static ::Modio::Errors::ErrorCode const MONETIZATION_INSUFFICIENT_FUNDS;

/// @brief Field MONETIZATION_IN_MAINTENANCE value: I64(900012)
static ::Modio::Errors::ErrorCode const MONETIZATION_IN_MAINTENANCE;

/// @brief Field MONETIZATION_ITEM_ALREADY_OWNED value: I64(900034)
static ::Modio::Errors::ErrorCode const MONETIZATION_ITEM_ALREADY_OWNED;

/// @brief Field MONETIZATION_PAYMENT_FAILED value: I64(900030)
static ::Modio::Errors::ErrorCode const MONETIZATION_PAYMENT_FAILED;

/// @brief Field MONETIZATION_UNABLE_TO_COMMUNICATE value: I64(900001)
static ::Modio::Errors::ErrorCode const MONETIZATION_UNABLE_TO_COMMUNICATE;

/// @brief Field MONETIZATION_UNEXPECTED_ERROR value: I64(900000)
static ::Modio::Errors::ErrorCode const MONETIZATION_UNEXPECTED_ERROR;

/// @brief Field MONETIZATION_WALLET_FETCH_FAILED value: I64(900008)
static ::Modio::Errors::ErrorCode const MONETIZATION_WALLET_FETCH_FAILED;

/// @brief Field MUTE_USER_NOT_FOUND value: I64(17000)
static ::Modio::Errors::ErrorCode const MUTE_USER_NOT_FOUND;

/// @brief Field NEED_BUFFERS value: I64(-2147483585)
static ::Modio::Errors::ErrorCode const NEED_BUFFERS;

/// @brief Field NONE value: I64(0)
static ::Modio::Errors::ErrorCode const NONE;

/// @brief Field NOT_INITIALIZED value: I64(-2147483644)
static ::Modio::Errors::ErrorCode const NOT_INITIALIZED;

/// @brief Field NOT_SUBSCRIBED value: I64(-2147483639)
static ::Modio::Errors::ErrorCode const NOT_SUBSCRIBED;

/// @brief Field NO_AUTH_TOKEN value: I64(-2147483604)
static ::Modio::Errors::ErrorCode const NO_AUTH_TOKEN;

/// @brief Field NO_DATA_AVAILABLE value: I64(-2147483595)
static ::Modio::Errors::ErrorCode const NO_DATA_AVAILABLE;

/// @brief Field NO_FILES_FOUND_FOR_MOD value: I64(-2147483563)
static ::Modio::Errors::ErrorCode const NO_FILES_FOUND_FOR_MOD;

/// @brief Field NO_MORE_PAGES value: I64(-2147483634)
static ::Modio::Errors::ErrorCode const NO_MORE_PAGES;

/// @brief Field NO_PENDING_WORK value: I64(-2147483571)
static ::Modio::Errors::ErrorCode const NO_PENDING_WORK;

/// @brief Field NO_PERMISSION value: I64(-2147483614)
static ::Modio::Errors::ErrorCode const NO_PERMISSION;

/// @brief Field NO_SEARCH value: I64(-2147483638)
static ::Modio::Errors::ErrorCode const NO_SEARCH;

/// @brief Field OPEN_IDNOT_CONFIGURED value: I64(11086)
static ::Modio::Errors::ErrorCode const OPEN_IDNOT_CONFIGURED;

/// @brief Field OPERATION_CANCELLED value: I64(-2147483598)
static ::Modio::Errors::ErrorCode const OPERATION_CANCELLED;

/// @brief Field OPERATION_ERROR value: I64(-2147483597)
static ::Modio::Errors::ErrorCode const OPERATION_ERROR;

/// @brief Field OVER_SUBSCRIBED_LENGTH value: I64(-2147483573)
static ::Modio::Errors::ErrorCode const OVER_SUBSCRIBED_LENGTH;

/// @brief Field PAGE_NOT_SEARCHED value: I64(-2147483636)
static ::Modio::Errors::ErrorCode const PAGE_NOT_SEARCHED;

/// @brief Field PAYMENT_FAILED value: I64(-2147483556)
static ::Modio::Errors::ErrorCode const PAYMENT_FAILED;

/// @brief Field QUEUE_CLOSED value: I64(-2147483593)
static ::Modio::Errors::ErrorCode const QUEUE_CLOSED;

/// @brief Field RATELIMITED value: I64(11008)
static ::Modio::Errors::ErrorCode const RATELIMITED;

/// @brief Field RATELIMITED_SAME_ENDPOINT value: I64(11009)
static ::Modio::Errors::ErrorCode const RATELIMITED_SAME_ENDPOINT;

/// @brief Field RATE_LIMITED value: I64(-2147483617)
static ::Modio::Errors::ErrorCode const RATE_LIMITED;

/// @brief Field READ_ERROR value: I64(-2147483610)
static ::Modio::Errors::ErrorCode const READ_ERROR;

/// @brief Field REPORTED_ENTITY_UNAVAILABLE value: I64(15030)
static ::Modio::Errors::ErrorCode const REPORTED_ENTITY_UNAVAILABLE;

/// @brief Field REQUESTED_COMMENT_NOT_FOUND value: I64(15026)
static ::Modio::Errors::ErrorCode const REQUESTED_COMMENT_NOT_FOUND;

/// @brief Field REQUESTED_GAME_DELETED value: I64(14006)
static ::Modio::Errors::ErrorCode const REQUESTED_GAME_DELETED;

/// @brief Field REQUESTED_GAME_NOT_FOUND value: I64(14001)
static ::Modio::Errors::ErrorCode const REQUESTED_GAME_NOT_FOUND;

/// @brief Field REQUESTED_INVALID_RESPONSE_FORMAT value: I64(13007)
static ::Modio::Errors::ErrorCode const REQUESTED_INVALID_RESPONSE_FORMAT;

/// @brief Field REQUESTED_MODFILE_NOT_FOUND value: I64(15010)
static ::Modio::Errors::ErrorCode const REQUESTED_MODFILE_NOT_FOUND;

/// @brief Field REQUESTED_MOD_DELETED value: I64(15023)
static ::Modio::Errors::ErrorCode const REQUESTED_MOD_DELETED;

/// @brief Field REQUESTED_MOD_INACCESSIBLE value: I64(15024)
static ::Modio::Errors::ErrorCode const REQUESTED_MOD_INACCESSIBLE;

/// @brief Field REQUESTED_MOD_NOT_FOUND value: I64(15022)
static ::Modio::Errors::ErrorCode const REQUESTED_MOD_NOT_FOUND;

/// @brief Field REQUESTED_RESOURCE_NOT_FOUND value: I64(14000)
static ::Modio::Errors::ErrorCode const REQUESTED_RESOURCE_NOT_FOUND;

/// @brief Field REQUESTED_USER_NOT_FOUND value: I64(21000)
static ::Modio::Errors::ErrorCode const REQUESTED_USER_NOT_FOUND;

/// @brief Field REQUEST_ERROR value: I64(-2147483619)
static ::Modio::Errors::ErrorCode const REQUEST_ERROR;

/// @brief Field RESOURCE_NOT_AVAILABLE value: I64(-2147483624)
static ::Modio::Errors::ErrorCode const RESOURCE_NOT_AVAILABLE;

/// @brief Field RETRY_ENTITLEMENTS value: I64(-2147483552)
static ::Modio::Errors::ErrorCode const RETRY_ENTITLEMENTS;

/// @brief Field SDKALREADY_INITIALIZED value: I64(-2147483592)
static ::Modio::Errors::ErrorCode const SDKALREADY_INITIALIZED;

/// @brief Field SDKNOT_INITIALIZED value: I64(-2147483591)
static ::Modio::Errors::ErrorCode const SDKNOT_INITIALIZED;

/// @brief Field SEARCH_IN_PROGRESS value: I64(-2147483637)
static ::Modio::Errors::ErrorCode const SEARCH_IN_PROGRESS;

/// @brief Field SECURITY_CONFIGURATION_INVALID value: I64(-2147483626)
static ::Modio::Errors::ErrorCode const SECURITY_CONFIGURATION_INVALID;

/// @brief Field SERVERS_OVERLOADED value: I64(-2147483620)
static ::Modio::Errors::ErrorCode const SERVERS_OVERLOADED;

/// @brief Field SERVER_CLOSED_CONNECTION value: I64(-2147483622)
static ::Modio::Errors::ErrorCode const SERVER_CLOSED_CONNECTION;

/// @brief Field SERVER_UNAVAILABLE value: I64(-2147483625)
static ::Modio::Errors::ErrorCode const SERVER_UNAVAILABLE;

/// @brief Field SHUTTING_DOWN value: I64(-2147483588)
static ::Modio::Errors::ErrorCode const SHUTTING_DOWN;

/// @brief Field STATUS_AUTH_TOKEN_INVALID value: I64(-2147483605)
static ::Modio::Errors::ErrorCode const STATUS_AUTH_TOKEN_INVALID;

/// @brief Field STATUS_AUTH_TOKEN_MISSING value: I64(-2147483606)
static ::Modio::Errors::ErrorCode const STATUS_AUTH_TOKEN_MISSING;

/// @brief Field STEAM_APP_TICKET_INVALID value: I64(11018)
static ::Modio::Errors::ErrorCode const STEAM_APP_TICKET_INVALID;

/// @brief Field STEAM_FAILED_TO_GET_APP_TICKET value: I64(20604)
static ::Modio::Errors::ErrorCode const STEAM_FAILED_TO_GET_APP_TICKET;

/// @brief Field STREAM_ERROR value: I64(-2147483583)
static ::Modio::Errors::ErrorCode const STREAM_ERROR;

/// @brief Field SUBMIT_REPORT_RIGHTS_REVOKED value: I64(15029)
static ::Modio::Errors::ErrorCode const SUBMIT_REPORT_RIGHTS_REVOKED;

/// @brief Field TEMP_MOD_SET_NOT_INITIALIZED value: I64(-2147483565)
static ::Modio::Errors::ErrorCode const TEMP_MOD_SET_NOT_INITIALIZED;

/// @brief Field TERMS_OF_USE_NOT_INITIALIZED value: I64(-2147483645)
static ::Modio::Errors::ErrorCode const TERMS_OF_USE_NOT_INITIALIZED;

/// @brief Field TOO_MANY_SYMBOLS value: I64(-2147483580)
static ::Modio::Errors::ErrorCode const TOO_MANY_SYMBOLS;

/// @brief Field UNABLE_TO_CREATE_FILE value: I64(-2147483615)
static ::Modio::Errors::ErrorCode const UNABLE_TO_CREATE_FILE;

/// @brief Field UNABLE_TO_CREATE_FOLDER value: I64(-2147483616)
static ::Modio::Errors::ErrorCode const UNABLE_TO_CREATE_FOLDER;

/// @brief Field UNABLE_TO_INIT_STORAGE value: I64(-2147483607)
static ::Modio::Errors::ErrorCode const UNABLE_TO_INIT_STORAGE;

/// @brief Field UNKNOWN value: I64(-2147483648)
static ::Modio::Errors::ErrorCode const UNKNOWN;

/// @brief Field UNKNOWN_SYSTEM_ERROR value: I64(-2147483586)
static ::Modio::Errors::ErrorCode const UNKNOWN_SYSTEM_ERROR;

/// @brief Field UNSUPPORTED_COMPRESSION value: I64(-2147483599)
static ::Modio::Errors::ErrorCode const UNSUPPORTED_COMPRESSION;

/// @brief Field UNSUPPORTED_CONTENT_TYPE_HEADER value: I64(13006)
static ::Modio::Errors::ErrorCode const UNSUPPORTED_CONTENT_TYPE_HEADER;

/// @brief Field UPLOAD_CANCELLED value: I64(-2147483567)
static ::Modio::Errors::ErrorCode const UPLOAD_CANCELLED;

/// @brief Field USER_ALREADY_AUTHENTICATED value: I64(-2147483641)
static ::Modio::Errors::ErrorCode const USER_ALREADY_AUTHENTICATED;

/// @brief Field USER_AUTHENTICATION_IN_PROGRESS value: I64(-2147483640)
static ::Modio::Errors::ErrorCode const USER_AUTHENTICATION_IN_PROGRESS;

/// @brief Field USER_EXISTING_MOD_RATING value: I64(15028)
static ::Modio::Errors::ErrorCode const USER_EXISTING_MOD_RATING;

/// @brief Field USER_MONETIZATION_DISABLED value: I64(900015)
static ::Modio::Errors::ErrorCode const USER_MONETIZATION_DISABLED;

/// @brief Field USER_MONETIZATION_NOT_CONFIGURED value: I64(900007)
static ::Modio::Errors::ErrorCode const USER_MONETIZATION_NOT_CONFIGURED;

/// @brief Field USER_NOT_AUTHENTICATED value: I64(-2147483642)
static ::Modio::Errors::ErrorCode const USER_NOT_AUTHENTICATED;

/// @brief Field USER_NO_ACCEPT_TERMS_OF_USE value: I64(11074)
static ::Modio::Errors::ErrorCode const USER_NO_ACCEPT_TERMS_OF_USE;

/// @brief Field USER_NO_MOD_RATING value: I64(15043)
static ::Modio::Errors::ErrorCode const USER_NO_MOD_RATING;

/// @brief Field VALIDATION_ERRORS value: I64(13009)
static ::Modio::Errors::ErrorCode const VALIDATION_ERRORS;

/// @brief Field WALLET_FETCH_FAILED value: I64(-2147483558)
static ::Modio::Errors::ErrorCode const WALLET_FETCH_FAILED;

/// @brief Field WRITE_ERROR value: I64(-2147483609)
static ::Modio::Errors::ErrorCode const WRITE_ERROR;

/// @brief Field WSS_FAILED_TO_SEND value: I64(20601)
static ::Modio::Errors::ErrorCode const WSS_FAILED_TO_SEND;

/// @brief Field WSS_MESSAGE_TIMEOUT value: I64(20602)
static ::Modio::Errors::ErrorCode const WSS_MESSAGE_TIMEOUT;

/// @brief Field WSS_NOT_CONNECTED value: I64(20600)
static ::Modio::Errors::ErrorCode const WSS_NOT_CONNECTED;

/// @brief Field WSS_UNEXPECTED_MESSAGE value: I64(20603)
static ::Modio::Errors::ErrorCode const WSS_UNEXPECTED_MESSAGE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17691};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Errors::ErrorCode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Errors::ErrorCode) == 0x8, "Size mismatch!");

} // namespace end def Modio::Errors
