#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitAudioRequestOption.hpp"
#include "Meta/WitAi/Requests/zzzz__WitAudioRequestOption_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption::WitAudioRequestOption(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption::WitAudioRequestOption()   {
}
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption  Meta::WitAi::Requests::WitAudioRequestOption::None{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption  Meta::WitAi::Requests::WitAudioRequestOption::Speech{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption  Meta::WitAi::Requests::WitAudioRequestOption::Transcribe{static_cast<int32_t>(0x2)};
constexpr ::Meta::WitAi::Requests::WitAudioRequestOption  Meta::WitAi::Requests::WitAudioRequestOption::Dictation{static_cast<int32_t>(0x3)};
