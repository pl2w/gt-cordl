#pragma once
// IWYU pragma private; include "Fusion/Simulation_ObjectChangeType.hpp"
#include "Fusion/zzzz__Simulation_ObjectChangeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Simulation_ObjectChangeType::Simulation_ObjectChangeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Simulation_ObjectChangeType::Simulation_ObjectChangeType()   {
}
constexpr ::GlobalNamespace::Simulation_ObjectChangeType  GlobalNamespace::Simulation_ObjectChangeType::Created{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Simulation_ObjectChangeType  GlobalNamespace::Simulation_ObjectChangeType::Updated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Simulation_ObjectChangeType  GlobalNamespace::Simulation_ObjectChangeType::Destroyed{static_cast<int32_t>(0x2)};
