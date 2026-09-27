#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBinding_DisplayStringOptions.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_DisplayStringOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputBinding_DisplayStringOptions::InputBinding_DisplayStringOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputBinding_DisplayStringOptions::InputBinding_DisplayStringOptions()   {
}
constexpr ::GlobalNamespace::InputBinding_DisplayStringOptions  GlobalNamespace::InputBinding_DisplayStringOptions::DontUseShortDisplayNames{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputBinding_DisplayStringOptions  GlobalNamespace::InputBinding_DisplayStringOptions::DontOmitDevice{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputBinding_DisplayStringOptions  GlobalNamespace::InputBinding_DisplayStringOptions::DontIncludeInteractions{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputBinding_DisplayStringOptions  GlobalNamespace::InputBinding_DisplayStringOptions::IgnoreBindingOverrides{static_cast<int32_t>(0x8)};
