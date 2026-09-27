#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/MinidumpException.hpp"
#include "Backtrace/Unity/Types/zzzz__MinidumpException_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::MinidumpException::MinidumpException(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::MinidumpException::MinidumpException()   {
}
constexpr ::Backtrace::Unity::Types::MinidumpException  Backtrace::Unity::Types::MinidumpException::None{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Types::MinidumpException  Backtrace::Unity::Types::MinidumpException::Present{static_cast<int32_t>(0x1)};
