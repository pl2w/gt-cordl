#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings_DepthSubmissionMode.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_DepthSubmissionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode::OpenXRSettings_DepthSubmissionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode::OpenXRSettings_DepthSubmissionMode()   {
}
constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  GlobalNamespace::OpenXRSettings_DepthSubmissionMode::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  GlobalNamespace::OpenXRSettings_DepthSubmissionMode::Depth16Bit{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  GlobalNamespace::OpenXRSettings_DepthSubmissionMode::Depth24Bit{static_cast<int32_t>(0x2)};
