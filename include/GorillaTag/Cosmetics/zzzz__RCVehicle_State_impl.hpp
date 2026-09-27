#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCVehicle_State.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCVehicle_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RCVehicle_State::RCVehicle_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RCVehicle_State::RCVehicle_State()   {
}
constexpr ::GlobalNamespace::RCVehicle_State  GlobalNamespace::RCVehicle_State::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RCVehicle_State  GlobalNamespace::RCVehicle_State::DockedLeft{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RCVehicle_State  GlobalNamespace::RCVehicle_State::DockedRight{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::RCVehicle_State  GlobalNamespace::RCVehicle_State::Mobilized{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::RCVehicle_State  GlobalNamespace::RCVehicle_State::Crashed{static_cast<int32_t>(0x4)};
