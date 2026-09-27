#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/Orientation.hpp"
#include "Pathfinding/Poly2Tri/zzzz__Orientation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Poly2Tri::Orientation::Orientation(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::Orientation::Orientation()   {
}
constexpr ::Pathfinding::Poly2Tri::Orientation  Pathfinding::Poly2Tri::Orientation::CW{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Poly2Tri::Orientation  Pathfinding::Poly2Tri::Orientation::CCW{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Poly2Tri::Orientation  Pathfinding::Poly2Tri::Orientation::Collinear{static_cast<int32_t>(0x2)};
