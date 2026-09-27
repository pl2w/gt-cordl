#pragma once
// IWYU pragma private; include "GlobalNamespace/ESuperInfectionGameState.hpp"
#include "GlobalNamespace/zzzz__ESuperInfectionGameState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ESuperInfectionGameState::ESuperInfectionGameState(int16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ESuperInfectionGameState::ESuperInfectionGameState()   {
}
constexpr ::GlobalNamespace::ESuperInfectionGameState  GlobalNamespace::ESuperInfectionGameState::Uninitialized{static_cast<int16_t>(0x0)};
constexpr ::GlobalNamespace::ESuperInfectionGameState  GlobalNamespace::ESuperInfectionGameState::Stopped{static_cast<int16_t>(0x1)};
constexpr ::GlobalNamespace::ESuperInfectionGameState  GlobalNamespace::ESuperInfectionGameState::Starting{static_cast<int16_t>(0x2)};
constexpr ::GlobalNamespace::ESuperInfectionGameState  GlobalNamespace::ESuperInfectionGameState::WaitingForMorePlayers{static_cast<int16_t>(0x3)};
constexpr ::GlobalNamespace::ESuperInfectionGameState  GlobalNamespace::ESuperInfectionGameState::Playing{static_cast<int16_t>(0x4)};
constexpr ::GlobalNamespace::ESuperInfectionGameState  GlobalNamespace::ESuperInfectionGameState::RoundRestarting{static_cast<int16_t>(0x5)};
