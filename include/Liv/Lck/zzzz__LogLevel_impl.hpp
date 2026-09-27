#pragma once
// IWYU pragma private; include "Liv/Lck/LogLevel.hpp"
#include "Liv/Lck/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::LogLevel::LogLevel()   {
}
constexpr ::Liv::Lck::LogLevel  Liv::Lck::LogLevel::None{static_cast<int32_t>(0x0)};
constexpr ::Liv::Lck::LogLevel  Liv::Lck::LogLevel::Error{static_cast<int32_t>(0x1)};
constexpr ::Liv::Lck::LogLevel  Liv::Lck::LogLevel::Warning{static_cast<int32_t>(0x2)};
constexpr ::Liv::Lck::LogLevel  Liv::Lck::LogLevel::Info{static_cast<int32_t>(0x3)};
