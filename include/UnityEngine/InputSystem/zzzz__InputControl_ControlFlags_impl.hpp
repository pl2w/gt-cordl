#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControl_ControlFlags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_ControlFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputControl_ControlFlags::InputControl_ControlFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputControl_ControlFlags::InputControl_ControlFlags()   {
}
constexpr ::GlobalNamespace::InputControl_ControlFlags  GlobalNamespace::InputControl_ControlFlags::ConfigUpToDate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputControl_ControlFlags  GlobalNamespace::InputControl_ControlFlags::IsNoisy{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputControl_ControlFlags  GlobalNamespace::InputControl_ControlFlags::IsSynthetic{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputControl_ControlFlags  GlobalNamespace::InputControl_ControlFlags::IsButton{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::InputControl_ControlFlags  GlobalNamespace::InputControl_ControlFlags::DontReset{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::InputControl_ControlFlags  GlobalNamespace::InputControl_ControlFlags::SetupFinished{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::InputControl_ControlFlags  GlobalNamespace::InputControl_ControlFlags::UsesStateFromOtherControl{static_cast<int32_t>(0x40)};
