#pragma once
// IWYU pragma private; include "UnityEngine/UI/Scrollbar_Direction.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_Direction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Scrollbar_Direction::Scrollbar_Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Scrollbar_Direction::Scrollbar_Direction()   {
}
constexpr ::GlobalNamespace::Scrollbar_Direction  GlobalNamespace::Scrollbar_Direction::LeftToRight{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Scrollbar_Direction  GlobalNamespace::Scrollbar_Direction::RightToLeft{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Scrollbar_Direction  GlobalNamespace::Scrollbar_Direction::BottomToTop{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Scrollbar_Direction  GlobalNamespace::Scrollbar_Direction::TopToBottom{static_cast<int32_t>(0x3)};
