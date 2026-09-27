#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewRotationModel_InterpolateOptions.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewRotationModel_InterpolateOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions::PhotonTransformViewRotationModel_InterpolateOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions::PhotonTransformViewRotationModel_InterpolateOptions()   {
}
constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions::RotateTowards{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewRotationModel_InterpolateOptions::Lerp{static_cast<int32_t>(0x2)};
