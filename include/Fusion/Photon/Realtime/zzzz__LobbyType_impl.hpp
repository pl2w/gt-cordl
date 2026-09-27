#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/LobbyType.hpp"
#include "Fusion/Photon/Realtime/zzzz__LobbyType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::LobbyType::LobbyType(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::LobbyType::LobbyType()   {
}
constexpr ::Fusion::Photon::Realtime::LobbyType  Fusion::Photon::Realtime::LobbyType::Default{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Photon::Realtime::LobbyType  Fusion::Photon::Realtime::LobbyType::SqlLobby{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Photon::Realtime::LobbyType  Fusion::Photon::Realtime::LobbyType::AsyncRandomLobby{static_cast<uint8_t>(0x3u)};
