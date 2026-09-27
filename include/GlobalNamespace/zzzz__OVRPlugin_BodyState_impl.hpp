#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointLocation_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyTrackingCalibrationState_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyTrackingFidelity2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointLocation_def.hpp"
// Ctor Parameters [CppParam { name: "JointLocations", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_BodyJointLocation>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SkeletonChangedCount", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "JointSet", ty: "::GlobalNamespace::OVRPlugin_BodyJointSet", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "CalibrationStatus", ty: "::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Fidelity", ty: "::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_BodyState::OVRPlugin_BodyState(::ArrayW<::GlobalNamespace::OVRPlugin_BodyJointLocation>  JointLocations, float_t  Confidence, uint32_t  SkeletonChangedCount, double_t  Time, ::GlobalNamespace::OVRPlugin_BodyJointSet  JointSet, ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState  CalibrationStatus, ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  Fidelity) noexcept  {
this->JointLocations = JointLocations;
this->Confidence = Confidence;
this->SkeletonChangedCount = SkeletonChangedCount;
this->Time = Time;
this->JointSet = JointSet;
this->CalibrationStatus = CalibrationStatus;
this->Fidelity = Fidelity;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_BodyState::OVRPlugin_BodyState()   {
}
