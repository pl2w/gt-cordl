#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/EdgeSide.hpp"
#include "Pathfinding/ClipperLib/zzzz__EdgeSide_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::ClipperLib::EdgeSide::EdgeSide(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::EdgeSide::EdgeSide()   {
}
constexpr ::Pathfinding::ClipperLib::EdgeSide  Pathfinding::ClipperLib::EdgeSide::esLeft{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::ClipperLib::EdgeSide  Pathfinding::ClipperLib::EdgeSide::esRight{static_cast<int32_t>(0x1)};
