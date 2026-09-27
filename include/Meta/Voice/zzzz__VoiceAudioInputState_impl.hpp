#pragma once
// IWYU pragma private; include "Meta/Voice/VoiceAudioInputState.hpp"
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::VoiceAudioInputState::VoiceAudioInputState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::VoiceAudioInputState::VoiceAudioInputState()   {
}
constexpr ::Meta::Voice::VoiceAudioInputState  Meta::Voice::VoiceAudioInputState::Off{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::VoiceAudioInputState  Meta::Voice::VoiceAudioInputState::Activating{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::VoiceAudioInputState  Meta::Voice::VoiceAudioInputState::On{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::VoiceAudioInputState  Meta::Voice::VoiceAudioInputState::Deactivating{static_cast<int32_t>(0x3)};
