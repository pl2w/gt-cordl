#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_FriendRequestStatus.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_FriendRequestStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendSystem_FriendRequestStatus::FriendSystem_FriendRequestStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendSystem_FriendRequestStatus::FriendSystem_FriendRequestStatus()   {
}
constexpr ::GlobalNamespace::FriendSystem_FriendRequestStatus  GlobalNamespace::FriendSystem_FriendRequestStatus::Pending{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FriendSystem_FriendRequestStatus  GlobalNamespace::FriendSystem_FriendRequestStatus::Succeeded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FriendSystem_FriendRequestStatus  GlobalNamespace::FriendSystem_FriendRequestStatus::Failed{static_cast<int32_t>(0x2)};
