#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SubscriptionProviderStatus.hpp"
#include "PlayFab/ClientModels/zzzz__SubscriptionProviderStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus::SubscriptionProviderStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus::SubscriptionProviderStatus()   {
}
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::NoError{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::Cancelled{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::UnknownError{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::BillingError{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::ProductUnavailable{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::CustomerDidNotAcceptPriceChange{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::FreeTrial{static_cast<int32_t>(0x6)};
constexpr ::PlayFab::ClientModels::SubscriptionProviderStatus  PlayFab::ClientModels::SubscriptionProviderStatus::PaymentPending{static_cast<int32_t>(0x7)};
