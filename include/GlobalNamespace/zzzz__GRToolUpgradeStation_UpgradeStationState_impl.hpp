#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradeStation_UpgradeStationState.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_UpgradeStationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState::GRToolUpgradeStation_UpgradeStationState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState::GRToolUpgradeStation_UpgradeStationState()   {
}
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  GlobalNamespace::GRToolUpgradeStation_UpgradeStationState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  GlobalNamespace::GRToolUpgradeStation_UpgradeStationState::ItemInserted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  GlobalNamespace::GRToolUpgradeStation_UpgradeStationState::Upgrading{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRToolUpgradeStation_UpgradeStationState  GlobalNamespace::GRToolUpgradeStation_UpgradeStationState::Complete{static_cast<int32_t>(0x3)};
