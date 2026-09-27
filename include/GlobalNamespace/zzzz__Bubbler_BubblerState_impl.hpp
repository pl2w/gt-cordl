#pragma once
// IWYU pragma private; include "GlobalNamespace/Bubbler_BubblerState.hpp"
#include "GlobalNamespace/zzzz__Bubbler_BubblerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Bubbler_BubblerState::Bubbler_BubblerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Bubbler_BubblerState::Bubbler_BubblerState()   {
}
constexpr ::GlobalNamespace::Bubbler_BubblerState  GlobalNamespace::Bubbler_BubblerState::None{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Bubbler_BubblerState  GlobalNamespace::Bubbler_BubblerState::Bubbling{static_cast<int32_t>(0x2)};
