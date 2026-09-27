#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetAirGrab_EState.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirGrab_EState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState::SIGadgetAirGrab_EState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState::SIGadgetAirGrab_EState()   {
}
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState  GlobalNamespace::SIGadgetAirGrab_EState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState  GlobalNamespace::SIGadgetAirGrab_EState::StartAirGrabbing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState  GlobalNamespace::SIGadgetAirGrab_EState::PreparedToDash{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState  GlobalNamespace::SIGadgetAirGrab_EState::DashUsed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SIGadgetAirGrab_EState  GlobalNamespace::SIGadgetAirGrab_EState::Count{static_cast<int32_t>(0x4)};
