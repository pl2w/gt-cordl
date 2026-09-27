#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Composites/Vector3Composite_Mode.hpp"
#include "UnityEngine/InputSystem/Composites/zzzz__Vector3Composite_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Vector3Composite_Mode::Vector3Composite_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Vector3Composite_Mode::Vector3Composite_Mode()   {
}
constexpr ::GlobalNamespace::Vector3Composite_Mode  GlobalNamespace::Vector3Composite_Mode::Analog{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Vector3Composite_Mode  GlobalNamespace::Vector3Composite_Mode::DigitalNormalized{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Vector3Composite_Mode  GlobalNamespace::Vector3Composite_Mode::Digital{static_cast<int32_t>(0x2)};
