#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDoor_DoorState.hpp"
#include "GlobalNamespace/zzzz__GRDoor_DoorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRDoor_DoorState::GRDoor_DoorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRDoor_DoorState::GRDoor_DoorState()   {
}
constexpr ::GlobalNamespace::GRDoor_DoorState  GlobalNamespace::GRDoor_DoorState::Closed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRDoor_DoorState  GlobalNamespace::GRDoor_DoorState::Open{static_cast<int32_t>(0x1)};
