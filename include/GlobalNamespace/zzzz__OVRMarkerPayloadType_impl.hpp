#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMarkerPayloadType.hpp"
#include "GlobalNamespace/zzzz__OVRMarkerPayloadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRMarkerPayloadType::OVRMarkerPayloadType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRMarkerPayloadType::OVRMarkerPayloadType()   {
}
constexpr ::GlobalNamespace::OVRMarkerPayloadType  GlobalNamespace::OVRMarkerPayloadType::InvalidQRCode{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::OVRMarkerPayloadType  GlobalNamespace::OVRMarkerPayloadType::StringQRCode{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::OVRMarkerPayloadType  GlobalNamespace::OVRMarkerPayloadType::BinaryQRCode{static_cast<int32_t>(0x3)};
