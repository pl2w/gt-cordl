#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/Vector2Composite_Mode.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector2Composite_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Vector2Composite_Mode::Vector2Composite_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector2Composite_Mode::Vector2Composite_Mode()   {
}
constexpr ::GlobalNamespace::Vector2Composite_Mode  GlobalNamespace::Vector2Composite_Mode::Analog{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Vector2Composite_Mode  GlobalNamespace::Vector2Composite_Mode::DigitalNormalized{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Vector2Composite_Mode  GlobalNamespace::Vector2Composite_Mode::Digital{static_cast<int32_t>(0x1)};
