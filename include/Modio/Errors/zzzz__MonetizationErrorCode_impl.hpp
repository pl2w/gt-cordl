#pragma once
// IWYU pragma private; include "Modio/Errors/MonetizationErrorCode.hpp"
#include "Modio/Errors/zzzz__MonetizationErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::Errors::MonetizationErrorCode::MonetizationErrorCode(int64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::Errors::MonetizationErrorCode::MonetizationErrorCode()   {
}
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::NONE{static_cast<int64_t>(0x0)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::UNKNOWN{static_cast<int64_t>(0xffffffff80000000)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::DISPLAY_PRICE_INCORRECT{static_cast<int64_t>(0xffffffff80000058)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::MONETIZATION_AUTHENTICATION_FAILED{static_cast<int64_t>(0xffffffff80000059)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::WALLET_FETCH_FAILED{static_cast<int64_t>(0xffffffff8000005a)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::USER_MONETIZATION_NOT_CONFIGURED{static_cast<int64_t>(0xdbba7)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::USER_MONETIZATION_DISABLED{static_cast<int64_t>(0xdbbaf)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::GAME_MONETIZATION_NOT_ENABLED{static_cast<int64_t>(0xffffffff8000005b)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::PAYMENT_FAILED{static_cast<int64_t>(0xffffffff8000005c)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::INCORRECT_DISPLAY_PRICE{static_cast<int64_t>(0xffffffff8000005d)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::ITEM_ALREADY_OWNED{static_cast<int64_t>(0xffffffff8000005e)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::INSUFFICIENT_FUNDS{static_cast<int64_t>(0xffffffff8000005f)};
constexpr ::Modio::Errors::MonetizationErrorCode  Modio::Errors::MonetizationErrorCode::RETRY_ENTITLEMENTS{static_cast<int64_t>(0xffffffff80000060)};
