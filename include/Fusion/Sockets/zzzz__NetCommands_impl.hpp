#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetCommands.hpp"
#include "Fusion/Sockets/zzzz__NetCommands_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetCommands::NetCommands(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetCommands::NetCommands()   {
}
constexpr ::Fusion::Sockets::NetCommands  Fusion::Sockets::NetCommands::Connect{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Sockets::NetCommands  Fusion::Sockets::NetCommands::Accepted{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::Sockets::NetCommands  Fusion::Sockets::NetCommands::Refused{static_cast<uint8_t>(0x3u)};
constexpr ::Fusion::Sockets::NetCommands  Fusion::Sockets::NetCommands::Disconnect{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::Sockets::NetCommands  Fusion::Sockets::NetCommands::Ping{static_cast<uint8_t>(0x5u)};
