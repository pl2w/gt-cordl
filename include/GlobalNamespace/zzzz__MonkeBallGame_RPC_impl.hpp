#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGame_RPC.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_RPC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MonkeBallGame_RPC::MonkeBallGame_RPC(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallGame_RPC::MonkeBallGame_RPC()   {
}
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::SetGameState{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::RequestSetGameState{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::RequestResetGame{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::SetScore{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::RequestSetTeam{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::SetTeam{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::SetRestrictBallToTeam{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::SetResetButton{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::MonkeBallGame_RPC  GlobalNamespace::MonkeBallGame_RPC::Count{static_cast<int32_t>(0x8)};
