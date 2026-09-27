#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/ClipType.hpp"
#include "Pathfinding/ClipperLib/zzzz__ClipType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::ClipperLib::ClipType::ClipType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::ClipType::ClipType()   {
}
constexpr ::Pathfinding::ClipperLib::ClipType  Pathfinding::ClipperLib::ClipType::ctIntersection{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::ClipperLib::ClipType  Pathfinding::ClipperLib::ClipType::ctUnion{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::ClipperLib::ClipType  Pathfinding::ClipperLib::ClipType::ctDifference{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::ClipperLib::ClipType  Pathfinding::ClipperLib::ClipType::ctXor{static_cast<int32_t>(0x3)};
