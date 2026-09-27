#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_AppPerfStats.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_AppPerfFrameStats_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_AppPerfStats_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_AppPerfFrameStats_def.hpp"
// Ctor Parameters [CppParam { name: "FrameStats", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_AppPerfFrameStats>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FrameStatsCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AnyFrameStatsDropped", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AdaptiveGpuPerformanceScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_AppPerfStats::OVRPlugin_AppPerfStats(::ArrayW<::GlobalNamespace::OVRPlugin_AppPerfFrameStats>  FrameStats, int32_t  FrameStatsCount, ::GlobalNamespace::OVRPlugin_Bool  AnyFrameStatsDropped, float_t  AdaptiveGpuPerformanceScale) noexcept  {
this->FrameStats = FrameStats;
this->FrameStatsCount = FrameStatsCount;
this->AnyFrameStatsDropped = AnyFrameStatsDropped;
this->AdaptiveGpuPerformanceScale = AdaptiveGpuPerformanceScale;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_AppPerfStats::OVRPlugin_AppPerfStats()   {
}
