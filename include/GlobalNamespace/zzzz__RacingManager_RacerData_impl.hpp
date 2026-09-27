#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager_RacerData.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RacerData_def.hpp"
// Ctor Parameters [CppParam { name: "actorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numCheckpointsPassed", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "latestCheckpointTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isDisqualified", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RacingManager_RacerData::RacingManager_RacerData(int32_t  actorNumber, ::StringW  playerName, int32_t  numCheckpointsPassed, double_t  latestCheckpointTime, bool  isDisqualified) noexcept  {
this->actorNumber = actorNumber;
this->playerName = playerName;
this->numCheckpointsPassed = numCheckpointsPassed;
this->latestCheckpointTime = latestCheckpointTime;
this->isDisqualified = isDisqualified;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RacingManager_RacerData::RacingManager_RacerData()   {
}
