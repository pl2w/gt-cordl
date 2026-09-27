#pragma once
// IWYU pragma private; include "Meta/Voice/TelemetryUtilities/RuntimeTelemetryPoint.hpp"
#include "Meta/Voice/TelemetryUtilities/zzzz__RuntimeTelemetryPoint_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::RuntimeTelemetryPoint(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::RuntimeTelemetryPoint()   {
}
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::MicOn{static_cast<int32_t>(0x0)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::ListeningStarted{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::AudioBlockSent{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::PartialResponseReceived{static_cast<int32_t>(0x3)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FullResponseReceived{static_cast<int32_t>(0x4)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FirstPartialTranscriptionReceivedByClient{static_cast<int32_t>(0x5)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FullTranscriptionReceivedByClient{static_cast<int32_t>(0x6)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FullUserTranscriptionSentToServer{static_cast<int32_t>(0x7)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FirstPartialTranscriptionReceivedFromClient{static_cast<int32_t>(0x8)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FullUserTranscriptionReceivedFromClient{static_cast<int32_t>(0x9)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FullUserTranscriptionSentFromServer{static_cast<int32_t>(0xa)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FirstPartialTextResponseSentToServer{static_cast<int32_t>(0xb)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FullTextResponseSentToServer{static_cast<int32_t>(0xc)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::PartialTTSSent{static_cast<int32_t>(0xd)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FullTTSSent{static_cast<int32_t>(0xe)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::PartialTTSAudioReceived{static_cast<int32_t>(0xf)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FinalTTSAudioReceived{static_cast<int32_t>(0x10)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FirstPartialAudioDecode{static_cast<int32_t>(0x11)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FinalAudioDecode{static_cast<int32_t>(0x12)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FirstPartialAudioSentToClient{static_cast<int32_t>(0x13)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FinalAudioSentToClient{static_cast<int32_t>(0x14)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FirstPartialAudioFromServer{static_cast<int32_t>(0x15)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FinalAudioFromServer{static_cast<int32_t>(0x16)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::PlaybackStarted{static_cast<int32_t>(0x17)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::PlaybackStopped{static_cast<int32_t>(0x18)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::TtsLoadBegin{static_cast<int32_t>(0x19)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::TtsLoadComplete{static_cast<int32_t>(0x1a)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::ListeningStopped{static_cast<int32_t>(0x1b)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FinalAudioSamplesEmpty{static_cast<int32_t>(0x1c)};
constexpr ::Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint  Meta::Voice::TelemetryUtilities::RuntimeTelemetryPoint::FinalAudioEventsEmpty{static_cast<int32_t>(0x1d)};
