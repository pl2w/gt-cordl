#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceLocationFlags.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceLocationFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationFlags::OVRPlugin_SpaceLocationFlags(uint64_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationFlags::OVRPlugin_SpaceLocationFlags()   {
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  GlobalNamespace::OVRPlugin_SpaceLocationFlags::OrientationValid{static_cast<uint64_t>(0x1u)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  GlobalNamespace::OVRPlugin_SpaceLocationFlags::PositionValid{static_cast<uint64_t>(0x2u)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  GlobalNamespace::OVRPlugin_SpaceLocationFlags::OrientationTracked{static_cast<uint64_t>(0x4u)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceLocationFlags  GlobalNamespace::OVRPlugin_SpaceLocationFlags::PositionTracked{static_cast<uint64_t>(0x8u)};
