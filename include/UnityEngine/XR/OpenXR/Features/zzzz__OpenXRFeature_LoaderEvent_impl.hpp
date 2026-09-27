#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRFeature_LoaderEvent.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_LoaderEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRFeature_LoaderEvent::OpenXRFeature_LoaderEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRFeature_LoaderEvent::OpenXRFeature_LoaderEvent()   {
}
constexpr ::GlobalNamespace::OpenXRFeature_LoaderEvent  GlobalNamespace::OpenXRFeature_LoaderEvent::SubsystemCreate{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OpenXRFeature_LoaderEvent  GlobalNamespace::OpenXRFeature_LoaderEvent::SubsystemDestroy{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OpenXRFeature_LoaderEvent  GlobalNamespace::OpenXRFeature_LoaderEvent::SubsystemStart{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OpenXRFeature_LoaderEvent  GlobalNamespace::OpenXRFeature_LoaderEvent::SubsystemStop{static_cast<int32_t>(0x3)};
