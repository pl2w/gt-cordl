#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_StartColocationSessionDiscoveryCompleteData.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_StartColocationSessionDiscoveryCompleteData_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData::OVRDeserialize_StartColocationSessionDiscoveryCompleteData(::GlobalNamespace::OVRPlugin_EventType  EventType, uint64_t  RequestId, ::GlobalNamespace::OVRPlugin_Result  Result) noexcept  {
this->EventType = EventType;
this->RequestId = RequestId;
this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData::OVRDeserialize_StartColocationSessionDiscoveryCompleteData()   {
}
