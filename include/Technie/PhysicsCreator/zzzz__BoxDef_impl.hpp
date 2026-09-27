#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/BoxDef.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__BoxDef_def.hpp"
// Ctor Parameters [CppParam { name: "collisionBox", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boxPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "boxRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::BoxDef::BoxDef(::UnityEngine::Bounds  collisionBox, ::UnityEngine::Vector3  boxPosition, ::UnityEngine::Quaternion  boxRotation) noexcept  {
this->collisionBox = collisionBox;
this->boxPosition = boxPosition;
this->boxRotation = boxRotation;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::BoxDef::BoxDef()   {
}
