#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandFingerPinch_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandStatus_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingConfidence_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingConfidence_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
// Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::OVRPlugin_HandStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RootPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BoneRotations", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BonePositions", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Pinches", ty: "::GlobalNamespace::OVRPlugin_HandFingerPinch", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PinchStrength", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PointerPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HandScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "HandConfidence", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FingerConfidences", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_TrackingConfidence>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "RequestedTimeStamp", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleTimeStamp", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_HandState::OVRPlugin_HandState(::GlobalNamespace::OVRPlugin_HandStatus  Status, ::GlobalNamespace::OVRPlugin_Posef  RootPose, ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  BoneRotations, ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  BonePositions, ::GlobalNamespace::OVRPlugin_HandFingerPinch  Pinches, ::ArrayW<float_t>  PinchStrength, ::GlobalNamespace::OVRPlugin_Posef  PointerPose, float_t  HandScale, ::GlobalNamespace::OVRPlugin_TrackingConfidence  HandConfidence, ::ArrayW<::GlobalNamespace::OVRPlugin_TrackingConfidence>  FingerConfidences, double_t  RequestedTimeStamp, double_t  SampleTimeStamp) noexcept  {
this->Status = Status;
this->RootPose = RootPose;
this->BoneRotations = BoneRotations;
this->BonePositions = BonePositions;
this->Pinches = Pinches;
this->PinchStrength = PinchStrength;
this->PointerPose = PointerPose;
this->HandScale = HandScale;
this->HandConfidence = HandConfidence;
this->FingerConfidences = FingerConfidences;
this->RequestedTimeStamp = RequestedTimeStamp;
this->SampleTimeStamp = SampleTimeStamp;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_HandState::OVRPlugin_HandState()   {
}
