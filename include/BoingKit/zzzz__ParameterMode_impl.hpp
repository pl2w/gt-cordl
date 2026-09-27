#pragma once
// IWYU pragma private; include "BoingKit/ParameterMode.hpp"
#include "BoingKit/zzzz__ParameterMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::ParameterMode::ParameterMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BoingKit::ParameterMode::ParameterMode()   {
}
constexpr ::BoingKit::ParameterMode  BoingKit::ParameterMode::Exponential{static_cast<int32_t>(0x0)};
constexpr ::BoingKit::ParameterMode  BoingKit::ParameterMode::OscillationByHalfLife{static_cast<int32_t>(0x1)};
constexpr ::BoingKit::ParameterMode  BoingKit::ParameterMode::OscillationByDampingRatio{static_cast<int32_t>(0x2)};
