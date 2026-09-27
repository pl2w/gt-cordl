#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase_LifeCycleStatus.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_LifeCycleStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus::EventBase_LifeCycleStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus::EventBase_LifeCycleStatus()   {
}
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::PropagationStopped{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::ImmediatePropagationStopped{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::Dispatching{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::Pooled{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::IMGUIEventIsValid{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::PropagateToIMGUI{static_cast<int32_t>(0x20)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::Dispatched{static_cast<int32_t>(0x40)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::Processed{static_cast<int32_t>(0x80)};
constexpr ::GlobalNamespace::EventBase_LifeCycleStatus  GlobalNamespace::EventBase_LifeCycleStatus::ProcessedByFocusController{static_cast<int32_t>(0x100)};
