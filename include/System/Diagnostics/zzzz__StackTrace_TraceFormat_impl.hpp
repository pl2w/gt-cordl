#pragma once
// IWYU pragma private; include "System/Diagnostics/StackTrace_TraceFormat.hpp"
#include "System/Diagnostics/zzzz__StackTrace_TraceFormat_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::StackTrace_TraceFormat::StackTrace_TraceFormat(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StackTrace_TraceFormat::StackTrace_TraceFormat()   {
}
constexpr ::GlobalNamespace::StackTrace_TraceFormat  GlobalNamespace::StackTrace_TraceFormat::Normal{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::StackTrace_TraceFormat  GlobalNamespace::StackTrace_TraceFormat::TrailingNewLine{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::StackTrace_TraceFormat  GlobalNamespace::StackTrace_TraceFormat::NoResourceLookup{static_cast<int32_t>(0x2)};
