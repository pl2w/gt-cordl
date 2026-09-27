#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUK_SceneTrackingSettings.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_SceneTrackingSettings_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKRoom_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
// Ctor Parameters [CppParam { name: "UnTrackedRooms", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UnTrackedAnchors", ty: "::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings::MRUK_SceneTrackingSettings(::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKRoom>>*  UnTrackedRooms, ::System::Collections::Generic::HashSet_1<::UnityW<::Meta::XR::MRUtilityKit::MRUKAnchor>>*  UnTrackedAnchors) noexcept  {
this->UnTrackedRooms = UnTrackedRooms;
this->UnTrackedAnchors = UnTrackedAnchors;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUK_SceneTrackingSettings::MRUK_SceneTrackingSettings()   {
}
