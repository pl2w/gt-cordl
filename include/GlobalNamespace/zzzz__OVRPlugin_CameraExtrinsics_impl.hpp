#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraExtrinsics.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_CameraStatus_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Node_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_CameraExtrinsics_def.hpp"
// Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LastChangedTimeSeconds", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CameraStatusData", ty: "::GlobalNamespace::OVRPlugin_CameraStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "AttachedToNode", ty: "::GlobalNamespace::OVRPlugin_Node", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RelativePose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_CameraExtrinsics::OVRPlugin_CameraExtrinsics(::GlobalNamespace::OVRPlugin_Bool  IsValid, double_t  LastChangedTimeSeconds, ::GlobalNamespace::OVRPlugin_CameraStatus  CameraStatusData, ::GlobalNamespace::OVRPlugin_Node  AttachedToNode, ::GlobalNamespace::OVRPlugin_Posef  RelativePose) noexcept  {
this->IsValid = IsValid;
this->LastChangedTimeSeconds = LastChangedTimeSeconds;
this->CameraStatusData = CameraStatusData;
this->AttachedToNode = AttachedToNode;
this->RelativePose = RelativePose;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_CameraExtrinsics::OVRPlugin_CameraExtrinsics()   {
}
