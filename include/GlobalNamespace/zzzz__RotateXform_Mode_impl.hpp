#pragma once
// IWYU pragma private; include "GlobalNamespace/RotateXform_Mode.hpp"
#include "GlobalNamespace/zzzz__RotateXform_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RotateXform_Mode::RotateXform_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotateXform_Mode::RotateXform_Mode()   {
}
constexpr ::GlobalNamespace::RotateXform_Mode  GlobalNamespace::RotateXform_Mode::Local{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RotateXform_Mode  GlobalNamespace::RotateXform_Mode::World{static_cast<int32_t>(0x1)};
