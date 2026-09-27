#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem_UpdateMode.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_UpdateMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DefaultEventSystem_UpdateMode::DefaultEventSystem_UpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEventSystem_UpdateMode::DefaultEventSystem_UpdateMode()   {
}
constexpr ::GlobalNamespace::DefaultEventSystem_UpdateMode  GlobalNamespace::DefaultEventSystem_UpdateMode::Always{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DefaultEventSystem_UpdateMode  GlobalNamespace::DefaultEventSystem_UpdateMode::IgnoreIfAppNotFocused{static_cast<int32_t>(0x1)};
