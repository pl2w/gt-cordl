#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_GRPlayerState.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_GRPlayerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRPlayer_GRPlayerState::GRPlayer_GRPlayerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRPlayer_GRPlayerState::GRPlayer_GRPlayerState()   {
}
constexpr ::GlobalNamespace::GRPlayer_GRPlayerState  GlobalNamespace::GRPlayer_GRPlayerState::Alive{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRPlayer_GRPlayerState  GlobalNamespace::GRPlayer_GRPlayerState::Ghost{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GRPlayer_GRPlayerState  GlobalNamespace::GRPlayer_GRPlayerState::Shielded{static_cast<int32_t>(0x2)};
