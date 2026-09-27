#pragma once
// IWYU pragma private; include "System/Diagnostics/Process_StreamReadMode.hpp"
#include "System/Diagnostics/zzzz__Process_StreamReadMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Process_StreamReadMode::Process_StreamReadMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Process_StreamReadMode::Process_StreamReadMode()   {
}
constexpr ::GlobalNamespace::Process_StreamReadMode  GlobalNamespace::Process_StreamReadMode::undefined{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Process_StreamReadMode  GlobalNamespace::Process_StreamReadMode::syncMode{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Process_StreamReadMode  GlobalNamespace::Process_StreamReadMode::asyncMode{static_cast<int32_t>(0x2)};
