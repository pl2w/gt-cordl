#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendingManager_FriendStationState.hpp"
#include "GlobalNamespace/zzzz__FriendingManager_FriendStationState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendingManager_FriendStationState::FriendingManager_FriendStationState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendingManager_FriendStationState::FriendingManager_FriendStationState()   {
}
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::NotInRoom{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingForPlayers{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnFriendStatusBoth{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnFriendStatusPlayerA{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnFriendStatusPlayerB{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnButtonBoth{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnButtonPlayerA{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnButtonPlayerB{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::ButtonConfirmationTimer0{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::ButtonConfirmationTimer1{static_cast<int32_t>(0x9)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::ButtonConfirmationTimer2{static_cast<int32_t>(0xa)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::ButtonConfirmationTimer3{static_cast<int32_t>(0xb)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::ButtonConfirmationTimer4{static_cast<int32_t>(0xc)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnRequestBoth{static_cast<int32_t>(0xd)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnRequestPlayerA{static_cast<int32_t>(0xe)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::WaitingOnRequestPlayerB{static_cast<int32_t>(0xf)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::RequestFailed{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::Friends{static_cast<int32_t>(0x11)};
constexpr ::GlobalNamespace::FriendingManager_FriendStationState  GlobalNamespace::FriendingManager_FriendStationState::AlreadyFriends{static_cast<int32_t>(0x12)};
