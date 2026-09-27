#pragma once
// IWYU pragma private; include "Pathfinding/OrientationMode.hpp"
#include "Pathfinding/zzzz__OrientationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::OrientationMode::OrientationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::OrientationMode::OrientationMode()   {
}
constexpr ::Pathfinding::OrientationMode  Pathfinding::OrientationMode::ZAxisForward{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::OrientationMode  Pathfinding::OrientationMode::YAxisForward{static_cast<int32_t>(0x1)};
