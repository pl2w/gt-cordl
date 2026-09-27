#pragma once
// IWYU pragma private; include "Pathfinding/Side.hpp"
#include "Pathfinding/zzzz__Side_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::Side::Side(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::Side::Side()   {
}
constexpr ::Pathfinding::Side  Pathfinding::Side::Colinear{static_cast<uint8_t>(0x0u)};
constexpr ::Pathfinding::Side  Pathfinding::Side::Left{static_cast<uint8_t>(0x1u)};
constexpr ::Pathfinding::Side  Pathfinding::Side::Right{static_cast<uint8_t>(0x2u)};
