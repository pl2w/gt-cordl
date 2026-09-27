#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/Direction.hpp"
#include "Pathfinding/ClipperLib/zzzz__Direction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::ClipperLib::Direction::Direction(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::Direction::Direction()   {
}
constexpr ::Pathfinding::ClipperLib::Direction  Pathfinding::ClipperLib::Direction::dRightToLeft{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::ClipperLib::Direction  Pathfinding::ClipperLib::Direction::dLeftToRight{static_cast<int32_t>(0x1)};
