#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor_MultiAnchorDelegatePair.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_MultiAnchorDelegatePair_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
// Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Delegate", ty: "::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair::OVRSpatialAnchor_MultiAnchorDelegatePair(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  Anchors, ::System::Action_2<::System::Collections::Generic::ICollection_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>*  Delegate) noexcept  {
this->Anchors = Anchors;
this->Delegate = Delegate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor_MultiAnchorDelegatePair::OVRSpatialAnchor_MultiAnchorDelegatePair()   {
}
