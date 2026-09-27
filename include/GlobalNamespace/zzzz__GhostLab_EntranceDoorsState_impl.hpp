#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostLab_EntranceDoorsState.hpp"
#include "GlobalNamespace/zzzz__GhostLab_EntranceDoorsState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState::GhostLab_EntranceDoorsState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState::GhostLab_EntranceDoorsState()   {
}
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState  GlobalNamespace::GhostLab_EntranceDoorsState::BothClosed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState  GlobalNamespace::GhostLab_EntranceDoorsState::InnerDoorOpen{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GhostLab_EntranceDoorsState  GlobalNamespace::GhostLab_EntranceDoorsState::OuterDoorOpen{static_cast<int32_t>(0x2)};
