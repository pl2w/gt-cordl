#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriptionKiosk_PurchaseResult.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_PurchaseResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult::SubscriptionKiosk_PurchaseResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult::SubscriptionKiosk_PurchaseResult()   {
}
constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult  GlobalNamespace::SubscriptionKiosk_PurchaseResult::Success{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult  GlobalNamespace::SubscriptionKiosk_PurchaseResult::Failure{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult  GlobalNamespace::SubscriptionKiosk_PurchaseResult::Cancel{static_cast<int32_t>(0x2)};
