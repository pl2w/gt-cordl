#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriverDataDescription_PoseData.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriverDataDescription_PoseData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_TrackedPose_def.hpp"
// Ctor Parameters [CppParam { name: "PoseNames", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Poses", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriver_TrackedPose>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData::TrackedPoseDriverDataDescription_PoseData(::System::Collections::Generic::List_1<::StringW>*  PoseNames, ::System::Collections::Generic::List_1<::GlobalNamespace::TrackedPoseDriver_TrackedPose>*  Poses) noexcept  {
this->PoseNames = PoseNames;
this->Poses = Poses;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrackedPoseDriverDataDescription_PoseData::TrackedPoseDriverDataDescription_PoseData()   {
}
