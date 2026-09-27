#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Handedness.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Handedness_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_Handedness::OVRPlugin_Handedness(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_Handedness::OVRPlugin_Handedness()   {
}
constexpr ::GlobalNamespace::OVRPlugin_Handedness  GlobalNamespace::OVRPlugin_Handedness::Unsupported{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_Handedness  GlobalNamespace::OVRPlugin_Handedness::LeftHanded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_Handedness  GlobalNamespace::OVRPlugin_Handedness::RightHanded{static_cast<int32_t>(0x2)};
