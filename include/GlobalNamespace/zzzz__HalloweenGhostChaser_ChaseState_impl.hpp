#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenGhostChaser_ChaseState.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_ChaseState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState::HalloweenGhostChaser_ChaseState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState::HalloweenGhostChaser_ChaseState()   {
}
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState  GlobalNamespace::HalloweenGhostChaser_ChaseState::Dormant{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState  GlobalNamespace::HalloweenGhostChaser_ChaseState::InitialRise{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState  GlobalNamespace::HalloweenGhostChaser_ChaseState::Gong{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState  GlobalNamespace::HalloweenGhostChaser_ChaseState::Chasing{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState  GlobalNamespace::HalloweenGhostChaser_ChaseState::Grabbing{static_cast<int32_t>(0x10)};
