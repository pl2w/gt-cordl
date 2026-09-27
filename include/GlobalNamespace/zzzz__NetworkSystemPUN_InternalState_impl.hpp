#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkSystemPUN_InternalState.hpp"
#include "GlobalNamespace/zzzz__NetworkSystemPUN_InternalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState::NetworkSystemPUN_InternalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState::NetworkSystemPUN_InternalState()   {
}
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::AwaitingAuth{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Authenticated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::PingGathering{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::StateCheckFailed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::ConnectingToMaster{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::ConnectedToMaster{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Idle{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Internal_Disconnecting{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Internal_Disconnected{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Connecting{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Connected{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Joining{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Joined{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_JoinFailed_NotFound{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_JoinFailed_Full{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_JoinFailed_Other{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Creating{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Created{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_CreateFailed{static_cast<int32_t>(0x12)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Disconnecting{static_cast<int32_t>(0x13)};
constexpr ::GlobalNamespace::NetworkSystemPUN_InternalState  GlobalNamespace::NetworkSystemPUN_InternalState::Searching_Disconnected{static_cast<int32_t>(0x14)};
