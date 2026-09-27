#pragma once
// IWYU pragma private; include "Viveport/SubscriptionStatus_Platform.hpp"
#include "Viveport/zzzz__SubscriptionStatus_Platform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionStatus_Platform::SubscriptionStatus_Platform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionStatus_Platform::SubscriptionStatus_Platform()   {
}
constexpr ::GlobalNamespace::SubscriptionStatus_Platform  GlobalNamespace::SubscriptionStatus_Platform::Windows{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SubscriptionStatus_Platform  GlobalNamespace::SubscriptionStatus_Platform::Android{static_cast<int32_t>(0x1)};
