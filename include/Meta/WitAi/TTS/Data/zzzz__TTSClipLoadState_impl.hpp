#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Data/TTSClipLoadState.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipLoadState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState::TTSClipLoadState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState::TTSClipLoadState()   {
}
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState  Meta::WitAi::TTS::Data::TTSClipLoadState::Unloaded{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState  Meta::WitAi::TTS::Data::TTSClipLoadState::Preparing{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState  Meta::WitAi::TTS::Data::TTSClipLoadState::Loaded{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::TTS::Data::TTSClipLoadState  Meta::WitAi::TTS::Data::TTSClipLoadState::Error{static_cast<int32_t>(0x3)};
