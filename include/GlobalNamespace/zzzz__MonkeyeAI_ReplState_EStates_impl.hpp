#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI_ReplState_EStates.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates::MonkeyeAI_ReplState_EStates(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates::MonkeyeAI_ReplState_EStates()   {
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::Sleeping{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::Patrolling{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::Chasing{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::ReturnToSleepPt{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::GoToSleep{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::BeginAttack{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::OpenFloor{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::DropPlayer{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates  GlobalNamespace::MonkeyeAI_ReplState_EStates::CloseFloor{static_cast<int32_t>(0x8)};
