#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionMap_Flags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputActionMap_Flags::InputActionMap_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputActionMap_Flags::InputActionMap_Flags()   {
}
constexpr ::GlobalNamespace::InputActionMap_Flags  GlobalNamespace::InputActionMap_Flags::NeedToResolveBindings{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputActionMap_Flags  GlobalNamespace::InputActionMap_Flags::BindingResolutionNeedsFullReResolve{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputActionMap_Flags  GlobalNamespace::InputActionMap_Flags::ControlsForEachActionInitialized{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputActionMap_Flags  GlobalNamespace::InputActionMap_Flags::BindingsForEachActionInitialized{static_cast<int32_t>(0x8)};
