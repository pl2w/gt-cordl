#pragma once
// IWYU pragma private; include "Viveport/Internal/ESubscriptionTransactionType.hpp"
#include "Viveport/Internal/zzzz__ESubscriptionTransactionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Viveport::Internal::ESubscriptionTransactionType::ESubscriptionTransactionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Viveport::Internal::ESubscriptionTransactionType::ESubscriptionTransactionType()   {
}
constexpr ::Viveport::Internal::ESubscriptionTransactionType  Viveport::Internal::ESubscriptionTransactionType::UNKNOWN{static_cast<int32_t>(0x0)};
constexpr ::Viveport::Internal::ESubscriptionTransactionType  Viveport::Internal::ESubscriptionTransactionType::PAID{static_cast<int32_t>(0x1)};
constexpr ::Viveport::Internal::ESubscriptionTransactionType  Viveport::Internal::ESubscriptionTransactionType::REDEEM{static_cast<int32_t>(0x2)};
constexpr ::Viveport::Internal::ESubscriptionTransactionType  Viveport::Internal::ESubscriptionTransactionType::FREEE_TRIAL{static_cast<int32_t>(0x3)};
