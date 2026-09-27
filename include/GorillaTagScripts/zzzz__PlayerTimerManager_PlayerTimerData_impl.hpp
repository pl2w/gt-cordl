#pragma once
// IWYU pragma private; include "GorillaTagScripts/PlayerTimerManager_PlayerTimerData.hpp"
#include "GorillaTagScripts/zzzz__PlayerTimerManager_PlayerTimerData_def.hpp"
// Ctor Parameters [CppParam { name: "startTimeStamp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endTimeStamp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isStarted", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastTimerDuration", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlayerTimerManager_PlayerTimerData::PlayerTimerManager_PlayerTimerData(int32_t  startTimeStamp, int32_t  endTimeStamp, bool  isStarted, uint32_t  lastTimerDuration) noexcept  {
this->startTimeStamp = startTimeStamp;
this->endTimeStamp = endTimeStamp;
this->isStarted = isStarted;
this->lastTimerDuration = lastTimerDuration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerTimerManager_PlayerTimerData::PlayerTimerManager_PlayerTimerData()   {
}
