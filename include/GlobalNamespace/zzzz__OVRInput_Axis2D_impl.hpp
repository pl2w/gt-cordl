#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Axis2D.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Axis2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_Axis2D::OVRInput_Axis2D(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_Axis2D::OVRInput_Axis2D()   {
}
constexpr ::GlobalNamespace::OVRInput_Axis2D  GlobalNamespace::OVRInput_Axis2D::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_Axis2D  GlobalNamespace::OVRInput_Axis2D::PrimaryThumbstick{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_Axis2D  GlobalNamespace::OVRInput_Axis2D::PrimaryTouchpad{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRInput_Axis2D  GlobalNamespace::OVRInput_Axis2D::SecondaryThumbstick{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRInput_Axis2D  GlobalNamespace::OVRInput_Axis2D::SecondaryTouchpad{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVRInput_Axis2D  GlobalNamespace::OVRInput_Axis2D::Any{static_cast<int32_t>(0xffffffff)};
