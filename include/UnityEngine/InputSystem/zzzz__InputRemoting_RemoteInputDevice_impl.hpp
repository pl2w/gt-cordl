#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_RemoteInputDevice.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_RemoteInputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "remoteId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputRemoting_RemoteInputDevice::InputRemoting_RemoteInputDevice(int32_t  remoteId, int32_t  localId, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) noexcept  {
this->remoteId = remoteId;
this->localId = localId;
this->description = description;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputRemoting_RemoteInputDevice::InputRemoting_RemoteInputDevice()   {
}
