#pragma once
// IWYU pragma private; include "Oculus/VoiceSDK/Utilities/VoiceErrorRequestType.hpp"
#include "Oculus/VoiceSDK/Utilities/zzzz__VoiceErrorRequestType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType::VoiceErrorRequestType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType::VoiceErrorRequestType()   {
}
constexpr ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType  Oculus::VoiceSDK::Utilities::VoiceErrorRequestType::AudioInputAnalysisRequest{static_cast<int32_t>(0x0)};
constexpr ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType  Oculus::VoiceSDK::Utilities::VoiceErrorRequestType::TextInputAnalysisRequest{static_cast<int32_t>(0x1)};
constexpr ::Oculus::VoiceSDK::Utilities::VoiceErrorRequestType  Oculus::VoiceSDK::Utilities::VoiceErrorRequestType::TextToSpeechRequest{static_cast<int32_t>(0x2)};
