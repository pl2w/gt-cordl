#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField_HardwareModeEnum.hpp"
#include "BoingKit/zzzz__BoingReactorField_HardwareModeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum::BoingReactorField_HardwareModeEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum::BoingReactorField_HardwareModeEnum()   {
}
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum  GlobalNamespace::BoingReactorField_HardwareModeEnum::CPU{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BoingReactorField_HardwareModeEnum  GlobalNamespace::BoingReactorField_HardwareModeEnum::GPU{static_cast<int32_t>(0x1)};
