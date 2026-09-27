#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetWing_EState.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWing_EState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetWing_EState::SIGadgetWing_EState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetWing_EState::SIGadgetWing_EState()   {
}
constexpr ::GlobalNamespace::SIGadgetWing_EState  GlobalNamespace::SIGadgetWing_EState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetWing_EState  GlobalNamespace::SIGadgetWing_EState::TriggerPressed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetWing_EState  GlobalNamespace::SIGadgetWing_EState::Count{static_cast<int32_t>(0x2)};
