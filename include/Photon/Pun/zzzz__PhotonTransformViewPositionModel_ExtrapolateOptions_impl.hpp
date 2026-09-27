#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonTransformViewPositionModel_ExtrapolateOptions.hpp"
#include "Photon/Pun/zzzz__PhotonTransformViewPositionModel_ExtrapolateOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions::PhotonTransformViewPositionModel_ExtrapolateOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions::PhotonTransformViewPositionModel_ExtrapolateOptions()   {
}
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions::SynchronizeValues{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions::EstimateSpeedAndTurn{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions  GlobalNamespace::PhotonTransformViewPositionModel_ExtrapolateOptions::FixedSpeed{static_cast<int32_t>(0x3)};
