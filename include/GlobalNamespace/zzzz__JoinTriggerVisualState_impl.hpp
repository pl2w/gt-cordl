#pragma once
// IWYU pragma private; include "GlobalNamespace/JoinTriggerVisualState.hpp"
#include "GlobalNamespace/zzzz__JoinTriggerVisualState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JoinTriggerVisualState::JoinTriggerVisualState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JoinTriggerVisualState::JoinTriggerVisualState()   {
}
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::ConnectionError{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::AlreadyInRoom{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::InPrivateRoom{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::NotConnectedSoloJoin{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::LeaveRoomAndSoloJoin{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::LeaveRoomAndPartyJoin{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::AbandonPartyAndSoloJoin{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::JoinTriggerVisualState  GlobalNamespace::JoinTriggerVisualState::ChangingGameModeSoloJoin{static_cast<int32_t>(0x7)};
