#pragma once
// IWYU pragma private; include "Fusion/TraceChannels.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::TraceChannels::TraceChannels(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::TraceChannels::TraceChannels()   {
}
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Global{static_cast<int32_t>(0x1)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Stun{static_cast<int32_t>(0x2)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Object{static_cast<int32_t>(0x4)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Network{static_cast<int32_t>(0x8)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Prefab{static_cast<int32_t>(0x10)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::SceneInfo{static_cast<int32_t>(0x20)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::SceneManager{static_cast<int32_t>(0x40)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::SimulationMessage{static_cast<int32_t>(0x80)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::HostMigration{static_cast<int32_t>(0x100)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Encryption{static_cast<int32_t>(0x200)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::DummyTraffic{static_cast<int32_t>(0x400)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Realtime{static_cast<int32_t>(0x800)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::MemoryTrack{static_cast<int32_t>(0x1000)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Snapshots{static_cast<int32_t>(0x2000)};
constexpr ::Fusion::TraceChannels  Fusion::TraceChannels::Time{static_cast<int32_t>(0x4000)};
