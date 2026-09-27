#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetWristJet_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetWristJet_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetWristJet_State::SIGadgetWristJet_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetWristJet_State::SIGadgetWristJet_State()   {
}
constexpr ::GlobalNamespace::SIGadgetWristJet_State  GlobalNamespace::SIGadgetWristJet_State::Unactive{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetWristJet_State  GlobalNamespace::SIGadgetWristJet_State::Active{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetWristJet_State  GlobalNamespace::SIGadgetWristJet_State::OutOfFuel{static_cast<int32_t>(0x2)};
