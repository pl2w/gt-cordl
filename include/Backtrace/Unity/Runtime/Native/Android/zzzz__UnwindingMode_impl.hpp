#pragma once
// IWYU pragma private; include "Backtrace/Unity/Runtime/Native/Android/UnwindingMode.hpp"
#include "Backtrace/Unity/Runtime/Native/Android/zzzz__UnwindingMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode::UnwindingMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode::UnwindingMode()   {
}
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  Backtrace::Unity::Runtime::Native::Android::UnwindingMode::LOCAL{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  Backtrace::Unity::Runtime::Native::Android::UnwindingMode::REMOTE{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  Backtrace::Unity::Runtime::Native::Android::UnwindingMode::REMOTE_DUMPWITHOUTCRASH{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  Backtrace::Unity::Runtime::Native::Android::UnwindingMode::LOCAL_DUMPWITHOUTCRASH{static_cast<int32_t>(0x3)};
constexpr ::Backtrace::Unity::Runtime::Native::Android::UnwindingMode  Backtrace::Unity::Runtime::Native::Android::UnwindingMode::LOCAL_CONTEXT{static_cast<int32_t>(0x4)};
