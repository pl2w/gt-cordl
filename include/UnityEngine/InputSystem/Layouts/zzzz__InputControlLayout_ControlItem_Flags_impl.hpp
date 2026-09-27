#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem_Flags.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_ControlItem_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ControlItem_InputControlLayout_Flags::ControlItem_InputControlLayout_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControlItem_InputControlLayout_Flags::ControlItem_InputControlLayout_Flags()   {
}
constexpr ::GlobalNamespace::ControlItem_InputControlLayout_Flags  GlobalNamespace::ControlItem_InputControlLayout_Flags::isModifyingExistingControl{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ControlItem_InputControlLayout_Flags  GlobalNamespace::ControlItem_InputControlLayout_Flags::IsNoisy{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ControlItem_InputControlLayout_Flags  GlobalNamespace::ControlItem_InputControlLayout_Flags::IsSynthetic{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ControlItem_InputControlLayout_Flags  GlobalNamespace::ControlItem_InputControlLayout_Flags::IsFirstDefinedInThisLayout{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::ControlItem_InputControlLayout_Flags  GlobalNamespace::ControlItem_InputControlLayout_Flags::DontReset{static_cast<int32_t>(0x10)};
