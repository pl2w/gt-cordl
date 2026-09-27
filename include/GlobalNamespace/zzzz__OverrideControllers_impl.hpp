#pragma once
// IWYU pragma private; include "GlobalNamespace/OverrideControllers.hpp"
#include "GlobalNamespace/zzzz__OverrideControllers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OverrideControllers::OverrideControllers(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OverrideControllers::OverrideControllers()   {
}
constexpr ::GlobalNamespace::OverrideControllers  GlobalNamespace::OverrideControllers::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OverrideControllers  GlobalNamespace::OverrideControllers::LeftController{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OverrideControllers  GlobalNamespace::OverrideControllers::RightController{static_cast<int32_t>(0x2)};
