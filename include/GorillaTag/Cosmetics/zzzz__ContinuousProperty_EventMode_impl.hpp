#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ContinuousProperty_EventMode.hpp"
#include "GorillaTag/Cosmetics/zzzz__ContinuousProperty_EventMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ContinuousProperty_EventMode::ContinuousProperty_EventMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ContinuousProperty_EventMode::ContinuousProperty_EventMode()   {
}
constexpr ::GlobalNamespace::ContinuousProperty_EventMode  GlobalNamespace::ContinuousProperty_EventMode::Passthrough{static_cast<int32_t>(0x400000)};
constexpr ::GlobalNamespace::ContinuousProperty_EventMode  GlobalNamespace::ContinuousProperty_EventMode::Frequency{static_cast<int32_t>(0x800000)};
constexpr ::GlobalNamespace::ContinuousProperty_EventMode  GlobalNamespace::ContinuousProperty_EventMode::AveragePerSecond{static_cast<int32_t>(0xc00000)};
