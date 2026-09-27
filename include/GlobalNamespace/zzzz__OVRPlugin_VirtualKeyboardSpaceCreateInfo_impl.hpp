#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardSpaceCreateInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardLocationType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardSpaceCreateInfo_def.hpp"
// Ctor Parameters [CppParam { name: "locationType", ty: "::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trackingOriginType", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardSpaceCreateInfo::OVRPlugin_VirtualKeyboardSpaceCreateInfo(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType  locationType, ::GlobalNamespace::OVRPlugin_Posef  pose, ::GlobalNamespace::OVRPlugin_TrackingOrigin  trackingOriginType) noexcept  {
this->locationType = locationType;
this->pose = pose;
this->trackingOriginType = trackingOriginType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardSpaceCreateInfo::OVRPlugin_VirtualKeyboardSpaceCreateInfo()   {
}
