#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/MRUKNativeFuncs_MrukEventListener.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_MrukEventListener_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKNativeFuncs_def.hpp"
// Ctor Parameters [CppParam { name: "onPreRoomAnchorAdded", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onRoomAnchorAdded", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onRoomAnchorUpdated", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onRoomAnchorRemoved", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onSceneAnchorAdded", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onSceneAnchorUpdated", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onSceneAnchorRemoved", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onDiscoveryFinished", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onEnvironmentRaycasterCreated", ty: "::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "userContext", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEventListener::MRUKNativeFuncs_MrukEventListener(::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnPreRoomAnchorAdded*  onPreRoomAnchorAdded, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorAdded*  onRoomAnchorAdded, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorUpdated*  onRoomAnchorUpdated, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnRoomAnchorRemoved*  onRoomAnchorRemoved, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorAdded*  onSceneAnchorAdded, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorUpdated*  onSceneAnchorUpdated, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnSceneAnchorRemoved*  onSceneAnchorRemoved, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnDiscoveryFinished*  onDiscoveryFinished, ::Meta::XR::MRUtilityKit::MRUKNativeFuncs_MrukOnEnvironmentRaycasterCreated*  onEnvironmentRaycasterCreated, ::System::IntPtr  userContext) noexcept  {
this->onPreRoomAnchorAdded = onPreRoomAnchorAdded;
this->onRoomAnchorAdded = onRoomAnchorAdded;
this->onRoomAnchorUpdated = onRoomAnchorUpdated;
this->onRoomAnchorRemoved = onRoomAnchorRemoved;
this->onSceneAnchorAdded = onSceneAnchorAdded;
this->onSceneAnchorUpdated = onSceneAnchorUpdated;
this->onSceneAnchorRemoved = onSceneAnchorRemoved;
this->onDiscoveryFinished = onDiscoveryFinished;
this->onEnvironmentRaycasterCreated = onEnvironmentRaycasterCreated;
this->userContext = userContext;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MRUKNativeFuncs_MrukEventListener::MRUKNativeFuncs_MrukEventListener()   {
}
