#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewScaleModel_InterpolateOptions.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewScaleModel_InterpolateOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions::PhotonTransformViewScaleModel_InterpolateOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions::PhotonTransformViewScaleModel_InterpolateOptions()   {
}
constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions::MoveTowards{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewScaleModel_InterpolateOptions::Lerp{static_cast<int32_t>(0x2)};
