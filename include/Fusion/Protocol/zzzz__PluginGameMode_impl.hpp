#pragma once
// IWYU pragma private; include "Fusion/Protocol/PluginGameMode.hpp"
#include "Fusion/Protocol/zzzz__PluginGameMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Protocol::PluginGameMode::PluginGameMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Protocol::PluginGameMode::PluginGameMode()   {
}
constexpr ::Fusion::Protocol::PluginGameMode  Fusion::Protocol::PluginGameMode::Invalid{static_cast<uint8_t>(0x0u)};
constexpr ::Fusion::Protocol::PluginGameMode  Fusion::Protocol::PluginGameMode::ClientServer{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::Protocol::PluginGameMode  Fusion::Protocol::PluginGameMode::Shared{static_cast<uint8_t>(0x2u)};
