#pragma once
// IWYU pragma private; include "GlobalNamespace/GRMeterEnergy_MeterType.hpp"
#include "GlobalNamespace/zzzz__GRMeterEnergy_MeterType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRMeterEnergy_MeterType::GRMeterEnergy_MeterType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRMeterEnergy_MeterType::GRMeterEnergy_MeterType()   {
}
constexpr ::GlobalNamespace::GRMeterEnergy_MeterType  GlobalNamespace::GRMeterEnergy_MeterType::Linear{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRMeterEnergy_MeterType  GlobalNamespace::GRMeterEnergy_MeterType::Radial{static_cast<int32_t>(0x1)};
