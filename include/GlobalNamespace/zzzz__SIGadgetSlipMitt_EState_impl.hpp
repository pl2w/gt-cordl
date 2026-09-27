#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetSlipMitt_EState.hpp"
#include "GlobalNamespace/zzzz__SIGadgetSlipMitt_EState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState::SIGadgetSlipMitt_EState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState::SIGadgetSlipMitt_EState()   {
}
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState  GlobalNamespace::SIGadgetSlipMitt_EState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState  GlobalNamespace::SIGadgetSlipMitt_EState::Slip{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState  GlobalNamespace::SIGadgetSlipMitt_EState::DashUsed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIGadgetSlipMitt_EState  GlobalNamespace::SIGadgetSlipMitt_EState::Count{static_cast<int32_t>(0x3)};
