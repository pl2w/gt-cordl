#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_InteractionProfile.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_InteractionProfile_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_InteractionProfile::OVRPlugin_InteractionProfile(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_InteractionProfile::OVRPlugin_InteractionProfile()   {
}
constexpr ::GlobalNamespace::OVRPlugin_InteractionProfile  GlobalNamespace::OVRPlugin_InteractionProfile::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_InteractionProfile  GlobalNamespace::OVRPlugin_InteractionProfile::Touch{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_InteractionProfile  GlobalNamespace::OVRPlugin_InteractionProfile::TouchPro{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_InteractionProfile  GlobalNamespace::OVRPlugin_InteractionProfile::TouchPlus{static_cast<int32_t>(0x4)};
