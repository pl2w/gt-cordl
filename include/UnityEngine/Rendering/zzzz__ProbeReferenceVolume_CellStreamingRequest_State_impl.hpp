#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume_CellStreamingRequest_State.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeReferenceVolume_CellStreamingRequest_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State::CellStreamingRequest_ProbeReferenceVolume_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State::CellStreamingRequest_ProbeReferenceVolume_State()   {
}
constexpr ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State  GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State::Pending{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State  GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State::Active{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State  GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State::Canceled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State  GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State::Invalid{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State  GlobalNamespace::CellStreamingRequest_ProbeReferenceVolume_State::Complete{static_cast<int32_t>(0x4)};
