#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/BacktraceResultStatus.hpp"
#include "Backtrace/Unity/Types/zzzz__BacktraceResultStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus::BacktraceResultStatus(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus::BacktraceResultStatus()   {
}
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus  Backtrace::Unity::Types::BacktraceResultStatus::LimitReached{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus  Backtrace::Unity::Types::BacktraceResultStatus::ServerError{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus  Backtrace::Unity::Types::BacktraceResultStatus::Ok{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus  Backtrace::Unity::Types::BacktraceResultStatus::Empty{static_cast<int32_t>(0x3)};
constexpr ::Backtrace::Unity::Types::BacktraceResultStatus  Backtrace::Unity::Types::BacktraceResultStatus::NetworkError{static_cast<int32_t>(0x4)};
