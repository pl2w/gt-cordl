#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSettings_UpdateMode.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_UpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputSettings_UpdateMode::InputSettings_UpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputSettings_UpdateMode::InputSettings_UpdateMode()   {
}
constexpr ::GlobalNamespace::InputSettings_UpdateMode  GlobalNamespace::InputSettings_UpdateMode::ProcessEventsInDynamicUpdate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputSettings_UpdateMode  GlobalNamespace::InputSettings_UpdateMode::ProcessEventsInFixedUpdate{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputSettings_UpdateMode  GlobalNamespace::InputSettings_UpdateMode::ProcessEventsManually{static_cast<int32_t>(0x3)};
