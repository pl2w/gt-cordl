#pragma once
// IWYU pragma private; include "Fusion/Statistics/RenderSimStats.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Statistics::RenderSimStats::RenderSimStats(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::RenderSimStats::RenderSimStats()   {
}
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InPackets{static_cast<int32_t>(0x1)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::OutPackets{static_cast<int32_t>(0x2)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::RTT{static_cast<int32_t>(0x4)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InBandwidth{static_cast<int32_t>(0x8)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::OutBandwidth{static_cast<int32_t>(0x10)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::Resimulations{static_cast<int32_t>(0x20)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::ForwardTicks{static_cast<int32_t>(0x40)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InputReceiveDelta{static_cast<int32_t>(0x80)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::TimeResets{static_cast<int32_t>(0x100)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::StateReceiveDelta{static_cast<int32_t>(0x200)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::SimulationTimeOffset{static_cast<int32_t>(0x400)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::SimulationSpeed{static_cast<int32_t>(0x800)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InterpolationOffset{static_cast<int32_t>(0x1000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InterpolationSpeed{static_cast<int32_t>(0x2000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InputInBandwidth{static_cast<int32_t>(0x4000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InputOutBandwidth{static_cast<int32_t>(0x8000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::AverageInPacketSize{static_cast<int32_t>(0x10000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::AverageOutPacketSize{static_cast<int32_t>(0x20000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::InObjectUpdates{static_cast<int32_t>(0x40000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::OutObjectUpdates{static_cast<int32_t>(0x80000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::ObjectsAllocatedMemoryInUse{static_cast<int32_t>(0x100000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::GeneralAllocatedMemoryInUse{static_cast<int32_t>(0x200000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::ObjectsAllocatedMemoryFree{static_cast<int32_t>(0x400000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::GeneralAllocatedMemoryFree{static_cast<int32_t>(0x800000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::WordsWrittenCount{static_cast<int32_t>(0x1000000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::WordsWrittenSize{static_cast<int32_t>(0x2000000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::WordsReadCount{static_cast<int32_t>(0x4000000)};
constexpr ::Fusion::Statistics::RenderSimStats  Fusion::Statistics::RenderSimStats::WordsReadSize{static_cast<int32_t>(0x8000000)};
