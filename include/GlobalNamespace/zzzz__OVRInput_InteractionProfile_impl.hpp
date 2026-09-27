#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_InteractionProfile.hpp"
#include "GlobalNamespace/zzzz__OVRInput_InteractionProfile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_InteractionProfile::OVRInput_InteractionProfile(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_InteractionProfile::OVRInput_InteractionProfile()   {
}
constexpr ::GlobalNamespace::OVRInput_InteractionProfile  GlobalNamespace::OVRInput_InteractionProfile::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_InteractionProfile  GlobalNamespace::OVRInput_InteractionProfile::Touch{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_InteractionProfile  GlobalNamespace::OVRInput_InteractionProfile::TouchPro{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRInput_InteractionProfile  GlobalNamespace::OVRInput_InteractionProfile::TouchPlus{static_cast<int32_t>(0x4)};
