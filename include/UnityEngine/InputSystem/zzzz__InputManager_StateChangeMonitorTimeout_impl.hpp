#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_StateChangeMonitorTimeout.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_StateChangeMonitorTimeout_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputStateChangeMonitor_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
// Ctor Parameters [CppParam { name: "control", ty: "::UnityEngine::InputSystem::InputControl*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "monitor", ty: "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "monitorIndex", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timerIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputManager_StateChangeMonitorTimeout::InputManager_StateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*  monitor, int64_t  monitorIndex, int32_t  timerIndex) noexcept  {
this->control = control;
this->time = time;
this->monitor = monitor;
this->monitorIndex = monitorIndex;
this->timerIndex = timerIndex;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputManager_StateChangeMonitorTimeout::InputManager_StateChangeMonitorTimeout()   {
}
