#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_StateChangeMonitorListener.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorListener_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groupIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputManager_StateChangeMonitorListener::InputManager_StateChangeMonitorListener(::UnityEngine::InputSystem::InputControl*  control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, uint32_t  groupIndex) noexcept  {
this->control = control;
this->monitor = monitor;
this->monitorIndex = monitorIndex;
this->groupIndex = groupIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputManager_StateChangeMonitorListener::InputManager_StateChangeMonitorListener()   {
}
