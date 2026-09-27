#pragma once
// IWYU pragma private; include "GorillaTag/Gravity/GravityInfo.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Gravity/zzzz__GravityInfo_def.hpp"
// Ctor Parameters [CppParam { name: "gravityUpDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotationDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotationSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gravityStrength", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotate", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GorillaTag::Gravity::GravityInfo::GravityInfo(::UnityEngine::Vector3  gravityUpDirection, ::UnityEngine::Vector3  rotationDirection, float_t  rotationSpeed, float_t  gravityStrength, bool  rotate) noexcept  {
this->gravityUpDirection = gravityUpDirection;
this->rotationDirection = rotationDirection;
this->rotationSpeed = rotationSpeed;
this->gravityStrength = gravityStrength;
this->rotate = rotate;
}
// Ctor Parameters []
constexpr ::GorillaTag::Gravity::GravityInfo::GravityInfo()   {
}
