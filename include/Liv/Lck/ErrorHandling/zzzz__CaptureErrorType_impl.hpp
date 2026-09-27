#pragma once
// IWYU pragma private; include "Liv/Lck/ErrorHandling/CaptureErrorType.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__CaptureErrorType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::ErrorHandling::CaptureErrorType::CaptureErrorType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::ErrorHandling::CaptureErrorType::CaptureErrorType()   {
}
constexpr ::Liv::Lck::ErrorHandling::CaptureErrorType  Liv::Lck::ErrorHandling::CaptureErrorType::EncoderError{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::ErrorHandling::CaptureErrorType  Liv::Lck::ErrorHandling::CaptureErrorType::MuxerError{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::ErrorHandling::CaptureErrorType  Liv::Lck::ErrorHandling::CaptureErrorType::StreamerError{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::ErrorHandling::CaptureErrorType  Liv::Lck::ErrorHandling::CaptureErrorType::EchoError{static_cast<int32_t>(0x3)};
