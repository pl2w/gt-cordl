#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/JointVelocityActiveState_RelativeTo.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__JointVelocityActiveState_RelativeTo_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo::JointVelocityActiveState_RelativeTo(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo::JointVelocityActiveState_RelativeTo()   {
}
constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo  GlobalNamespace::JointVelocityActiveState_RelativeTo::Hand{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo  GlobalNamespace::JointVelocityActiveState_RelativeTo::World{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::JointVelocityActiveState_RelativeTo  GlobalNamespace::JointVelocityActiveState_RelativeTo::Head{static_cast<int32_t>(0x2)};
