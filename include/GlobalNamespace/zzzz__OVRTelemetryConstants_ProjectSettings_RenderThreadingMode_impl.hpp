#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryConstants_ProjectSettings_RenderThreadingMode.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryConstants_ProjectSettings_RenderThreadingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode()   {
}
constexpr ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode  GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode::Unknown{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode  GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode::Multithreaded{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode  GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode::LegacyGraphicsJobs{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode  GlobalNamespace::ProjectSettings_OVRTelemetryConstants_RenderThreadingMode::NativeGraphicsJobs{static_cast<int32_t>(0x3)};
