#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/UI/VirtualMouseInput_CursorMode.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_CursorMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VirtualMouseInput_CursorMode::VirtualMouseInput_CursorMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VirtualMouseInput_CursorMode::VirtualMouseInput_CursorMode()   {
}
constexpr ::GlobalNamespace::VirtualMouseInput_CursorMode  GlobalNamespace::VirtualMouseInput_CursorMode::SoftwareCursor{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::VirtualMouseInput_CursorMode  GlobalNamespace::VirtualMouseInput_CursorMode::HardwareCursorIfAvailable{static_cast<int32_t>(0x1)};
