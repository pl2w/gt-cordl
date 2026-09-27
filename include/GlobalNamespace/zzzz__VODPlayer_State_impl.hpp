#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_State.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VODPlayer_State::VODPlayer_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer_State::VODPlayer_State()   {
}
constexpr ::GlobalNamespace::VODPlayer_State  GlobalNamespace::VODPlayer_State::INITIALIZING{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VODPlayer_State  GlobalNamespace::VODPlayer_State::IDLE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VODPlayer_State  GlobalNamespace::VODPlayer_State::RUNNING{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VODPlayer_State  GlobalNamespace::VODPlayer_State::CRASHED{static_cast<int32_t>(0x3)};
