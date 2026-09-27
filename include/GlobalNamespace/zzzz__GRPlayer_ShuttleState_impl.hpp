#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_ShuttleState.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ShuttleState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRPlayer_ShuttleState::GRPlayer_ShuttleState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer_ShuttleState::GRPlayer_ShuttleState()   {
}
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::Moving{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::WaitForLeaveRoom{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::JoinRoom{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::WaitForLeadPlayer{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::Teleport{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::TeleportToMyShuttleSafety{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GRPlayer_ShuttleState  GlobalNamespace::GRPlayer_ShuttleState::PostTeleport{static_cast<int32_t>(0x7)};
