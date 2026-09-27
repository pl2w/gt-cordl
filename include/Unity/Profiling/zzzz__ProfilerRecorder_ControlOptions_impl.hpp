#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerRecorder_ControlOptions.hpp"
#include "Unity/Profiling/zzzz__ProfilerRecorder_ControlOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions::ProfilerRecorder_ControlOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions::ProfilerRecorder_ControlOptions()   {
}
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions  GlobalNamespace::ProfilerRecorder_ControlOptions::Start{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions  GlobalNamespace::ProfilerRecorder_ControlOptions::Stop{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions  GlobalNamespace::ProfilerRecorder_ControlOptions::Reset{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions  GlobalNamespace::ProfilerRecorder_ControlOptions::Release{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions  GlobalNamespace::ProfilerRecorder_ControlOptions::SetFilterToCurrentThread{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::ProfilerRecorder_ControlOptions  GlobalNamespace::ProfilerRecorder_ControlOptions::SetToCollectFromAllThreads{static_cast<int32_t>(0x6)};
