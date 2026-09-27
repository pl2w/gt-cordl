#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceFlags.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceFlags::OVRPlugin_SpaceFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceFlags::OVRPlugin_SpaceFlags()   {
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceFlags  GlobalNamespace::OVRPlugin_SpaceFlags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceFlags  GlobalNamespace::OVRPlugin_SpaceFlags::AllowRecentering{static_cast<int32_t>(0x1)};
