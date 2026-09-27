#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHeadsetEmulator_OpMode.hpp"
#include "GlobalNamespace/zzzz__OVRHeadsetEmulator_OpMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode::OVRHeadsetEmulator_OpMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode::OVRHeadsetEmulator_OpMode()   {
}
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode  GlobalNamespace::OVRHeadsetEmulator_OpMode::Off{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode  GlobalNamespace::OVRHeadsetEmulator_OpMode::EditorOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRHeadsetEmulator_OpMode  GlobalNamespace::OVRHeadsetEmulator_OpMode::AlwaysOn{static_cast<int32_t>(0x2)};
