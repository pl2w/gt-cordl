#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetAirJuke_EState.hpp"
#include "GlobalNamespace/zzzz__SIGadgetAirJuke_EState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState::SIGadgetAirJuke_EState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState::SIGadgetAirJuke_EState()   {
}
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState  GlobalNamespace::SIGadgetAirJuke_EState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState  GlobalNamespace::SIGadgetAirJuke_EState::TriggerPressHold{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState  GlobalNamespace::SIGadgetAirJuke_EState::DashUsed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIGadgetAirJuke_EState  GlobalNamespace::SIGadgetAirJuke_EState::Count{static_cast<int32_t>(0x3)};
