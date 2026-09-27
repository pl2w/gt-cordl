#pragma once
// IWYU pragma private; include "Photon/Voice/Codec.hpp"
#include "Photon/Voice/zzzz__Codec_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::Codec::Codec(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::Codec::Codec()   {
}
constexpr ::Photon::Voice::Codec  Photon::Voice::Codec::Raw{static_cast<int32_t>(0x1)};
constexpr ::Photon::Voice::Codec  Photon::Voice::Codec::AudioOpus{static_cast<int32_t>(0xb)};
