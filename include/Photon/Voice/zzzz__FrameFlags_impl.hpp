#pragma once
// IWYU pragma private; include "Photon/Voice/FrameFlags.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::FrameFlags::FrameFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::FrameFlags::FrameFlags()   {
}
constexpr ::Photon::Voice::FrameFlags  Photon::Voice::FrameFlags::Config{static_cast<uint8_t>(0x1u)};
constexpr ::Photon::Voice::FrameFlags  Photon::Voice::FrameFlags::KeyFrame{static_cast<uint8_t>(0x2u)};
constexpr ::Photon::Voice::FrameFlags  Photon::Voice::FrameFlags::PartialFrame{static_cast<uint8_t>(0x4u)};
constexpr ::Photon::Voice::FrameFlags  Photon::Voice::FrameFlags::EndOfStream{static_cast<uint8_t>(0x8u)};
