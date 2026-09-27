#pragma once
// IWYU pragma private; include "Viveport/SubscriptionStatus_TransactionType.hpp"
#include "Viveport/zzzz__SubscriptionStatus_TransactionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType::SubscriptionStatus_TransactionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType::SubscriptionStatus_TransactionType()   {
}
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType  GlobalNamespace::SubscriptionStatus_TransactionType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType  GlobalNamespace::SubscriptionStatus_TransactionType::Paid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType  GlobalNamespace::SubscriptionStatus_TransactionType::Redeem{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SubscriptionStatus_TransactionType  GlobalNamespace::SubscriptionStatus_TransactionType::FreeTrial{static_cast<int32_t>(0x3)};
