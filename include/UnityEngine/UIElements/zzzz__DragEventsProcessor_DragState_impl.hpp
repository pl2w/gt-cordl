#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragEventsProcessor_DragState.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_DragState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DragEventsProcessor_DragState::DragEventsProcessor_DragState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DragEventsProcessor_DragState::DragEventsProcessor_DragState()   {
}
constexpr ::GlobalNamespace::DragEventsProcessor_DragState  GlobalNamespace::DragEventsProcessor_DragState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DragEventsProcessor_DragState  GlobalNamespace::DragEventsProcessor_DragState::CanStartDrag{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DragEventsProcessor_DragState  GlobalNamespace::DragEventsProcessor_DragState::Dragging{static_cast<int32_t>(0x2)};
