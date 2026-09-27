#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/AnalysisTaskState.hpp"
#include "PlayFab/ExperimentationModels/zzzz__AnalysisTaskState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState::AnalysisTaskState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState::AnalysisTaskState()   {
}
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState  PlayFab::ExperimentationModels::AnalysisTaskState::Waiting{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState  PlayFab::ExperimentationModels::AnalysisTaskState::ReadyForSubmission{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState  PlayFab::ExperimentationModels::AnalysisTaskState::SubmittingToPipeline{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState  PlayFab::ExperimentationModels::AnalysisTaskState::Running{static_cast<int32_t>(0x3)};
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState  PlayFab::ExperimentationModels::AnalysisTaskState::Completed{static_cast<int32_t>(0x4)};
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState  PlayFab::ExperimentationModels::AnalysisTaskState::Failed{static_cast<int32_t>(0x5)};
constexpr ::PlayFab::ExperimentationModels::AnalysisTaskState  PlayFab::ExperimentationModels::AnalysisTaskState::Canceled{static_cast<int32_t>(0x6)};
