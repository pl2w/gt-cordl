#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Mock/MockRuntime_ScriptEvent.hpp"
#include "UnityEngine/XR/OpenXR/Features/Mock/zzzz__MockRuntime_ScriptEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MockRuntime_ScriptEvent::MockRuntime_ScriptEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockRuntime_ScriptEvent::MockRuntime_ScriptEvent()   {
}
constexpr ::GlobalNamespace::MockRuntime_ScriptEvent  GlobalNamespace::MockRuntime_ScriptEvent::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MockRuntime_ScriptEvent  GlobalNamespace::MockRuntime_ScriptEvent::EndFrame{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MockRuntime_ScriptEvent  GlobalNamespace::MockRuntime_ScriptEvent::HapticImpulse{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MockRuntime_ScriptEvent  GlobalNamespace::MockRuntime_ScriptEvent::HapticStop{static_cast<int32_t>(0x3)};
