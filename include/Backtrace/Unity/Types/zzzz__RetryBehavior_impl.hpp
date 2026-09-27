#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/RetryBehavior.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryBehavior_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::RetryBehavior::RetryBehavior(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::RetryBehavior::RetryBehavior()   {
}
constexpr ::Backtrace::Unity::Types::RetryBehavior  Backtrace::Unity::Types::RetryBehavior::ByInterval{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Types::RetryBehavior  Backtrace::Unity::Types::RetryBehavior::NoRetry{static_cast<int32_t>(0x1)};
