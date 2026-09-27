#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Length_Unit.hpp"
#include "UnityEngine/UIElements/zzzz__Length_Unit_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Length_Unit::Length_Unit(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Length_Unit::Length_Unit()   {
}
constexpr ::GlobalNamespace::Length_Unit  GlobalNamespace::Length_Unit::Pixel{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Length_Unit  GlobalNamespace::Length_Unit::Percent{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Length_Unit  GlobalNamespace::Length_Unit::Auto{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Length_Unit  GlobalNamespace::Length_Unit::None{static_cast<int32_t>(0x3)};
