#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_FriendRequestData.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_FriendRequestData_def.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_def.hpp"
// Ctor Parameters [CppParam { name: "zone", ty: "::GlobalNamespace::GTZone", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sendingPlayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "targetPlayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localTimeSent", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "completionCallback", ty: "::GlobalNamespace::FriendSystem_FriendRequestCallback*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendSystem_FriendRequestData::FriendSystem_FriendRequestData(::GlobalNamespace::GTZone  zone, int32_t  sendingPlayerId, int32_t  targetPlayerId, float_t  localTimeSent, ::GlobalNamespace::FriendSystem_FriendRequestCallback*  completionCallback) noexcept  {
this->zone = zone;
this->sendingPlayerId = sendingPlayerId;
this->targetPlayerId = targetPlayerId;
this->localTimeSent = localTimeSent;
this->completionCallback = completionCallback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendSystem_FriendRequestData::FriendSystem_FriendRequestData()   {
}
