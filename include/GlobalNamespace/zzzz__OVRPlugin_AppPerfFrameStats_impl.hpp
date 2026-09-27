#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_AppPerfFrameStats.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_AppPerfFrameStats_def.hpp"
// Ctor Parameters [CppParam { name: "HmdVsyncIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AppFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AppDroppedFrameCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AppMotionToPhotonLatency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AppQueueAheadTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AppCpuElapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AppGpuElapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompositorFrameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompositorDroppedFrameCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompositorLatency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompositorCpuElapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompositorGpuElapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompositorCpuStartToGpuEndElapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CompositorGpuEndToVsyncElapsedTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_AppPerfFrameStats::OVRPlugin_AppPerfFrameStats(int32_t  HmdVsyncIndex, int32_t  AppFrameIndex, int32_t  AppDroppedFrameCount, float_t  AppMotionToPhotonLatency, float_t  AppQueueAheadTime, float_t  AppCpuElapsedTime, float_t  AppGpuElapsedTime, int32_t  CompositorFrameIndex, int32_t  CompositorDroppedFrameCount, float_t  CompositorLatency, float_t  CompositorCpuElapsedTime, float_t  CompositorGpuElapsedTime, float_t  CompositorCpuStartToGpuEndElapsedTime, float_t  CompositorGpuEndToVsyncElapsedTime) noexcept  {
this->HmdVsyncIndex = HmdVsyncIndex;
this->AppFrameIndex = AppFrameIndex;
this->AppDroppedFrameCount = AppDroppedFrameCount;
this->AppMotionToPhotonLatency = AppMotionToPhotonLatency;
this->AppQueueAheadTime = AppQueueAheadTime;
this->AppCpuElapsedTime = AppCpuElapsedTime;
this->AppGpuElapsedTime = AppGpuElapsedTime;
this->CompositorFrameIndex = CompositorFrameIndex;
this->CompositorDroppedFrameCount = CompositorDroppedFrameCount;
this->CompositorLatency = CompositorLatency;
this->CompositorCpuElapsedTime = CompositorCpuElapsedTime;
this->CompositorGpuElapsedTime = CompositorGpuElapsedTime;
this->CompositorCpuStartToGpuEndElapsedTime = CompositorCpuStartToGpuEndElapsedTime;
this->CompositorGpuEndToVsyncElapsedTime = CompositorGpuEndToVsyncElapsedTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_AppPerfFrameStats::OVRPlugin_AppPerfFrameStats()   {
}
