#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutManager_SharedManagerState.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutManager_SharedManagerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LayoutManager_SharedManagerState::LayoutManager_SharedManagerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayoutManager_SharedManagerState::LayoutManager_SharedManagerState()   {
}
constexpr ::GlobalNamespace::LayoutManager_SharedManagerState  GlobalNamespace::LayoutManager_SharedManagerState::Uninitialized{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LayoutManager_SharedManagerState  GlobalNamespace::LayoutManager_SharedManagerState::Initialized{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LayoutManager_SharedManagerState  GlobalNamespace::LayoutManager_SharedManagerState::Shutdown{static_cast<int32_t>(0x2)};
