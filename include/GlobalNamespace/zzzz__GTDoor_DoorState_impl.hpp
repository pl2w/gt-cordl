#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDoor_DoorState.hpp"
#include "GlobalNamespace/zzzz__GTDoor_DoorState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTDoor_DoorState::GTDoor_DoorState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTDoor_DoorState::GTDoor_DoorState()   {
}
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::Closed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::ClosingWaitingOnRPC{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::Closing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::Open{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::OpeningWaitingOnRPC{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::Opening{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::HeldOpen{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GTDoor_DoorState  GlobalNamespace::GTDoor_DoorState::HeldOpenLocally{static_cast<int32_t>(0x7)};
