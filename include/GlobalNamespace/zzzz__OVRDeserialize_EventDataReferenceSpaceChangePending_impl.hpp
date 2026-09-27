#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_EventDataReferenceSpaceChangePending.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EventType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_EventDataReferenceSpaceChangePending_def.hpp"
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReferenceSpaceType", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ChangeTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PoseValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PoseInPreviousSpace", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending::OVRDeserialize_EventDataReferenceSpaceChangePending(::GlobalNamespace::OVRPlugin_EventType  EventType, ::GlobalNamespace::OVRPlugin_TrackingOrigin  ReferenceSpaceType, double_t  ChangeTime, ::GlobalNamespace::OVRPlugin_Bool  PoseValid, ::GlobalNamespace::OVRPlugin_Posef  PoseInPreviousSpace) noexcept  {
this->EventType = EventType;
this->ReferenceSpaceType = ReferenceSpaceType;
this->ChangeTime = ChangeTime;
this->PoseValid = PoseValid;
this->PoseInPreviousSpace = PoseInPreviousSpace;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_EventDataReferenceSpaceChangePending::OVRDeserialize_EventDataReferenceSpaceChangePending()   {
}
