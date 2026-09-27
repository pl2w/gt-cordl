#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRManager_ProcessorPerformanceLevel.hpp"
#include "GlobalNamespace/zzzz__OVRManager_ProcessorPerformanceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel::OVRManager_ProcessorPerformanceLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel::OVRManager_ProcessorPerformanceLevel()   {
}
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel  GlobalNamespace::OVRManager_ProcessorPerformanceLevel::PowerSavings{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel  GlobalNamespace::OVRManager_ProcessorPerformanceLevel::SustainedLow{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel  GlobalNamespace::OVRManager_ProcessorPerformanceLevel::SustainedHigh{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRManager_ProcessorPerformanceLevel  GlobalNamespace::OVRManager_ProcessorPerformanceLevel::Boost{static_cast<int32_t>(0x3)};
