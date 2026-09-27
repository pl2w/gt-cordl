#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_NewDeviceMsg_Data.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_NewDeviceMsg_Data_def.hpp"
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "layout", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "usages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "description", ty: "::UnityEngine::InputSystem::Layouts::InputDeviceDescription", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NewDeviceMsg_InputRemoting_Data::NewDeviceMsg_InputRemoting_Data(::StringW  name, ::StringW  layout, int32_t  deviceId, ::ArrayW<::StringW>  usages, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription  description) noexcept  {
this->name = name;
this->layout = layout;
this->deviceId = deviceId;
this->usages = usages;
this->description = description;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NewDeviceMsg_InputRemoting_Data::NewDeviceMsg_InputRemoting_Data()   {
}
