#pragma once
// IWYU pragma private; include "UnityEngine/XR/InputTracking_TrackingStateEventType.hpp"
#include "UnityEngine/XR/zzzz__InputTracking_TrackingStateEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputTracking_TrackingStateEventType::InputTracking_TrackingStateEventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputTracking_TrackingStateEventType::InputTracking_TrackingStateEventType()   {
}
constexpr ::GlobalNamespace::InputTracking_TrackingStateEventType  GlobalNamespace::InputTracking_TrackingStateEventType::NodeAdded{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputTracking_TrackingStateEventType  GlobalNamespace::InputTracking_TrackingStateEventType::NodeRemoved{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputTracking_TrackingStateEventType  GlobalNamespace::InputTracking_TrackingStateEventType::TrackingAcquired{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::InputTracking_TrackingStateEventType  GlobalNamespace::InputTracking_TrackingStateEventType::TrackingLost{static_cast<int32_t>(0x3)};
