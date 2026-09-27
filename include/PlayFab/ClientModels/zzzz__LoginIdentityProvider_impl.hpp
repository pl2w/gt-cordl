#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LoginIdentityProvider.hpp"
#include "PlayFab/ClientModels/zzzz__LoginIdentityProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::LoginIdentityProvider::LoginIdentityProvider(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LoginIdentityProvider::LoginIdentityProvider()   {
}
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::Unknown{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::PlayFab{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::Custom{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::GameCenter{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::GooglePlay{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::Steam{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::XBoxLive{static_cast<int32_t>(0x6)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::PSN{static_cast<int32_t>(0x7)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::Kongregate{static_cast<int32_t>(0x8)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::Facebook{static_cast<int32_t>(0x9)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::IOSDevice{static_cast<int32_t>(0xa)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::AndroidDevice{static_cast<int32_t>(0xb)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::Twitch{static_cast<int32_t>(0xc)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::WindowsHello{static_cast<int32_t>(0xd)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::GameServer{static_cast<int32_t>(0xe)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::CustomServer{static_cast<int32_t>(0xf)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::NintendoSwitch{static_cast<int32_t>(0x10)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::FacebookInstantGames{static_cast<int32_t>(0x11)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::OpenIdConnect{static_cast<int32_t>(0x12)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::Apple{static_cast<int32_t>(0x13)};
constexpr ::PlayFab::ClientModels::LoginIdentityProvider  PlayFab::ClientModels::LoginIdentityProvider::NintendoSwitchAccount{static_cast<int32_t>(0x14)};
