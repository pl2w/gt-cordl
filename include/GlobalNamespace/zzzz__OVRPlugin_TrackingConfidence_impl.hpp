#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_TrackingConfidence.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingConfidence_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_TrackingConfidence::OVRPlugin_TrackingConfidence(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_TrackingConfidence::OVRPlugin_TrackingConfidence()   {
}
constexpr ::GlobalNamespace::OVRPlugin_TrackingConfidence  GlobalNamespace::OVRPlugin_TrackingConfidence::Low{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_TrackingConfidence  GlobalNamespace::OVRPlugin_TrackingConfidence::High{static_cast<int32_t>(0x3f800000)};
