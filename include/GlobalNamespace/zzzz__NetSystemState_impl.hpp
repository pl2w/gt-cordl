#pragma once
// IWYU pragma private; include "GlobalNamespace/NetSystemState.hpp"
#include "GlobalNamespace/zzzz__NetSystemState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetSystemState::NetSystemState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetSystemState::NetSystemState()   {
}
constexpr ::GlobalNamespace::NetSystemState  GlobalNamespace::NetSystemState::Initialization{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetSystemState  GlobalNamespace::NetSystemState::PingRecon{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetSystemState  GlobalNamespace::NetSystemState::Idle{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetSystemState  GlobalNamespace::NetSystemState::Connecting{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NetSystemState  GlobalNamespace::NetSystemState::InGame{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NetSystemState  GlobalNamespace::NetSystemState::Disconnecting{static_cast<int32_t>(0x5)};
