#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendingManager_FriendStationData.hpp"
#include "GlobalNamespace/zzzz__FriendingManager_FriendStationState_impl.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__FriendingManager_FriendStationData_def.hpp"
// Ctor Parameters [CppParam { name: "zone", ty: "::GlobalNamespace::GTZone", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actorNumberA", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "actorNumberB", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "::GlobalNamespace::FriendingManager_FriendStationState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "progressBarStartTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendingManager_FriendStationData::FriendingManager_FriendStationData(::GlobalNamespace::GTZone  zone, int32_t  actorNumberA, int32_t  actorNumberB, ::GlobalNamespace::FriendingManager_FriendStationState  state, float_t  progressBarStartTime) noexcept  {
this->zone = zone;
this->actorNumberA = actorNumberA;
this->actorNumberB = actorNumberB;
this->state = state;
this->progressBarStartTime = progressBarStartTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendingManager_FriendStationData::FriendingManager_FriendStationData()   {
}
