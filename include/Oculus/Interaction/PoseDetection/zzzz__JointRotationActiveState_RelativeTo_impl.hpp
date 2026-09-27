#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointRotationActiveState_RelativeTo.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointRotationActiveState_RelativeTo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo::JointRotationActiveState_RelativeTo(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo::JointRotationActiveState_RelativeTo()   {
}
constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo  GlobalNamespace::JointRotationActiveState_RelativeTo::Hand{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JointRotationActiveState_RelativeTo  GlobalNamespace::JointRotationActiveState_RelativeTo::World{static_cast<int32_t>(0x1)};
