#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_FriendRemovalData.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_FriendRemovalData_def.hpp"
#include "GlobalNamespace/zzzz__FriendSystem_def.hpp"
// Ctor Parameters [CppParam { name: "targetPlayerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localTimeSent", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "completionCallback", ty: "::GlobalNamespace::FriendSystem_FriendRemovalCallback*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendSystem_FriendRemovalData::FriendSystem_FriendRemovalData(int32_t  targetPlayerId, float_t  localTimeSent, ::GlobalNamespace::FriendSystem_FriendRemovalCallback*  completionCallback) noexcept  {
this->targetPlayerId = targetPlayerId;
this->localTimeSent = localTimeSent;
this->completionCallback = completionCallback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendSystem_FriendRemovalData::FriendSystem_FriendRemovalData()   {
}
