#pragma once
// IWYU pragma private; include "Liv/Lck/NativeMicrophone/LogLevel.hpp"
#include "Liv/Lck/NativeMicrophone/zzzz__LogLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::Lck::NativeMicrophone::LogLevel::LogLevel(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::Lck::NativeMicrophone::LogLevel::LogLevel()   {
}
constexpr ::Liv::Lck::NativeMicrophone::LogLevel  Liv::Lck::NativeMicrophone::LogLevel::Off{static_cast<uint32_t>(0x0u)};
constexpr ::Liv::Lck::NativeMicrophone::LogLevel  Liv::Lck::NativeMicrophone::LogLevel::Error{static_cast<uint32_t>(0x1u)};
constexpr ::Liv::Lck::NativeMicrophone::LogLevel  Liv::Lck::NativeMicrophone::LogLevel::Warn{static_cast<uint32_t>(0x2u)};
constexpr ::Liv::Lck::NativeMicrophone::LogLevel  Liv::Lck::NativeMicrophone::LogLevel::Info{static_cast<uint32_t>(0x3u)};
constexpr ::Liv::Lck::NativeMicrophone::LogLevel  Liv::Lck::NativeMicrophone::LogLevel::Debug{static_cast<uint32_t>(0x4u)};
constexpr ::Liv::Lck::NativeMicrophone::LogLevel  Liv::Lck::NativeMicrophone::LogLevel::Trace{static_cast<uint32_t>(0x5u)};
