#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/PolyFillType.hpp"
#include "Pathfinding/ClipperLib/zzzz__PolyFillType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::ClipperLib::PolyFillType::PolyFillType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::ClipperLib::PolyFillType::PolyFillType()   {
}
constexpr ::Pathfinding::ClipperLib::PolyFillType  Pathfinding::ClipperLib::PolyFillType::pftEvenOdd{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::ClipperLib::PolyFillType  Pathfinding::ClipperLib::PolyFillType::pftNonZero{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::ClipperLib::PolyFillType  Pathfinding::ClipperLib::PolyFillType::pftPositive{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::ClipperLib::PolyFillType  Pathfinding::ClipperLib::PolyFillType::pftNegative{static_cast<int32_t>(0x3)};
