#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_NearTouch.hpp"
#include "GlobalNamespace/zzzz__OVRInput_NearTouch_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_NearTouch::OVRInput_NearTouch(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_NearTouch::OVRInput_NearTouch()   {
}
constexpr ::GlobalNamespace::OVRInput_NearTouch  GlobalNamespace::OVRInput_NearTouch::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_NearTouch  GlobalNamespace::OVRInput_NearTouch::PrimaryIndexTrigger{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_NearTouch  GlobalNamespace::OVRInput_NearTouch::PrimaryThumbButtons{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRInput_NearTouch  GlobalNamespace::OVRInput_NearTouch::SecondaryIndexTrigger{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRInput_NearTouch  GlobalNamespace::OVRInput_NearTouch::SecondaryThumbButtons{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVRInput_NearTouch  GlobalNamespace::OVRInput_NearTouch::Any{static_cast<int32_t>(0xffffffff)};
