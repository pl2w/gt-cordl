#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugUI_Flags.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DebugUI_Flags::DebugUI_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DebugUI_Flags::DebugUI_Flags()   {
}
constexpr ::GlobalNamespace::DebugUI_Flags  GlobalNamespace::DebugUI_Flags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DebugUI_Flags  GlobalNamespace::DebugUI_Flags::EditorOnly{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::DebugUI_Flags  GlobalNamespace::DebugUI_Flags::RuntimeOnly{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::DebugUI_Flags  GlobalNamespace::DebugUI_Flags::EditorForceUpdate{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::DebugUI_Flags  GlobalNamespace::DebugUI_Flags::FrequentlyUsed{static_cast<int32_t>(0x10)};
