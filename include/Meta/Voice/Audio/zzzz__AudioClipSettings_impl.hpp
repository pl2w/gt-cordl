#pragma once
// IWYU pragma private; include "Meta/Voice/Audio/AudioClipSettings.hpp"
#include "Meta/Voice/Audio/zzzz__AudioClipSettings_def.hpp"
// Ctor Parameters [CppParam { name: "Channels", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "SampleRate", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReadyDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxDuration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Audio::AudioClipSettings::AudioClipSettings(int32_t  Channels, int32_t  SampleRate, float_t  ReadyDuration, float_t  MaxDuration) noexcept  {
this->Channels = Channels;
this->SampleRate = SampleRate;
this->ReadyDuration = ReadyDuration;
this->MaxDuration = MaxDuration;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Audio::AudioClipSettings::AudioClipSettings()   {
}
