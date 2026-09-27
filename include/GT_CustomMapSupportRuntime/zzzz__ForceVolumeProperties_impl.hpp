#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ForceVolumeProperties.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ForceVolumeProperties_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
// Ctor Parameters [CppParam { name: "accel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxDepth", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disableGrip", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dampenLateralVelocity", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dampenXVel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dampenZVel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "applyPullToCenterAcceleration", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pullToCenterAccel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pullToCenterMaxSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pullToCenterMinDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enterClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "exitClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "loopClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "loopCrescendoClip", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::ForceVolumeProperties::ForceVolumeProperties(float_t  accel, float_t  maxDepth, float_t  maxSpeed, bool  disableGrip, bool  dampenLateralVelocity, float_t  dampenXVel, float_t  dampenZVel, bool  applyPullToCenterAcceleration, float_t  pullToCenterAccel, float_t  pullToCenterMaxSpeed, float_t  pullToCenterMinDistance, ::UnityW<::UnityEngine::AudioClip>  enterClip, ::UnityW<::UnityEngine::AudioClip>  exitClip, ::UnityW<::UnityEngine::AudioClip>  loopClip, ::UnityW<::UnityEngine::AudioClip>  loopCrescendoClip) noexcept  {
this->accel = accel;
this->maxDepth = maxDepth;
this->maxSpeed = maxSpeed;
this->disableGrip = disableGrip;
this->dampenLateralVelocity = dampenLateralVelocity;
this->dampenXVel = dampenXVel;
this->dampenZVel = dampenZVel;
this->applyPullToCenterAcceleration = applyPullToCenterAcceleration;
this->pullToCenterAccel = pullToCenterAccel;
this->pullToCenterMaxSpeed = pullToCenterMaxSpeed;
this->pullToCenterMinDistance = pullToCenterMinDistance;
this->enterClip = enterClip;
this->exitClip = exitClip;
this->loopClip = loopClip;
this->loopCrescendoClip = loopCrescendoClip;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::ForceVolumeProperties::ForceVolumeProperties()   {
}
