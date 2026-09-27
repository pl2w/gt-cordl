#pragma once
// IWYU pragma private; include "GlobalNamespace/HeldItemButtonConsumeMode.hpp"
#include "GlobalNamespace/zzzz__HeldItemButtonConsumeMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HeldItemButtonConsumeMode::HeldItemButtonConsumeMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeldItemButtonConsumeMode::HeldItemButtonConsumeMode()   {
}
constexpr ::GlobalNamespace::HeldItemButtonConsumeMode  GlobalNamespace::HeldItemButtonConsumeMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::HeldItemButtonConsumeMode  GlobalNamespace::HeldItemButtonConsumeMode::Destroy{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::HeldItemButtonConsumeMode  GlobalNamespace::HeldItemButtonConsumeMode::Disable{static_cast<int32_t>(0x2)};
