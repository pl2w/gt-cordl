#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomSystem_LavaSyncEventData.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_LavaSyncEventData__votes_e__FixedBuffer_impl.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_LavaSyncEventData_def.hpp"
#include "GlobalNamespace/zzzz__RoomSystem_LavaSyncEventData__votes_e__FixedBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "zone", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "state", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activationProgress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "voteCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "senderActorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "votes", ty: "::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RoomSystem_LavaSyncEventData::RoomSystem_LavaSyncEventData(uint8_t  zone, uint8_t  state, double_t  stateStartTime, float_t  activationProgress, int32_t  voteCount, int32_t  senderActorNumber, ::GlobalNamespace::LavaSyncEventData_RoomSystem__votes_e__FixedBuffer  votes) noexcept  {
this->zone = zone;
this->state = state;
this->stateStartTime = stateStartTime;
this->activationProgress = activationProgress;
this->voteCount = voteCount;
this->senderActorNumber = senderActorNumber;
this->votes = votes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomSystem_LavaSyncEventData::RoomSystem_LavaSyncEventData()   {
}
