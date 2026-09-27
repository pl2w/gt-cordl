#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket_MessageOpcode.hpp"
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageOpcode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode::ManagedWebSocket_MessageOpcode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode::ManagedWebSocket_MessageOpcode()   {
}
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode  GlobalNamespace::ManagedWebSocket_MessageOpcode::Continuation{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode  GlobalNamespace::ManagedWebSocket_MessageOpcode::Text{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode  GlobalNamespace::ManagedWebSocket_MessageOpcode::Binary{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode  GlobalNamespace::ManagedWebSocket_MessageOpcode::Close{static_cast<uint8_t>(0x8u)};
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode  GlobalNamespace::ManagedWebSocket_MessageOpcode::Ping{static_cast<uint8_t>(0x9u)};
constexpr ::GlobalNamespace::ManagedWebSocket_MessageOpcode  GlobalNamespace::ManagedWebSocket_MessageOpcode::Pong{static_cast<uint8_t>(0xau)};
