#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportRequest.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__MatchOrientation_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
// Ctor Parameters [CppParam { name: "destinationPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destinationRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "matchOrientation", ty: "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest::TeleportRequest(::UnityEngine::Vector3  destinationPosition, ::UnityEngine::Quaternion  destinationRotation, float_t  requestTime, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::MatchOrientation  matchOrientation) noexcept  {
this->destinationPosition = destinationPosition;
this->destinationRotation = destinationRotation;
this->requestTime = requestTime;
this->matchOrientation = matchOrientation;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest::TeleportRequest()   {
}
