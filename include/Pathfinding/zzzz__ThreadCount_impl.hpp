#pragma once
// IWYU pragma private; include "Pathfinding/ThreadCount.hpp"
#include "Pathfinding/zzzz__ThreadCount_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::ThreadCount::ThreadCount(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::ThreadCount::ThreadCount()   {
}
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::AutomaticLowLoad{static_cast<int32_t>(0xffffffff)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::AutomaticHighLoad{static_cast<int32_t>(0xfffffffe)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::None{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::One{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::Two{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::Three{static_cast<int32_t>(0x3)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::Four{static_cast<int32_t>(0x4)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::Five{static_cast<int32_t>(0x5)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::Six{static_cast<int32_t>(0x6)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::Seven{static_cast<int32_t>(0x7)};
constexpr ::Pathfinding::ThreadCount  Pathfinding::ThreadCount::Eight{static_cast<int32_t>(0x8)};
