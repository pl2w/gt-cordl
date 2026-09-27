#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ClientState.hpp"
#include "Fusion/Photon/Realtime/zzzz__ClientState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::ClientState::ClientState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::ClientState::ClientState()   {
}
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::PeerCreated{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::Authenticating{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::Authenticated{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::JoiningLobby{static_cast<int32_t>(0x3)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::JoinedLobby{static_cast<int32_t>(0x4)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::DisconnectingFromMasterServer{static_cast<int32_t>(0x5)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::DisconnectingFromMasterserver{static_cast<int32_t>(0x5)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectingToGameServer{static_cast<int32_t>(0x6)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectingToGameserver{static_cast<int32_t>(0x6)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectedToGameServer{static_cast<int32_t>(0x7)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectedToGameserver{static_cast<int32_t>(0x7)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::Joining{static_cast<int32_t>(0x8)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::Joined{static_cast<int32_t>(0x9)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::Leaving{static_cast<int32_t>(0xa)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::DisconnectingFromGameServer{static_cast<int32_t>(0xb)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::DisconnectingFromGameserver{static_cast<int32_t>(0xb)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectingToMasterServer{static_cast<int32_t>(0xc)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectingToMasterserver{static_cast<int32_t>(0xc)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::Disconnecting{static_cast<int32_t>(0xd)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::Disconnected{static_cast<int32_t>(0xe)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectedToMasterServer{static_cast<int32_t>(0xf)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectedToMasterserver{static_cast<int32_t>(0xf)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectedToMaster{static_cast<int32_t>(0xf)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectingToNameServer{static_cast<int32_t>(0x10)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectedToNameServer{static_cast<int32_t>(0x11)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::DisconnectingFromNameServer{static_cast<int32_t>(0x12)};
constexpr ::Fusion::Photon::Realtime::ClientState  Fusion::Photon::Realtime::ClientState::ConnectWithFallbackProtocol{static_cast<int32_t>(0x13)};
