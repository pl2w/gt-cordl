#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemFusion_InternalState.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemFusion_InternalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState::NetworkSystemFusion_InternalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState::NetworkSystemFusion_InternalState()   {
}
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::AwaitingAuth{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Idle{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Searching_Joining{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Searching_Joined{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Searching_JoinFailed{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Searching_Disconnecting{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Searching_Disconnected{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::ConnectingToRoom{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::ConnectedToRoom{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::JoinRoomFailed{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Disconnecting{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::Disconnected{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::NetworkSystemFusion_InternalState  GlobalNamespace::NetworkSystemFusion_InternalState::StateCheckFailed{static_cast<int32_t>(0xc)};
