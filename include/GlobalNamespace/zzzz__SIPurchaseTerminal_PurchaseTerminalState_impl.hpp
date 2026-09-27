#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPurchaseTerminal_PurchaseTerminalState.hpp"
#include "GlobalNamespace/zzzz__SIPurchaseTerminal_PurchaseTerminalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::SIPurchaseTerminal_PurchaseTerminalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::SIPurchaseTerminal_PurchaseTerminalState()   {
}
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::PurchaseAmountSelection{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::ConfirmPurchasePopup{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::PendingPurchasePopup{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::PurchaseCompletePopup{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::InsufficientFundsPopup{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState  GlobalNamespace::SIPurchaseTerminal_PurchaseTerminalState::UnableToCompletePurchasePopup{static_cast<int32_t>(0x5)};
