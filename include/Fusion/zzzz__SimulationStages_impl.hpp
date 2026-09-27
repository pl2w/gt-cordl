#pragma once
// IWYU pragma private; include "Fusion/SimulationStages.hpp"
#include "Fusion/zzzz__SimulationStages_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::SimulationStages::SimulationStages(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::SimulationStages::SimulationStages()   {
}
constexpr ::Fusion::SimulationStages  Fusion::SimulationStages::Forward{static_cast<int32_t>(0x2)};
constexpr ::Fusion::SimulationStages  Fusion::SimulationStages::Resimulate{static_cast<int32_t>(0x4)};
