#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceErrorSimulationType.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceErrorSimulationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType::VoiceErrorSimulationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType::VoiceErrorSimulationType()   {
}
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType  Meta::WitAi::Requests::VoiceErrorSimulationType::Server{static_cast<int32_t>(0x0)};
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType  Meta::WitAi::Requests::VoiceErrorSimulationType::Timeout{static_cast<int32_t>(0x1)};
constexpr ::Meta::WitAi::Requests::VoiceErrorSimulationType  Meta::WitAi::Requests::VoiceErrorSimulationType::Disconnect{static_cast<int32_t>(0x2)};
