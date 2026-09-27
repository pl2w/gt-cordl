#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/CapsuleDef.hpp"
#include "Technie/PhysicsCreator/zzzz__CapsuleAxis_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__CapsuleDef_def.hpp"
// Ctor Parameters [CppParam { name: "capsuleCenter", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "capsuleDirection", ty: "::Technie::PhysicsCreator::CapsuleAxis", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "capsuleRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "capsuleHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "capsulePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "capsuleRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Technie::PhysicsCreator::CapsuleDef::CapsuleDef(::UnityEngine::Vector3  capsuleCenter, ::Technie::PhysicsCreator::CapsuleAxis  capsuleDirection, float_t  capsuleRadius, float_t  capsuleHeight, ::UnityEngine::Vector3  capsulePosition, ::UnityEngine::Quaternion  capsuleRotation) noexcept  {
this->capsuleCenter = capsuleCenter;
this->capsuleDirection = capsuleDirection;
this->capsuleRadius = capsuleRadius;
this->capsuleHeight = capsuleHeight;
this->capsulePosition = capsulePosition;
this->capsuleRotation = capsuleRotation;
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::CapsuleDef::CapsuleDef()   {
}
