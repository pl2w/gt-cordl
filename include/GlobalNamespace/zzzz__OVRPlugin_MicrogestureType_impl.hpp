#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_MicrogestureType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_MicrogestureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType::OVRPlugin_MicrogestureType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType::OVRPlugin_MicrogestureType()   {
}
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType  GlobalNamespace::OVRPlugin_MicrogestureType::NoGesture{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType  GlobalNamespace::OVRPlugin_MicrogestureType::SwipeLeft{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType  GlobalNamespace::OVRPlugin_MicrogestureType::SwipeRight{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType  GlobalNamespace::OVRPlugin_MicrogestureType::SwipeForward{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType  GlobalNamespace::OVRPlugin_MicrogestureType::SwipeBackward{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType  GlobalNamespace::OVRPlugin_MicrogestureType::ThumbTap{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OVRPlugin_MicrogestureType  GlobalNamespace::OVRPlugin_MicrogestureType::Invalid{static_cast<int32_t>(0xffffffff)};
