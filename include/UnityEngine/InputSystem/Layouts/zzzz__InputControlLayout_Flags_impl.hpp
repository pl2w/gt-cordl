#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_Flags.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControlLayout_Flags::InputControlLayout_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControlLayout_Flags::InputControlLayout_Flags()   {
}
constexpr ::GlobalNamespace::InputControlLayout_Flags  GlobalNamespace::InputControlLayout_Flags::IsGenericTypeOfDevice{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputControlLayout_Flags  GlobalNamespace::InputControlLayout_Flags::HideInUI{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputControlLayout_Flags  GlobalNamespace::InputControlLayout_Flags::IsOverride{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputControlLayout_Flags  GlobalNamespace::InputControlLayout_Flags::CanRunInBackground{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::InputControlLayout_Flags  GlobalNamespace::InputControlLayout_Flags::CanRunInBackgroundIsSet{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::InputControlLayout_Flags  GlobalNamespace::InputControlLayout_Flags::IsNoisy{static_cast<int32_t>(0x20)};
