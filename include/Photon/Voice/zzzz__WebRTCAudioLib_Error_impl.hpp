#pragma once
// IWYU pragma private; include "Photon/Voice/WebRTCAudioLib_Error.hpp"
#include "Photon/Voice/zzzz__WebRTCAudioLib_Error_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WebRTCAudioLib_Error::WebRTCAudioLib_Error(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WebRTCAudioLib_Error::WebRTCAudioLib_Error()   {
}
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kNoError{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kUnspecifiedError{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kCreationFailedError{static_cast<int32_t>(0xfffffffe)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kUnsupportedComponentError{static_cast<int32_t>(0xfffffffd)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kUnsupportedFunctionError{static_cast<int32_t>(0xfffffffc)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kNullPointerError{static_cast<int32_t>(0xfffffffb)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kBadParameterError{static_cast<int32_t>(0xfffffffa)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kBadSampleRateError{static_cast<int32_t>(0xfffffff9)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kBadDataLengthError{static_cast<int32_t>(0xfffffff8)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kBadNumberChannelsError{static_cast<int32_t>(0xfffffff7)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kFileError{static_cast<int32_t>(0xfffffff6)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kStreamParameterNotSetError{static_cast<int32_t>(0xfffffff5)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kNotEnabledError{static_cast<int32_t>(0xfffffff4)};
constexpr ::GlobalNamespace::WebRTCAudioLib_Error  GlobalNamespace::WebRTCAudioLib_Error::kBadStreamParameterWarning{static_cast<int32_t>(0xfffffff3)};
