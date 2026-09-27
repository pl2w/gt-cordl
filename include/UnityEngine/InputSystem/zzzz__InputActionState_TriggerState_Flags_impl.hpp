#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_TriggerState_Flags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_TriggerState_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags::TriggerState_InputActionState_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags::TriggerState_InputActionState_Flags()   {
}
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags  GlobalNamespace::TriggerState_InputActionState_Flags::HaveMagnitude{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags  GlobalNamespace::TriggerState_InputActionState_Flags::PassThrough{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags  GlobalNamespace::TriggerState_InputActionState_Flags::MayNeedConflictResolution{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags  GlobalNamespace::TriggerState_InputActionState_Flags::HasMultipleConcurrentActuations{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags  GlobalNamespace::TriggerState_InputActionState_Flags::InProcessing{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags  GlobalNamespace::TriggerState_InputActionState_Flags::Button{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::TriggerState_InputActionState_Flags  GlobalNamespace::TriggerState_InputActionState_Flags::Pressed{static_cast<int32_t>(0x40)};
