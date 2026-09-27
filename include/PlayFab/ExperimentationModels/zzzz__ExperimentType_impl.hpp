#pragma once
// IWYU pragma private; include "PlayFab/ExperimentationModels/ExperimentType.hpp"
#include "PlayFab/ExperimentationModels/zzzz__ExperimentType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ExperimentationModels::ExperimentType::ExperimentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ExperimentationModels::ExperimentType::ExperimentType()   {
}
constexpr ::PlayFab::ExperimentationModels::ExperimentType  PlayFab::ExperimentationModels::ExperimentType::Active{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ExperimentationModels::ExperimentType  PlayFab::ExperimentationModels::ExperimentType::Snapshot{static_cast<int32_t>(0x1)};
