#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_PlayerGameState.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_PlayerGameState_def.hpp"
// Ctor Parameters [CppParam { name: "playerId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "touchedLiquid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "touchedLiquidAtProgress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScienceExperimentManager_PlayerGameState::ScienceExperimentManager_PlayerGameState(int32_t  playerId, bool  touchedLiquid, float_t  touchedLiquidAtProgress) noexcept  {
this->playerId = playerId;
this->touchedLiquid = touchedLiquid;
this->touchedLiquidAtProgress = touchedLiquidAtProgress;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScienceExperimentManager_PlayerGameState::ScienceExperimentManager_PlayerGameState()   {
}
