#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis2DActiveState_ComparisonMode.hpp"
#include "Oculus/Interaction/zzzz__Axis2DActiveState_ComparisonMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode::Axis2DActiveState_ComparisonMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode::Axis2DActiveState_ComparisonMode()   {
}
constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode  GlobalNamespace::Axis2DActiveState_ComparisonMode::GreaterThan{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode  GlobalNamespace::Axis2DActiveState_ComparisonMode::LessThan{static_cast<int32_t>(0x1)};
