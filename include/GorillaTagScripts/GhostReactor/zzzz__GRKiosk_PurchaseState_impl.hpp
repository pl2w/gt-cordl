#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/GRKiosk_PurchaseState.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRKiosk_PurchaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRKiosk_PurchaseState::GRKiosk_PurchaseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRKiosk_PurchaseState::GRKiosk_PurchaseState()   {
}
constexpr ::GlobalNamespace::GRKiosk_PurchaseState  GlobalNamespace::GRKiosk_PurchaseState::Initialize{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRKiosk_PurchaseState  GlobalNamespace::GRKiosk_PurchaseState::AlreadyOwned{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRKiosk_PurchaseState  GlobalNamespace::GRKiosk_PurchaseState::AvailableForPurchase{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRKiosk_PurchaseState  GlobalNamespace::GRKiosk_PurchaseState::CheckoutPressed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRKiosk_PurchaseState  GlobalNamespace::GRKiosk_PurchaseState::CheckoutConfirmation{static_cast<int32_t>(0x4)};
