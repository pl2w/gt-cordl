#pragma once
// IWYU pragma private; include "Modio/Errors/RateLimitErrorCode.hpp"
#include "Modio/Errors/zzzz__RateLimitErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::RateLimitErrorCode::RateLimitErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::RateLimitErrorCode::RateLimitErrorCode()   {
}
constexpr ::Modio::Errors::RateLimitErrorCode  Modio::Errors::RateLimitErrorCode::RATELIMITED{static_cast<int64_t>(0x2b00)};
constexpr ::Modio::Errors::RateLimitErrorCode  Modio::Errors::RateLimitErrorCode::RATELIMITED_SAME_ENDPOINT{static_cast<int64_t>(0x2b01)};
