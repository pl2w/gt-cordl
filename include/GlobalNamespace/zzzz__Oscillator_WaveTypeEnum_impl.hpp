#pragma once
// IWYU pragma private; include "GlobalNamespace/Oscillator_WaveTypeEnum.hpp"
#include "GlobalNamespace/zzzz__Oscillator_WaveTypeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum::Oscillator_WaveTypeEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum::Oscillator_WaveTypeEnum()   {
}
constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum  GlobalNamespace::Oscillator_WaveTypeEnum::Sine{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum  GlobalNamespace::Oscillator_WaveTypeEnum::Square{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Oscillator_WaveTypeEnum  GlobalNamespace::Oscillator_WaveTypeEnum::Triangle{static_cast<int32_t>(0x2)};
