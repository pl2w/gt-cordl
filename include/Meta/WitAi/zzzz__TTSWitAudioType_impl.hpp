#pragma once
// IWYU pragma private; include "Meta/WitAi/TTSWitAudioType.hpp"
#include "Meta/WitAi/zzzz__TTSWitAudioType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::TTSWitAudioType::TTSWitAudioType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTSWitAudioType::TTSWitAudioType()   {
}
constexpr ::Meta::WitAi::TTSWitAudioType  Meta::WitAi::TTSWitAudioType::PCM{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::TTSWitAudioType  Meta::WitAi::TTSWitAudioType::MPEG{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::TTSWitAudioType  Meta::WitAi::TTSWitAudioType::WAV{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::TTSWitAudioType  Meta::WitAi::TTSWitAudioType::OPUS{static_cast<int32_t>(0x3)};
