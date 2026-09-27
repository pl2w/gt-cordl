#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorManager_ElevatorSystemState.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorSystemState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState::GRElevatorManager_ElevatorSystemState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState::GRElevatorManager_ElevatorSystemState()   {
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  GlobalNamespace::GRElevatorManager_ElevatorSystemState::Dormant{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  GlobalNamespace::GRElevatorManager_ElevatorSystemState::InLocation{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  GlobalNamespace::GRElevatorManager_ElevatorSystemState::DestinationPressed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  GlobalNamespace::GRElevatorManager_ElevatorSystemState::WaitingToTeleport{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  GlobalNamespace::GRElevatorManager_ElevatorSystemState::Teleporting{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState  GlobalNamespace::GRElevatorManager_ElevatorSystemState::None{static_cast<int32_t>(0x5)};
