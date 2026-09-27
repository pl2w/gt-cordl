#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IndirectBufferContext_BufferState.hpp"
#include "UnityEngine/Rendering/zzzz__IndirectBufferContext_BufferState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::IndirectBufferContext_BufferState::IndirectBufferContext_BufferState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::IndirectBufferContext_BufferState::IndirectBufferContext_BufferState()   {
}
constexpr ::GlobalNamespace::IndirectBufferContext_BufferState  GlobalNamespace::IndirectBufferContext_BufferState::Pending{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::IndirectBufferContext_BufferState  GlobalNamespace::IndirectBufferContext_BufferState::Zeroed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::IndirectBufferContext_BufferState  GlobalNamespace::IndirectBufferContext_BufferState::NoOcclusionTest{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::IndirectBufferContext_BufferState  GlobalNamespace::IndirectBufferContext_BufferState::AllInstancesOcclusionTested{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::IndirectBufferContext_BufferState  GlobalNamespace::IndirectBufferContext_BufferState::OccludedInstancesReTested{static_cast<int32_t>(0x4)};
