#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraIntrinsics.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Sizei_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_CameraIntrinsics_def.hpp"
// Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LastChangedTimeSeconds", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FOVPort", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VirtualNearPlaneDistanceMeters", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "VirtualFarPlaneDistanceMeters", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ImageSensorPixelResolution", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_CameraIntrinsics::OVRPlugin_CameraIntrinsics(::GlobalNamespace::OVRPlugin_Bool  IsValid, double_t  LastChangedTimeSeconds, ::GlobalNamespace::OVRPlugin_Fovf  FOVPort, float_t  VirtualNearPlaneDistanceMeters, float_t  VirtualFarPlaneDistanceMeters, ::GlobalNamespace::OVRPlugin_Sizei  ImageSensorPixelResolution) noexcept  {
this->IsValid = IsValid;
this->LastChangedTimeSeconds = LastChangedTimeSeconds;
this->FOVPort = FOVPort;
this->VirtualNearPlaneDistanceMeters = VirtualNearPlaneDistanceMeters;
this->VirtualFarPlaneDistanceMeters = VirtualFarPlaneDistanceMeters;
this->ImageSensorPixelResolution = ImageSensorPixelResolution;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_CameraIntrinsics::OVRPlugin_CameraIntrinsics()   {
}
