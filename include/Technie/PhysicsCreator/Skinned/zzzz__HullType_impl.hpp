#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/HullType.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__HullType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::Skinned::HullType::HullType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::HullType::HullType()   {
}
constexpr ::Technie::PhysicsCreator::Skinned::HullType  Technie::PhysicsCreator::Skinned::HullType::Auto{static_cast<int32_t>(0x0)};
constexpr ::Technie::PhysicsCreator::Skinned::HullType  Technie::PhysicsCreator::Skinned::HullType::Manual{static_cast<int32_t>(0x1)};
