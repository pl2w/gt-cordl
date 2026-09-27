#pragma once
// IWYU pragma private; include "GlobalNamespace/BatteryChargerState_BatteryMsg.hpp"
#include "GlobalNamespace/zzzz__BatteryChargerState_BatteryMsg_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BatteryChargerState_BatteryMsg::BatteryChargerState_BatteryMsg(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BatteryChargerState_BatteryMsg::BatteryChargerState_BatteryMsg()   {
}
constexpr ::GlobalNamespace::BatteryChargerState_BatteryMsg  GlobalNamespace::BatteryChargerState_BatteryMsg::CrankGrabLeft{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::BatteryChargerState_BatteryMsg  GlobalNamespace::BatteryChargerState_BatteryMsg::CrankGrabRight{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::BatteryChargerState_BatteryMsg  GlobalNamespace::BatteryChargerState_BatteryMsg::CrankRelease{static_cast<uint8_t>(0x2u)};
constexpr ::GlobalNamespace::BatteryChargerState_BatteryMsg  GlobalNamespace::BatteryChargerState_BatteryMsg::CrankInput{static_cast<uint8_t>(0x3u)};
