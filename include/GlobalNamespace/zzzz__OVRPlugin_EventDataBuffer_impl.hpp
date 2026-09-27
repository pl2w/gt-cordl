#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_EventDataBuffer.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventDataBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "EventData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_EventDataBuffer::OVRPlugin_EventDataBuffer(::GlobalNamespace::OVRPlugin_EventType  EventType, ::ArrayW<uint8_t>  EventData) noexcept  {
this->EventType = EventType;
this->EventData = EventData;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_EventDataBuffer::OVRPlugin_EventDataBuffer()   {
}
