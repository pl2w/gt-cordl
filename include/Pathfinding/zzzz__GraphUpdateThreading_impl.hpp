#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateThreading.hpp"
#include "Pathfinding/zzzz__GraphUpdateThreading_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::GraphUpdateThreading::GraphUpdateThreading(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUpdateThreading::GraphUpdateThreading()   {
}
constexpr ::Pathfinding::GraphUpdateThreading  Pathfinding::GraphUpdateThreading::UnityThread{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::GraphUpdateThreading  Pathfinding::GraphUpdateThreading::SeparateThread{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::GraphUpdateThreading  Pathfinding::GraphUpdateThreading::UnityInit{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::GraphUpdateThreading  Pathfinding::GraphUpdateThreading::UnityPost{static_cast<int32_t>(0x4)};
constexpr ::Pathfinding::GraphUpdateThreading  Pathfinding::GraphUpdateThreading::SeparateAndUnityInit{static_cast<int32_t>(0x3)};
