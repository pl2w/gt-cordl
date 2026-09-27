#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BatteryStatus.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BatteryStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BatteryStatus::OVRPlugin_BatteryStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BatteryStatus::OVRPlugin_BatteryStatus()   {
}
constexpr ::GlobalNamespace::OVRPlugin_BatteryStatus  GlobalNamespace::OVRPlugin_BatteryStatus::Charging{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_BatteryStatus  GlobalNamespace::OVRPlugin_BatteryStatus::Discharging{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_BatteryStatus  GlobalNamespace::OVRPlugin_BatteryStatus::Full{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_BatteryStatus  GlobalNamespace::OVRPlugin_BatteryStatus::NotCharging{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_BatteryStatus  GlobalNamespace::OVRPlugin_BatteryStatus::Unknown{static_cast<int32_t>(0x4)};
