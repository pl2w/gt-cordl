#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/PoseDetection/BodyPoseData_JointData.hpp"
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Body/PoseDetection/zzzz__BodyPoseData_JointData_def.hpp"
// Ctor Parameters [CppParam { name: "JointId", ty: "::Oculus::Interaction::Body::Input::BodyJointId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ParentId", ty: "::Oculus::Interaction::Body::Input::BodyJointId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PoseFromRoot", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LocalPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BodyPoseData_JointData::BodyPoseData_JointData(::Oculus::Interaction::Body::Input::BodyJointId  JointId, ::Oculus::Interaction::Body::Input::BodyJointId  ParentId, ::UnityEngine::Pose  PoseFromRoot, ::UnityEngine::Pose  LocalPose) noexcept  {
this->JointId = JointId;
this->ParentId = ParentId;
this->PoseFromRoot = PoseFromRoot;
this->LocalPose = LocalPose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BodyPoseData_JointData::BodyPoseData_JointData()   {
}
