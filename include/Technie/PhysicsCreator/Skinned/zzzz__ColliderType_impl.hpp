#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/ColliderType.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__ColliderType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType::ColliderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType::ColliderType()   {
}
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType  Technie::PhysicsCreator::Skinned::ColliderType::Convex{static_cast<int32_t>(0x0)};
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType  Technie::PhysicsCreator::Skinned::ColliderType::Capsule{static_cast<int32_t>(0x1)};
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType  Technie::PhysicsCreator::Skinned::ColliderType::Box{static_cast<int32_t>(0x2)};
constexpr ::Technie::PhysicsCreator::Skinned::ColliderType  Technie::PhysicsCreator::Skinned::ColliderType::Sphere{static_cast<int32_t>(0x3)};
