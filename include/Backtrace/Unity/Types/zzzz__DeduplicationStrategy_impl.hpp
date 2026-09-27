#pragma once
// IWYU pragma private; include "Backtrace/Unity/Types/DeduplicationStrategy.hpp"
#include "Backtrace/Unity/Types/zzzz__DeduplicationStrategy_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy::DeduplicationStrategy(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy::DeduplicationStrategy()   {
}
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy  Backtrace::Unity::Types::DeduplicationStrategy::None{static_cast<int32_t>(0x0)};
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy  Backtrace::Unity::Types::DeduplicationStrategy::Default{static_cast<int32_t>(0x1)};
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy  Backtrace::Unity::Types::DeduplicationStrategy::Classifier{static_cast<int32_t>(0x2)};
constexpr ::Backtrace::Unity::Types::DeduplicationStrategy  Backtrace::Unity::Types::DeduplicationStrategy::Message{static_cast<int32_t>(0x4)};
