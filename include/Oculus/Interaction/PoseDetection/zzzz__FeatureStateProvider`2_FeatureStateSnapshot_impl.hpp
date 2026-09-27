#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureStateProvider`2_FeatureStateSnapshot.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateProvider`2_FeatureStateSnapshot_def.hpp"
// Ctor Parameters [CppParam { name: "HasCurrentState", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "State", ty: "TFeatureState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DesiredState", ty: "TFeatureState", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LastUpdatedFrameId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DesiredStateEntryTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TFeature,typename TFeatureState>
constexpr ::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>::FeatureStateProvider_2_FeatureStateSnapshot(bool  HasCurrentState, TFeatureState  State, TFeatureState  DesiredState, int32_t  LastUpdatedFrameId, double_t  DesiredStateEntryTime) noexcept  {
this->HasCurrentState = HasCurrentState;
this->State = State;
this->DesiredState = DesiredState;
this->LastUpdatedFrameId = LastUpdatedFrameId;
this->DesiredStateEntryTime = DesiredStateEntryTime;
}
// Ctor Parameters []
template<typename TFeature,typename TFeatureState>
constexpr ::GlobalNamespace::FeatureStateProvider_2_FeatureStateSnapshot<TFeature,TFeatureState>::FeatureStateProvider_2_FeatureStateSnapshot()   {
}
