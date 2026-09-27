#pragma once
// IWYU pragma private; include "Unity/Cinemachine/LensSettings_PhysicalSettings.hpp"
#include "UnityEngine/zzzz__Camera_GateFitMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_PhysicalSettings_def.hpp"
// Ctor Parameters [CppParam { name: "GateFit", ty: "::GlobalNamespace::Camera_GateFitMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SensorSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LensShift", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "FocusDistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Iso", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ShutterSpeed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Aperture", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BladeCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Curvature", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BarrelClipping", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Anamorphism", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LensSettings_PhysicalSettings::LensSettings_PhysicalSettings(::GlobalNamespace::Camera_GateFitMode  GateFit, ::UnityEngine::Vector2  SensorSize, ::UnityEngine::Vector2  LensShift, float_t  FocusDistance, int32_t  Iso, float_t  ShutterSpeed, float_t  Aperture, int32_t  BladeCount, ::UnityEngine::Vector2  Curvature, float_t  BarrelClipping, float_t  Anamorphism) noexcept  {
this->GateFit = GateFit;
this->SensorSize = SensorSize;
this->LensShift = LensShift;
this->FocusDistance = FocusDistance;
this->Iso = Iso;
this->ShutterSpeed = ShutterSpeed;
this->Aperture = Aperture;
this->BladeCount = BladeCount;
this->Curvature = Curvature;
this->BarrelClipping = BarrelClipping;
this->Anamorphism = Anamorphism;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LensSettings_PhysicalSettings::LensSettings_PhysicalSettings()   {
}
