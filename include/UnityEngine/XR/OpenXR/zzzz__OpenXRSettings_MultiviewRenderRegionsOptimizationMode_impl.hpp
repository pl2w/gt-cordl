#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_MultiviewRenderRegionsOptimizationMode.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_MultiviewRenderRegionsOptimizationMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::OpenXRSettings_MultiviewRenderRegionsOptimizationMode(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::OpenXRSettings_MultiviewRenderRegionsOptimizationMode()   {
}
constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::None{static_cast<uint8_t>(0x0u)};
constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::FinalPass{static_cast<uint8_t>(0x1u)};
constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode::AllPasses{static_cast<uint8_t>(0x2u)};
