#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager_SubscriptionTerm.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionTerm_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionTerm::SubscriptionManager_SubscriptionTerm(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionTerm::SubscriptionManager_SubscriptionTerm()   {
}
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionTerm  GlobalNamespace::SubscriptionManager_SubscriptionTerm::MONTHLY{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionTerm  GlobalNamespace::SubscriptionManager_SubscriptionTerm::QUARTERLY{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionTerm  GlobalNamespace::SubscriptionManager_SubscriptionTerm::SEMIANNUAL{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SubscriptionManager_SubscriptionTerm  GlobalNamespace::SubscriptionManager_SubscriptionTerm::ANNUAL{static_cast<int32_t>(0x3)};
