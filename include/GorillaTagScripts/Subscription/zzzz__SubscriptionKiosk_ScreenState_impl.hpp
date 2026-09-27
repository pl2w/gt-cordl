#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriptionKiosk_ScreenState.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_ScreenState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState::SubscriptionKiosk_ScreenState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState::SubscriptionKiosk_ScreenState()   {
}
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::SafeAccount{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::WaitingForScan{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::Scanning{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::SubscriptionStatusUnknown{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::MainMenuSubscribed{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::MainMenuUnsubscribed{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::SubscriptionData{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::PurchaseSubscription{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::SubscriptionPurchaseInProgress{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::SubscriptionPurchaseResult{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::FeatureToggles{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::SubscriptionSteamWarning{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState  GlobalNamespace::SubscriptionKiosk_ScreenState::None{static_cast<int32_t>(0xc)};
