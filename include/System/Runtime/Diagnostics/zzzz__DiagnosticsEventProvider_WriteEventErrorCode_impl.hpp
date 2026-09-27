#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DiagnosticsEventProvider_WriteEventErrorCode.hpp"
#include "System/Runtime/Diagnostics/zzzz__DiagnosticsEventProvider_WriteEventErrorCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode::DiagnosticsEventProvider_WriteEventErrorCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode::DiagnosticsEventProvider_WriteEventErrorCode()   {
}
constexpr ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode  GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode::NoError{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode  GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode::NoFreeBuffers{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode  GlobalNamespace::DiagnosticsEventProvider_WriteEventErrorCode::EventTooBig{static_cast<int32_t>(0x2)};
