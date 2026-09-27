#pragma once
// IWYU pragma private; include "Modio/Errors/ApiErrorCode.hpp"
#include "Modio/Errors/zzzz__ApiErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::ApiErrorCode::ApiErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::ApiErrorCode::ApiErrorCode()   {
}
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MODIO_OUTAGE{static_cast<int64_t>(0x2710)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::CROSS_ORIGIN_FORBIDDEN{static_cast<int64_t>(0x2711)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::FAILED_TO_COMPLETE_THE_REQUEST{static_cast<int64_t>(0x2712)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::INVALID_API_VERSION{static_cast<int64_t>(0x2713)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MISSING_APIKEY{static_cast<int64_t>(0x2af8)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MALFORMED_APIKEY{static_cast<int64_t>(0x2af9)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::INVALID_APIKEY{static_cast<int64_t>(0x2afa)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MISSING_WRITE_PERMISSION{static_cast<int64_t>(0x2afb)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MISSING_READ_PERMISSION{static_cast<int64_t>(0x2afc)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::EXPIRED_OR_REVOKED_ACCESS_TOKEN{static_cast<int64_t>(0x2afd)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::AUTHENTICATED_ACCOUNT_HAS_BEEN_DELETED{static_cast<int64_t>(0x2afe)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::BANNED_USER_ACCOUNT{static_cast<int64_t>(0x2aff)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::RATELIMITED{static_cast<int64_t>(0x2b00)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::RATELIMITED_SAME_ENDPOINT{static_cast<int64_t>(0x2b01)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::APIKEY_HAS_NO_GAME{static_cast<int64_t>(0x2b08)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::APIKEY_FOR_TEST_ONLY{static_cast<int64_t>(0x2b09)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::CANNOT_VERIFY_EXTERNAL_CREDENTIALS{static_cast<int64_t>(0x2b18)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::USER_NO_ACCEPT_TERMS_OF_USE{static_cast<int64_t>(0x2b42)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::OPEN_IDNOT_CONFIGURED{static_cast<int64_t>(0x2b4e)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::BINARY_FILE_CORRUPTED{static_cast<int64_t>(0x32c9)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::BINARY_FILE_UNREADABLE{static_cast<int64_t>(0x32ca)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::INVALID_JSON{static_cast<int64_t>(0x32cc)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MISSING_CONTENT_TYPE_HEADER{static_cast<int64_t>(0x32cd)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::UNSUPPORTED_CONTENT_TYPE_HEADER{static_cast<int64_t>(0x32ce)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_INVALID_RESPONSE_FORMAT{static_cast<int64_t>(0x32cf)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::VALIDATION_ERRORS{static_cast<int64_t>(0x32d1)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_RESOURCE_NOT_FOUND{static_cast<int64_t>(0x36b0)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_GAME_NOT_FOUND{static_cast<int64_t>(0x36b1)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_GAME_DELETED{static_cast<int64_t>(0x36b6)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::FORBIDDEN_DMCA{static_cast<int64_t>(0x3a98)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::FORBIDDEN_HIDDEN{static_cast<int64_t>(0x3a99)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::ALREADY_UNSUBSCRIBED{static_cast<int64_t>(0x3a9d)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MODFILE_NO_UPLOAD_PERMISSION{static_cast<int64_t>(0x3a9e)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_MODFILE_NOT_FOUND{static_cast<int64_t>(0x3aa2)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::FORBIDDEN_TACNOT_ACCEPTED{static_cast<int64_t>(0x3aa3)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::FORBIDDEN_MISSING_FILE{static_cast<int64_t>(0x3aac)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::INSUFFICIENT_PERMISSION{static_cast<int64_t>(0x3aab)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_MOD_NOT_FOUND{static_cast<int64_t>(0x3aae)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_MOD_DELETED{static_cast<int64_t>(0x3aaf)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_COMMENT_NOT_FOUND{static_cast<int64_t>(0x3ab2)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::USER_EXISTING_MOD_RATING{static_cast<int64_t>(0x3ab4)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::SUBMIT_REPORT_RIGHTS_REVOKED{static_cast<int64_t>(0x3ab5)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REPORTED_ENTITY_UNAVAILABLE{static_cast<int64_t>(0x3ab6)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MOD_MEDIA_NO_ADD_PERMISSION{static_cast<int64_t>(0x3abb)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MOD_MEDIA_NO_DELETE_PERMISSION{static_cast<int64_t>(0x3abc)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::USER_NO_MOD_RATING{static_cast<int64_t>(0x3ac3)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MATURE_MODS_NOT_ALLOWED{static_cast<int64_t>(0x3ace)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MUTE_USER_NOT_FOUND{static_cast<int64_t>(0x4268)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::CANNOT_MUTE_YOURSELF{static_cast<int64_t>(0x428f)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::REQUESTED_USER_NOT_FOUND{static_cast<int64_t>(0x5208)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_UNEXPECTED_ERROR{static_cast<int64_t>(0xdbba0)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_UNABLE_TO_COMMUNICATE{static_cast<int64_t>(0xdbba1)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_AUTHENTICATION{static_cast<int64_t>(0xdbba2)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_WALLET_FETCH_FAILED{static_cast<int64_t>(0xdbba8)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_IN_MAINTENANCE{static_cast<int64_t>(0xdbbac)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_GAME_MONETIZATION_NOT_ENABLED{static_cast<int64_t>(0xdbbb6)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_PAYMENT_FAILED{static_cast<int64_t>(0xdbbbe)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_ITEM_ALREADY_OWNED{static_cast<int64_t>(0xdbbc2)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_INCORRECT_DISPLAY_PRICE{static_cast<int64_t>(0xdbbc3)};
constexpr ::Modio::Errors::ApiErrorCode  Modio::Errors::ApiErrorCode::MONETIZATION_INSUFFICIENT_FUNDS{static_cast<int64_t>(0xdbbd1)};
