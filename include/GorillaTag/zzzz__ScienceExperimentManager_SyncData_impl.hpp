#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager_SyncData.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RisingLiquidState_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_SyncData_def.hpp"
// Ctor Parameters [CppParam { name: "state", ty: "::GlobalNamespace::ScienceExperimentManager_RisingLiquidState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStartLiquidProgressLinear", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activationProgress", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScienceExperimentManager_SyncData::ScienceExperimentManager_SyncData(::GlobalNamespace::ScienceExperimentManager_RisingLiquidState  state, double_t  stateStartTime, float_t  stateStartLiquidProgressLinear, double_t  activationProgress) noexcept  {
this->state = state;
this->stateStartTime = stateStartTime;
this->stateStartLiquidProgressLinear = stateStartLiquidProgressLinear;
this->activationProgress = activationProgress;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScienceExperimentManager_SyncData::ScienceExperimentManager_SyncData()   {
}
