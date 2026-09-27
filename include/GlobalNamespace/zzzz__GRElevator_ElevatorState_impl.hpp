#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevator_ElevatorState.hpp"
#include "GlobalNamespace/zzzz__GRElevator_ElevatorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRElevator_ElevatorState::GRElevator_ElevatorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevator_ElevatorState::GRElevator_ElevatorState()   {
}
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorBeginClosing{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorMovingClosing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorEndClosing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorClosed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorBeginOpening{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorMovingOpening{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorEndOpening{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::DoorOpen{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::GRElevator_ElevatorState  GlobalNamespace::GRElevator_ElevatorState::None{static_cast<int32_t>(0x8)};
