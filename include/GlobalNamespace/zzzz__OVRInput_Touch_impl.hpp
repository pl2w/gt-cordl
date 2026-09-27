#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Touch.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Touch_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_Touch::OVRInput_Touch(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Touch::OVRInput_Touch()   {
}
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::One{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::Two{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::Three{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::Four{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::PrimaryIndexTrigger{static_cast<int32_t>(0x2000)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::PrimaryThumbstick{static_cast<int32_t>(0x8000)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::PrimaryThumbRest{static_cast<int32_t>(0x1000)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::PrimaryTouchpad{static_cast<int32_t>(0x400)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::SecondaryIndexTrigger{static_cast<int32_t>(0x200000)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::SecondaryThumbstick{static_cast<int32_t>(0x800000)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::SecondaryThumbRest{static_cast<int32_t>(0x100000)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::SecondaryTouchpad{static_cast<int32_t>(0x800)};
constexpr ::GlobalNamespace::OVRInput_Touch  GlobalNamespace::OVRInput_Touch::Any{static_cast<int32_t>(0xffffffff)};
