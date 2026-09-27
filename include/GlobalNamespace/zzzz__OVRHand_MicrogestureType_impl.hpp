#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHand_MicrogestureType.hpp"
#include "GlobalNamespace/zzzz__OVRHand_MicrogestureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRHand_MicrogestureType::OVRHand_MicrogestureType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_MicrogestureType::OVRHand_MicrogestureType()   {
}
constexpr ::GlobalNamespace::OVRHand_MicrogestureType  GlobalNamespace::OVRHand_MicrogestureType::NoGesture{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRHand_MicrogestureType  GlobalNamespace::OVRHand_MicrogestureType::SwipeLeft{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRHand_MicrogestureType  GlobalNamespace::OVRHand_MicrogestureType::SwipeRight{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRHand_MicrogestureType  GlobalNamespace::OVRHand_MicrogestureType::SwipeForward{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRHand_MicrogestureType  GlobalNamespace::OVRHand_MicrogestureType::SwipeBackward{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRHand_MicrogestureType  GlobalNamespace::OVRHand_MicrogestureType::ThumbTap{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OVRHand_MicrogestureType  GlobalNamespace::OVRHand_MicrogestureType::Invalid{static_cast<int32_t>(0xffffffff)};
