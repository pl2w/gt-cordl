#pragma once
// IWYU pragma private; include "Pathfinding/ColliderType.hpp"
#include "Pathfinding/zzzz__ColliderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::ColliderType::ColliderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::ColliderType::ColliderType()   {
}
constexpr ::Pathfinding::ColliderType  Pathfinding::ColliderType::Sphere{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::ColliderType  Pathfinding::ColliderType::Capsule{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::ColliderType  Pathfinding::ColliderType::Ray{static_cast<int32_t>(0x2)};
