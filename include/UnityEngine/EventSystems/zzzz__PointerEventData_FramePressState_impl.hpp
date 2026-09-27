#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PointerEventData_FramePressState.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_FramePressState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PointerEventData_FramePressState::PointerEventData_FramePressState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointerEventData_FramePressState::PointerEventData_FramePressState()   {
}
constexpr ::GlobalNamespace::PointerEventData_FramePressState  GlobalNamespace::PointerEventData_FramePressState::Pressed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PointerEventData_FramePressState  GlobalNamespace::PointerEventData_FramePressState::Released{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PointerEventData_FramePressState  GlobalNamespace::PointerEventData_FramePressState::PressedAndReleased{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PointerEventData_FramePressState  GlobalNamespace::PointerEventData_FramePressState::NotChanged{static_cast<int32_t>(0x3)};
