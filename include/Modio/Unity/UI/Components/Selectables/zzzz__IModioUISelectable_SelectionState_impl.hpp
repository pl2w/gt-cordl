#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/IModioUISelectable_SelectionState.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__IModioUISelectable_SelectionState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState::IModioUISelectable_SelectionState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState::IModioUISelectable_SelectionState()   {
}
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState  GlobalNamespace::IModioUISelectable_SelectionState::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState  GlobalNamespace::IModioUISelectable_SelectionState::Highlighted{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState  GlobalNamespace::IModioUISelectable_SelectionState::Pressed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState  GlobalNamespace::IModioUISelectable_SelectionState::Selected{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::IModioUISelectable_SelectionState  GlobalNamespace::IModioUISelectable_SelectionState::Disabled{static_cast<int32_t>(0x4)};
