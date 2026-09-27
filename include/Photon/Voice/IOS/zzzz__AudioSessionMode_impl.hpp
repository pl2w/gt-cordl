#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionMode.hpp"
#include "Photon/Voice/IOS/zzzz__AudioSessionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::IOS::AudioSessionMode::AudioSessionMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Voice::IOS::AudioSessionMode::AudioSessionMode()   {
}
constexpr ::Photon::Voice::IOS::AudioSessionMode  Photon::Voice::IOS::AudioSessionMode::Default{static_cast<int32_t>(0x0)};
constexpr ::Photon::Voice::IOS::AudioSessionMode  Photon::Voice::IOS::AudioSessionMode::VoiceChat{static_cast<int32_t>(0x1)};
constexpr ::Photon::Voice::IOS::AudioSessionMode  Photon::Voice::IOS::AudioSessionMode::VideoRecording{static_cast<int32_t>(0x3)};
constexpr ::Photon::Voice::IOS::AudioSessionMode  Photon::Voice::IOS::AudioSessionMode::Measurement{static_cast<int32_t>(0x4)};
constexpr ::Photon::Voice::IOS::AudioSessionMode  Photon::Voice::IOS::AudioSessionMode::MoviePlayback{static_cast<int32_t>(0x5)};
constexpr ::Photon::Voice::IOS::AudioSessionMode  Photon::Voice::IOS::AudioSessionMode::VideoChat{static_cast<int32_t>(0x6)};
