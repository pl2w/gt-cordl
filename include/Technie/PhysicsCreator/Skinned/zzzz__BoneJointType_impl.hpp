#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Skinned/BoneJointType.hpp"
#include "Technie/PhysicsCreator/Skinned/zzzz__BoneJointType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType::BoneJointType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType::BoneJointType()   {
}
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType  Technie::PhysicsCreator::Skinned::BoneJointType::Fixed{static_cast<int32_t>(0x0)};
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType  Technie::PhysicsCreator::Skinned::BoneJointType::Hinge{static_cast<int32_t>(0x1)};
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType  Technie::PhysicsCreator::Skinned::BoneJointType::BallAndSocket{static_cast<int32_t>(0x2)};
constexpr ::Technie::PhysicsCreator::Skinned::BoneJointType  Technie::PhysicsCreator::Skinned::BoneJointType::Tentacle{static_cast<int32_t>(0x3)};
