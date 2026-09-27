#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetBlasterState.hpp"
#include "GlobalNamespace/zzzz__SIGadgetBlasterState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIGadgetBlasterState::SIGadgetBlasterState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIGadgetBlasterState::SIGadgetBlasterState()   {
}
constexpr ::GlobalNamespace::SIGadgetBlasterState  GlobalNamespace::SIGadgetBlasterState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SIGadgetBlasterState  GlobalNamespace::SIGadgetBlasterState::Charging{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIGadgetBlasterState  GlobalNamespace::SIGadgetBlasterState::Cooldown{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::SIGadgetBlasterState  GlobalNamespace::SIGadgetBlasterState::Pumping{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::SIGadgetBlasterState  GlobalNamespace::SIGadgetBlasterState::Count{static_cast<int32_t>(0x4)};
