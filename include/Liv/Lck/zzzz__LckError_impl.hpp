#pragma once
// IWYU pragma private; include "Liv/Lck/LckError.hpp"
#include "Liv/Lck/zzzz__LckError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::LckError::LckError(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckError::LckError()   {
}
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::ServiceNotCreated{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::ServiceDisposed{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::InvalidDescriptor{static_cast<int32_t>(0x3)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::CameraIdNotFound{static_cast<int32_t>(0x4)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::MonitorIdNotFound{static_cast<int32_t>(0x5)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::MicrophonePermissionDenied{static_cast<int32_t>(0x6)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::CaptureAlreadyStarted{static_cast<int32_t>(0x7)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::NotCurrentlyRecording{static_cast<int32_t>(0x8)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::NotPaused{static_cast<int32_t>(0x9)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::RecordingError{static_cast<int32_t>(0xa)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::PhotoCaptureError{static_cast<int32_t>(0xb)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::CantEditSettingsWhileCapturing{static_cast<int32_t>(0xc)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::NotEnoughStorageSpace{static_cast<int32_t>(0xd)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::FailedToCopyRecordingToGallery{static_cast<int32_t>(0xe)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::FailedToCopyPhotoToGallery{static_cast<int32_t>(0xf)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::UnsupportedGraphicsApi{static_cast<int32_t>(0x10)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::UnsupportedPlatform{static_cast<int32_t>(0x11)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::MicrophoneError{static_cast<int32_t>(0x12)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::StreamerNotImplemented{static_cast<int32_t>(0x13)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::StreamingError{static_cast<int32_t>(0x14)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::EncodingError{static_cast<int32_t>(0x15)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::EchoError{static_cast<int32_t>(0x16)};
constexpr ::Liv::Lck::LckError  Liv::Lck::LckError::UnknownError{static_cast<int32_t>(0x17)};
