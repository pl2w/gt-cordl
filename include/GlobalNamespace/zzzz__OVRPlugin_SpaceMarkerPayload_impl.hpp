#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceMarkerPayload.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceMarkerPayloadType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceMarkerPayload_def.hpp"
// Ctor Parameters [CppParam { name: "BufferCapacityInput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BufferCountOutput", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Buffer", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PayloadType", ty: "::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceMarkerPayload::OVRPlugin_SpaceMarkerPayload(uint32_t  BufferCapacityInput, uint32_t  BufferCountOutput, uint8_t*  Buffer, ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType  PayloadType) noexcept  {
this->BufferCapacityInput = BufferCapacityInput;
this->BufferCountOutput = BufferCountOutput;
this->Buffer = Buffer;
this->PayloadType = PayloadType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceMarkerPayload::OVRPlugin_SpaceMarkerPayload()   {
}
