#pragma once
// IWYU pragma private; include "GlobalNamespace/HeldItemButtonMode.hpp"
#include "GlobalNamespace/zzzz__HeldItemButtonMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HeldItemButtonMode::HeldItemButtonMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeldItemButtonMode::HeldItemButtonMode()   {
}
constexpr ::GlobalNamespace::HeldItemButtonMode  GlobalNamespace::HeldItemButtonMode::OneShot{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HeldItemButtonMode  GlobalNamespace::HeldItemButtonMode::ResetAfterDelay{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HeldItemButtonMode  GlobalNamespace::HeldItemButtonMode::Toggle{static_cast<int32_t>(0x2)};
