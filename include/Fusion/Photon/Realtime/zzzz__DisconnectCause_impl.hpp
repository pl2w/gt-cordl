#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/DisconnectCause.hpp"
#include "Fusion/Photon/Realtime/zzzz__DisconnectCause_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Photon::Realtime::DisconnectCause::DisconnectCause(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::DisconnectCause::DisconnectCause()   {
}
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::None{static_cast<int32_t>(0x0)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::ExceptionOnConnect{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::DnsExceptionOnConnect{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::ServerAddressInvalid{static_cast<int32_t>(0x3)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::Exception{static_cast<int32_t>(0x4)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::SendException{static_cast<int32_t>(0x5)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::ReceiveException{static_cast<int32_t>(0x6)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::ServerTimeout{static_cast<int32_t>(0x7)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::ClientTimeout{static_cast<int32_t>(0x8)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::DisconnectByServerLogic{static_cast<int32_t>(0x9)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::DisconnectByServerReasonUnknown{static_cast<int32_t>(0xa)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::InvalidAuthentication{static_cast<int32_t>(0xb)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::CustomAuthenticationFailed{static_cast<int32_t>(0xc)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::AuthenticationTicketExpired{static_cast<int32_t>(0xd)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::MaxCcuReached{static_cast<int32_t>(0xe)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::InvalidRegion{static_cast<int32_t>(0xf)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::OperationNotAllowedInCurrentState{static_cast<int32_t>(0x10)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::DisconnectByClientLogic{static_cast<int32_t>(0x11)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::DisconnectByOperationLimit{static_cast<int32_t>(0x12)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::DisconnectByDisconnectMessage{static_cast<int32_t>(0x13)};
constexpr ::Fusion::Photon::Realtime::DisconnectCause  Fusion::Photon::Realtime::DisconnectCause::ApplicationQuit{static_cast<int32_t>(0x14)};
