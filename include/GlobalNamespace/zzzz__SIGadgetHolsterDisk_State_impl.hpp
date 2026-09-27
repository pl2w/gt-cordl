#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetHolsterDisk_State.hpp"
#include "GlobalNamespace/zzzz__SIGadgetHolsterDisk_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State::SIGadgetHolsterDisk_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State::SIGadgetHolsterDisk_State()   {
}
constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State  GlobalNamespace::SIGadgetHolsterDisk_State::Unequipped{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State  GlobalNamespace::SIGadgetHolsterDisk_State::OnCooldown{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetHolsterDisk_State  GlobalNamespace::SIGadgetHolsterDisk_State::Ready{static_cast<int32_t>(0x2)};
