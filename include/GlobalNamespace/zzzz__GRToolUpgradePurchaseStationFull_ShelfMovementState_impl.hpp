#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationFull_ShelfMovementState.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationFull_ShelfMovementState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::GRToolUpgradePurchaseStationFull_ShelfMovementState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::GRToolUpgradePurchaseStationFull_ShelfMovementState()   {
}
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::MoveCurrentShelfBackward{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::MoveCurrentShelfForward{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::MoveNextShelfUpward{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::MoveNextShelfDownward{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState  GlobalNamespace::GRToolUpgradePurchaseStationFull_ShelfMovementState::Count{static_cast<int32_t>(0x5)};
