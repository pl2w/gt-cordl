#pragma once
// IWYU pragma private; include "Liv/Lck/Core/LckTelemetryEventType.hpp"
#include "Liv/Lck/Core/zzzz__LckTelemetryEventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::Core::LckTelemetryEventType::LckTelemetryEventType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::Core::LckTelemetryEventType::LckTelemetryEventType()   {
}
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::GameInitialized{static_cast<uint32_t>(0x0u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::RecordingStarted{static_cast<uint32_t>(0x1u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::StreamingStarted{static_cast<uint32_t>(0x2u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::ServiceCreated{static_cast<uint32_t>(0x3u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::ServiceDisposed{static_cast<uint32_t>(0x4u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::CameraEnabled{static_cast<uint32_t>(0x5u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::CameraDisabled{static_cast<uint32_t>(0x6u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::RecordingStopped{static_cast<uint32_t>(0x7u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::StreamingStopped{static_cast<uint32_t>(0x8u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::StreamingError{static_cast<uint32_t>(0x9u)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::PhotoCaptured{static_cast<uint32_t>(0xau)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::RecorderError{static_cast<uint32_t>(0xbu)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::PhotoCaptureError{static_cast<uint32_t>(0xcu)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::SdkError{static_cast<uint32_t>(0xdu)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::Performance{static_cast<uint32_t>(0xeu)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::EchoEnabled{static_cast<uint32_t>(0xfu)};
constexpr ::Liv::Lck::Core::LckTelemetryEventType  Liv::Lck::Core::LckTelemetryEventType::EchoSaved{static_cast<uint32_t>(0x10u)};
