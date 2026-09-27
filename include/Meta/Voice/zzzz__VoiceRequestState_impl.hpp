#pragma once
// IWYU pragma private; include "Meta/Voice/VoiceRequestState.hpp"
#include "Meta/Voice/zzzz__VoiceRequestState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::VoiceRequestState::VoiceRequestState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::VoiceRequestState::VoiceRequestState()   {
}
constexpr ::Meta::Voice::VoiceRequestState  Meta::Voice::VoiceRequestState::Initialized{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::VoiceRequestState  Meta::Voice::VoiceRequestState::Transmitting{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::VoiceRequestState  Meta::Voice::VoiceRequestState::Canceled{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::VoiceRequestState  Meta::Voice::VoiceRequestState::Failed{static_cast<int32_t>(0x3)};
constexpr ::Meta::Voice::VoiceRequestState  Meta::Voice::VoiceRequestState::Successful{static_cast<int32_t>(0x4)};
