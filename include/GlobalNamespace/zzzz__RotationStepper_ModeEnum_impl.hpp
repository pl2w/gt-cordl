#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationStepper_ModeEnum.hpp"
#include "GlobalNamespace/zzzz__RotationStepper_ModeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RotationStepper_ModeEnum::RotationStepper_ModeEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationStepper_ModeEnum::RotationStepper_ModeEnum()   {
}
constexpr ::GlobalNamespace::RotationStepper_ModeEnum  GlobalNamespace::RotationStepper_ModeEnum::Fixed{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RotationStepper_ModeEnum  GlobalNamespace::RotationStepper_ModeEnum::Random{static_cast<int32_t>(0x1)};
