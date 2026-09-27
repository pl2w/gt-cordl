#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_HandHoldState.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_HandHoldState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "grabber", ty: "::UnityW<::GlobalNamespace::GorillaGrabber>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "objectHeld", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPositionHeld", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localRotationalOffset", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "applyRotation", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTPlayer_HandHoldState::GTPlayer_HandHoldState(::UnityW<::GlobalNamespace::GorillaGrabber>  grabber, ::UnityW<::UnityEngine::Transform>  objectHeld, ::UnityEngine::Vector3  localPositionHeld, float_t  localRotationalOffset, bool  applyRotation) noexcept  {
this->grabber = grabber;
this->objectHeld = objectHeld;
this->localPositionHeld = localPositionHeld;
this->localRotationalOffset = localRotationalOffset;
this->applyRotation = applyRotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPlayer_HandHoldState::GTPlayer_HandHoldState()   {
}
