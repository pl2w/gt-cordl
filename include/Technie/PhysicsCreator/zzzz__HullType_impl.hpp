#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/HullType.hpp"
#include "Technie/PhysicsCreator/zzzz__HullType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::HullType::HullType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::HullType::HullType()   {
}
constexpr ::Technie::PhysicsCreator::HullType  Technie::PhysicsCreator::HullType::Box{static_cast<int32_t>(0x0)};
constexpr ::Technie::PhysicsCreator::HullType  Technie::PhysicsCreator::HullType::ConvexHull{static_cast<int32_t>(0x1)};
constexpr ::Technie::PhysicsCreator::HullType  Technie::PhysicsCreator::HullType::Sphere{static_cast<int32_t>(0x2)};
constexpr ::Technie::PhysicsCreator::HullType  Technie::PhysicsCreator::HullType::Face{static_cast<int32_t>(0x3)};
constexpr ::Technie::PhysicsCreator::HullType  Technie::PhysicsCreator::HullType::FaceAsBox{static_cast<int32_t>(0x4)};
constexpr ::Technie::PhysicsCreator::HullType  Technie::PhysicsCreator::HullType::Auto{static_cast<int32_t>(0x5)};
constexpr ::Technie::PhysicsCreator::HullType  Technie::PhysicsCreator::HullType::Capsule{static_cast<int32_t>(0x6)};
