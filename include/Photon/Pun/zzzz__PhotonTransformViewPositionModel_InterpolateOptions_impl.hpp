#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewPositionModel_InterpolateOptions.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_InterpolateOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions::PhotonTransformViewPositionModel_InterpolateOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions::PhotonTransformViewPositionModel_InterpolateOptions()   {
}
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions::FixedSpeed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions::EstimatedSpeed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions::SynchronizeValues{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_InterpolateOptions::Lerp{static_cast<int32_t>(0x4)};
