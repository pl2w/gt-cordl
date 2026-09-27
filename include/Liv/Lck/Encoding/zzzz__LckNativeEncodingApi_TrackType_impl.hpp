#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi_TrackType.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_TrackType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckNativeEncodingApi_TrackType::LckNativeEncodingApi_TrackType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckNativeEncodingApi_TrackType::LckNativeEncodingApi_TrackType()   {
}
constexpr ::GlobalNamespace::LckNativeEncodingApi_TrackType  GlobalNamespace::LckNativeEncodingApi_TrackType::Video{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::LckNativeEncodingApi_TrackType  GlobalNamespace::LckNativeEncodingApi_TrackType::Audio{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::LckNativeEncodingApi_TrackType  GlobalNamespace::LckNativeEncodingApi_TrackType::Metadata{static_cast<uint32_t>(0x2u)};
