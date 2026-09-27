#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardInputInfo.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardInputSource_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardInputStateFlags_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardInputInfo_def.hpp"
// Ctor Parameters [CppParam { name: "inputSource", ty: "::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputState", ty: "::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputTrackingOriginType", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo::OVRPlugin_VirtualKeyboardInputInfo(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource  inputSource, ::GlobalNamespace::OVRPlugin_Posef  inputPose, ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags  inputState, ::GlobalNamespace::OVRPlugin_TrackingOrigin  inputTrackingOriginType) noexcept  {
this->inputSource = inputSource;
this->inputPose = inputPose;
this->inputState = inputState;
this->inputTrackingOriginType = inputTrackingOriginType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo::OVRPlugin_VirtualKeyboardInputInfo()   {
}
