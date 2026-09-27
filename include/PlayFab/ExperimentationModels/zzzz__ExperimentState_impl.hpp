#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/ExperimentState.hpp"
#include "PlayFab/ExperimentationModels/zzzz__ExperimentState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ExperimentationModels::ExperimentState::ExperimentState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::ExperimentState::ExperimentState()   {
}
constexpr ::PlayFab::ExperimentationModels::ExperimentState  PlayFab::ExperimentationModels::ExperimentState::New{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ExperimentationModels::ExperimentState  PlayFab::ExperimentationModels::ExperimentState::Started{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ExperimentationModels::ExperimentState  PlayFab::ExperimentationModels::ExperimentState::Stopped{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ExperimentationModels::ExperimentState  PlayFab::ExperimentationModels::ExperimentState::Deleted{static_cast<int32_t>(0x3)};
