#pragma once
// IWYU pragma private; include "GlobalNamespace/SecondLookSkeleton_GhostState.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_GhostState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState::SecondLookSkeleton_GhostState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState::SecondLookSkeleton_GhostState()   {
}
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState  GlobalNamespace::SecondLookSkeleton_GhostState::Unactivated{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState  GlobalNamespace::SecondLookSkeleton_GhostState::Activated{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState  GlobalNamespace::SecondLookSkeleton_GhostState::Patrolling{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState  GlobalNamespace::SecondLookSkeleton_GhostState::Chasing{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState  GlobalNamespace::SecondLookSkeleton_GhostState::CaughtPlayer{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState  GlobalNamespace::SecondLookSkeleton_GhostState::PlayerThrown{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState  GlobalNamespace::SecondLookSkeleton_GhostState::Reset{static_cast<int32_t>(0x6)};
