#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpaceMarkerPayloadType.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceMarkerPayloadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType::OVRPlugin_SpaceMarkerPayloadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType::OVRPlugin_SpaceMarkerPayloadType()   {
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType  GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType::InvalidQRCode{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType  GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType::StringQRCode{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType  GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType::BinaryQRCode{static_cast<int32_t>(0x3)};
