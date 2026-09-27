#pragma once
// IWYU pragma private; include "GlobalNamespace/SwipeGesture_Axis.hpp"
#include "GlobalNamespace/zzzz__SwipeGesture_Axis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SwipeGesture_Axis::SwipeGesture_Axis(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SwipeGesture_Axis::SwipeGesture_Axis()   {
}
constexpr ::GlobalNamespace::SwipeGesture_Axis  GlobalNamespace::SwipeGesture_Axis::Horizontal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::SwipeGesture_Axis  GlobalNamespace::SwipeGesture_Axis::Vertical{static_cast<int32_t>(0x1)};
