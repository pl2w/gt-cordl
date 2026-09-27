#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetDashYoyo_EState.hpp"
#include "GlobalNamespace/zzzz__SIGadgetDashYoyo_EState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState::SIGadgetDashYoyo_EState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState::SIGadgetDashYoyo_EState()   {
}
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState  GlobalNamespace::SIGadgetDashYoyo_EState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState  GlobalNamespace::SIGadgetDashYoyo_EState::OnCooldown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState  GlobalNamespace::SIGadgetDashYoyo_EState::PreparedToThrow{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState  GlobalNamespace::SIGadgetDashYoyo_EState::Thrown{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState  GlobalNamespace::SIGadgetDashYoyo_EState::PreparedToDash{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState  GlobalNamespace::SIGadgetDashYoyo_EState::DashUsed{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::SIGadgetDashYoyo_EState  GlobalNamespace::SIGadgetDashYoyo_EState::Count{static_cast<int32_t>(0x6)};
