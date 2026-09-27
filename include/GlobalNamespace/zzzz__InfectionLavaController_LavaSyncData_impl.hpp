#pragma once
// IWYU pragma private; include "GlobalNamespace/InfectionLavaController_LavaSyncData.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_RisingLavaState_impl.hpp"
#include "GlobalNamespace/zzzz__InfectionLavaController_LavaSyncData_def.hpp"
// Ctor Parameters [CppParam { name: "state", ty: "::GlobalNamespace::InfectionLavaController_RisingLavaState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stateStartTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "activationProgress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InfectionLavaController_LavaSyncData::InfectionLavaController_LavaSyncData(::GlobalNamespace::InfectionLavaController_RisingLavaState  state, double_t  stateStartTime, float_t  activationProgress) noexcept  {
this->state = state;
this->stateStartTime = stateStartTime;
this->activationProgress = activationProgress;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InfectionLavaController_LavaSyncData::InfectionLavaController_LavaSyncData()   {
}
