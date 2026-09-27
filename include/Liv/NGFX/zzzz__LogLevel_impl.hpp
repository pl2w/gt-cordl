#pragma once
// IWYU pragma private; include "Liv/NGFX/LogLevel.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::NGFX::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::NGFX::LogLevel::LogLevel()   {
}
constexpr ::Liv::NGFX::LogLevel  Liv::NGFX::LogLevel::Log{static_cast<int32_t>(0x0)};
constexpr ::Liv::NGFX::LogLevel  Liv::NGFX::LogLevel::Warning{static_cast<int32_t>(0x1)};
constexpr ::Liv::NGFX::LogLevel  Liv::NGFX::LogLevel::Error{static_cast<int32_t>(0x2)};
constexpr ::Liv::NGFX::LogLevel  Liv::NGFX::LogLevel::Abort{static_cast<int32_t>(0x3)};
