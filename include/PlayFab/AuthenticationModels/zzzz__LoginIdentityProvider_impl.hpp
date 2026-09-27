#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/LoginIdentityProvider.hpp"
#include "PlayFab/AuthenticationModels/zzzz__LoginIdentityProvider_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider::LoginIdentityProvider(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider::LoginIdentityProvider()   {
}
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::Unknown{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::PlayFab{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::Custom{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::GameCenter{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::GooglePlay{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::Steam{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::XBoxLive{static_cast<int32_t>(0x6)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::PSN{static_cast<int32_t>(0x7)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::Kongregate{static_cast<int32_t>(0x8)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::Facebook{static_cast<int32_t>(0x9)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::IOSDevice{static_cast<int32_t>(0xa)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::AndroidDevice{static_cast<int32_t>(0xb)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::Twitch{static_cast<int32_t>(0xc)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::WindowsHello{static_cast<int32_t>(0xd)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::GameServer{static_cast<int32_t>(0xe)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::CustomServer{static_cast<int32_t>(0xf)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::NintendoSwitch{static_cast<int32_t>(0x10)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::FacebookInstantGames{static_cast<int32_t>(0x11)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::OpenIdConnect{static_cast<int32_t>(0x12)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::Apple{static_cast<int32_t>(0x13)};
constexpr ::PlayFab::AuthenticationModels::LoginIdentityProvider  PlayFab::AuthenticationModels::LoginIdentityProvider::NintendoSwitchAccount{static_cast<int32_t>(0x14)};
