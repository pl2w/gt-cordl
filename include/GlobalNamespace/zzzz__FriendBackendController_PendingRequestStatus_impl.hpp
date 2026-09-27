#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendBackendController_PendingRequestStatus.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_PendingRequestStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendBackendController_PendingRequestStatus::FriendBackendController_PendingRequestStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_PendingRequestStatus::FriendBackendController_PendingRequestStatus()   {
}
constexpr ::GlobalNamespace::FriendBackendController_PendingRequestStatus  GlobalNamespace::FriendBackendController_PendingRequestStatus::I_REQUESTED{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FriendBackendController_PendingRequestStatus  GlobalNamespace::FriendBackendController_PendingRequestStatus::THEY_REQUESTED{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FriendBackendController_PendingRequestStatus  GlobalNamespace::FriendBackendController_PendingRequestStatus::CONFIRMED{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::FriendBackendController_PendingRequestStatus  GlobalNamespace::FriendBackendController_PendingRequestStatus::NOT_FOUND{static_cast<int32_t>(0x3)};
