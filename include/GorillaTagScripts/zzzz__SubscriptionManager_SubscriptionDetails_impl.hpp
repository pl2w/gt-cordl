#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager_SubscriptionDetails.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionDetails_def.hpp"
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "daysAccrued", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subscriptionFeatureSettings", ty: "::ArrayW<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tier", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subscriptionActiveUntilDate", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "autoRenew", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "autoRenewMonths", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionDetails::SubscriptionManager_SubscriptionDetails(bool  active, int32_t  daysAccrued, ::ArrayW<bool>  subscriptionFeatureSettings, int32_t  tier, ::System::DateTime  subscriptionActiveUntilDate, bool  autoRenew, int32_t  autoRenewMonths) noexcept  {
this->active = active;
this->daysAccrued = daysAccrued;
this->subscriptionFeatureSettings = subscriptionFeatureSettings;
this->tier = tier;
this->subscriptionActiveUntilDate = subscriptionActiveUntilDate;
this->autoRenew = autoRenew;
this->autoRenewMonths = autoRenewMonths;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionDetails::SubscriptionManager_SubscriptionDetails()   {
}
