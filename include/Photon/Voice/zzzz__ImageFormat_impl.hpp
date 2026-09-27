#pragma once
// IWYU pragma private; include "Photon/Voice/ImageFormat.hpp"
#include "Photon/Voice/zzzz__ImageFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::ImageFormat::ImageFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::ImageFormat::ImageFormat()   {
}
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::Undefined{static_cast<int32_t>(0x0)};
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::I420{static_cast<int32_t>(0x1)};
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::YV12{static_cast<int32_t>(0x2)};
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::Android420{static_cast<int32_t>(0x3)};
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::ABGR{static_cast<int32_t>(0x4)};
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::BGRA{static_cast<int32_t>(0x5)};
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::ARGB{static_cast<int32_t>(0x6)};
constexpr ::Photon::Voice::ImageFormat  Photon::Voice::ImageFormat::NV12{static_cast<int32_t>(0x7)};
