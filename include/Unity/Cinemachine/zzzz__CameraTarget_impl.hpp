#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CameraTarget.hpp"
#include "Unity/Cinemachine/zzzz__CameraTarget_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "TrackingTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LookAtTarget", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CustomLookAtTarget", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::CameraTarget::CameraTarget(::UnityW<::UnityEngine::Transform>  TrackingTarget, ::UnityW<::UnityEngine::Transform>  LookAtTarget, bool  CustomLookAtTarget) noexcept  {
this->TrackingTarget = TrackingTarget;
this->LookAtTarget = LookAtTarget;
this->CustomLookAtTarget = CustomLookAtTarget;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CameraTarget::CameraTarget()   {
}
