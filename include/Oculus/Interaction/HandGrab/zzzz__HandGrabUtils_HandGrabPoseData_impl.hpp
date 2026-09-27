#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandGrabUtils_HandGrabPoseData.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabUtils_HandGrabPoseData_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
// Ctor Parameters [CppParam { name: "gripPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "handPose", ty: "::Oculus::Interaction::HandGrab::HandPose*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandGrabUtils_HandGrabPoseData::HandGrabUtils_HandGrabPoseData(::UnityEngine::Pose  gripPose, ::Oculus::Interaction::HandGrab::HandPose*  handPose, float_t  scale) noexcept  {
this->gripPose = gripPose;
this->handPose = handPose;
this->scale = scale;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandGrabUtils_HandGrabPoseData::HandGrabUtils_HandGrabPoseData()   {
}
