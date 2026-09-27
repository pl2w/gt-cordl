#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FeatureType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FeatureType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_FeatureType::OVRPlugin_FeatureType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_FeatureType::OVRPlugin_FeatureType()   {
}
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::HandTracking{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::KeyboardTracking{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::EyeTracking{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::FaceTracking{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::BodyTracking{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::Passthrough{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::GazeBasedFoveatedRendering{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::Count{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::OVRPlugin_FeatureType  GlobalNamespace::OVRPlugin_FeatureType::EnumSize{static_cast<int32_t>(0x7fffffff)};
