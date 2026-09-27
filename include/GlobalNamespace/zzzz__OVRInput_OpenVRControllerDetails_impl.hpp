#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_OpenVRControllerDetails.hpp"
#include "GlobalNamespace/zzzz__OVRInput_OpenVRController_impl.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_OpenVRControllerDetails_def.hpp"
// Ctor Parameters [CppParam { name: "state", ty: "::OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "controllerType", ty: "::GlobalNamespace::OVRInput_OpenVRController", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "localOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRInput_OpenVRControllerDetails::OVRInput_OpenVRControllerDetails(::OVR::OpenVR::VRControllerState_t  state, ::GlobalNamespace::OVRInput_OpenVRController  controllerType, uint32_t  deviceID, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localOrientation) noexcept  {
this->state = state;
this->controllerType = controllerType;
this->deviceID = deviceID;
this->localPosition = localPosition;
this->localOrientation = localOrientation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput_OpenVRControllerDetails::OVRInput_OpenVRControllerDetails()   {
}
