#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceState.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceExpressionStatus_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceTrackingDataSource_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceState_def.hpp"
// Ctor Parameters [CppParam { name: "ExpressionWeights", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ExpressionWeightConfidences", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Status", ty: "::GlobalNamespace::OVRPlugin_FaceExpressionStatus", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DataSource", ty: "::GlobalNamespace::OVRPlugin_FaceTrackingDataSource", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_FaceState::OVRPlugin_FaceState(::ArrayW<float_t>  ExpressionWeights, ::ArrayW<float_t>  ExpressionWeightConfidences, ::GlobalNamespace::OVRPlugin_FaceExpressionStatus  Status, ::GlobalNamespace::OVRPlugin_FaceTrackingDataSource  DataSource, double_t  Time) noexcept  {
this->ExpressionWeights = ExpressionWeights;
this->ExpressionWeightConfidences = ExpressionWeightConfidences;
this->Status = Status;
this->DataSource = DataSource;
this->Time = Time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_FaceState::OVRPlugin_FaceState()   {
}
