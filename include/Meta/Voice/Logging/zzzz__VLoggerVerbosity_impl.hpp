#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/VLoggerVerbosity.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Logging::VLoggerVerbosity::VLoggerVerbosity(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::VLoggerVerbosity::VLoggerVerbosity()   {
}
constexpr ::Meta::Voice::Logging::VLoggerVerbosity  Meta::Voice::Logging::VLoggerVerbosity::Error{static_cast<int32_t>(0x5)};
constexpr ::Meta::Voice::Logging::VLoggerVerbosity  Meta::Voice::Logging::VLoggerVerbosity::Warning{static_cast<int32_t>(0x4)};
constexpr ::Meta::Voice::Logging::VLoggerVerbosity  Meta::Voice::Logging::VLoggerVerbosity::Info{static_cast<int32_t>(0x3)};
constexpr ::Meta::Voice::Logging::VLoggerVerbosity  Meta::Voice::Logging::VLoggerVerbosity::Debug{static_cast<int32_t>(0x2)};
constexpr ::Meta::Voice::Logging::VLoggerVerbosity  Meta::Voice::Logging::VLoggerVerbosity::Verbose{static_cast<int32_t>(0x1)};
constexpr ::Meta::Voice::Logging::VLoggerVerbosity  Meta::Voice::Logging::VLoggerVerbosity::None{static_cast<int32_t>(0x0)};
