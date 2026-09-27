#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughCapabilityFlags.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_PassthroughCapabilityFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags::OVRPlugin_PassthroughCapabilityFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags::OVRPlugin_PassthroughCapabilityFlags()   {
}
constexpr ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags  GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags::Passthrough{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags  GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags::Color{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags  GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags::Depth{static_cast<int32_t>(0x4)};
