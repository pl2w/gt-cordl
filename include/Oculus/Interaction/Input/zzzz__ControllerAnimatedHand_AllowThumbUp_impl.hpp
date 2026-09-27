#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerAnimatedHand_AllowThumbUp.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAnimatedHand_AllowThumbUp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp::ControllerAnimatedHand_AllowThumbUp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp::ControllerAnimatedHand_AllowThumbUp()   {
}
constexpr ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  GlobalNamespace::ControllerAnimatedHand_AllowThumbUp::Always{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  GlobalNamespace::ControllerAnimatedHand_AllowThumbUp::GripRequired{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ControllerAnimatedHand_AllowThumbUp  GlobalNamespace::ControllerAnimatedHand_AllowThumbUp::TriggerAndGripRequired{static_cast<int32_t>(0x2)};
