#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_RawAxis2D.hpp"
#include "GlobalNamespace/zzzz__OVRInput_RawAxis2D_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_RawAxis2D::OVRInput_RawAxis2D(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_RawAxis2D::OVRInput_RawAxis2D()   {
}
constexpr ::GlobalNamespace::OVRInput_RawAxis2D  GlobalNamespace::OVRInput_RawAxis2D::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRInput_RawAxis2D  GlobalNamespace::OVRInput_RawAxis2D::LThumbstick{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRInput_RawAxis2D  GlobalNamespace::OVRInput_RawAxis2D::LTouchpad{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRInput_RawAxis2D  GlobalNamespace::OVRInput_RawAxis2D::RThumbstick{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRInput_RawAxis2D  GlobalNamespace::OVRInput_RawAxis2D::RTouchpad{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::OVRInput_RawAxis2D  GlobalNamespace::OVRInput_RawAxis2D::Any{static_cast<int32_t>(0xffffffff)};
