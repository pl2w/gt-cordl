#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandSkeletonJoint.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__HandSkeletonJoint_def.hpp"
// Ctor Parameters [CppParam { name: "parent", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::Interaction::Input::HandSkeletonJoint::HandSkeletonJoint(int32_t  parent, ::UnityEngine::Pose  pose) noexcept  {
this->parent = parent;
this->pose = pose;
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::HandSkeletonJoint::HandSkeletonJoint()   {
}
