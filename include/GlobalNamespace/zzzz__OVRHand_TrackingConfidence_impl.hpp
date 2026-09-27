#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRHand_TrackingConfidence.hpp"
#include "GlobalNamespace/zzzz__OVRHand_TrackingConfidence_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence::OVRHand_TrackingConfidence(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence::OVRHand_TrackingConfidence()   {
}
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence  GlobalNamespace::OVRHand_TrackingConfidence::Low{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRHand_TrackingConfidence  GlobalNamespace::OVRHand_TrackingConfidence::High{static_cast<int32_t>(0x3f800000)};
