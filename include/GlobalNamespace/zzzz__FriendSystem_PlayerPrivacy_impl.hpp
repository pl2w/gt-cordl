#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_PlayerPrivacy.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_PlayerPrivacy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy::FriendSystem_PlayerPrivacy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy::FriendSystem_PlayerPrivacy()   {
}
constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy  GlobalNamespace::FriendSystem_PlayerPrivacy::Visible{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy  GlobalNamespace::FriendSystem_PlayerPrivacy::PublicOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FriendSystem_PlayerPrivacy  GlobalNamespace::FriendSystem_PlayerPrivacy::Hidden{static_cast<int32_t>(0x2)};
