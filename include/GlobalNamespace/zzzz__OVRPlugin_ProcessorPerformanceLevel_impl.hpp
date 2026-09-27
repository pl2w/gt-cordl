#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_ProcessorPerformanceLevel.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ProcessorPerformanceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel::OVRPlugin_ProcessorPerformanceLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel::OVRPlugin_ProcessorPerformanceLevel()   {
}
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel::PowerSavings{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel::SustainedLow{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel::SustainedHigh{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel::Boost{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel::EnumSize{static_cast<int32_t>(0x7fffffff)};
