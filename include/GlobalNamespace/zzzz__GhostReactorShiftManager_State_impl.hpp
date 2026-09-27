#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorShiftManager_State.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostReactorShiftManager_State::GhostReactorShiftManager_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorShiftManager_State::GhostReactorShiftManager_State()   {
}
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::WaitingForConnect{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::WaitingForShiftStart{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::WaitingForFirstShiftStart{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::ReadyForShift{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::ShiftActive{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::PostShift{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::PreparingToDrill{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::GhostReactorShiftManager_State  GlobalNamespace::GhostReactorShiftManager_State::Drilling{static_cast<int32_t>(0x7)};
