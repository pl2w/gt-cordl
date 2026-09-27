#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputManager_AvailableDevice.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_AvailableDevice_def.hpp"
// Ctor Parameters [CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isNative", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isRemoved", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputManager_AvailableDevice::InputManager_AvailableDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description, int32_t  deviceId, bool  isNative, bool  isRemoved) noexcept  {
this->description = description;
this->deviceId = deviceId;
this->isNative = isNative;
this->isRemoved = isRemoved;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputManager_AvailableDevice::InputManager_AvailableDevice()   {
}
