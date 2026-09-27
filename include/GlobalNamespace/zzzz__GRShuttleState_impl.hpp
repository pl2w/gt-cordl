#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShuttleState.hpp"
#include "GlobalNamespace/zzzz__GRShuttleState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRShuttleState::GRShuttleState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRShuttleState::GRShuttleState()   {
}
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::Docking{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::Docked{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::PreMove{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::Moving{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::PostMove{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::Arriving{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::PostArrive{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GRShuttleState  GlobalNamespace::GRShuttleState::Count{static_cast<int32_t>(0x7)};
