#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseVisualTreeHierarchyTrackerUpdater_State.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualTreeHierarchyTrackerUpdater_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State::BaseVisualTreeHierarchyTrackerUpdater_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State::BaseVisualTreeHierarchyTrackerUpdater_State()   {
}
constexpr ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State  GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State::Waiting{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State  GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State::TrackingAddOrMove{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State  GlobalNamespace::BaseVisualTreeHierarchyTrackerUpdater_State::TrackingRemove{static_cast<int32_t>(0x2)};
