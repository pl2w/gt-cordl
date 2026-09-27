#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager_SubscriptionStatus.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionStatus::SubscriptionManager_SubscriptionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionStatus::SubscriptionManager_SubscriptionStatus()   {
}
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionStatus  GlobalNamespace::SubscriptionManager_SubscriptionStatus::Active{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionStatus  GlobalNamespace::SubscriptionManager_SubscriptionStatus::Inactive{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionStatus  GlobalNamespace::SubscriptionManager_SubscriptionStatus::Unknown{static_cast<int32_t>(0x2)};
