#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/XROrigin_TrackingOriginMode.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_TrackingOriginMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode::XROrigin_TrackingOriginMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode::XROrigin_TrackingOriginMode()   {
}
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode  GlobalNamespace::XROrigin_TrackingOriginMode::NotSpecified{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode  GlobalNamespace::XROrigin_TrackingOriginMode::Device{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode  GlobalNamespace::XROrigin_TrackingOriginMode::Floor{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::XROrigin_TrackingOriginMode  GlobalNamespace::XROrigin_TrackingOriginMode::Unbounded{static_cast<int32_t>(0x3)};
