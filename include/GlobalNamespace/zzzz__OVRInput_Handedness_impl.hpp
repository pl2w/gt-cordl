#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Handedness.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Handedness_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_Handedness::OVRInput_Handedness(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Handedness::OVRInput_Handedness()   {
}
constexpr ::GlobalNamespace::OVRInput_Handedness  GlobalNamespace::OVRInput_Handedness::Unsupported{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_Handedness  GlobalNamespace::OVRInput_Handedness::LeftHanded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_Handedness  GlobalNamespace::OVRInput_Handedness::RightHanded{static_cast<int32_t>(0x2)};
