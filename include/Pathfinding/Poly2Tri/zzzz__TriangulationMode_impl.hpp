#pragma once
// IWYU pragma private; include "Pathfinding/Poly2Tri/TriangulationMode.hpp"
#include "Pathfinding/Poly2Tri/zzzz__TriangulationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Poly2Tri::TriangulationMode::TriangulationMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Poly2Tri::TriangulationMode::TriangulationMode()   {
}
constexpr ::Pathfinding::Poly2Tri::TriangulationMode  Pathfinding::Poly2Tri::TriangulationMode::Unconstrained{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::Poly2Tri::TriangulationMode  Pathfinding::Poly2Tri::TriangulationMode::Constrained{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::Poly2Tri::TriangulationMode  Pathfinding::Poly2Tri::TriangulationMode::Polygon{static_cast<int32_t>(0x2)};
