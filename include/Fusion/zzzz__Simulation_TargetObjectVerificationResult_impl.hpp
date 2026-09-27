#pragma once
// IWYU pragma private; include "Fusion/Simulation_TargetObjectVerificationResult.hpp"
#include "Fusion/zzzz__Simulation_TargetObjectVerificationResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Simulation_TargetObjectVerificationResult::Simulation_TargetObjectVerificationResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_TargetObjectVerificationResult::Simulation_TargetObjectVerificationResult()   {
}
constexpr ::GlobalNamespace::Simulation_TargetObjectVerificationResult  GlobalNamespace::Simulation_TargetObjectVerificationResult::Ok{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Simulation_TargetObjectVerificationResult  GlobalNamespace::Simulation_TargetObjectVerificationResult::TargetNotInterestedInObject{static_cast<int32_t>(0x1)};
