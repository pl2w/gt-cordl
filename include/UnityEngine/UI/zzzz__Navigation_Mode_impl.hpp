#pragma once
// IWYU pragma private; include "UnityEngine/UI/Navigation_Mode.hpp"
#include "UnityEngine/UI/zzzz__Navigation_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Navigation_Mode::Navigation_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Navigation_Mode::Navigation_Mode()   {
}
constexpr ::GlobalNamespace::Navigation_Mode  GlobalNamespace::Navigation_Mode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Navigation_Mode  GlobalNamespace::Navigation_Mode::Horizontal{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Navigation_Mode  GlobalNamespace::Navigation_Mode::Vertical{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Navigation_Mode  GlobalNamespace::Navigation_Mode::Automatic{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Navigation_Mode  GlobalNamespace::Navigation_Mode::Explicit{static_cast<int32_t>(0x4)};
