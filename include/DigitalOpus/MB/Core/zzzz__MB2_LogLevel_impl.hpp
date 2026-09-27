#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_LogLevel.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel::MB2_LogLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel::MB2_LogLevel()   {
}
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel  DigitalOpus::MB::Core::MB2_LogLevel::none{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel  DigitalOpus::MB::Core::MB2_LogLevel::error{static_cast<int32_t>(0x1)};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel  DigitalOpus::MB::Core::MB2_LogLevel::warn{static_cast<int32_t>(0x2)};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel  DigitalOpus::MB::Core::MB2_LogLevel::info{static_cast<int32_t>(0x3)};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel  DigitalOpus::MB::Core::MB2_LogLevel::debug{static_cast<int32_t>(0x4)};
constexpr ::DigitalOpus::MB::Core::MB2_LogLevel  DigitalOpus::MB::Core::MB2_LogLevel::trace{static_cast<int32_t>(0x5)};
