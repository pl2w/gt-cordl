#pragma once
// IWYU pragma private; include "UnityEngine/UI/Selectable_SelectionState.hpp"
#include "UnityEngine/UI/zzzz__Selectable_SelectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Selectable_SelectionState::Selectable_SelectionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Selectable_SelectionState::Selectable_SelectionState()   {
}
constexpr ::GlobalNamespace::Selectable_SelectionState  GlobalNamespace::Selectable_SelectionState::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Selectable_SelectionState  GlobalNamespace::Selectable_SelectionState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Selectable_SelectionState  GlobalNamespace::Selectable_SelectionState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Selectable_SelectionState  GlobalNamespace::Selectable_SelectionState::Selected{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Selectable_SelectionState  GlobalNamespace::Selectable_SelectionState::Disabled{static_cast<int32_t>(0x4)};
