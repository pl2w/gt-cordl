#pragma once
// IWYU pragma private; include "Fusion/LogLevel.hpp"
#include "Fusion/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LogLevel::LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::LogLevel::LogLevel()   {
}
constexpr ::Fusion::LogLevel  Fusion::LogLevel::Debug{static_cast<int32_t>(0x0)};
constexpr ::Fusion::LogLevel  Fusion::LogLevel::Info{static_cast<int32_t>(0x1)};
constexpr ::Fusion::LogLevel  Fusion::LogLevel::Warn{static_cast<int32_t>(0x2)};
constexpr ::Fusion::LogLevel  Fusion::LogLevel::Error{static_cast<int32_t>(0x3)};
constexpr ::Fusion::LogLevel  Fusion::LogLevel::None{static_cast<int32_t>(0x4)};
