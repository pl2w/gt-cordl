#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/AnimatedHandOVR_AllowThumbUp.hpp"
#include "Oculus/Interaction/Input/zzzz__AnimatedHandOVR_AllowThumbUp_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp::AnimatedHandOVR_AllowThumbUp(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp::AnimatedHandOVR_AllowThumbUp()   {
}
constexpr ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  GlobalNamespace::AnimatedHandOVR_AllowThumbUp::Always{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  GlobalNamespace::AnimatedHandOVR_AllowThumbUp::GripRequired{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AnimatedHandOVR_AllowThumbUp  GlobalNamespace::AnimatedHandOVR_AllowThumbUp::TriggerAndGripRequired{static_cast<int32_t>(0x2)};
