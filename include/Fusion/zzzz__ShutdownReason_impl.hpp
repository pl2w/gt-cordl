#pragma once
// IWYU pragma private; include "Fusion/ShutdownReason.hpp"
#include "Fusion/zzzz__ShutdownReason_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::ShutdownReason::ShutdownReason(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::ShutdownReason::ShutdownReason()   {
}
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::Ok{static_cast<int32_t>(0x0)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::Error{static_cast<int32_t>(0x1)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::IncompatibleConfiguration{static_cast<int32_t>(0x2)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::ServerInRoom{static_cast<int32_t>(0x3)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::DisconnectedByPluginLogic{static_cast<int32_t>(0x4)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::GameClosed{static_cast<int32_t>(0x5)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::GameNotFound{static_cast<int32_t>(0x6)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::MaxCcuReached{static_cast<int32_t>(0x7)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::InvalidRegion{static_cast<int32_t>(0x8)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::GameIdAlreadyExists{static_cast<int32_t>(0x9)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::GameIsFull{static_cast<int32_t>(0xa)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::InvalidAuthentication{static_cast<int32_t>(0xb)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::CustomAuthenticationFailed{static_cast<int32_t>(0xc)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::AuthenticationTicketExpired{static_cast<int32_t>(0xd)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::PhotonCloudTimeout{static_cast<int32_t>(0xe)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::AlreadyRunning{static_cast<int32_t>(0xf)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::InvalidArguments{static_cast<int32_t>(0x10)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::HostMigration{static_cast<int32_t>(0x11)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::ConnectionTimeout{static_cast<int32_t>(0x12)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::ConnectionRefused{static_cast<int32_t>(0x13)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::OperationTimeout{static_cast<int32_t>(0x14)};
constexpr ::Fusion::ShutdownReason  Fusion::ShutdownReason::OperationCanceled{static_cast<int32_t>(0x15)};
