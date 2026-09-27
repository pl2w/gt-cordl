#pragma once
// IWYU pragma private; include "UnityEngine/UI/Slider_Direction.hpp"
#include "UnityEngine/UI/zzzz__Slider_Direction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Slider_Direction::Slider_Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Slider_Direction::Slider_Direction()   {
}
constexpr ::GlobalNamespace::Slider_Direction  GlobalNamespace::Slider_Direction::LeftToRight{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Slider_Direction  GlobalNamespace::Slider_Direction::RightToLeft{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Slider_Direction  GlobalNamespace::Slider_Direction::BottomToTop{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Slider_Direction  GlobalNamespace::Slider_Direction::TopToBottom{static_cast<int32_t>(0x3)};
