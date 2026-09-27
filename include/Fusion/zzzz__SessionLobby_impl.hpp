#pragma once
// IWYU pragma private; include "Fusion/SessionLobby.hpp"
#include "Fusion/zzzz__SessionLobby_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SessionLobby::SessionLobby(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::SessionLobby::SessionLobby()   {
}
constexpr ::Fusion::SessionLobby  Fusion::SessionLobby::Invalid{static_cast<int32_t>(0x0)};
constexpr ::Fusion::SessionLobby  Fusion::SessionLobby::ClientServer{static_cast<int32_t>(0x1)};
constexpr ::Fusion::SessionLobby  Fusion::SessionLobby::Shared{static_cast<int32_t>(0x2)};
constexpr ::Fusion::SessionLobby  Fusion::SessionLobby::Custom{static_cast<int32_t>(0x3)};
