#pragma once
// IWYU pragma private; include "GlobalNamespace/ATM_Manager_ATMStages.hpp"
#include "GlobalNamespace/zzzz__ATM_Manager_ATMStages_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ATM_Manager_ATMStages::ATM_Manager_ATMStages(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ATM_Manager_ATMStages::ATM_Manager_ATMStages()   {
}
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Unavailable{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Begin{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Menu{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Balance{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Choose{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Confirm{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Purchasing{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Success{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::Failure{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ATM_Manager_ATMStages  GlobalNamespace::ATM_Manager_ATMStages::SafeAccount{static_cast<int32_t>(0x9)};
