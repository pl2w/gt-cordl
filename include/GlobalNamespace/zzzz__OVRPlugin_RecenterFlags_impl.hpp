#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_RecenterFlags.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_RecenterFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_RecenterFlags::OVRPlugin_RecenterFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_RecenterFlags::OVRPlugin_RecenterFlags()   {
}
constexpr ::GlobalNamespace::OVRPlugin_RecenterFlags  GlobalNamespace::OVRPlugin_RecenterFlags::Default{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_RecenterFlags  GlobalNamespace::OVRPlugin_RecenterFlags::IgnoreAll{static_cast<int32_t>(0x80000000)};
constexpr ::GlobalNamespace::OVRPlugin_RecenterFlags  GlobalNamespace::OVRPlugin_RecenterFlags::Count{static_cast<int32_t>(0x80000001)};
