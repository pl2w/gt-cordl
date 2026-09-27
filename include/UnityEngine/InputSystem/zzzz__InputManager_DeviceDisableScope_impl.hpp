#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_DeviceDisableScope.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_DeviceDisableScope_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputManager_DeviceDisableScope::InputManager_DeviceDisableScope(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputManager_DeviceDisableScope::InputManager_DeviceDisableScope()   {
}
constexpr ::GlobalNamespace::InputManager_DeviceDisableScope  GlobalNamespace::InputManager_DeviceDisableScope::Everywhere{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputManager_DeviceDisableScope  GlobalNamespace::InputManager_DeviceDisableScope::InFrontendOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputManager_DeviceDisableScope  GlobalNamespace::InputManager_DeviceDisableScope::TemporaryWhilePlayerIsInBackground{static_cast<int32_t>(0x2)};
