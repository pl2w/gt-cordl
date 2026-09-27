#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlExtensions_Enumerate.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlExtensions_Enumerate_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlExtensions_Enumerate::InputControlExtensions_Enumerate(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlExtensions_Enumerate::InputControlExtensions_Enumerate()   {
}
constexpr ::GlobalNamespace::InputControlExtensions_Enumerate  GlobalNamespace::InputControlExtensions_Enumerate::IgnoreControlsInDefaultState{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputControlExtensions_Enumerate  GlobalNamespace::InputControlExtensions_Enumerate::IgnoreControlsInCurrentState{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputControlExtensions_Enumerate  GlobalNamespace::InputControlExtensions_Enumerate::IncludeSyntheticControls{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputControlExtensions_Enumerate  GlobalNamespace::InputControlExtensions_Enumerate::IncludeNoisyControls{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::InputControlExtensions_Enumerate  GlobalNamespace::InputControlExtensions_Enumerate::IncludeNonLeafControls{static_cast<int32_t>(0x10)};
