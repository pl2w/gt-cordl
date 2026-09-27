#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_HoverBoardCast.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HoverBoardCast_def.hpp"
// Ctor Parameters [CppParam { name: "localOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sphereRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "intersectToVelocityCap", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isSolid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "didHit", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pointHit", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "normalHit", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTPlayer_HoverBoardCast::GTPlayer_HoverBoardCast(::UnityEngine::Vector3  localOrigin, ::UnityEngine::Vector3  localDirection, float_t  sphereRadius, float_t  distance, float_t  intersectToVelocityCap, bool  isSolid, bool  didHit, ::UnityEngine::Vector3  pointHit, ::UnityEngine::Vector3  normalHit) noexcept  {
this->localOrigin = localOrigin;
this->localDirection = localDirection;
this->sphereRadius = sphereRadius;
this->distance = distance;
this->intersectToVelocityCap = intersectToVelocityCap;
this->isSolid = isSolid;
this->didHit = didHit;
this->pointHit = pointHit;
this->normalHit = normalHit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPlayer_HoverBoardCast::GTPlayer_HoverBoardCast()   {
}
