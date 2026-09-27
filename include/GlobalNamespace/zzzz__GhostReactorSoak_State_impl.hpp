#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorSoak_State.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSoak_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GhostReactorSoak_State::GhostReactorSoak_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorSoak_State::GhostReactorSoak_State()   {
}
constexpr ::GlobalNamespace::GhostReactorSoak_State  GlobalNamespace::GhostReactorSoak_State::Disconnected{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GhostReactorSoak_State  GlobalNamespace::GhostReactorSoak_State::Connecting{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GhostReactorSoak_State  GlobalNamespace::GhostReactorSoak_State::Active{static_cast<int32_t>(0x2)};
