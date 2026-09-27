#pragma once
// IWYU pragma private; include "GlobalNamespace/LimitAxis.hpp"
#include "GlobalNamespace/zzzz__LimitAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LimitAxis::LimitAxis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LimitAxis::LimitAxis()   {
}
constexpr ::GlobalNamespace::LimitAxis  GlobalNamespace::LimitAxis::NoMovement{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LimitAxis  GlobalNamespace::LimitAxis::YAxis{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LimitAxis  GlobalNamespace::LimitAxis::XAxis{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LimitAxis  GlobalNamespace::LimitAxis::ZAxis{static_cast<int32_t>(0x3)};
