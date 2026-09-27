#pragma once
// IWYU pragma private; include "Meta/Voice/NLayer/MpegVersion.hpp"
#include "Meta/Voice/NLayer/zzzz__MpegVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::NLayer::MpegVersion::MpegVersion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::NLayer::MpegVersion::MpegVersion()   {
}
constexpr ::Meta::Voice::NLayer::MpegVersion  Meta::Voice::NLayer::MpegVersion::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::NLayer::MpegVersion  Meta::Voice::NLayer::MpegVersion::Version1{static_cast<int32_t>(0xa)};
constexpr ::Meta::Voice::NLayer::MpegVersion  Meta::Voice::NLayer::MpegVersion::Version2{static_cast<int32_t>(0x14)};
constexpr ::Meta::Voice::NLayer::MpegVersion  Meta::Voice::NLayer::MpegVersion::Version25{static_cast<int32_t>(0x19)};
