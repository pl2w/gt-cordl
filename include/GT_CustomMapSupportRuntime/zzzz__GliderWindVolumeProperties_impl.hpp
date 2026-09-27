#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/GliderWindVolumeProperties.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__GliderWindVolumeProperties_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "maxSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxAccel", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "speedVsAccelCurve", ty: "::UnityEngine::AnimationCurve*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localWindDirection", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::GliderWindVolumeProperties::GliderWindVolumeProperties(float_t  maxSpeed, float_t  maxAccel, ::UnityEngine::AnimationCurve*  speedVsAccelCurve, ::UnityEngine::Vector3  localWindDirection) noexcept  {
this->maxSpeed = maxSpeed;
this->maxAccel = maxAccel;
this->speedVsAccelCurve = speedVsAccelCurve;
this->localWindDirection = localWindDirection;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::GliderWindVolumeProperties::GliderWindVolumeProperties()   {
}
