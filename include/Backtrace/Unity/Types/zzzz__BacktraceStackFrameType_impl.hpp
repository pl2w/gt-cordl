#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/BacktraceStackFrameType.hpp"
#include "Backtrace/Unity/Types/zzzz__BacktraceStackFrameType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType::BacktraceStackFrameType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType::BacktraceStackFrameType()   {
}
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType  Backtrace::Unity::Types::BacktraceStackFrameType::Unknown{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType  Backtrace::Unity::Types::BacktraceStackFrameType::Dotnet{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType  Backtrace::Unity::Types::BacktraceStackFrameType::Android{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Types::BacktraceStackFrameType  Backtrace::Unity::Types::BacktraceStackFrameType::Native{static_cast<int32_t>(0x3)};
