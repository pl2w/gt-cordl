#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/RetryOrder.hpp"
#include "Backtrace/Unity/Types/zzzz__RetryOrder_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::RetryOrder::RetryOrder(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::RetryOrder::RetryOrder()   {
}
constexpr ::Backtrace::Unity::Types::RetryOrder  Backtrace::Unity::Types::RetryOrder::Stack{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Types::RetryOrder  Backtrace::Unity::Types::RetryOrder::Queue{static_cast<int32_t>(0x1)};
