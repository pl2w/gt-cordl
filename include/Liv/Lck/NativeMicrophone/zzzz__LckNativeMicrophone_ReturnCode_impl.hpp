#pragma once
// IWYU pragma private; include "Liv/Lck/NativeMicrophone/LckNativeMicrophone_ReturnCode.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LckNativeMicrophone_ReturnCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode::LckNativeMicrophone_ReturnCode(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode::LckNativeMicrophone_ReturnCode()   {
}
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::Ok{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::Error{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::InvalidKey{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::DefaultInputDeviceError{static_cast<uint32_t>(0x3u)};
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::BuildStreamError{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::NoAudioData{static_cast<uint32_t>(0x5u)};
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::LoggerAlreadySet{static_cast<uint32_t>(0x6u)};
constexpr ::GlobalNamespace::LckNativeMicrophone_ReturnCode  GlobalNamespace::LckNativeMicrophone_ReturnCode::CaptureNotStarted{static_cast<uint32_t>(0x7u)};
