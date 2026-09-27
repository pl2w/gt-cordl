#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugManager_UIMode.hpp"
#include "UnityEngine/Rendering/zzzz__DebugManager_UIMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugManager_UIMode::DebugManager_UIMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugManager_UIMode::DebugManager_UIMode()   {
}
constexpr ::GlobalNamespace::DebugManager_UIMode  GlobalNamespace::DebugManager_UIMode::EditorMode{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DebugManager_UIMode  GlobalNamespace::DebugManager_UIMode::RuntimeMode{static_cast<int32_t>(0x1)};
