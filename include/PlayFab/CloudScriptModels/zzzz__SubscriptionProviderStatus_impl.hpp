#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/SubscriptionProviderStatus.hpp"
#include "PlayFab/CloudScriptModels/zzzz__SubscriptionProviderStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus::SubscriptionProviderStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus::SubscriptionProviderStatus()   {
}
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::NoError{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::Cancelled{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::UnknownError{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::BillingError{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::ProductUnavailable{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::CustomerDidNotAcceptPriceChange{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::FreeTrial{static_cast<int32_t>(0x6)};
constexpr ::PlayFab::CloudScriptModels::SubscriptionProviderStatus  PlayFab::CloudScriptModels::SubscriptionProviderStatus::PaymentPending{static_cast<int32_t>(0x7)};
