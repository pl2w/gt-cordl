#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XInput/XInputController_Capabilities.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceFlags_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceSubType_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_DeviceType_impl.hpp"
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_Capabilities_def.hpp"
// Ctor Parameters [CppParam { name: "type", ty: "::GlobalNamespace::XInputController_DeviceType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "subType", ty: "::GlobalNamespace::XInputController_DeviceSubType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flags", ty: "::GlobalNamespace::XInputController_DeviceFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XInputController_Capabilities::XInputController_Capabilities(::GlobalNamespace::XInputController_DeviceType  type, ::GlobalNamespace::XInputController_DeviceSubType  subType, ::GlobalNamespace::XInputController_DeviceFlags  flags) noexcept  {
this->type = type;
this->subType = subType;
this->flags = flags;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XInputController_Capabilities::XInputController_Capabilities()   {
}
