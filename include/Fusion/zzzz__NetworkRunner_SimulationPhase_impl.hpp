#pragma once
// IWYU pragma private; include "Fusion/NetworkRunner_SimulationPhase.hpp"
#include "Fusion/zzzz__NetworkRunner_SimulationPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase::NetworkRunner_SimulationPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase::NetworkRunner_SimulationPhase()   {
}
constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase  GlobalNamespace::NetworkRunner_SimulationPhase::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase  GlobalNamespace::NetworkRunner_SimulationPhase::Update{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkRunner_SimulationPhase  GlobalNamespace::NetworkRunner_SimulationPhase::Render{static_cast<int32_t>(0x2)};
