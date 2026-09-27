#pragma once
// IWYU pragma private; include "Modio/Errors/UserAuthErrorCode.hpp"
#include "Modio/Errors/zzzz__UserAuthErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::UserAuthErrorCode::UserAuthErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::UserAuthErrorCode::UserAuthErrorCode()   {
}
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::UNABLE_TO_INIT_STORAGE{static_cast<int64_t>(0xffffffff80000029)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::STATUS_AUTH_TOKEN_MISSING{static_cast<int64_t>(0xffffffff8000002a)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::STATUS_AUTH_TOKEN_INVALID{static_cast<int64_t>(0xffffffff8000002b)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::NO_AUTH_TOKEN{static_cast<int64_t>(0xffffffff8000002c)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::ALREADY_AUTHENTICATED{static_cast<int64_t>(0xffffffff8000002d)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::EMAIL_LOGIN_CODE_EXPIRED{static_cast<int64_t>(0x2b04)};
constexpr ::Modio::Errors::UserAuthErrorCode  Modio::Errors::UserAuthErrorCode::EMAIL_LOGIN_CODE_INVALID{static_cast<int64_t>(0x2b06)};
