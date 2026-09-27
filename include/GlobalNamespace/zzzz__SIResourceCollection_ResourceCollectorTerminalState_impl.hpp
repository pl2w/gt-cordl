#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollection_ResourceCollectorTerminalState.hpp"
#include "GlobalNamespace/zzzz__SIResourceCollection_ResourceCollectorTerminalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::SIResourceCollection_ResourceCollectorTerminalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::SIResourceCollection_ResourceCollectorTerminalState()   {
}
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::WaitingForScan{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::CurrentResources{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::HelpScreen{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::PurchaseRemote{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::PurchaseStart{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::PurchaseInProgress{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::PurchaseSuccess{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState  GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState::PurchaseFailure{static_cast<int32_t>(0x7)};
