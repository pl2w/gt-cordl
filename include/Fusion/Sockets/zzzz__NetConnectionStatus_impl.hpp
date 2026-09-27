#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionStatus.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConnectionStatus::NetConnectionStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConnectionStatus::NetConnectionStatus()   {
}
constexpr ::Fusion::Sockets::NetConnectionStatus  Fusion::Sockets::NetConnectionStatus::Created{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Sockets::NetConnectionStatus  Fusion::Sockets::NetConnectionStatus::Connecting{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Sockets::NetConnectionStatus  Fusion::Sockets::NetConnectionStatus::Connected{static_cast<int32_t>(0x3)};
constexpr ::Fusion::Sockets::NetConnectionStatus  Fusion::Sockets::NetConnectionStatus::Disconnected{static_cast<int32_t>(0x4)};
constexpr ::Fusion::Sockets::NetConnectionStatus  Fusion::Sockets::NetConnectionStatus::Shutdown{static_cast<int32_t>(0x5)};
