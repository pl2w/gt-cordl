#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/ServerConnection.hpp"
#include "Fusion/Photon/Realtime/zzzz__ServerConnection_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::ServerConnection::ServerConnection(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::ServerConnection::ServerConnection()   {
}
constexpr ::Fusion::Photon::Realtime::ServerConnection  Fusion::Photon::Realtime::ServerConnection::MasterServer{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Photon::Realtime::ServerConnection  Fusion::Photon::Realtime::ServerConnection::GameServer{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Photon::Realtime::ServerConnection  Fusion::Photon::Realtime::ServerConnection::NameServer{static_cast<int32_t>(0x2)};
