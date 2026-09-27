#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetHolster_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolster_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetHolster_State::SIGadgetHolster_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetHolster_State::SIGadgetHolster_State()   {
}
constexpr ::GlobalNamespace::SIGadgetHolster_State  GlobalNamespace::SIGadgetHolster_State::Unequipped{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetHolster_State  GlobalNamespace::SIGadgetHolster_State::Equipped{static_cast<int32_t>(0x1)};
