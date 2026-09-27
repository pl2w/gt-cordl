#pragma once
// IWYU pragma private; include "Modio/Errors/HttpErrorCode.hpp"
#include "Modio/Errors/zzzz__HttpErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::HttpErrorCode::HttpErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::HttpErrorCode::HttpErrorCode()   {
}
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::HTTP_NOT_INITIALIZED{static_cast<int64_t>(0xffffffff80000012)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::HTTP_ALREADY_INITIALIZED{static_cast<int64_t>(0xffffffff80000013)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::CANNOT_OPEN_CONNECTION{static_cast<int64_t>(0xffffffff80000014)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::INSUFFICIENT_PERMISSIONS{static_cast<int64_t>(0xffffffff80000015)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::SECURITY_CONFIGURATION_INVALID{static_cast<int64_t>(0xffffffff80000016)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::SERVER_UNAVAILABLE{static_cast<int64_t>(0xffffffff80000017)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::RESOURCE_NOT_AVAILABLE{static_cast<int64_t>(0xffffffff80000018)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::EXCESSIVE_REDIRECTS{static_cast<int64_t>(0xffffffff80000019)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::SERVER_CLOSED_CONNECTION{static_cast<int64_t>(0xffffffff8000001a)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::DOWNLOAD_NOT_PERMITTED{static_cast<int64_t>(0xffffffff8000001b)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::SERVERS_OVERLOADED{static_cast<int64_t>(0xffffffff8000001c)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::REQUEST_ERROR{static_cast<int64_t>(0xffffffff8000001d)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::INVALID_RESPONSE{static_cast<int64_t>(0xffffffff8000001e)};
constexpr ::Modio::Errors::HttpErrorCode  Modio::Errors::HttpErrorCode::RATE_LIMITED{static_cast<int64_t>(0xffffffff8000001f)};
