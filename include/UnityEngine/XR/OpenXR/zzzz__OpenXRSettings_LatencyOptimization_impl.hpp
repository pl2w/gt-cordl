#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_LatencyOptimization.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_LatencyOptimization_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization::OpenXRSettings_LatencyOptimization(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization::OpenXRSettings_LatencyOptimization()   {
}
constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization  GlobalNamespace::OpenXRSettings_LatencyOptimization::PrioritizeRendering{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization  GlobalNamespace::OpenXRSettings_LatencyOptimization::PrioritizeInputPolling{static_cast<int32_t>(0x1)};
