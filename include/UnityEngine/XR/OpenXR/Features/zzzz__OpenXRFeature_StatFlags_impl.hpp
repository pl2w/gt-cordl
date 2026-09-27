#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/OpenXRFeature_StatFlags.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_StatFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OpenXRFeature_StatFlags::OpenXRFeature_StatFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OpenXRFeature_StatFlags::OpenXRFeature_StatFlags()   {
}
constexpr ::GlobalNamespace::OpenXRFeature_StatFlags  GlobalNamespace::OpenXRFeature_StatFlags::StatOptionNone{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OpenXRFeature_StatFlags  GlobalNamespace::OpenXRFeature_StatFlags::ClearOnUpdate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OpenXRFeature_StatFlags  GlobalNamespace::OpenXRFeature_StatFlags::All{static_cast<int32_t>(0x1)};
