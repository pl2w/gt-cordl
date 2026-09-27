#pragma once
// IWYU pragma private; include "GlobalNamespace/AngryBeeSwarm_ChaseState.hpp"
#include "GlobalNamespace/zzzz__AngryBeeSwarm_ChaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState::AngryBeeSwarm_ChaseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState::AngryBeeSwarm_ChaseState()   {
}
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState  GlobalNamespace::AngryBeeSwarm_ChaseState::Dormant{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState  GlobalNamespace::AngryBeeSwarm_ChaseState::InitialEmerge{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState  GlobalNamespace::AngryBeeSwarm_ChaseState::Chasing{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState  GlobalNamespace::AngryBeeSwarm_ChaseState::Grabbing{static_cast<int32_t>(0x8)};
