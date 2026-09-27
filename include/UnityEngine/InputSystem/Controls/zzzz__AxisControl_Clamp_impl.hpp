#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/AxisControl_Clamp.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AxisControl_Clamp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AxisControl_Clamp::AxisControl_Clamp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AxisControl_Clamp::AxisControl_Clamp()   {
}
constexpr ::GlobalNamespace::AxisControl_Clamp  GlobalNamespace::AxisControl_Clamp::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AxisControl_Clamp  GlobalNamespace::AxisControl_Clamp::BeforeNormalize{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AxisControl_Clamp  GlobalNamespace::AxisControl_Clamp::AfterNormalize{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::AxisControl_Clamp  GlobalNamespace::AxisControl_Clamp::ToConstantBeforeNormalize{static_cast<int32_t>(0x3)};
