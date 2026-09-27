#pragma once
// IWYU pragma private; include "Fusion/SimulationConfig_DataConsistency.hpp"
#include "Fusion/zzzz__SimulationConfig_DataConsistency_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency::SimulationConfig_DataConsistency(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency::SimulationConfig_DataConsistency()   {
}
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency  GlobalNamespace::SimulationConfig_DataConsistency::Full{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SimulationConfig_DataConsistency  GlobalNamespace::SimulationConfig_DataConsistency::Eventual{static_cast<int32_t>(0x1)};
