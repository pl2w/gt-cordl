#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ControllerButtonEvent_ButtonType.hpp"
#include "GorillaTag/Cosmetics/zzzz__ControllerButtonEvent_ButtonType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType::ControllerButtonEvent_ButtonType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType::ControllerButtonEvent_ButtonType()   {
}
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType  GlobalNamespace::ControllerButtonEvent_ButtonType::trigger{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType  GlobalNamespace::ControllerButtonEvent_ButtonType::primary{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType  GlobalNamespace::ControllerButtonEvent_ButtonType::secondary{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ControllerButtonEvent_ButtonType  GlobalNamespace::ControllerButtonEvent_ButtonType::grip{static_cast<int32_t>(0x3)};
