#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager_RacingState.hpp"
#include "GlobalNamespace/zzzz__RacingManager_RacingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RacingManager_RacingState::RacingManager_RacingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RacingManager_RacingState::RacingManager_RacingState()   {
}
constexpr ::GlobalNamespace::RacingManager_RacingState  GlobalNamespace::RacingManager_RacingState::Inactive{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RacingManager_RacingState  GlobalNamespace::RacingManager_RacingState::Countdown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RacingManager_RacingState  GlobalNamespace::RacingManager_RacingState::InProgress{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RacingManager_RacingState  GlobalNamespace::RacingManager_RacingState::Results{static_cast<int32_t>(0x3)};
