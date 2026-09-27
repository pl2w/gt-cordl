#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandJointsPose_WeightedJoint.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "Oculus/Interaction/zzzz__HandJointsPose_WeightedJoint_def.hpp"
// Ctor Parameters [CppParam { name: "handJointId", ty: "::Oculus::Interaction::Input::HandJointId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "weight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HandJointsPose_WeightedJoint::HandJointsPose_WeightedJoint(::Oculus::Interaction::Input::HandJointId  handJointId, float_t  weight) noexcept  {
this->handJointId = handJointId;
this->weight = weight;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandJointsPose_WeightedJoint::HandJointsPose_WeightedJoint()   {
}
