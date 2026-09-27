#pragma once
// IWYU pragma private; include "Modio/LogLevel.hpp"
#include "Modio/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Modio::LogLevel::LogLevel(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Modio::LogLevel::LogLevel()   {
}
constexpr ::Modio::LogLevel  Modio::LogLevel::None{static_cast<uint8_t>(0x0u)};
constexpr ::Modio::LogLevel  Modio::LogLevel::Error{static_cast<uint8_t>(0x1u)};
constexpr ::Modio::LogLevel  Modio::LogLevel::Warning{static_cast<uint8_t>(0x2u)};
constexpr ::Modio::LogLevel  Modio::LogLevel::Message{static_cast<uint8_t>(0x3u)};
constexpr ::Modio::LogLevel  Modio::LogLevel::Verbose{static_cast<uint8_t>(0x4u)};
